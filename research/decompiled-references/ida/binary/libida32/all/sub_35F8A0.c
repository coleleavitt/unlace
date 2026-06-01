__int64 __fastcall sub_35F8A0(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        int *a7,
        unsigned int a8,
        int a9,
        char a10,
        char a11)
{
  unsigned int v11; // ebx
  const char *v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // r14
  __int64 v18; // r12
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // r12
  bool v23; // zf
  const char *v24; // rax
  void *v25; // rdi
  void *v26; // rax
  __int64 v28; // [rsp+0h] [rbp-90h]
  __m128i v31; // [rsp+20h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+30h] [rbp-60h]
  unsigned int v33; // [rsp+34h] [rbp-5Ch]
  void *ptr; // [rsp+38h] [rbp-58h]
  __m128i v35; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  v11 = a2;
  v33 = a5;
  v36 = __readfsqword(0x28u);
  v32 = a3 + a2;
  if ( a2 < a3 + a2 )
  {
    v28 = a5;
    while ( 1 )
    {
      v16 = (void *)a1[3];
      a1[3] = 0;
      v17 = a1[4];
      v18 = a1[5];
      *((_OWORD *)a1 + 2) = 0;
      ptr = v16;
      v35 = 0;
      get_bytes(&v35, v28, v11, 0, 0);
      v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v18);
      if ( !(unsigned __int8)sub_35CDB0((__int64)a1, v11, a4, &v35, v33, a6, a7, a8) )
        break;
      if ( v11 < v32 - 1 || a10 )
      {
        v20 = *a1;
        v31 = v19;
        (*(void (__fastcall **)(__int64 *, char *, _QWORD))(v20 + 56))(a1, ", ", 0);
        v19 = _mm_load_si128(&v31);
      }
      v21 = a1[4];
      v22 = (char *)a1[3];
      *((__m128i *)a1 + 2) = v19;
      v23 = v21 == 0;
      v24 = haystack;
      if ( !v23 )
        v24 = v22;
      a1[3] = (__int64)ptr;
      v31.m128i_i64[0] = (__int64)v24;
      if ( a11 )
      {
        sub_35BD60(a1, a9, v11, (__int64)v24);
      }
      else
      {
        v13 = haystack;
        if ( v17 )
          v13 = (const char *)ptr;
        v14 = tag_strlen(v13);
        v15 = tag_strlen(v31.m128i_i64[0]) + v14;
        if ( v15 >= (unsigned __int16)getinf(42) )
        {
          if ( v22 )
            qfree(v22);
          return v11;
        }
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 56))(a1, v31.m128i_i64[0], 0);
      }
      if ( v22 )
        qfree(v22);
      v11 += v33;
      if ( v11 >= v32 )
        return v11;
    }
    v25 = (void *)a1[3];
    v26 = ptr;
    a1[4] = v17;
    a1[5] = v18;
    a1[3] = (__int64)v26;
    if ( v25 )
      qfree(v25);
  }
  return v11;
}

