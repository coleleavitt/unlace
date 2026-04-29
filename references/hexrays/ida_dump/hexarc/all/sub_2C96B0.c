__int64 __fastcall sub_2C96B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r15
  const char *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // [rsp+8h] [rbp-E8h] BYREF
  __m128i v15; // [rsp+18h] [rbp-D8h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+30h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-88h] BYREF
  __int128 v21; // [rsp+70h] [rbp-80h]
  _QWORD v22[2]; // [rsp+88h] [rbp-68h] BYREF
  char v23; // [rsp+98h] [rbp-58h]
  __int128 v24; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v25; // [rsp+B0h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v23 = 108;
  v22[0] = &off_4AD828;
  v16 = 0;
  v24 = 0;
  v17 = 0;
  v22[1] = a2;
  v4 = sub_2AEE30(a1, a2, 0);
  if ( netnode_qgetblob(v4, &v16, 1, 0, 108) <= 0 )
    goto LABEL_2;
  v19 = 0;
  v21 = 0;
  v18 = 0;
  v14 = 0u;
  v20 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)(v16 + (unsigned __int64)v17));
  sub_2C92C0(&v14, (__int64)&v15);
  if ( v15.m128i_i64[0] < (unsigned __int64)v15.m128i_i64[1] )
    sub_2B55E0((__int64)v22, &v20, (__int64)&v15);
  sub_2AB1A0((__int64)&v18, v14.m128i_i64);
  if ( (_QWORD)v21 )
  {
    sub_32AB20(&v18, v21);
    v6 = v20 + 40 * v21;
    if ( v20 != v6 )
    {
      v8 = v20;
      do
      {
        sub_32AB20(&v18, *(unsigned int *)(v8 + 32));
        sub_32ADE0(&v18, *(_QWORD *)(v8 + 24) - a2);
        v9 = s1;
        if ( *(_QWORD *)(v8 + 8) )
          v9 = *(const char **)v8;
        sub_32ACA0(&v18, v9);
        v8 += 40;
      }
      while ( v6 != v8 );
      v6 = v20;
    }
    if ( !v6 )
      goto LABEL_9;
    v10 = v21;
    if ( (_QWORD)v21 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v6 + 40 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v6 = v20;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
  }
  else
  {
    v6 = v20;
    if ( !v20 )
      goto LABEL_9;
  }
  *(_QWORD *)&v21 = 0;
  qfree(v6);
LABEL_9:
  sub_2B47B0(v14.m128i_i64);
  v7 = sub_2AEE30(a1, a2, 1);
  netnode_setblob(v7, v18, ((_QWORD)v19 == 0) + (_QWORD)v19 - 1LL, 0, 108);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
LABEL_2:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return 1;
}
