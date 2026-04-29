__int64 __fastcall sub_790A0(_QWORD *a1, __int64 *a2)
{
  __m128i *v3; // rsi
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __m128i *v8; // rbx
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  __m128i *v12; // r12
  __int64 v13; // r14
  __int64 v14; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = (__m128i *)a1[1];
  if ( *a1 >= (unsigned __int64)v3 )
    sub_75A90(a1);
  v4 = (__int64)a1;
  v5 = unpack_dd(a1);
  v6 = v5;
  if ( a1[1] - *a1 >= (unsigned __int64)v5 && v5 >= 0 )
  {
    v7 = a2[1];
    v8 = (__m128i *)*a2;
    if ( v7 != v5 )
    {
      v19 = 0;
      if ( v5 >= v7 )
      {
        v9 = a2[2];
        if ( &v19 < v8 || (v3 = &v8[v9], &v19 >= v3) )
        {
          if ( v9 < v6 )
          {
            v3 = v8;
            a1 = a2;
            v17 = qvector_reserve(a2, v8, v6, 16);
            v7 = a2[1];
            *a2 = v17;
            v8 = (__m128i *)v17;
          }
          if ( v7 < v6 )
          {
            v10 = _mm_load_si128(&v19);
            do
            {
              v11 = v7++;
              v8[v11] = v10;
              v8 = (__m128i *)*a2;
            }
            while ( v6 != v7 );
          }
        }
        else
        {
          if ( v9 < v6 )
          {
            v3 = v8;
            a1 = a2;
            v18 = qvector_reserve(a2, v8, v6, 16);
            v7 = a2[1];
            *a2 = v18;
            v8 = (__m128i *)v18;
          }
          if ( v7 < v6 )
          {
            do
            {
              v16 = v7++;
              v8[v16] = 0;
              v8 = (__m128i *)*a2;
            }
            while ( v6 != v7 );
          }
        }
      }
      a2[1] = v6;
    }
    v12 = &v8[v6];
    if ( v12 == v8 )
      return 1;
    while ( 1 )
    {
      while ( *(_DWORD *)(v4 + 48) <= 3u )
      {
        if ( (unsigned __int8)is_cvt64(a1, v3) )
          v13 = (int)sub_782A0((_QWORD *)v4);
        else
          v13 = sub_782C0(v4);
        v8->m128i_i64[0] = v13;
        if ( !(unsigned __int8)is_cvt64(v4, v3) )
          goto LABEL_22;
LABEL_18:
        v3 = *(__m128i **)(v4 + 8);
        if ( *(_QWORD *)v4 >= (unsigned __int64)v3 )
        {
          if ( !under_debugger )
            sub_37CFE0(50583);
          BUG();
        }
        a1 = (_QWORD *)v4;
        ++v8;
        v8[-1].m128i_i64[1] = v13 + (int)unpack_dd(v4);
        if ( v12 == v8 )
          return 1;
      }
      v14 = *(_QWORD *)(v4 + 32);
      v13 = sub_78480((_QWORD *)v4) + v14;
      v8->m128i_i64[0] = v13;
      if ( (unsigned __int8)is_cvt64(v4, v3) )
        goto LABEL_18;
LABEL_22:
      a1 = (_QWORD *)v4;
      ++v8;
      v8[-1].m128i_i64[1] = v13 + sub_782C0(v4);
      if ( v12 == v8 )
        return 1;
    }
  }
  return 0;
}
