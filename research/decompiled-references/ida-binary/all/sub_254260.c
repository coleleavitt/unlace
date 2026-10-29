__int64 __fastcall sub_254260(
        unsigned int a1,
        unsigned __int16 *a2,
        int *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128i v11; // xmm0
  int v13; // r14d
  _QWORD *v15; // rsi
  __int64 result; // rax
  __int64 v17; // rcx
  size_t v18; // r12
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edx
  unsigned __int64 i; // rdx
  unsigned __int8 v24; // al
  int *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rax
  __m128i v30; // [rsp+0h] [rbp-78h] BYREF
  int v31; // [rsp+10h] [rbp-68h] BYREF
  __int64 v32; // [rsp+18h] [rbp-60h] BYREF
  __m128i v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v11.m128i_i64[0] = 0;
  v13 = dword_8CC428;
  v34 = __readfsqword(0x28u);
  v31 = -2;
  v32 = -1;
  v33 = 0;
  if ( dword_8CC5E8 )
    v13 = HIDWORD(qword_8CC340);
  if ( !a2[1] )
    goto LABEL_8;
  v15 = (_QWORD *)a1;
  result = sub_23F680(v13, a1, (const char *)&v31, 0.0);
  if ( !(_BYTE)result )
    goto LABEL_9;
  if ( v31 >= -1 )
  {
    v18 = *((_QWORD *)a3 + 2);
    v19 = 0;
    if ( v18 )
    {
      v29 = (void *)qalloc_or_throw(*((_QWORD *)a3 + 2));
      v15 = *((_QWORD **)a3 + 1);
      v19 = (__int64)v29;
      memcpy(v29, v15, v18);
    }
    v11 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    if ( v32 )
    {
      v30 = v11;
      v33.m128i_i64[0] = 0;
      qfree(v32, (const char *)v15);
      v11 = _mm_load_si128(&v30);
    }
    v32 = v19;
    v33 = v11;
    goto LABEL_7;
  }
  if ( v31 == -2 )
  {
    v20 = a2[1];
    v21 = v20 + (unsigned int)*a2;
    if ( (unsigned int)v21 <= 0x40 )
    {
      v22 = *a3;
      if ( *a3 < -1 )
        goto LABEL_29;
      for ( i = *((_QWORD *)a3 + 2); i >= (v20 + 7) >> 3; i = 0 )
      {
        do
        {
          v24 = getinf_flag(3, 32);
          v25 = a3 + 2;
          if ( *a3 >= -1 )
            v25 = *((int **)a3 + 1);
          if ( v31 < -1 )
          {
            v15 = &v32;
            v26 = 8LL * (v31 == -2);
          }
          else
          {
            v26 = v33.m128i_i64[0];
            v15 = (_QWORD *)v32;
          }
          if ( (unsigned __int8)bitrange_t_inject_using_bitrange(a2, v15, v26, v25, (a2[1] + 7) >> 3, v24) )
            goto LABEL_7;
          if ( under_debugger )
            goto LABEL_36;
          v20 = interr(40378, v15, v27, v28, 0.0);
LABEL_29:
          ;
        }
        while ( v22 == -2 );
      }
      if ( under_debugger )
LABEL_36:
        BUG();
      interr(40377, v15, i, v17, 0.0);
    }
    if ( !under_debugger )
      interr(40376, v15, v21, v17, 0.0);
    goto LABEL_36;
  }
LABEL_7:
  a3 = &v31;
LABEL_8:
  v15 = (_QWORD *)a1;
  result = sub_2532C0(v13, a1, (__int64)a3, *(double *)v11.m128i_i64, a5, a6, a7, a8, a9, a10, a11);
LABEL_9:
  if ( v31 >= -1 )
  {
    if ( v32 )
    {
      v30.m128i_i8[0] = result;
      v33.m128i_i64[0] = 0;
      qfree(v32, (const char *)v15);
      return v30.m128i_u8[0];
    }
  }
  return result;
}
