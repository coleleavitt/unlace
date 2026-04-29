__int64 __fastcall sub_168F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  char v8; // r14
  int v9; // r13d
  __m128 v11; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a2 + 24);
  if ( a2 == v6 )
    return 1;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( *(_QWORD *)(v6 + 24) != v7 )
    {
      v6 = *(_QWORD *)(v6 + 8);
      if ( a2 == v6 )
        goto LABEL_9;
    }
    sub_127A20((__int64)v12, a1, v6, 256, a5, a6);
    v9 |= sub_64880(v12) ^ 1;
    v11 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    v8 |= sub_317E70(&v13, &v11, 0);
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
    }
    qfree(v12[0]);
    v6 = *(_QWORD *)(v6 + 8);
  }
  while ( a2 != v6 );
LABEL_9:
  if ( !(_BYTE)v9 && !v8 )
    return 1;
  while ( *(_QWORD *)(v6 + 24) != v7 )
  {
LABEL_13:
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      return 1;
  }
  sub_127A20((__int64)v12, a1, v6, 256, a5, a6);
  if ( !(_BYTE)v9 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_64880(v12) )
  {
    if ( !v8 )
    {
LABEL_17:
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
      }
      qfree(v12[0]);
      goto LABEL_13;
    }
LABEL_16:
    v11 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    if ( (unsigned __int8)sub_317E70(&v13, &v11, 0) )
      goto LABEL_23;
    goto LABEL_17;
  }
LABEL_23:
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  return 0;
}
