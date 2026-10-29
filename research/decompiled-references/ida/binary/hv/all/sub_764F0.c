__int64 __fastcall sub_764F0(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 v11; // r13
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // r15
  __int64 v20; // r12

  v10 = *(_QWORD *)(a2 + 40);
  if ( !v10 || (v11 = *(_QWORD *)(a2 + 64), !(unsigned __int8)sub_955B0(*(_QWORD *)(a2 + 40))) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v11 || !(unsigned __int8)sub_955B0(v11) )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_75E50(&qword_165AA0, a1 + 8, a3, a4, a5, a6, v12, v13, a9, a10) )
    return 0;
  v15 = sub_6CAE0(0);
  a1[4] = v15;
  if ( !(unsigned __int8)sub_6CB60(v15) )
  {
    a1[8] = "irs";
    return 0;
  }
  v16 = qword_165AB0;
  sub_98400(qword_165AB0);
  v19 = qword_165AD0;
  if ( qword_165AD0 )
  {
    sub_98450(v16);
    a1[10] = v19;
  }
  else
  {
    v20 = sub_75FA0((__int64 **)&qword_165AA0, 0, v10, v11, a3, a4, a5, a6, v17, v18, a9, a10);
    qword_165AD0 = v20;
    sub_98450(v16);
    a1[10] = v20;
    if ( !v20 )
      goto LABEL_15;
  }
  result = sub_76400((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}

