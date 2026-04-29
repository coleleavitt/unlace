__int64 __fastcall sub_2D0A30(__int64 a1, __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  const char *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // [rsp+8h] [rbp-E8h] BYREF
  __m128i v13; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-C8h]
  __int128 v15; // [rsp+30h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-88h] BYREF
  __int128 v19; // [rsp+70h] [rbp-80h]
  _QWORD v20[2]; // [rsp+88h] [rbp-68h] BYREF
  char v21; // [rsp+98h] [rbp-58h]
  __int128 v22; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v23; // [rsp+B0h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v21 = 108;
  v20[0] = &off_4E1028;
  v14 = 0;
  v22 = 0;
  v15 = 0;
  v20[1] = a2;
  sub_2B61B0(a1, a2, 0);
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_2;
  v17 = 0;
  v19 = 0;
  v16 = 0;
  v12 = 0u;
  v18 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)(v14 + v15));
  sub_2D0640(&v12, (__int64)&v13);
  if ( v13.m128i_i64[0] < (unsigned __int64)v13.m128i_i64[1] )
    sub_2BC960((__int64)v20, &v18, (__int64)&v13);
  sub_2B2520((__int64)&v16, v12.m128i_i64);
  if ( (_QWORD)v19 )
  {
    sub_332160(&v16, v19);
    v5 = v18 + 40 * v19;
    if ( v18 != v5 )
    {
      v6 = v18;
      do
      {
        sub_332160(&v16, *(unsigned int *)(v6 + 32));
        sub_332420(&v16, *(_QWORD *)(v6 + 24) - a2);
        v7 = s1;
        if ( *(_QWORD *)(v6 + 8) )
          v7 = *(const char **)v6;
        sub_3322E0(&v16, v7);
        v6 += 40;
      }
      while ( v5 != v6 );
      v5 = v18;
    }
    if ( !v5 )
      goto LABEL_9;
    v8 = v19;
    if ( (_QWORD)v19 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v5 + 40 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v5 = v18;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
  }
  else
  {
    v5 = v18;
    if ( !v18 )
      goto LABEL_9;
  }
  *(_QWORD *)&v19 = 0;
  qfree(v5);
LABEL_9:
  sub_2BBB30(v12.m128i_i64);
  sub_2B61B0(a1, a2, 1);
  netnode_setblob();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
LABEL_2:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return 1;
}
