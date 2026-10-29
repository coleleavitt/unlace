unsigned __int64 __fastcall sub_1576B0(_QWORD *a1)
{
  __int64 i; // rax
  __int64 v2; // r12
  __m128i *v3; // r15
  __m128i *v4; // rbp
  __int64 v5; // r12
  const char *v6; // rcx
  char *v7; // rsi
  __m128i *v8; // r13
  const char *v9; // rdi
  int v10; // eax
  __m128i *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v15; // rax
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-C8h] BYREF
  char *s2; // [rsp+10h] [rbp-B8h]
  __int64 *v24; // [rsp+18h] [rbp-B0h]
  _QWORD *v25; // [rsp+20h] [rbp-A8h]
  __m128i *v26; // [rsp+28h] [rbp-A0h]
  int v27; // [rsp+3Ch] [rbp-8Ch]
  char *v28; // [rsp+40h] [rbp-88h] BYREF
  __int128 v29; // [rsp+48h] [rbp-80h]
  __int64 v30; // [rsp+60h] [rbp-68h] BYREF
  __m128i v31; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-50h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v25 = a1;
  v33 = __readfsqword(0x28u);
  netnode_check();
  v29 = 0;
  v28 = nullptr;
  for ( i = netnode_qhashfirst(); i >= 0; i = netnode_qhashnext() )
  {
    v27 = netnode_hashval_long();
    v30 = 0;
    v31 = 0;
    if ( !(unsigned __int8)netnode_exist() )
      goto LABEL_2;
    v24 = &v30;
    if ( netnode_qgetblob() <= 0 )
      goto LABEL_2;
    if ( netnode_supval() != 8 )
      v32 = 0;
    v3 = (__m128i *)v25[2];
    v4 = (__m128i *)(v25 + 1);
    v26 = (__m128i *)(v25 + 1);
    if ( !v3 )
    {
      v4 = v26;
LABEL_39:
      sub_1574B0(v25, v4, (__int64)&v28, (__int64)v24);
LABEL_2:
      v2 = v30;
LABEL_3:
      if ( v2 )
      {
        v31.m128i_i64[0] = 0;
        qfree();
      }
      continue;
    }
    v5 = v29;
    v6 = s1;
    s2 = v28;
    if ( (_QWORD)v29 )
      v6 = v28;
    v22.m128i_i64[0] = (__int64)v6;
    while ( 1 )
    {
      v12 = v3[2].m128i_i64[1];
      if ( !v5 )
        break;
      if ( v12 )
        goto LABEL_24;
      v7 = s2;
      v8 = v3;
      v9 = s1;
LABEL_17:
      v10 = strcmp(v9, v7);
      v11 = (__m128i *)v3[1].m128i_i64[0];
      v3 = (__m128i *)v3[1].m128i_i64[1];
      if ( v10 >= 0 )
      {
        v4 = v8;
        v3 = v11;
      }
      if ( !v3 )
        goto LABEL_29;
    }
    if ( v12 )
    {
LABEL_24:
      v9 = (const char *)v3[2].m128i_i64[0];
      v7 = (char *)v22.m128i_i64[0];
      v8 = v3;
      goto LABEL_17;
    }
    while ( 1 )
    {
      v13 = v3[1].m128i_i64[0];
      if ( !v13 )
        break;
      v4 = v3;
      v3 = (__m128i *)v3[1].m128i_i64[0];
      if ( *(_QWORD *)(v13 + 40) )
        goto LABEL_24;
    }
    v4 = v3;
LABEL_29:
    if ( v4 == v26 )
      goto LABEL_39;
    if ( !v4[2].m128i_i64[1] )
    {
      v16 = s1;
      if ( v5 )
        goto LABEL_34;
      goto LABEL_35;
    }
    v15 = (char *)s1;
    if ( v5 )
      v15 = s2;
    v16 = (const char *)v4[2].m128i_i64[0];
    s2 = v15;
LABEL_34:
    if ( strcmp(s2, v16) < 0 )
      goto LABEL_39;
LABEL_35:
    v17 = v32;
    v2 = v30;
    if ( v4[5].m128i_i64[0] >= v32 )
      goto LABEL_3;
    v18 = v4[3].m128i_i64[1];
    v19 = _mm_loadu_si128(&v31);
    v30 = 0;
    v31 = 0;
    if ( v18 )
    {
      v4[4].m128i_i64[0] = 0;
      v22 = v19;
      qfree();
      v20 = _mm_load_si128(&v22);
      v21 = v32;
      v4[3].m128i_i64[1] = v2;
      v4[5].m128i_i64[0] = v21;
      v4[4] = v20;
      goto LABEL_2;
    }
    v4[3].m128i_i64[1] = v2;
    v4[5].m128i_i64[0] = v17;
    v4[4] = v19;
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v33 - __readfsqword(0x28u);
}

