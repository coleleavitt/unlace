unsigned __int64 __fastcall sub_362D20(
        _QWORD *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        int *a7,
        __int64 a8,
        int a9,
        char a10,
        char a11)
{
  unsigned __int64 v11; // rbx
  const char *v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  char v19; // al
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // r12
  bool v24; // zf
  const char *v25; // rax
  void *v26; // rax
  void *v27; // rdi
  unsigned __int64 v31; // [rsp+18h] [rbp-78h]
  __m128i v32; // [rsp+20h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-60h]
  unsigned __int64 v34; // [rsp+38h] [rbp-58h] BYREF
  __m128i v35; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  v11 = a2;
  v36 = __readfsqword(0x28u);
  v31 = a3 + a2;
  if ( a2 < v31 )
  {
    while ( 1 )
    {
      v16 = (void *)a1[3];
      v17 = a1[5];
      a1[3] = 0;
      ptr = v16;
      v18 = a1[4];
      *((_OWORD *)a1 + 2) = 0;
      v34 = v18;
      v35 = 0;
      get_bytes(&v35, a5, v11, 0, 0);
      v19 = sub_360180((__int64)a1, v11, a4, &v35, a5, a6, a7, a8);
      v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v34), (__m128i)v17);
      if ( !v19 )
        break;
      if ( v11 < v31 - 1 || a10 )
      {
        v21 = *a1;
        v32 = v20;
        (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(v21 + 56))(a1, ", ", 0);
        v20 = _mm_load_si128(&v32);
      }
      v22 = a1[4];
      v23 = (char *)a1[3];
      *((__m128i *)a1 + 2) = v20;
      v24 = v22 == 0;
      v25 = haystack;
      if ( !v24 )
        v25 = v23;
      a1[3] = ptr;
      v32.m128i_i64[0] = (__int64)v25;
      if ( a11 )
      {
        sub_35F080(a1, a9, v11, (__int64)v25);
      }
      else
      {
        v14 = haystack;
        if ( v34 )
          v14 = (const char *)ptr;
        v34 = tag_strlen(v14);
        v15 = tag_strlen(v32.m128i_i64[0]);
        v34 += v15;
        if ( v34 >= (unsigned __int16)getinf(42) )
        {
          if ( v23 )
            qfree(v23);
          return v11;
        }
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, v32.m128i_i64[0], 0);
      }
      if ( v23 )
        qfree(v23);
      v11 += a5;
      if ( v11 >= v31 )
        return v11;
    }
    v26 = ptr;
    v27 = (void *)a1[3];
    a1[5] = v17;
    a1[3] = v26;
    a1[4] = v34;
    if ( v27 )
      qfree(v27);
  }
  return v11;
}
