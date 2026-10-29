__int64 __fastcall sub_4100D0(__int64 a1, const char *a2, _QWORD *a3)
{
  _QWORD *v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // r14
  __int64 v10; // r12
  const char *v11; // rdx
  _QWORD *v12; // r14
  _QWORD *v13; // r12
  const char *v14; // rdx
  unsigned int v15; // r14d
  _QWORD *v16; // rbp
  __int64 v17; // r12
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  _QWORD *v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  sub_40FEC0((__int64)&v23);
  v4 = v23;
  v5 = v24;
  if ( v24 != a3[1] )
  {
LABEL_5:
    sub_6C720((__int64)"Test %s failed!\nExpected:", a2);
    v9 = (_QWORD *)*a3;
    v10 = *a3 + 32LL * a3[1];
    if ( *a3 != v10 )
    {
      do
      {
        v11 = s1;
        if ( v9[2] )
          v11 = (const char *)v9[1];
        sub_6C720((__int64)"=> (%llX, \"%s\")\n", *v9, v11);
        v9 += 4;
      }
      while ( (_QWORD *)v10 != v9 );
    }
    sub_6C720((__int64)"Got:\n");
    v12 = v4;
    v13 = &v4[4 * v5];
    if ( v4 != v13 )
    {
      do
      {
        v14 = s1;
        if ( v12[2] )
          v14 = (const char *)v12[1];
        sub_6C720((__int64)"=> (%llX, \"%s\")\n", *v12, v14);
        v12 += 4;
      }
      while ( v13 != v12 );
    }
    sub_6C720((__int64)"this->dump()\n");
    sub_40BFE0();
    v15 = 0;
    if ( !v4 )
      return v15;
    if ( v5 )
    {
LABEL_15:
      v16 = v4;
      v17 = 0;
      do
      {
        if ( v16[1] )
        {
          v16[2] = 0;
          qfree();
        }
        ++v17;
        v16 += 4;
      }
      while ( v5 != v17 );
    }
LABEL_19:
    qfree();
    return v15;
  }
  if ( v24 )
  {
    v6 = (_QWORD *)*a3;
    v7 = v23;
    v8 = 0;
    while ( 1 )
    {
      if ( *v7 != *v6 )
        goto LABEL_5;
      v19 = v7[2];
      if ( v6[2] )
        break;
      v20 = s1;
      if ( v19 )
        goto LABEL_23;
LABEL_25:
      ++v8;
      v7 += 4;
      v6 += 4;
      if ( v5 == v8 )
      {
        v15 = 1;
        if ( v4 )
          goto LABEL_15;
        return v15;
      }
    }
    v20 = (const char *)v6[1];
    v21 = s1;
    if ( v19 )
LABEL_23:
      v21 = (const char *)v7[1];
    if ( strcmp(v21, v20) )
      goto LABEL_5;
    goto LABEL_25;
  }
  v15 = 1;
  if ( v23 )
    goto LABEL_19;
  return v15;
}
