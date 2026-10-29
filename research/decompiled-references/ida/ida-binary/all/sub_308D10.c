unsigned __int64 __fastcall sub_308D10(_QWORD *a1)
{
  __int64 i; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r12
  const char *v6; // rdx
  const char *v7; // rsi
  __m128i *v8; // r15
  __m128i *v9; // rbp
  __int64 v10; // r12
  const char *v11; // rcx
  char *v12; // rsi
  __m128i *v13; // r13
  const char *v14; // rdi
  int v15; // eax
  __m128i *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-C8h] BYREF
  char *s2; // [rsp+10h] [rbp-B8h]
  __int64 *v28; // [rsp+18h] [rbp-B0h]
  _QWORD *v29; // [rsp+20h] [rbp-A8h]
  __m128i *v30; // [rsp+28h] [rbp-A0h]
  __int64 v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+38h] [rbp-90h] BYREF
  char *v33; // [rsp+40h] [rbp-88h] BYREF
  __int128 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-68h] BYREF
  __m128i v36; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v29 = a1;
  v38 = __readfsqword(0x28u);
  netnode_check(&v31, "$ desktops", 0, 0);
  v34 = 0;
  v33 = nullptr;
  for ( i = netnode_qhashfirst(v31, &v33, 72); ; i = netnode_qhashnext(v31, &v33, v6, 72) )
  {
    v7 = v33;
    if ( i < 0 )
      break;
    v32 = netnode_hashval_long(v31, v33, 72, v2, v3, v4, v26.m128i_i64[0], v26.m128i_i64[1], s2);
    v35 = 0;
    v36 = 0;
    if ( !(unsigned __int8)netnode_exist(&v32) )
      goto LABEL_2;
    v7 = (const char *)&v35;
    v28 = &v35;
    if ( netnode_qgetblob(v32, &v35, 1, 0, 1107) <= 0 )
      goto LABEL_2;
    if ( netnode_supval(v32, -1, &v37, 8, 83) != 8 )
      v37 = 0;
    v8 = (__m128i *)v29[2];
    v9 = (__m128i *)(v29 + 1);
    v30 = (__m128i *)(v29 + 1);
    if ( !v8 )
    {
      v9 = v30;
LABEL_41:
      v7 = (const char *)v9;
      sub_308B10(v29, v9->m128i_i8, (__int64)&v33, (__int64)v28);
LABEL_2:
      v5 = v35;
LABEL_3:
      if ( v5 )
      {
        v36.m128i_i64[0] = 0;
        qfree(v5, v7);
      }
      goto LABEL_5;
    }
    v10 = v34;
    v11 = &s1;
    s2 = v33;
    if ( (_QWORD)v34 )
      v11 = v33;
    v26.m128i_i64[0] = (__int64)v11;
    while ( 1 )
    {
      v17 = v8[2].m128i_i64[1];
      if ( !v10 )
        break;
      if ( v17 )
        goto LABEL_26;
      v12 = s2;
      v13 = v8;
      v14 = &s1;
LABEL_19:
      v15 = strcmp(v14, v12);
      v16 = (__m128i *)v8[1].m128i_i64[0];
      v8 = (__m128i *)v8[1].m128i_i64[1];
      if ( v15 >= 0 )
      {
        v9 = v13;
        v8 = v16;
      }
      if ( !v8 )
        goto LABEL_31;
    }
    if ( v17 )
    {
LABEL_26:
      v14 = (const char *)v8[2].m128i_i64[0];
      v12 = (char *)v26.m128i_i64[0];
      v13 = v8;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v18 = v8[1].m128i_i64[0];
      if ( !v18 )
        break;
      v9 = v8;
      v8 = (__m128i *)v8[1].m128i_i64[0];
      if ( *(_QWORD *)(v18 + 40) )
        goto LABEL_26;
    }
    v9 = v8;
LABEL_31:
    if ( v9 == v30 )
      goto LABEL_41;
    if ( !v9[2].m128i_i64[1] )
    {
      v7 = &s1;
      if ( v10 )
        goto LABEL_36;
      goto LABEL_37;
    }
    v20 = (char *)&s1;
    if ( v10 )
      v20 = s2;
    v7 = (const char *)v9[2].m128i_i64[0];
    s2 = v20;
LABEL_36:
    if ( strcmp(s2, v7) < 0 )
      goto LABEL_41;
LABEL_37:
    v21 = v37;
    v5 = v35;
    if ( v9[5].m128i_i64[0] >= v37 )
      goto LABEL_3;
    v22 = v9[3].m128i_i64[1];
    v23 = _mm_loadu_si128(&v36);
    v35 = 0;
    v36 = 0;
    if ( v22 )
    {
      v9[4].m128i_i64[0] = 0;
      v26 = v23;
      qfree(v22, v7);
      v24 = _mm_load_si128(&v26);
      v25 = v37;
      v9[3].m128i_i64[1] = v5;
      v9[5].m128i_i64[0] = v25;
      v9[4] = v24;
      goto LABEL_2;
    }
    v9[3].m128i_i64[1] = v5;
    v9[5].m128i_i64[0] = v21;
    v9[4] = v23;
LABEL_5:
    v6 = &s1;
    if ( (_QWORD)v34 )
      v6 = v33;
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v33);
  }
  return v38 - __readfsqword(0x28u);
}
