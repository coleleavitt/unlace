__int64 __fastcall sub_DF7170(__int64 **a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  void *v10; // r12
  size_t v11; // rdx
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rbp
  void *v17; // rdi

  v2 = *a1;
  result = **a1;
  if ( !result )
    return sub_186B220(v2);
  v5 = (_QWORD *)**a1;
  v6 = (_QWORD *)(result + 16LL * *(unsigned int *)(result - 4));
  if ( (_QWORD *)result == v6 )
  {
LABEL_18:
    v15 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v5[2 * v15];
      do
      {
        while ( *v5 )
        {
          v17 = (void *)(*v5 - 8LL);
          v5 += 2;
          sub_186B220(v17);
          if ( v16 == v5 )
            goto LABEL_22;
        }
        v5 += 2;
      }
      while ( v16 != v5 );
LABEL_22:
      v5 = (_QWORD *)*v2;
    }
    sub_186B220(v5 - 1);
    return sub_186B220(v2);
  }
  do
  {
    while ( 1 )
    {
      if ( *v5 )
      {
        v7 = _mm_loadl_epi64((const __m128i *)(*v5 - 8LL));
        v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
        v9 = (_QWORD *)*v5;
        v10 = v8;
        *v8 = v7.m128i_i64[0];
        if ( v9 )
        {
          v11 = 8LL * *((unsigned int *)v9 - 1);
          if ( v11 <= 8 )
          {
            if ( v11 == 8 )
              v8[1] = *v9;
          }
          else
          {
            memmove(v8 + 1, v9, v11);
          }
        }
        v12 = v5[1];
        if ( v12 )
        {
          v13 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(a2, v12);
        }
        result = sub_186B220(v10);
        goto LABEL_11;
      }
      v14 = v5[1];
      if ( v14 )
      {
        v13 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v13 )
          break;
      }
LABEL_11:
      v5 += 2;
      if ( v6 == v5 )
        goto LABEL_16;
    }
    result = sub_15D7BC0(a2, v14);
    v5 += 2;
  }
  while ( v6 != v5 );
LABEL_16:
  v2 = *a1;
  if ( *a1 )
  {
    v5 = (_QWORD *)*v2;
    if ( *v2 )
      goto LABEL_18;
    return sub_186B220(v2);
  }
  return result;
}

