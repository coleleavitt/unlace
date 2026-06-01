__int64 __fastcall sub_A82CE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // rdx
  char **v6; // rbp
  char *v7; // rsi
  __m128i *v8; // rsi
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rsi
  char *v14; // rdx
  _BYTE *v16; // rsi
  __m128i v17; // [rsp+0h] [rbp-98h] BYREF
  __m128i v18; // [rsp+10h] [rbp-88h] BYREF
  char v19; // [rsp+20h] [rbp-78h]
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]

  v2 = *(unsigned int *)(a2 + 8);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v3 = *(_QWORD **)a2;
  v20 = 0;
  v4 = &v3[2 * v2];
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  if ( v4 != v3 )
  {
    do
    {
      while ( 1 )
      {
        sub_229B200(&v17, *v3, v3[1]);
        if ( v19 )
        {
          if ( v18.m128i_i8[12] )
            break;
        }
        v3 += 2;
        if ( v4 == v3 )
          goto LABEL_7;
      }
      v3 += 2;
      sub_2299030(&v20, v18.m128i_u32[2]);
    }
    while ( v4 != v3 );
LABEL_7:
    if ( v24 )
    {
      v5 = *(_QWORD *)(v24 + 48);
      if ( v5 )
      {
        v16 = *(_BYTE **)(v24 + 40);
        v17.m128i_i64[0] = (__int64)&v18;
        sub_A57A70(&v17, v16, (__int64)&v16[v5]);
        sub_A82C60(a1, &v17);
        if ( (__m128i *)v17.m128i_i64[0] != &v18 )
          operator delete((void *)v17.m128i_i64[0]);
      }
    }
  }
  v6 = (char **)&unk_2B414C8;
  do
  {
    while ( 1 )
    {
      v10 = v6[6];
      if ( !v10 )
        goto LABEL_14;
      v11 = 1LL << *(_DWORD *)v6;
      v12 = *(_DWORD *)v6 >> 6;
      if ( (v11 & *((_QWORD *)&v22 + v12)) == 0 )
        goto LABEL_14;
      if ( (v11 & *((_QWORD *)&v20 + v12)) != 0 )
        break;
      v13 = v6[7];
      v14 = v6[8];
      v17.m128i_i64[0] = (__int64)&v18;
      sub_A57A70(&v17, v13, (__int64)&v14[(_QWORD)v13]);
      v8 = *(__m128i **)(a1 + 8);
      if ( v8 == *(__m128i **)(a1 + 16) )
        goto LABEL_21;
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v9 = v17.m128i_i64[0];
      if ( (__m128i *)v17.m128i_i64[0] == &v18 )
      {
LABEL_20:
        v8[1] = _mm_load_si128(&v18);
        goto LABEL_13;
      }
LABEL_12:
      v8->m128i_i64[0] = v9;
      v8[1].m128i_i64[0] = v18.m128i_i64[0];
LABEL_13:
      v8->m128i_i64[1] = v17.m128i_i64[1];
      *(_QWORD *)(a1 + 8) += 32LL;
LABEL_14:
      v6 += 14;
      if ( v6 == &off_2B44FD8 )
        return a1;
    }
    v7 = v6[5];
    v17.m128i_i64[0] = (__int64)&v18;
    sub_A57A70(&v17, v7, (__int64)&v10[(_QWORD)v7]);
    v8 = *(__m128i **)(a1 + 8);
    if ( v8 != *(__m128i **)(a1 + 16) )
    {
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v9 = v17.m128i_i64[0];
      if ( (__m128i *)v17.m128i_i64[0] == &v18 )
        goto LABEL_20;
      goto LABEL_12;
    }
LABEL_21:
    sub_A82970((void ***)a1, v8, &v17);
    if ( (__m128i *)v17.m128i_i64[0] == &v18 )
      goto LABEL_14;
    operator delete((void *)v17.m128i_i64[0]);
    v6 += 14;
  }
  while ( v6 != &off_2B44FD8 );
  return a1;
}
