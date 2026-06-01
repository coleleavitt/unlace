__int64 __fastcall sub_40D570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // r14
  __int64 v10; // [rsp+0h] [rbp-68h]
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __m128i v12; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a3 == -1 )
    goto LABEL_6;
  v12 = 0;
  v11 = 0;
  if ( netnode_qsupstr() < 0 || v12.m128i_i64[0] <= 1uLL )
    goto LABEL_6;
  v10 = netnode_altval();
  v4 = netnode_altval();
  v5 = netnode_altval();
  if ( v5 )
  {
    if ( a3 != netnode_altval() - 1 )
    {
LABEL_6:
      sub_3D8380((__int64)&v11);
      v6 = v11;
      v7 = _mm_loadu_si128(&v12);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v6;
      *(__m128i *)(a1 + 8) = v7;
      return a1;
    }
    v11 = v4;
    netnode_supset();
  }
  if ( v4 )
  {
    if ( a3 != netnode_altval() - 1 )
      goto LABEL_6;
    v11 = v5;
    netnode_supset();
  }
  if ( a3 == netnode_altval() - 1 )
  {
    v11 = v10;
    netnode_supset();
  }
  netnode_supdel();
  netnode_supdel();
  netnode_supdel();
  v9 = netnode_altval();
  netnode_supset();
  v11 = v9 + 1;
  netnode_supset();
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
