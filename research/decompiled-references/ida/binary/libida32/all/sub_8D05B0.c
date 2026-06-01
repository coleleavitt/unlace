unsigned __int64 __fastcall sub_8D05B0(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *error_string; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  __int64 *v11; // rdi
  unsigned __int8 v12; // cl
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rdx
  __m128i v19; // xmm0
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-A0h] BYREF
  void *v23; // [rsp+10h] [rbp-98h] BYREF
  __int128 v24; // [rsp+18h] [rbp-90h]
  void *v25; // [rsp+30h] [rbp-78h] BYREF
  __int128 v26; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  error_string = (const char *)get_error_string(0);
  v23 = nullptr;
  v24 = 0;
  if ( error_string )
  {
    v7 = error_string;
    v8 = strlen(error_string);
    v9 = v8 + 1;
    v10 = v8;
    v23 = (void *)qvector_reserve(&v23, 0, v8 + 1, 1);
    *(_QWORD *)&v24 = v9;
    memmove(v23, v7, v10);
    *((_BYTE *)v23 + v10) = 0;
  }
  v11 = *(__int64 **)a1;
  v12 = *(_BYTE *)(a1 + 104);
  v26 = 0;
  v25 = nullptr;
  v13 = sub_8D0470(v11, (__int64 *)&v25, a3, v12);
  set_error_string();
  if ( !v13 )
  {
    ptr = nullptr;
    v22 = 0;
    v28 = 0;
    while ( (unsigned __int8)sub_803EE0((__int64 *)&v25, (__int64)&ptr, &v22) )
    {
      while ( v28.m128i_i64[0] > 1uLL && *(_BYTE *)ptr != 35 )
      {
        v14 = a2[1];
        v15 = *a2;
        if ( a2[2] < (unsigned __int64)(v14 + 1) )
        {
          v21 = qvector_reserve(a2, v15, v14 + 1, 24);
          *a2 = v21;
          v14 = a2[1];
          v15 = v21;
        }
        v16 = v15 + 24 * v14;
        *(_QWORD *)v16 = 0;
        v17 = ptr;
        *(_OWORD *)(v16 + 8) = 0;
        ++a2[1];
        v18 = *(void **)v16;
        *(_QWORD *)v16 = v17;
        v19 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        ptr = v18;
        *(__m128i *)(v16 + 8) = v28;
        v28 = v19;
        if ( !(unsigned __int8)sub_803EE0((__int64 *)&v25, (__int64)&ptr, &v22) )
          goto LABEL_11;
      }
    }
LABEL_11:
    if ( ptr )
    {
      v28.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v29 - __readfsqword(0x28u);
}

