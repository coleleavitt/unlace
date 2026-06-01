__int64 __fastcall sub_539A70(char *a1, const char *a2)
{
  const char *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 i; // r14
  const char *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rdi
  const char *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __m128i v16; // xmm0
  const char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned int v21; // r14d
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a1 )
  {
    v31 = 0;
    v2 = a1;
    v32 = 0;
    sub_535A80(&v31, a1);
    v3 = v31;
    v4 = v31 + 56 * v32;
    if ( v4 == v31 )
    {
LABEL_34:
      v21 = 0;
    }
    else
    {
      for ( i = v31; ; i += 56 )
      {
        v6 = &s1;
        if ( *(_QWORD *)(i + 8) )
          v6 = *(const char **)i;
        v2 = a2;
        v7 = i + 56;
        v8 = i + 56;
        if ( !strcmp(v6, a2) )
          break;
        if ( v4 == v7 )
          goto LABEL_34;
      }
      v9 = *(_QWORD *)(i + 24);
      if ( v9 )
      {
        *(_QWORD *)(i + 32) = 0;
        qfree(v9, a2);
      }
      v10 = *(const char **)i;
      if ( *(_QWORD *)i )
      {
        *(_QWORD *)(i + 8) = 0;
        qfree(v10, a2);
      }
      v11 = v32;
      v12 = 0x6DB6DB6DB6DB6DB7LL * ((v31 + 56 * (__int64)v32 - i) >> 3) - 2;
      if ( v12 >= 0 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)v8;
          v14 = _mm_loadu_si128((const __m128i *)(v8 + 8));
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          *(_QWORD *)i = v13;
          *(__m128i *)(i + 8) = v14;
          v15 = *(_QWORD *)(v8 + 24);
          v16 = _mm_loadu_si128((const __m128i *)(v8 + 32));
          *(_QWORD *)(v8 + 24) = 0;
          *(_QWORD *)(i + 24) = v15;
          *(__m128i *)(i + 32) = v16;
          v17 = (const char *)*(unsigned int *)(v8 + 48);
          *(_QWORD *)(v8 + 40) = 0;
          *(_DWORD *)(i + 48) = (_DWORD)v17;
          v18 = *(_QWORD *)(v8 + 24);
          if ( v18 )
          {
            *(_QWORD *)(v8 + 32) = 0;
            *(double *)v16.m128i_i64 = qfree(v18, v17);
          }
          v19 = *(_QWORD *)v8;
          if ( *(_QWORD *)v8 )
          {
            *(_QWORD *)(v8 + 8) = 0;
            qfree(v19, v17, *(double *)v16.m128i_i64);
          }
          v8 += 56;
          i = v7;
          if ( v12-- == 0 )
            break;
          v7 += 56;
        }
        v11 = v32;
      }
      *(_QWORD *)&v32 = v11 - 1;
      v2 = (const char *)&v31;
      sub_538A10((QT::QObject *)a1, &v31);
      v3 = v31;
      v21 = 1;
    }
    if ( v3 )
    {
      v22 = v32;
      if ( (_QWORD)v32 )
      {
        v23 = 0;
        v24 = 0;
        do
        {
          v25 = (__int64 *)(v23 + v3);
          v26 = v25[3];
          if ( v26 )
          {
            v25[4] = 0;
            qfree(v26, v2);
          }
          v27 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            qfree(v27, v2);
          }
          ++v24;
          v3 = v31;
          v23 += 56;
        }
        while ( v22 != v24 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v3, v2);
    }
  }
  else
  {
    return 0;
  }
  return v21;
}
