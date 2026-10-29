__int64 __fastcall sub_2185150(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v9; // [rsp+8h] [rbp-50h]
  __int64 v10[2]; // [rsp+10h] [rbp-48h] BYREF
  char v11; // [rsp+20h] [rbp-38h]

  v6 = a1[16];
  if ( !v6 )
    return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
  v7 = *(_DWORD *)(v6 + 20);
  v9 = 0;
  sub_216E3E0((__int64)v10, a1 + 7, a3, a4, a5, a6);
  if ( (v11 & 1) == 0 )
  {
    HIDWORD(v9) = _byteswap_ulong(v7) >> 4;
    LODWORD(v9) = (v6 - v10[0]) / 0x28uLL;
  }
  sub_216F680(v10);
  return v9;
}
