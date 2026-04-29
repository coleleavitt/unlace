__m128i *__fastcall sub_59B80(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rax
  int v6; // edx
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __m128i *v10; // rsi
  __int64 v11; // rdx
  __m128i *v12; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // edx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // r13
  __m128i *v21; // rdi
  __int64 v22; // r12
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  char v25; // al
  __int64 v26; // rdi
  __m128i *v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // [rsp-1C4h] [rbp-1CCh]
  __m128i v38; // [rsp-1C0h] [rbp-1C8h] BYREF
  __int64 v39; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128i v40; // [rsp-1A8h] [rbp-1B0h] BYREF
  char v41; // [rsp-198h] [rbp-1A0h]
  __int128 v42; // [rsp-190h] [rbp-198h] BYREF
  __int64 v43; // [rsp-180h] [rbp-188h]
  __int64 v44; // [rsp-178h] [rbp-180h]
  __int64 v45; // [rsp-170h] [rbp-178h]
  __int64 v46; // [rsp-168h] [rbp-170h] BYREF
  unsigned __int16 v47; // [rsp-13Ah] [rbp-142h]
  char v48; // [rsp-117h] [rbp-11Fh]
  _QWORD v49[6]; // [rsp-28h] [rbp-30h] BYREF

  v4 = &v46;
  v49[0] = __readfsqword(0x28u);
  v42 = -1;
  v43 = -1;
  v44 = 0;
  v45 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v49 != v4 );
  if ( (int)decode_insn(&v42, a3, v49, 0.0) <= 0 )
    return nullptr;
  if ( v48 )
  {
    v6 = v47;
    v7 = v43;
    if ( v47 != 2 )
      goto LABEL_15;
  }
  else
  {
    v6 = HIWORD(v46);
    v7 = v43;
    if ( HIWORD(v46) != 2 )
      goto LABEL_15;
  }
  v8 = *(unsigned int *)(a1 + 288);
  if ( (unsigned int)v8 <= 9 )
  {
    v9 = 790;
    if ( _bittest64(&v9, v8) )
    {
      v10 = *(__m128i **)a2;
      *(_BYTE *)(a2 + 24) = 11;
      *(_QWORD *)(a2 + 8) = 0;
      v11 = *(_QWORD *)(a2 + 16);
      v39 = -1;
      v40.m128i_i64[0] = v7;
      v40.m128i_i32[2] = 0x200000;
      if ( &v39 < (__int64 *)v10 || &v39 >= &v10->m128i_i64[3 * v11] )
      {
        if ( !v11 )
        {
          v33 = qvector_reserve(a2, v10, 1, 24);
          v34 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v33;
          v10 = (__m128i *)(v33 + 24 * v34);
        }
        *v10 = _mm_load_si128((const __m128i *)&v39);
        v10[1].m128i_i64[0] = v40.m128i_i64[1];
      }
      else
      {
        if ( !v11 )
        {
          v35 = qvector_reserve(a2, v10, 1, 24);
          v36 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v35;
          v10 = (__m128i *)(v35 + 24 * v36);
        }
        v10->m128i_i64[0] = -1;
        v10->m128i_i64[1] = v7;
        v10[1].m128i_i32[0] = 0x200000;
      }
      ++*(_QWORD *)(a2 + 8);
      return *(__m128i **)a2;
    }
  }
LABEL_15:
  v14 = 0x10000;
  v15 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v15 <= 7 )
  {
    v14 = dword_7ADC0[v15];
    v16 = v14 | v6;
    if ( (_DWORD)v14 != 0x10000 )
      v14 = v16;
  }
  v17 = *(_QWORD **)(a1 + 336);
  v39 = 0;
  v18 = -1;
  v41 = 0;
  v40 = 0;
  v19 = *(__int64 (__fastcall **)(__int64, __int64))(*v17 + 16LL);
  v20 = *(_QWORD *)(*(_QWORD *)(v17[1] + 32LL) + 16LL) & v7;
  if ( v19 != sub_591A0 )
  {
    v37 = v14;
    v38.m128i_i64[0] = (__int64)v17;
    v31 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v19)(v17, v20, 0, -1);
    v14 = v37;
    v20 = v31;
    v18 = v32;
  }
  reg_finder_find(v17, &v39, v20, v18, v14, 0, 10);
  v21 = *(__m128i **)a2;
  v22 = v39;
  v39 = 0;
  v23 = _mm_loadu_si128(&v40);
  v40 = 0;
  if ( v21 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v38 = v23;
    qfree(v21, (const char *)&v39);
    v24 = _mm_load_si128(&v38);
    v25 = v41;
    *(_QWORD *)a2 = v22;
    v26 = v39;
    *(_BYTE *)(a2 + 24) = v25;
    *(__m128i *)(a2 + 8) = v24;
    if ( v26 )
    {
      v40.m128i_i64[0] = 0;
      qfree(v26, (const char *)&v39);
      v25 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v25 = v41;
    *(_QWORD *)a2 = v22;
    *(__m128i *)(a2 + 8) = v23;
    *(_BYTE *)(a2 + 24) = v25;
  }
  if ( (unsigned __int8)(v25 - 10) > 1u )
    return nullptr;
  v27 = *(__m128i **)a2;
  if ( !(24LL * *(_QWORD *)(a2 + 8)) )
    return nullptr;
  v12 = nullptr;
  v28 = -1;
  do
  {
    v29 = v27->m128i_u64[1];
    v30 = 2 * (v29 - a3);
    if ( v29 < a3 )
      v30 = a3 - v29;
    if ( v30 < v28 )
    {
      v28 = v30;
      v12 = v27;
    }
    v27 = (__m128i *)((char *)v27 + 24);
  }
  while ( (__m128i *)(*(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8)) != v27 );
  return v12;
}
