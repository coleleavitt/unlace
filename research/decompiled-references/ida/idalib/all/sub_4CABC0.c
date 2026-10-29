__int64 __fastcall sub_4CABC0(_QWORD *a1, const char *a2, _QWORD *a3)
{
  const char *v4; // rbx
  __int64 v6; // rdx
  size_t v7; // rax
  size_t v8; // r12
  __int64 result; // rax
  __int64 tinfo_property; // rcx
  char v11; // al
  const char *v12; // rdi
  __m128i v13; // xmm0
  char *v14; // r12
  __m128i v15; // xmm1
  char *v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  size_t v20; // r13
  char *v21; // rdi
  size_t v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-4Ch]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v27; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v4 = a2;
  v28 = __readfsqword(0x28u);
  if ( !a2 )
    v4 = &byte_22F0C30;
  if ( !strncasecmp(v4, "__imp_", 6u) )
  {
    v4 += 6;
    if ( (int)demangle_name(a1, v4, 134217736, 2) <= 0 )
      goto LABEL_5;
    return 2;
  }
  if ( (int)demangle_name(a1, v4, 134217736, 2) > 0 )
    return 2;
  ptr = nullptr;
  v27 = 0;
  if ( a3 )
    tinfo_property = (unsigned int)get_tinfo_property(*a3, 20);
  else
    tinfo_property = 16;
  v11 = decorate_name(&ptr, v4, 0, tinfo_property, a3);
  v12 = (const char *)ptr;
  if ( !v11 )
  {
    if ( ptr )
    {
      v27.m128i_i64[0] = 0;
      qfree(ptr);
    }
LABEL_5:
    v6 = a1[1];
    if ( v6 && (v16 = (char *)*a1, (unsigned __int64)v4 < v6 + *a1) && v4 >= v16 )
    {
      v17 = v6 - 1;
      v18 = v4 - v16;
      if ( v6 != 1 && v18 )
      {
        v19 = 1;
        v20 = 0;
        if ( v18 < v17 )
        {
          v20 = &v16[v17] - v4;
          v19 = v20 + 1;
          memmove(v16, v4, v20);
          v16 = (char *)*a1;
        }
        if ( a1[2] < v19 )
        {
          v24 = qvector_reserve(a1, v16, v19, 1);
          *a1 = v24;
          v16 = (char *)v24;
        }
        a1[1] = v19;
        v16[v20] = 0;
        return 0;
      }
    }
    else
    {
      v7 = strlen(v4);
      v8 = v7;
      if ( v7 )
      {
        v21 = (char *)*a1;
        v22 = v7 + 1;
        if ( a1[2] < v7 + 1 )
        {
          v23 = qvector_reserve(a1, *a1, v7 + 1, 1);
          *a1 = v23;
          v21 = (char *)v23;
        }
        a1[1] = v22;
        memmove(v21, v4, v8);
        *(_BYTE *)(*a1 + v8) = 0;
        return 0;
      }
      a1[1] = 0;
    }
    return 0;
  }
  v13 = _mm_loadu_si128(&v27);
  v14 = (char *)*a1;
  *a1 = ptr;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *(__m128i *)(a1 + 1) = v13;
  ptr = v14;
  if ( !v13.m128i_i64[0] )
    v12 = haystack;
  v27 = v15;
  result = strcmp(v12, v4) != 0;
  if ( v14 )
  {
    v25 = result;
    v27.m128i_i64[0] = 0;
    qfree(v14);
    return v25;
  }
  return result;
}
