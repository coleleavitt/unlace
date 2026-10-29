__int64 __fastcall sub_1E4C2C0(__int64 a1, _DWORD *a2)
{
  char v3; // r12
  int v4; // r13d
  __int64 v5; // rax

  if ( (*a2 & 0x4000) == 0 )
    return 1;
  v3 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 1;
  v4 = *(_DWORD *)(a1 + 28);
  v5 = sub_C95360((__int64)a2);
  if ( v5 )
    *(_DWORD *)(a1 + 28) = sub_BBD7B0(v5);
  sub_BF4AE0((__int64 *)a1, (__int64)a2);
  *(_DWORD *)(a1 + 28) = v4;
  *(_BYTE *)(a1 + 24) = v3;
  return 1;
}
