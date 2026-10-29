/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000D150
// Address: 0x000000014000D150

//----- (000000014000D150) ----------------------------------------------------
SIZE_T __fastcall sub_14000D150(__int64 a1, void *a2, void *a3, unsigned int a4, unsigned __int8 a5, char a6)
{
  int v11; // r14d
  SIZE_T v12; // rbp
  void *v13; // rcx
  BOOL v14; // eax
  bool v15; // si
  DWORD LastError; // eax
  const char *v17; // r8
  const char *v18; // rax
  SIZE_T NumberOfBytesWritten; // [rsp+30h] [rbp-68h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+38h] [rbp-60h] BYREF
  DWORD flOldProtect; // [rsp+A0h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 792) == -1 )
    return -1;
  if ( a6 )
    sub_14001BC80(a1, 0);
  v11 = a5;
  NumberOfBytesWritten = 0;
  flOldProtect = -1;
  v12 = a4;
  while ( 1 )
  {
    v13 = *(void **)(a1 + 792);
    v14 = (_BYTE)v11
        ? WriteProcessMemory(v13, a2, a3, v12, &NumberOfBytesWritten)
        : ReadProcessMemory(v13, a2, a3, v12, &NumberOfBytesWritten);
    v15 = v14;
    if ( flOldProtect != -1 )
      break;
    if ( v14 )
      goto LABEL_25;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesWritten = 0;
    }
    else if ( LastError != 299 )
    {
      v17 = "Read";
      if ( (_BYTE)v11 )
        v17 = "Write";
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", v17, a2);
      goto LABEL_25;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a2, &Buffer, 0x30u) )
    {
      NumberOfBytesWritten = 0;
      goto LABEL_25;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v12, 32 * (v11 + 1), &flOldProtect) )
    {
      v18 = "read";
      if ( (_BYTE)v11 )
        v18 = "write";
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", a2, v12, v18);
      goto LABEL_25;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v12, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a2);
LABEL_25:
  if ( (_BYTE)v11 && v15 )
    FlushInstructionCache(*(HANDLE *)(a1 + 792), a2, v12);
  if ( a6 )
    sub_14001AB20(a1, 0);
  return NumberOfBytesWritten;
}
