unsigned __int64 __fastcall sub_8F42F0(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *error_string; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  __int64 *v11; // rdi
  unsigned __int8 v12; // cl
  int v13; // r12d
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  void *v18; // rcx
  void *v19; // rdx
  __m128i v20; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  void *v24; // [rsp+10h] [rbp-98h] BYREF
  __int128 v25; // [rsp+18h] [rbp-90h]
  void *v26; // [rsp+30h] [rbp-78h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  error_string = (const char *)get_error_string(0);
  v24 = nullptr;
  v25 = 0;
  if ( error_string )
  {
    v7 = error_string;
    v8 = strlen(error_string);
    v9 = v8 + 1;
    v10 = v8;
    v24 = (void *)qvector_reserve(&v24, 0, v8 + 1, 1);
    *(_QWORD *)&v25 = v9;
    memmove(v24, v7, v10);
    *((_BYTE *)v24 + v10) = 0;
  }
  v11 = *(__int64 **)a1;
  v12 = *(_BYTE *)(a1 + 104);
  v27 = 0;
  v26 = nullptr;
  v13 = sub_8F41B0(v11, (__int64 *)&v26, a3, v12);
  v14 = haystack;
  if ( (_QWORD)v25 )
    v14 = (const char *)v24;
  set_error_string(0, v14);
  if ( !v13 )
  {
    ptr = nullptr;
    v23 = 0;
    v29 = 0;
    while ( (unsigned __int8)sub_827220((__int64 *)&v26, (__int64)&ptr, &v23) )
    {
      while ( v29.m128i_i64[0] > 1uLL && *(_BYTE *)ptr != 35 )
      {
        v15 = a2[1];
        v16 = *a2;
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          v22 = qvector_reserve(a2, v16, v15 + 1, 24);
          *a2 = v22;
          v15 = a2[1];
          v16 = v22;
        }
        v17 = v16 + 24 * v15;
        *(_QWORD *)v17 = 0;
        v18 = ptr;
        *(_OWORD *)(v17 + 8) = 0;
        ++a2[1];
        v19 = *(void **)v17;
        *(_QWORD *)v17 = v18;
        v20 = _mm_loadu_si128((const __m128i *)(v17 + 8));
        ptr = v19;
        *(__m128i *)(v17 + 8) = v29;
        v29 = v20;
        if ( !(unsigned __int8)sub_827220((__int64 *)&v26, (__int64)&ptr, &v23) )
          goto LABEL_13;
      }
    }
LABEL_13:
    if ( ptr )
    {
      v29.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v30 - __readfsqword(0x28u);
}
