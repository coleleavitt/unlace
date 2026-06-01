/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400142F0
// Address: 0x00000001400142F0

//----- (00000001400142F0) ----------------------------------------------------
bool __fastcall sub_1400142F0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  void *v8; // rdi
  BOOL v9; // eax
  DWORD LastError; // eax
  void *v11; // rdi
  BOOL v12; // eax
  DWORD v13; // eax
  DWORD flOldProtect; // [rsp+30h] [rbp-1B8h] BYREF
  SIZE_T NumberOfBytesRead; // [rsp+38h] [rbp-1B0h] BYREF
  struct _MEMORY_BASIC_INFORMATION v17; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE Buffer[12]; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v19; // [rsp+7Ch] [rbp-16Ch]
  _DWORD v20[30]; // [rsp+A0h] [rbp-148h] BYREF
  unsigned int v21; // [rsp+118h] [rbp-D0h]

  if ( sub_140014780(a1, a2, v20) == -1 )
    return 0;
  if ( !v21 )
    return 0;
  v8 = (void *)(a2 + v21);
  if ( *(_QWORD *)(a1 + 792) == -1 )
    return 0;
  flOldProtect = -1;
  NumberOfBytesRead = 0;
  while ( 1 )
  {
    v9 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v8, Buffer, 0x28u, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v9 )
      goto LABEL_17;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( LastError != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v8);
      goto LABEL_17;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v8, &v17, 0x30u) )
    {
      NumberOfBytesRead = 0;
      goto LABEL_17;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v8, 0x28u, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v8, 40, "read");
      goto LABEL_17;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v8, 0x28u, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v8);
LABEL_17:
  if ( NumberOfBytesRead != 40 )
    return 0;
  v11 = (void *)(a2 + v19);
  *a3 = 0;
  if ( *(_QWORD *)(a1 + 792) == -1 )
    return 0;
  NumberOfBytesRead = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    v12 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v11, a3, a4, &NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v12 )
      return *a3 != 0;
    v13 = GetLastError();
    if ( v13 == 998 )
    {
      NumberOfBytesRead = 0;
    }
    else if ( v13 != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v11);
      return *a3 != 0;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v11, &v17, 0x30u) )
      return *a3 != 0;
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, a4, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v11, a4, "read");
      return *a3 != 0;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, a4, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v11);
  return *a3 != 0;
}
