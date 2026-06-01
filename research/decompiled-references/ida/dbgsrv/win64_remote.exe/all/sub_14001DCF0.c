/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DCF0
// Address: 0x000000014001DCF0

//----- (000000014001DCF0) ----------------------------------------------------
char __fastcall sub_14001DCF0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  DWORD v3; // edi
  __int64 v4; // rsi
  const char *v7; // r8
  DWORD v8; // r8d
  char result; // al
  DWORD flOldProtect; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a3;
  if ( (*(_DWORD *)(a2 + 68) != 0) == a3 )
    return 0;
  v7 = "false";
  if ( (_BYTE)v4 )
    v7 = "true";
  sub_140043130(
    a1,
    (struct __crt_locale_pointers *)"dbg_enable_page_bpt(%s): page_ea=%a, old_prot=0x%x, new_prot=0x%x\n",
    v7,
    *(_QWORD *)(a2 + 48),
    *(_DWORD *)(a2 + 68),
    *(_DWORD *)(a2 + 72));
  if ( VirtualProtectEx(
         *(HANDLE *)(a1 + 792),
         *(LPVOID *)(a2 + 48),
         *(int *)(a2 + 64),
         *(_DWORD *)(a2 + 4 * v4 + 68),
         &flOldProtect) )
  {
    v8 = flOldProtect;
    goto LABEL_8;
  }
  sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx");
  if ( (_BYTE)v4 )
    return 0;
  v8 = 0;
  flOldProtect = 0;
LABEL_8:
  sub_140043130(a1, (struct __crt_locale_pointers *)"    success! old=0x%x\n", v8);
  result = 1;
  if ( (_BYTE)v4 )
    v3 = flOldProtect;
  *(_DWORD *)(a2 + 68) = v3;
  return result;
}
