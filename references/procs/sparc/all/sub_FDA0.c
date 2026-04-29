__int64 __fastcall sub_FDA0(__int64 a1, __int64 a2, __int64 a3)
{
  int dword; // eax

  dword = get_dword(a2);
  put_dword(a2, dword & 0xFFFFE000 | (unsigned __int64)((*(_DWORD *)(a3 + 24) + *(_DWORD *)(a3 + 32)) & 0x3FF));
  return 1;
}
