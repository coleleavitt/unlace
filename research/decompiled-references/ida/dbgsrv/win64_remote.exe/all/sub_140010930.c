/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010930
// Address: 0x0000000140010930

//----- (0000000140010930) ----------------------------------------------------
SIZE_T __fastcall sub_140010930(__int64 a1, void *a2, void *a3, unsigned int a4)
{
  BOOL v9; // eax
  DWORD LastError; // eax
  SIZE_T NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+38h] [rbp-50h] BYREF
  DWORD flOldProtect; // [rsp+90h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( *(_QWORD *)(a1 + 792) == -1 )
    return -1;
  sub_14001BC80(a1, 0);
  flOldProtect = -1;
  NumberOfBytesRead = 0;
  while ( 1 )
  {
    v9 = ReadProcessMemory(*(HANDLE *)(a1 + 792), a2, a3, a4, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v9 )
      goto LABEL_19;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( LastError != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", a2);
      goto LABEL_19;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a2, &Buffer, 0x30u) )
    {
      NumberOfBytesRead = 0;
      goto LABEL_19;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, a4, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", a2, a4, "read");
      goto LABEL_19;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, a4, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a2);
LABEL_19:
  sub_14001AB20(a1, 0);
  return NumberOfBytesRead;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
