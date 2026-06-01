__int64 __fastcall sub_519010(__int64 *a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v3; // r8
  __int64 v4; // r12
  __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __m128d v9; // xmm0
  __m128d v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rbx
  __int64 result; // rax
  __int64 v20; // rax
  _QWORD *v21; // [rsp+8h] [rbp-40h]
  _QWORD *v22; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 - 1 <= 0 )
  {
    v15 = 100;
  }
  else
  {
    v3 = (_QWORD *)a2;
    v4 = 8LL * (unsigned int)(v2 - 1);
    v5 = 0;
    v6 = 0;
    do
    {
      v9.m128d_f64[0] = 100.0 * *(double *)(*v3 + v5);
      if ( fabs(v9.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v10 = 0;
        v10.m128d_f64[0] = (double)(int)v9.m128d_f64[0];
        *(_QWORD *)&v9.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        v10.m128d_f64[0]
                                      - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v10, v9).m128d_f64[0] & 0x3FF0000000000000LL))
                                    | *(_QWORD *)&v9.m128d_f64[0] & 0x8000000000000000LL;
      }
      v11 = a1[1];
      v12 = *a1;
      v6 += (int)v9.m128d_f64[0];
      if ( a1[2] < (unsigned __int64)(v11 + 1) )
      {
        v21 = v3;
        v13 = qvector_reserve(a1, v12, v11 + 1, 16);
        v3 = v21;
        *a1 = v13;
        v12 = v13;
        v11 = a1[1];
      }
      v7 = 16 * v11;
      v8 = (_QWORD *)(v12 + v7);
      *v8 = 0;
      v8[1] = 0;
      ++a1[1];
      if ( *(_DWORD *)(v12 + v7) )
      {
        v22 = v3;
        jvalue_t_clear(v12 + v7);
        v3 = v22;
      }
      v5 += 8;
      *(_DWORD *)v8 = 1;
      v8[1] = (int)v9.m128d_f64[0];
    }
    while ( v4 != v5 );
    v14 = 100 - v6;
    if ( 100 - v6 < 0 )
      v14 = 0;
    v15 = v14;
  }
  v16 = a1[1];
  v17 = *a1;
  if ( a1[2] < (unsigned __int64)(v16 + 1) )
  {
    v20 = qvector_reserve(a1, v17, v16 + 1, 16);
    *a1 = v20;
    v17 = v20;
    v16 = a1[1];
  }
  v18 = (_QWORD *)(v17 + 16 * v16);
  *v18 = 0;
  v18[1] = 0;
  ++a1[1];
  result = *(unsigned int *)v18;
  if ( (_DWORD)result )
    result = jvalue_t_clear(v18);
  *(_DWORD *)v18 = 1;
  v18[1] = v15;
  return result;
}
