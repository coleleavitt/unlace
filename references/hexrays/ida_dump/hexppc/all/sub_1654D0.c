__int64 __fastcall sub_1654D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  char v4; // r14
  int v5; // r13d
  __m128 v7; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a2 + 24);
  if ( a2 == v2 )
    return 1;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( *(_QWORD *)(v2 + 24) != v3 )
    {
      v2 = *(_QWORD *)(v2 + 8);
      if ( a2 == v2 )
        goto LABEL_9;
    }
    sub_123FE0((__int64)v8, a1, v2, 0x100u);
    v5 |= sub_60E40(v8) ^ 1;
    v7 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    v4 |= sub_313CF0(&v9, &v7, 0);
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
    qfree(v8[0]);
    v2 = *(_QWORD *)(v2 + 8);
  }
  while ( a2 != v2 );
LABEL_9:
  if ( !(_BYTE)v5 && !v4 )
    return 1;
  while ( *(_QWORD *)(v2 + 24) != v3 )
  {
LABEL_13:
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return 1;
  }
  sub_123FE0((__int64)v8, a1, v2, 0x100u);
  if ( !(_BYTE)v5 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_60E40(v8) )
  {
    if ( !v4 )
    {
LABEL_17:
      if ( v9 )
      {
        v10 = 0;
        qfree(v9);
      }
      qfree(v8[0]);
      goto LABEL_13;
    }
LABEL_16:
    v7 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    if ( (unsigned __int8)sub_313CF0(&v9, &v7, 0) )
      goto LABEL_23;
    goto LABEL_17;
  }
LABEL_23:
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
  }
  qfree(v8[0]);
  return 0;
}
