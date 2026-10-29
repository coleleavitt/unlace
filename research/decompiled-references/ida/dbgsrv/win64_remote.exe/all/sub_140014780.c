/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140014780
// Address: 0x0000000140014780

//----- (0000000140014780) ----------------------------------------------------
__int64 __fastcall sub_140014780(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // zf
  BOOL v7; // eax
  DWORD LastError; // eax
  BOOL v9; // eax
  DWORD v10; // eax
  void *v11; // rdi
  BOOL v12; // eax
  DWORD v13; // eax
  __int64 result; // rax
  DWORD flOldProtect; // [rsp+30h] [rbp-D0h] BYREF
  SIZE_T NumberOfBytesRead; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int16 Buffer; // [rsp+44h] [rbp-BCh] BYREF
  struct _MEMORY_BASIC_INFORMATION v19; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v20[272]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a1 + 792) == -1;
  v17 = 0;
  if ( v4 )
    return -1;
  NumberOfBytesRead = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    v7 = ReadProcessMemory(*(HANDLE *)(a1 + 792), (LPCVOID)a2, &Buffer, 4u, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v7 )
      goto LABEL_15;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( LastError != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", (const void *)a2);
      goto LABEL_15;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), (LPCVOID)a2, &v19, 0x30u) )
    {
      NumberOfBytesRead = 0;
      goto LABEL_15;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), (LPVOID)a2, 4u, 0x20u, &flOldProtect) )
    {
      sub_140043190(
        a1,
        (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)",
        (const void *)a2,
        4,
        "read");
      goto LABEL_15;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), (LPVOID)a2, 4u, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", (const void *)a2);
LABEL_15:
  if ( NumberOfBytesRead != 4 )
    return -1;
  if ( Buffer == 23117 )
  {
    if ( *(_QWORD *)(a1 + 792) == -1 )
      return -1;
    NumberOfBytesRead = 0;
    flOldProtect = -1;
    while ( 1 )
    {
      v9 = ReadProcessMemory(*(HANDLE *)(a1 + 792), (LPCVOID)(a2 + 60), &v17, 4u, &NumberOfBytesRead);
      if ( flOldProtect != -1 )
        break;
      if ( v9 )
        goto LABEL_31;
      v10 = GetLastError();
      if ( v10 == 998 )
      {
        NumberOfBytesRead = 0;
      }
      else if ( v10 != 299 )
      {
        sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", (const void *)(a2 + 60));
        goto LABEL_31;
      }
      if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), (LPCVOID)(a2 + 60), &v19, 0x30u) )
      {
        NumberOfBytesRead = 0;
        goto LABEL_31;
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), (LPVOID)(a2 + 60), 4u, 0x20u, &flOldProtect) )
      {
        sub_140043190(
          a1,
          (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)",
          (const void *)(a2 + 60),
          4,
          "read");
        goto LABEL_31;
      }
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), (LPVOID)(a2 + 60), 4u, flOldProtect, &flOldProtect) )
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", (const void *)(a2 + 60));
LABEL_31:
    if ( NumberOfBytesRead != 4 )
      return -1;
  }
  v11 = (void *)(a2 + v17);
  if ( *(_QWORD *)(a1 + 792) == -1 )
    return -1;
  NumberOfBytesRead = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    v12 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v11, v20, 0x108u, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v12 )
      goto LABEL_46;
    v13 = GetLastError();
    if ( v13 == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( v13 != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v11);
      goto LABEL_46;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v11, &v19, 0x30u) )
    {
      NumberOfBytesRead = 0;
      goto LABEL_46;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, 0x108u, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v11, 264, "read");
      goto LABEL_46;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, 0x108u, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v11);
LABEL_46:
  if ( NumberOfBytesRead != 264 )
    return -1;
  if ( !(unsigned __int8)sub_1400183D0((__int64)a3, (__int64)v20, 1, 1) )
    return -1;
  result = v17;
  if ( *a3 != 17744 )
    return -1;
  return result;
}
