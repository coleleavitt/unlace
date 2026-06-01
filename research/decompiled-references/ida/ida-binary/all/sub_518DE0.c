__int64 __fastcall sub_518DE0(__int64 a1, _QWORD *a2, double a3, double a4)
{
  __int64 v4; // r13
  _DWORD *v6; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rsi
  unsigned int v12; // ebx
  __m128i v14; // xmm0
  __int64 i; // rbx
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  double v19; // xmm0_8
  __int64 v20; // rdx
  const char *v21; // rdi
  __int64 v22; // rax
  const char *v23; // [rsp+20h] [rbp-58h] BYREF
  __m128i v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v4 = a2[1];
  v25 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = (_DWORD *)*a2;
    v8 = 0;
    v9 = (_DWORD *)*a2;
    v10 = *a2 + 16 * v4;
    do
    {
      v11 = (const char *)(*v9 == 1);
      v9 += 4;
      v8 += (__int64)v11;
    }
    while ( v9 != (_DWORD *)v10 );
    v12 = 0;
    if ( v4 != v8 )
      return v12;
    v23 = nullptr;
    v14.m128i_i64[0] = 0;
    v24 = 0;
    if ( (int)v4 <= 0 )
    {
      if ( (_DWORD)v4 )
        return v12;
      v11 = nullptr;
    }
    else
    {
      a4 = 100.0;
      for ( i = 0; ; ++i )
      {
        v16 = &v6[4 * i];
        if ( *v16 != 1 )
        {
          if ( !under_debugger )
            interr(1277, v11, 16 * i, v8, *(double *)v14.m128i_i64);
          BUG();
        }
        v17 = *((_QWORD *)v16 + 1);
        v11 = v23;
        v18 = (__int64)v23;
        if ( (unsigned int)v17 > 0x64 )
          break;
        v19 = (double)(int)v17;
        v20 = v24.m128i_i64[0];
        *(double *)v14.m128i_i64 = v19 / 100.0;
        if ( v24.m128i_i64[1] < (unsigned __int64)(v24.m128i_i64[0] + 1) )
        {
          v18 = qvector_reserve(&v23, v23, v24.m128i_i64[0] + 1, 8);
          v20 = v24.m128i_i64[0];
          v23 = (const char *)v18;
          a4 = 100.0;
        }
        *(_QWORD *)(v18 + 8 * v20) = v14.m128i_i64[0];
        ++v24.m128i_i64[0];
        if ( i == (_DWORD)v4 - 1 )
        {
          v11 = v23;
          LODWORD(i) = i + 1;
          break;
        }
        v6 = (_DWORD *)*a2;
      }
      if ( (_DWORD)v4 != (_DWORD)i )
      {
        v21 = v11;
        v12 = 0;
        goto LABEL_17;
      }
    }
  }
  else
  {
    v11 = nullptr;
    v24 = 0;
  }
  v21 = *(const char **)a1;
  v22 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v11;
  v12 = 1;
  v14 = _mm_loadu_si128(&v24);
  v23 = v21;
  v24.m128i_i64[1] = v22;
  *(__m128i *)(a1 + 8) = v14;
LABEL_17:
  if ( v21 )
  {
    v24.m128i_i64[0] = 0;
    qfree(v21, v11, *(double *)v14.m128i_i64, a4);
  }
  return v12;
}
