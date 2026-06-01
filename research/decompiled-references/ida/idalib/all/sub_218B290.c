__int64 __fastcall sub_218B290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v9; // [rsp+8h] [rbp-40h]
  __int64 v10[2]; // [rsp+10h] [rbp-38h] BYREF
  char v11; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
    return 0;
  v7 = (_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(v6 + 20) > 0xFu )
  {
    v9 = 0;
    sub_216E130((__int64)v10, v7, a3, a4, a5, a6);
    if ( (v11 & 1) == 0 )
    {
      HIDWORD(v9) = 1;
      LODWORD(v9) = (v6 - v10[0]) / 0x28uLL;
    }
  }
  else
  {
    v9 = 0;
    sub_216E130((__int64)v10, v7, a3, a4, a5, a6);
    if ( (v11 & 1) == 0 )
      LODWORD(v9) = (v6 - v10[0]) / 0x28uLL;
  }
  sub_216EEA0(v10);
  return v9;
}
