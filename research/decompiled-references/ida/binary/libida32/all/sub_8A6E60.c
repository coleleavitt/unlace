__int64 __fastcall sub_8A6E60(__int64 a1, __int64 a2, const char *a3, __int64 *a4, char a5, _DWORD *a6)
{
  __int64 v11; // rdi
  __m128i v12; // xmm0
  size_t v13; // rax
  size_t v14; // r15
  _BYTE *v15; // rax
  const char *v16; // rdx
  __int64 v17; // rdi
  __m128i v18; // xmm0
  int v19; // eax
  void *v20; // rdx
  void *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  void *v24; // rdi
  size_t v25; // rdx
  __int64 v26; // rax
  size_t v27; // [rsp+0h] [rbp-90h]
  char v28; // [rsp+17h] [rbp-79h] BYREF
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __m128i v30; // [rsp+20h] [rbp-70h] BYREF
  __int64 v31; // [rsp+38h] [rbp-58h] BYREF
  __m128i v32; // [rsp+40h] [rbp-50h]
  unsigned __int64 v33; // [rsp+50h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a6 )
    *a6 = 0;
  if ( a5
    || (v11 = *(_QWORD *)(a2 + 8),
        v12 = _mm_loadu_si128((const __m128i *)(a4 + 1)),
        v31 = *a4,
        v32 = v12,
        (unsigned int)sub_8A6CB0(v11, (__int64)&v31, a3, &ptr))
    || !(_BYTE)ptr )
  {
LABEL_4:
    if ( *(_QWORD *)(a1 + 8) > 1u )
      return a1;
    goto LABEL_13;
  }
  if ( a6 )
    *a6 = 1;
  if ( a3 )
  {
    v13 = strlen(a3);
    v14 = v13;
    if ( v13 )
    {
      v24 = *(void **)a1;
      v25 = v13 + 1;
      if ( *(_QWORD *)(a1 + 16) < v13 + 1 )
      {
        v27 = v13 + 1;
        v26 = qvector_reserve(a1, *(_QWORD *)a1, v25, 1);
        *(_QWORD *)a1 = v26;
        v25 = v27;
        v24 = (void *)v26;
      }
      *(_QWORD *)(a1 + 8) = v25;
      memmove(v24, a3, v14);
      *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
      goto LABEL_4;
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
LABEL_13:
  v15 = a4 + 1;
  while ( !*v15 )
  {
    if ( ++v15 == (_BYTE *)(a4 + 3) )
      return a1;
  }
  sub_8D9D00(&ptr, a3, a4 + 1);
  v16 = haystack;
  if ( v30.m128i_i64[0] )
    v16 = (const char *)ptr;
  v17 = *(_QWORD *)(a2 + 8);
  v18 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v31 = *a4;
  v32 = v18;
  v19 = sub_8A6CB0(v17, (__int64)&v31, v16, &v28);
  v20 = ptr;
  if ( v19 || !v28 )
  {
    v21 = ptr;
  }
  else
  {
    if ( a6 )
      *a6 = 2;
    v21 = *(void **)a1;
    v22 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v20;
    v23 = _mm_loadu_si128(&v30);
    ptr = v21;
    v30.m128i_i64[1] = v22;
    *(__m128i *)(a1 + 8) = v23;
  }
  if ( v21 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v21);
  }
  return a1;
}

