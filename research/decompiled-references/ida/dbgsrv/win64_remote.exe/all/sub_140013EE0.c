/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140013EE0
// Address: 0x0000000140013EE0

//----- (0000000140013EE0) ----------------------------------------------------
char __fastcall sub_140013EE0(__int64 a1, void *a2, char a3, _BYTE *a4, SIZE_T nSize)
{
  BOOL v9; // eax
  DWORD LastError; // eax
  void *v11; // rdi
  SIZE_T v12; // rax
  SIZE_T v13; // rsi
  BOOL v14; // eax
  DWORD v15; // eax
  void *Buffer; // [rsp+30h] [rbp-68h] BYREF
  struct _MEMORY_BASIC_INFORMATION v18; // [rsp+38h] [rbp-60h] BYREF
  DWORD flOldProtect; // [rsp+A8h] [rbp+10h] BYREF
  SIZE_T NumberOfBytesRead; // [rsp+B8h] [rbp+20h] BYREF

  *a4 = 0;
  if ( !a2 || *(_QWORD *)(a1 + 792) == -1 )
    return 0;
  flOldProtect = -1;
  NumberOfBytesRead = 0;
  while ( 1 )
  {
    v9 = ReadProcessMemory(*(HANDLE *)(a1 + 792), a2, &Buffer, 8u, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v9 )
      goto LABEL_16;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( LastError != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", a2);
      goto LABEL_16;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a2, &v18, 0x30u) )
    {
      NumberOfBytesRead = 0;
      goto LABEL_16;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, 8u, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", a2, 8, "read");
      goto LABEL_16;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, 8u, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a2);
LABEL_16:
  if ( NumberOfBytesRead != 8 )
    return 0;
  v11 = Buffer;
  if ( !Buffer )
    return 0;
  if ( *(_QWORD *)(a1 + 792) == -1 )
  {
    v12 = -1;
  }
  else
  {
    v13 = (unsigned int)nSize;
    NumberOfBytesRead = 0;
    flOldProtect = -1;
    while ( 1 )
    {
      v14 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v11, a4, v13, &NumberOfBytesRead);
      if ( flOldProtect != -1 )
        break;
      if ( v14 )
        goto LABEL_33;
      v15 = GetLastError();
      if ( v15 == 998 )
      {
        NumberOfBytesRead = 0;
      }
      else if ( v15 != 299 )
      {
        sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v11);
        goto LABEL_33;
      }
      if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v11, &v18, 0x30u) )
      {
        NumberOfBytesRead = 0;
        goto LABEL_33;
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, v13, 0x20u, &flOldProtect) )
      {
        sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v11, v13, "read");
        goto LABEL_33;
      }
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, v13, flOldProtect, &flOldProtect) )
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v11);
LABEL_33:
    v12 = NumberOfBytesRead;
  }
  if ( v12 != nSize )
    return 0;
  if ( a3 )
    sub_14001C7B0(a4, nSize, (unsigned __int16 *)a4);
  return 1;
}
