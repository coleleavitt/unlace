unsigned __int64 __fastcall sub_4A85B0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __m128i *v8; // r15
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // r12
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rax
  unsigned __int32 v25; // ebp
  __m128i v26; // xmm3
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int32 v30; // edi
  void *v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm4
  unsigned __int64 v34; // rax
  __int64 v36; // rdi
  __m128i *v37; // r14
  void *v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // r13
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rax
  __m128i v46; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v47; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+28h] [rbp-D0h]
  __m128i v50; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-ACh]
  __m128i v53[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v54; // [rsp+70h] [rbp-88h]
  __int64 v55; // [rsp+78h] [rbp-80h]
  __int64 v56; // [rsp+80h] [rbp-78h]
  __m128i v57; // [rsp+88h] [rbp-70h]
  __m128i v58; // [rsp+98h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-40h]

  v5 = (__int64)(a3 - 1) / 2;
  v48 = a2;
  v49 = a3;
  v60 = __readfsqword(0x28u);
  if ( a2 < v5 )
  {
    while ( 1 )
    {
      v18 = 2 * (a2 + 1);
      v14 = 192 * (a2 + 1);
      v15 = a1 + v14 - 96;
      v19 = a1 + v14;
      v16 = *(_DWORD *)(a1 + v14 + 80);
      v17 = *(_DWORD *)(v15 + 80);
      if ( v16 < v17 || v17 >= v16 && *(_QWORD *)(v19 + 72) < *(_QWORD *)(v15 + 72) )
      {
        --v18;
        v14 = 96 * v18;
        v19 = a1 + 96 * v18;
      }
      v7 = 96 * a2;
      v8 = (__m128i *)(a1 + v7);
      if ( v7 != v14 )
      {
        v9 = (void *)v8[2].m128i_i64[1];
        if ( v9 )
        {
          qfree(v9);
          v8[2].m128i_i64[1] = 0;
        }
        *v8 = _mm_loadu_si128((const __m128i *)v19);
        v8[1] = _mm_loadu_si128((const __m128i *)(v19 + 16));
        v8[2].m128i_i32[0] = *(_DWORD *)(v19 + 32);
        v10 = *(_QWORD *)(v19 + 40);
        if ( v10 )
          v8[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = *(_QWORD *)(v19 + 48);
      v12 = _mm_loadu_si128((const __m128i *)(v19 + 56));
      *(_QWORD *)(v19 + 48) = 0;
      *(_OWORD *)(v19 + 56) = 0;
      v13 = (void *)v8[3].m128i_i64[0];
      if ( v13 )
      {
        v8[3].m128i_i64[1] = 0;
        v47.m128i_i64[0] = v11;
        v46 = v12;
        qfree(v13);
        v11 = v47.m128i_i64[0];
        v12 = _mm_load_si128(&v46);
      }
      v8[3].m128i_i64[0] = v11;
      *(__m128i *)((char *)v8 + 56) = v12;
      v8[4].m128i_i64[1] = *(_QWORD *)(v19 + 72);
      v8[5].m128i_i32[0] = *(_DWORD *)(v19 + 80);
      v8[5].m128i_i32[2] = *(_DWORD *)(v19 + 88);
      if ( v18 >= v5 )
        break;
      a2 = v18;
    }
  }
  else
  {
    v18 = v48;
    v19 = a1 + 96 * v48;
  }
  if ( (v49 & 1) == 0 && (__int64)(v49 - 2) / 2 == v18 )
  {
    v43 = v18 + 1;
    v44 = 2 * (v18 + 1);
    v45 = v44 + 4 * v43;
    v18 = v44 - 1;
    sub_4A0B90((__m128i *)v19, a1 + 32 * v45 - 96);
    v19 = a1 + 96 * v18;
  }
  v20 = _mm_loadu_si128((const __m128i *)a4);
  v21 = *(_DWORD *)(a4 + 32);
  v55 = 0;
  v22 = *(_QWORD *)(a4 + 40);
  v53[0] = v20;
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v54 = v21;
  v53[1] = v23;
  if ( v22 )
    v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v24 = *(_QWORD *)(a4 + 48);
  v25 = *(_DWORD *)(a4 + 80);
  *(_QWORD *)(a4 + 48) = 0;
  v26 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  *(_OWORD *)(a4 + 56) = 0;
  v27 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  v51 = v24;
  v56 = v24;
  v28 = *(_QWORD *)(a4 + 72);
  v50 = v26;
  v49 = v28;
  LODWORD(v28) = *(_DWORD *)(a4 + 88);
  v57 = v26;
  v52 = v28;
  v59 = v28;
  v58 = v27;
  v29 = (v18 - 1) / 2;
  if ( v18 > v48 )
  {
    v46.m128i_i64[0] = (__int64)v53;
    while ( 1 )
    {
      v19 = a1 + 96 * v29;
      v30 = *(_DWORD *)(v19 + 80);
      if ( v30 >= v25 && (v25 < v30 || *(_QWORD *)(v19 + 72) >= v49) )
        break;
      v36 = 96 * v18;
      v37 = (__m128i *)(a1 + 96 * v18);
      if ( 96 * v29 != v36 )
      {
        v38 = (void *)v37[2].m128i_i64[1];
        if ( v38 )
        {
          qfree(v38);
          v37[2].m128i_i64[1] = 0;
        }
        *v37 = _mm_loadu_si128((const __m128i *)v19);
        v37[1] = _mm_loadu_si128((const __m128i *)(v19 + 16));
        v37[2].m128i_i32[0] = *(_DWORD *)(v19 + 32);
        v39 = *(_QWORD *)(v19 + 40);
        if ( v39 )
          v37[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = *(_QWORD *)(v19 + 48);
      v41 = _mm_loadu_si128((const __m128i *)(v19 + 56));
      *(_QWORD *)(v19 + 48) = 0;
      *(_OWORD *)(v19 + 56) = 0;
      v42 = (void *)v37[3].m128i_i64[0];
      if ( v42 )
      {
        v37[3].m128i_i64[1] = 0;
        v47 = v41;
        qfree(v42);
        v41 = _mm_load_si128(&v47);
      }
      v37[3].m128i_i64[0] = v40;
      *(__m128i *)((char *)v37 + 56) = v41;
      v37[4].m128i_i64[1] = *(_QWORD *)(v19 + 72);
      v37[5].m128i_i32[0] = *(_DWORD *)(v19 + 80);
      v37[5].m128i_i32[2] = *(_DWORD *)(v19 + 88);
      v18 = v29;
      if ( v48 >= v29 )
        goto LABEL_27;
      v29 = (v29 - 1) / 2;
    }
    v19 = a1 + 96 * v18;
  }
LABEL_27:
  v58.m128i_i32[2] = v25;
  v58.m128i_i64[0] = v49;
  sub_49FBF0((__m128i *)v19, v53);
  v31 = *(void **)(v19 + 48);
  v56 = 0;
  v57 = 0;
  if ( v31 )
  {
    *(_QWORD *)(v19 + 56) = 0;
    qfree(v31);
  }
  v32 = v51;
  v33 = _mm_load_si128(&v50);
  *(_DWORD *)(v19 + 80) = v25;
  *(_QWORD *)(v19 + 48) = v32;
  v34 = v49;
  *(__m128i *)(v19 + 56) = v33;
  *(_QWORD *)(v19 + 72) = v34;
  *(_DWORD *)(v19 + 88) = v52;
  sub_4A82A0(v53);
  return v60 - __readfsqword(0x28u);
}

