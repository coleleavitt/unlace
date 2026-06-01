// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_912070(
        const void *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        const __m128i *a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, size_t),
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r14
  __int64 v12; // r9
  __m128i v13; // xmm7
  __m128i v14; // xmm7
  __m128i si128; // xmm5
  int v16; // r15d
  __m128i v17; // xmm6
  size_t v18; // rdx
  char *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  size_t v22; // rdx
  unsigned __int64 v23; // rdx
  char *v24; // rax
  unsigned __int64 v25; // rsi
  __int32 v27; // eax
  _QWORD *v28; // rdi
  size_t v30; // [rsp+10h] [rbp-188h]
  size_t v31; // [rsp+18h] [rbp-180h]
  __m128i v32; // [rsp+20h] [rbp-178h] BYREF
  __int64 v33; // [rsp+30h] [rbp-168h]
  __int32 v34; // [rsp+38h] [rbp-160h]
  __m128i v35[2]; // [rsp+40h] [rbp-158h] BYREF
  __m128i v36[2]; // [rsp+60h] [rbp-138h] BYREF
  __m256i v37; // [rsp+80h] [rbp-118h] BYREF
  __m128i v38; // [rsp+A0h] [rbp-F8h]
  __m128i v39; // [rsp+B0h] [rbp-E8h]
  __m128i v40; // [rsp+C0h] [rbp-D8h]
  __m128i v41; // [rsp+D0h] [rbp-C8h]
  __m128i v42; // [rsp+E0h] [rbp-B8h]
  __m128i v43; // [rsp+F0h] [rbp-A8h]
  __m128i v44; // [rsp+100h] [rbp-98h]
  __m128i v45; // [rsp+110h] [rbp-88h]
  __m128i v46; // [rsp+120h] [rbp-78h]
  __m128i v47; // [rsp+130h] [rbp-68h]
  __m128i v48; // [rsp+140h] [rbp-58h]
  __int64 v49; // [rsp+150h] [rbp-48h]
  unsigned __int64 v50; // [rsp+158h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  *(__m128i *)v37.m256i_i8 = _mm_loadu_si128(a5);
  *(__m128i *)&v37.m256i_u64[2] = _mm_loadu_si128(a5 + 1);
  v38 = _mm_loadu_si128(a5 + 2);
  v39 = _mm_loadu_si128(a5 + 3);
  v40 = _mm_loadu_si128(a5 + 4);
  v41 = _mm_loadu_si128(a5 + 5);
  v42 = _mm_loadu_si128(a5 + 6);
  v43 = _mm_loadu_si128(a5 + 7);
  v44 = _mm_loadu_si128(a5 + 8);
  v45 = _mm_loadu_si128(a5 + 9);
  v49 = a5[13].m128i_i64[0];
  v10 = 0;
  v46 = _mm_loadu_si128(a5 + 10);
  v47 = _mm_loadu_si128(a5 + 11);
  v48 = _mm_loadu_si128(a5 + 12);
  if ( (a7 == nullptr) == (a8 == 0) )
  {
    if ( v43.m128i_i32[2] )
    {
      sub_911DC0(v36, v38.m128i_u32[3], 0, a2, 2, a6);
      v27 = v36[0].m128i_i32[2];
      if ( (unsigned int)(v36[1].m128i_i32[2] - 3) < 3 )
        v27 = v36[0].m128i_i32[2] + 2;
      v35[0].m128i_i64[0] = v36[0].m128i_i64[0];
      v35[0].m128i_i32[2] = v27;
      *(__m128i *)((char *)v35 + 12) = *(__m128i *)((char *)v36 + 12);
      sub_908EC0(v35, &v37.m256i_i32[1]);
    }
    else
    {
      sub_911F80(&v32, &v37, 0xFFFFFFFFFFFFFFFFLL, a2, 2, a6);
      v13 = _mm_loadu_si128(&v32);
      v35[1].m128i_i64[0] = v33;
      v35[0] = v13;
      v35[1].m128i_i32[2] = v34;
    }
    if ( (unsigned int)(v35[1].m128i_i32[2] - 3) > 2
      || v35[0].m128i_i32[2] <= (unsigned __int32)v35[0].m128i_i32[1]
      || v35[0].m128i_i32[1] > 0x18u )
    {
      v43.m128i_i32[2] = 0;
      sub_911F80(&v32, &v37, 0xFFFFFFFFFFFFFFFFLL, a2, 2, v12);
      v14 = _mm_loadu_si128(&v32);
      v35[1].m128i_i64[0] = v33;
      v35[0] = v14;
      v35[1].m128i_i32[2] = v34;
    }
    si128 = _mm_load_si128(v35);
    v16 = v45.m128i_i32[0];
    *(__int64 *)((char *)&v37.m256i_i64[2] + 4) = v35[1].m128i_i64[0];
    *(__m128i *)((char *)v37.m256i_i64 + 4) = si128;
    v37.m256i_i32[7] = v35[1].m128i_i32[2];
    if ( !v45.m128i_i32[0] )
      v16 = sub_909FF0(v35, &v35[1].m128i_i32[2]);
    v17 = _mm_loadu_si128((const __m128i *)((char *)v37.m256i_i64 + 4));
    v45.m128i_i32[0] = v16;
    v36[1].m128i_i64[0] = *(__int64 *)((char *)&v37.m256i_i64[2] + 4);
    v36[0] = v17;
    v36[1].m128i_i32[2] = v37.m256i_i32[7];
    v18 = sub_90A1C0((unsigned int *)v36, v16, v43.m128i_i32[2], 0) + 14784;
    if ( a3 != 1 )
      v18 += (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a7 )
    {
      v31 = v18;
      v19 = (char *)a7(a9, v18);
      v21 = a9;
      v22 = v31;
    }
    else
    {
      v30 = v18;
      v19 = (char *)malloc(v18);
      v21 = a9;
      v22 = v30;
    }
    v10 = (__int64)v19;
    if ( v19 )
    {
      v23 = (unsigned __int64)&v19[v22];
      v24 = v19 + 6080;
      v25 = v23 & 0xFFFFFFFFFFFFFFC0LL;
      if ( v23 < v10 + 6080 )
      {
        qword_28 = v23;
        qword_48 = v23 & 0xFFFFFFFFFFFFFFC0LL;
        qword_50 = v23 & 0xFFFFFFFFFFFFFFC0LL;
        LOBYTE(qword_58) = 1;
        HIDWORD(qword_58) = 0;
        qword_60 = 0;
        *(_QWORD *)&elf_gnu_hash_bucket[828] = a7;
        *(_QWORD *)&elf_gnu_hash_bucket[830] = a8;
        *(_QWORD *)&elf_gnu_hash_bucket[832] = v21;
        elf_gnu_hash_bucket[835] = 0;
        elf_gnu_hash_bucket[836] = v16;
        qword_20 = v10;
        *(_QWORD *)&dword_30 = v10;
        *(_QWORD *)&word_38 = v10;
        *(_QWORD *)&dword_40 = v10;
        v10 = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v23;
        *(_QWORD *)(v10 + 48) = v24;
        *(_QWORD *)(v10 + 56) = v24;
        *(_QWORD *)(v10 + 64) = v24;
        *(_QWORD *)(v10 + 72) = v25;
        *(_QWORD *)(v10 + 80) = v25;
        *(_QWORD *)(v10 + 6056) = v21;
        *(_QWORD *)(v10 + 32) = v10;
        *(_BYTE *)(v10 + 88) = 0;
        *(_DWORD *)(v10 + 92) = 0;
        *(_QWORD *)(v10 + 96) = 0;
        *(_QWORD *)(v10 + 6040) = a7;
        *(_QWORD *)(v10 + 6048) = a8;
        *(_DWORD *)(v10 + 6068) = 0;
        *(_DWORD *)(v10 + 6072) = v16;
        if ( sub_910380(
               v10,
               a1,
               a2,
               a3,
               a4,
               v20,
               v37.m256i_i32[0],
               v37.m256i_i64[1],
               *(__int128 *)&v37.m256i_u64[2],
               v38.m128i_i32[0],
               v38.m128i_i64[1],
               v39.m128i_i64[0],
               v39.m128i_i64[1],
               v40.m128i_i64[0],
               v40.m128i_i64[1],
               v41.m128i_i64[0],
               v41.m128i_i64[1],
               v42.m128i_i64[0],
               v42.m128i_i64[1],
               v43.m128i_i64[0],
               v43.m128i_i32[2],
               v44.m128i_i64[0],
               v44.m128i_i64[1],
               v45.m128i_i32[0]) <= 0xFFFFFFFFFFFFFF88LL )
          return v10;
      }
    }
    v28 = (_QWORD *)v10;
    v10 = 0;
    sub_910820(v28);
  }
  return v10;
}
