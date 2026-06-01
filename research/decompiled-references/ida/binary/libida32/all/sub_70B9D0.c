__int64 __fastcall sub_70B9D0(__m128i *a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  unsigned int v7; // ebx
  void (__fastcall *v9)(__m128i *, const __m128i *, __int64); // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rbp
  const char *v20; // rax
  const char *v21; // r12
  size_t v22; // rax
  size_t v23; // r13
  void *v24; // rdi
  size_t v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+0h] [rbp-128h] BYREF
  __int64 v29; // [rsp+4h] [rbp-124h]
  int v30; // [rsp+Ch] [rbp-11Ch]
  __m128i si128; // [rsp+10h] [rbp-118h]
  __int64 v32; // [rsp+20h] [rbp-108h]
  Elf64_Rela *v33; // [rsp+28h] [rbp-100h]
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v35; // [rsp+38h] [rbp-F0h]
  __m128i v36; // [rsp+48h] [rbp-E0h]
  const char *v37; // [rsp+58h] [rbp-D0h]
  __m128i v38; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+70h] [rbp-B8h]
  __int64 v40[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v42; // [rsp+C8h] [rbp-60h] BYREF
  __m128i v43; // [rsp+D8h] [rbp-50h] BYREF
  __m128i v44; // [rsp+E8h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+F8h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v40[0] = 0;
  if ( (unsigned __int8)sub_70B780((__int64)a1, v40)
    && (a1[39].m128i_i8[11] = 1, *(_BYTE *)(a2 + 635) = 1, v41 = 0, (unsigned __int8)sub_70B780(a2, &v41)) )
  {
    v9 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
    v39 = 0u;
    v38 = 0;
    if ( v9 )
    {
      v9(&v38, a4, 2);
      v10 = _mm_loadu_si128(a4 + 1);
    }
    else
    {
      v10 = 0;
    }
    v11 = _mm_loadu_si128(a1 + 4);
    a1[4] = _mm_load_si128(&v38);
    v12 = _mm_loadu_si128(a1 + 5);
    v38 = v11;
    v39 = v12;
    a1[5] = v10;
    if ( v12.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v38, &v38, 3);
    v30 = 3;
    v13 = _mm_add_epi64(_mm_add_epi64(_mm_loadu_si128(&v42), _mm_loadu_si128(&v43)), _mm_loadu_si128(&v44));
    v28 = 2;
    v37 = "[output stream]";
    v33 = &stru_40000;
    ptr = nullptr;
    v14 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384260);
    v35 = 0;
    v36 = _mm_unpacklo_epi64(
            _mm_loadl_epi64((const __m128i *)&off_2B0E5E8),
            (__m128i)(unsigned __int64)"[input stream]");
    ptr = (void *)qvector_reserve(&ptr, 0, 4, 1);
    memset((char *)ptr + v35, 0, 4 - v35);
    *(_QWORD *)&v35 = 4;
    *(_DWORD *)ptr = 4342857;
    v29 = 0x100000000LL;
    v32 = 0x4000000;
    if ( v14 > 0x4000000 )
    {
      v15 = v14;
      v16 = sub_814AF0(v41, v14);
    }
    else
    {
      v15 = -1;
      v16 = sub_814880(v41, -1, v14);
    }
    v19 = (void *)v16;
    if ( v16 )
    {
      v7 = ((__int64 (__fastcall *)(__m128i *, int *, __int64, __int64, __int64))sub_8022B0)(a1, &v28, v16, v40[0], a3);
    }
    else
    {
      v20 = (const char *)qstrerror(0xFFFFFFFFLL, v15, v17, v18);
      v21 = v20;
      if ( v20 && (v22 = strlen(v20), (v23 = v22) != 0) )
      {
        v24 = (void *)a1->m128i_i64[0];
        v25 = v22 + 1;
        if ( a1[1].m128i_i64[0] < v22 + 1 )
        {
          v27 = qvector_reserve(a1, a1->m128i_i64[0], v22 + 1, 1);
          a1->m128i_i64[0] = v27;
          v24 = (void *)v27;
        }
        a1->m128i_i64[1] = v25;
        memmove(v24, v21, v23);
        v26 = a1->m128i_i64[0];
        v7 = 0;
        *(_BYTE *)(v26 + v23) = 0;
      }
      else
      {
        a1->m128i_i64[1] = 0;
        v7 = 0;
      }
    }
    close_linput(v19);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

