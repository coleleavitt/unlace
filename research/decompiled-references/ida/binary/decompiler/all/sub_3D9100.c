__int64 __fastcall sub_3D9100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  __m128i v13; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a3 == -1 )
    goto LABEL_7;
  v13 = 0;
  v12 = 0;
  if ( netnode_qsupstr() < 0 || v13.m128i_i64[0] <= 1uLL )
    goto LABEL_7;
  if ( a3 == netnode_altval() - 1 )
    goto LABEL_13;
  v4 = netnode_altval();
  v5 = netnode_altval();
  if ( !v5 )
  {
LABEL_15:
    if ( v4 )
    {
      if ( a3 != netnode_altval() - 1 )
        goto LABEL_7;
      v12 = v5;
      netnode_supset();
    }
    v9 = netnode_altval();
    v10 = v9 - 1;
    v11 = v9;
    netnode_supset();
    v12 = v11;
    netnode_supset();
    if ( v10 != -1 )
    {
      v12 = a3 + 1;
      netnode_supset();
    }
    v12 = 0;
    netnode_supset();
LABEL_13:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  if ( a3 == netnode_altval() - 1 )
  {
    v12 = v4;
    netnode_supset();
    goto LABEL_15;
  }
LABEL_7:
  sub_3D8380((__int64)&v12);
  v6 = v12;
  v7 = _mm_loadu_si128(&v13);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)a1 = v6;
  *(__m128i *)(a1 + 8) = v7;
  return a1;
}
