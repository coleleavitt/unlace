__int64 __fastcall sub_5C840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  size_t v13; // r14
  __int64 (__fastcall *v14)(__int64 *, _BYTE *, const char *, _QWORD); // rax
  const char *v15; // rdx
  int v16; // eax
  void *v17; // rdi
  __m128i v18; // xmm0
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  void *ptr; // [rsp+10h] [rbp-1088h] BYREF
  __m128i v27; // [rsp+18h] [rbp-1080h] BYREF
  __int64 v28; // [rsp+30h] [rbp-1068h] BYREF
  __m128i v29; // [rsp+38h] [rbp-1060h] BYREF
  _BYTE v30[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v31; // [rsp+1058h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  sub_5C300(a1, (__int64)v30, 4096, a5);
  if ( (*(unsigned int (__fastcall **)(__int64 *, _BYTE *, __int64, __int64, __int64, __int64, __int64))(*a1 + 184))(
         a1,
         v30,
         a4,
         a5,
         a6,
         a7,
         a1[3]) )
  {
    return 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v28 = 0;
  v29 = 0;
  if ( !a3 && v13 > 1 )
    goto LABEL_16;
  if ( (unsigned int)sub_64910(a1, &v29, v30, &v28, 0) )
  {
LABEL_20:
    (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(*a1 + 40))(a1, v30, 0);
    return 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 <= 1 )
  {
    sub_64170(&ptr, a5, &v29);
    v14 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *, _QWORD))(*a1 + 48);
    if ( !v27.m128i_i64[0] )
    {
      v15 = haystack;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_16:
    ptr = nullptr;
    v27 = 0;
    v19 = (void *)sub_96030(v13);
    v20 = *(const void **)a2;
    v27.m128i_i64[1] = v13;
    ptr = v19;
    memcpy(v19, v20, v13);
    v21 = *a1;
    v27.m128i_i64[0] = v13;
    v14 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *, _QWORD))(v21 + 48);
  }
  v15 = (const char *)ptr;
LABEL_9:
  v16 = v14(a1, v30, v15, 0);
  v17 = ptr;
  if ( v16 )
  {
    if ( ptr )
    {
      v27.m128i_i64[0] = 0;
      j__free(ptr);
    }
    goto LABEL_20;
  }
  if ( a3 )
  {
    v18 = _mm_loadu_si128(&v29);
    *(_QWORD *)a3 = v28;
    *(__m128i *)(a3 + 8) = v18;
  }
  if ( *(_QWORD *)(a2 + 8) <= 1u )
  {
    v22 = *(void **)a2;
    v23 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v17;
    v24 = _mm_loadu_si128(&v27);
    v17 = v22;
    ptr = v22;
    v27.m128i_i64[1] = v23;
    *(__m128i *)(a2 + 8) = v24;
    if ( !v22 )
      return 1;
    goto LABEL_14;
  }
  if ( v17 )
  {
LABEL_14:
    v27.m128i_i64[0] = 0;
    j__free(v17);
  }
  return 1;
}

