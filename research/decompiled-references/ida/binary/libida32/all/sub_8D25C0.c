__int64 __fastcall sub_8D25C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __m128i *v12; // rsi
  size_t v14; // r14
  __int64 (__fastcall *v15)(__int64 *, _BYTE *, const char *, _QWORD); // rax
  const char *v16; // rdx
  int v17; // eax
  void *v18; // rdi
  __m128i v19; // xmm0
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  void *ptr; // [rsp+10h] [rbp-1088h] BYREF
  __m128i v28; // [rsp+18h] [rbp-1080h] BYREF
  __int64 v29; // [rsp+30h] [rbp-1068h] BYREF
  __m128i v30; // [rsp+38h] [rbp-1060h] BYREF
  _BYTE v31[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v32; // [rsp+1058h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  sub_8D2080(a1, (__int64)v31, 4096, a5);
  v12 = (__m128i *)v31;
  if ( (*(unsigned int (__fastcall **)(__int64 *, _BYTE *, __int64, __int64, __int64, __int64, __int64))(*a1 + 184))(
         a1,
         v31,
         a4,
         a5,
         a6,
         a7,
         a1[3]) )
  {
    return 0;
  }
  v14 = *(_QWORD *)(a2 + 8);
  v29 = 0;
  v30 = 0;
  if ( !a3 && v14 > 1 )
    goto LABEL_16;
  v12 = &v30;
  if ( (unsigned int)sub_8DA4A0(a1, &v30, v31, &v29, 0) )
  {
LABEL_20:
    (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(*a1 + 40))(a1, v31, 0);
    return 0;
  }
  v14 = *(_QWORD *)(a2 + 8);
  if ( v14 <= 1 )
  {
    sub_8D9D00(&ptr, a5, &v30);
    v15 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *, _QWORD))(*a1 + 48);
    if ( !v28.m128i_i64[0] )
    {
      v16 = haystack;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_16:
    ptr = nullptr;
    v28 = 0;
    v20 = (void *)qalloc_or_throw(v14, v12->m128i_i8);
    v21 = *(const void **)a2;
    v28.m128i_i64[1] = v14;
    ptr = v20;
    memcpy(v20, v21, v14);
    v22 = *a1;
    v28.m128i_i64[0] = v14;
    v15 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *, _QWORD))(v22 + 48);
  }
  v16 = (const char *)ptr;
LABEL_9:
  v17 = v15(a1, v31, v16, 0);
  v18 = ptr;
  if ( v17 )
  {
    if ( ptr )
    {
      v28.m128i_i64[0] = 0;
      qfree(ptr);
    }
    goto LABEL_20;
  }
  if ( a3 )
  {
    v19 = _mm_loadu_si128(&v30);
    *(_QWORD *)a3 = v29;
    *(__m128i *)(a3 + 8) = v19;
  }
  if ( *(_QWORD *)(a2 + 8) <= 1u )
  {
    v23 = *(void **)a2;
    v24 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v18;
    v25 = _mm_loadu_si128(&v28);
    v18 = v23;
    ptr = v23;
    v28.m128i_i64[1] = v24;
    *(__m128i *)(a2 + 8) = v25;
    if ( !v23 )
      return 1;
    goto LABEL_14;
  }
  if ( v18 )
  {
LABEL_14:
    v28.m128i_i64[0] = 0;
    qfree(v18);
  }
  return 1;
}

