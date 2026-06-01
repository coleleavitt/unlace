unsigned __int64 __fastcall sub_3D8680(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __m128i *v5; // rbp
  unsigned __int64 v6; // rsi
  __m128i *v8; // r12
  __m128i *v10; // rdx
  __m128i *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __m128i *v15; // rcx
  __m128i *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 *v20; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v21; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v22[24]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  _BYTE v25[24]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v26; // [rsp+68h] [rbp-40h]
  __int64 v27; // [rsp+70h] [rbp-38h]
  unsigned __int64 v28; // [rsp+78h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v28 = __readfsqword(0x28u);
  v5 = *(__m128i **)(a1 + 1672);
  *(_QWORD *)v22 = 0;
  v6 = v3 + v4;
  v23 = 0;
  v24 = 0;
  *(_QWORD *)v25 = 0;
  v21 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  v26 = 0;
  v27 = 0;
  *(__m128i *)&v22[8] = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)&v25[8] = *(_OWORD *)&v22[8];
  if ( v3 < v6 )
  {
    v8 = v5 + 155;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = unpack_dq(&v21);
        if ( v21.m128i_i64[0] < (unsigned __int64)v21.m128i_i64[1] )
        {
          if ( *(_BYTE *)v21.m128i_i64[0]++ )
            break;
        }
        sub_41C0A0(v25, &v21);
        if ( a3 )
        {
          v10 = (__m128i *)v5[155].m128i_i64[1];
          goto LABEL_9;
        }
        sub_3D85B0((__int64)&v5[154].m128i_i64[1], v19);
LABEL_4:
        if ( v21.m128i_i64[0] >= (unsigned __int64)v21.m128i_i64[1] )
          return v28 - __readfsqword(0x28u);
      }
      sub_41C0A0(v22, &v21);
      sub_41C0A0(v25, &v21);
      v15 = (__m128i *)v5[155].m128i_i64[1];
      v10 = v15;
      if ( !a3 )
        break;
LABEL_9:
      if ( v10 )
      {
        v11 = v5 + 155;
        do
        {
          while ( 1 )
          {
            v12 = v10[1].m128i_i64[0];
            v13 = v10[1].m128i_i64[1];
            if ( v10[2].m128i_i64[0] < v19 )
              break;
            v11 = v10;
            v10 = (__m128i *)v10[1].m128i_i64[0];
            if ( !v12 )
              goto LABEL_14;
          }
          v10 = (__m128i *)v10[1].m128i_i64[1];
        }
        while ( v13 );
LABEL_14:
        if ( v8 != v11 && v19 >= v11[2].m128i_i64[0] )
          goto LABEL_17;
      }
      else
      {
        v11 = v5 + 155;
      }
      v20 = &v19;
      v11 = sub_3B9250(&v5[154].m128i_i64[1], v11, &v20);
LABEL_17:
      *(__m128i *)((char *)v11 + 40) = _mm_load_si128((const __m128i *)v25);
      *(__m128i *)((char *)v11 + 56) = _mm_load_si128((const __m128i *)&v25[16]);
      v11[4].m128i_i64[1] = v27;
      if ( v21.m128i_i64[0] >= (unsigned __int64)v21.m128i_i64[1] )
        return v28 - __readfsqword(0x28u);
    }
    if ( v15 )
    {
      v16 = v5 + 155;
      do
      {
        while ( 1 )
        {
          v17 = v15[1].m128i_i64[0];
          v18 = v15[1].m128i_i64[1];
          if ( v15[2].m128i_i64[0] < v19 )
            break;
          v16 = v15;
          v15 = (__m128i *)v15[1].m128i_i64[0];
          if ( !v17 )
            goto LABEL_25;
        }
        v15 = (__m128i *)v15[1].m128i_i64[1];
      }
      while ( v18 );
LABEL_25:
      if ( v8 != v16 && v19 >= v16[2].m128i_i64[0] )
        goto LABEL_28;
    }
    else
    {
      v16 = v5 + 155;
    }
    v20 = &v19;
    v16 = sub_3B9250(&v5[154].m128i_i64[1], v16, &v20);
LABEL_28:
    *(__m128i *)((char *)v16 + 40) = _mm_load_si128((const __m128i *)v22);
    *(__m128i *)((char *)v16 + 56) = _mm_load_si128((const __m128i *)&v22[16]);
    v16[4].m128i_i64[1] = v24;
    goto LABEL_4;
  }
  return v28 - __readfsqword(0x28u);
}
