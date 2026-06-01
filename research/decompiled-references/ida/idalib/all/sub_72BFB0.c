__int64 __fastcall sub_72BFB0(__m128i *a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  unsigned int v7; // ebx
  void (__fastcall *v9)(__m128i *, const __m128i *, __int64); // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  void *v16; // rbp
  const char *v17; // rax
  const char *v18; // r12
  size_t v19; // rax
  size_t v20; // r13
  void *v21; // rdi
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+0h] [rbp-128h] BYREF
  __int64 v26; // [rsp+4h] [rbp-124h]
  int v27; // [rsp+Ch] [rbp-11Ch]
  __m128i si128; // [rsp+10h] [rbp-118h]
  __int64 v29; // [rsp+20h] [rbp-108h]
  __int64 v30; // [rsp+28h] [rbp-100h]
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-F0h]
  __m128i v33; // [rsp+48h] [rbp-E0h]
  const char *v34; // [rsp+58h] [rbp-D0h]
  __m128i v35; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+70h] [rbp-B8h]
  __int64 v37[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v39; // [rsp+C8h] [rbp-60h] BYREF
  __m128i v40; // [rsp+D8h] [rbp-50h] BYREF
  __m128i v41; // [rsp+E8h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+F8h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v37[0] = 0;
  if ( (unsigned __int8)sub_72BD60((__int64)a1, v37)
    && (a1[39].m128i_i8[11] = 1, *(_BYTE *)(a2 + 635) = 1, v38 = 0, (unsigned __int8)sub_72BD60(a2, &v38)) )
  {
    v9 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
    v36 = 0u;
    v35 = 0;
    if ( v9 )
    {
      v9(&v35, a4, 2);
      v10 = _mm_loadu_si128(a4 + 1);
    }
    else
    {
      v10 = 0;
    }
    v11 = _mm_loadu_si128(a1 + 4);
    a1[4] = _mm_load_si128(&v35);
    v12 = _mm_loadu_si128(a1 + 5);
    v35 = v11;
    v36 = v12;
    a1[5] = v10;
    if ( v12.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v35, &v35, 3);
    v27 = 3;
    v13 = _mm_add_epi64(_mm_add_epi64(_mm_loadu_si128(&v39), _mm_loadu_si128(&v40)), _mm_loadu_si128(&v41));
    v25 = 2;
    v34 = "[output stream]";
    v30 = 0x40000;
    ptr = nullptr;
    v14 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8290);
    v32 = 0;
    v33 = _mm_unpacklo_epi64(
            _mm_loadl_epi64((const __m128i *)&off_2B38588),
            (__m128i)(unsigned __int64)"[input stream]");
    ptr = (void *)qvector_reserve(&ptr, 0, 4, 1);
    memset((char *)ptr + v32, 0, 4 - v32);
    *(_QWORD *)&v32 = 4;
    *(_DWORD *)ptr = 4342857;
    v26 = 0x100000000LL;
    v29 = 0x4000000;
    if ( v14 > 0x4000000 )
      v15 = sub_837EB0(v38, v14);
    else
      v15 = sub_837C40(v38, -1, v14);
    v16 = (void *)v15;
    if ( v15 )
    {
      v7 = ((__int64 (__fastcall *)(__m128i *, int *, __int64, __int64, __int64))sub_8255F0)(a1, &v25, v15, v37[0], a3);
    }
    else
    {
      v17 = (const char *)qstrerror(0xFFFFFFFFLL);
      v18 = v17;
      if ( v17 && (v19 = strlen(v17), (v20 = v19) != 0) )
      {
        v21 = (void *)a1->m128i_i64[0];
        v22 = v19 + 1;
        if ( a1[1].m128i_i64[0] < v19 + 1 )
        {
          v24 = qvector_reserve(a1, a1->m128i_i64[0], v19 + 1, 1);
          a1->m128i_i64[0] = v24;
          v21 = (void *)v24;
        }
        a1->m128i_i64[1] = v22;
        memmove(v21, v18, v20);
        v23 = a1->m128i_i64[0];
        v7 = 0;
        *(_BYTE *)(v23 + v20) = 0;
      }
      else
      {
        a1->m128i_i64[1] = 0;
        v7 = 0;
      }
    }
    close_linput(v16);
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
