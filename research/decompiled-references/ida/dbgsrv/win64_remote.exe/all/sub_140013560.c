/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140013560
// Address: 0x0000000140013560

//----- (0000000140013560) ----------------------------------------------------
char __fastcall sub_140013560(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbp
  _BOOL8 v6; // rax
  void *v10; // rdi
  SIZE_T v11; // rax
  BOOL v12; // eax
  DWORD LastError; // eax
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+30h] [rbp-68h] BYREF
  DWORD flOldProtect; // [rsp+A0h] [rbp+8h] BYREF
  SIZE_T NumberOfBytesRead; // [rsp+A8h] [rbp+10h] BYREF

  *a3 = 0;
  v5 = *(unsigned __int16 *)(a2 + 26);
  v6 = *(_WORD *)(a2 + 24) != 0;
  if ( v5 >= a4 - (v6 + 1) )
    v5 = a4 - (v6 + 1);
  v10 = (void *)(*(_QWORD *)(a1 + 24) & *(_QWORD *)(a2 + 16));
  if ( *(_QWORD *)(a1 + 792) == -1 )
  {
    v11 = -1;
  }
  else
  {
    NumberOfBytesRead = 0;
    flOldProtect = -1;
    while ( 1 )
    {
      v12 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v10, a3, (unsigned int)v5, &NumberOfBytesRead);
      if ( flOldProtect != -1 )
        break;
      if ( v12 )
        goto LABEL_18;
      LastError = GetLastError();
      if ( LastError == 998 )
      {
        NumberOfBytesRead = 0;
      }
      else if ( LastError != 299 )
      {
        sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v10);
        goto LABEL_18;
      }
      if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v10, &Buffer, 0x30u) )
      {
        NumberOfBytesRead = 0;
        goto LABEL_18;
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v10, (unsigned int)v5, 0x20u, &flOldProtect) )
      {
        sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v10, v5, "read");
        goto LABEL_18;
      }
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v10, (unsigned int)v5, flOldProtect, &flOldProtect) )
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v10);
LABEL_18:
    v11 = NumberOfBytesRead;
  }
  if ( v11 != v5 )
    return 0;
  a3[v11] = 0;
  if ( *(_WORD *)(a2 + 24) )
  {
    *(_WORD *)&a3[v11] = 0;
    sub_14001C7B0(a3, a4, (unsigned __int16 *)a3);
  }
  return 1;
}
