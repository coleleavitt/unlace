unsigned __int64 __fastcall sub_4BF020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  unsigned __int32 v24; // ebp
  __m128i v25; // xmm3
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int32 v29; // edi
  void *v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // rax
  int v36; // ecx
  __m128i v37; // xmm4
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v41; // rdi
  __m128i *v42; // r14
  void *v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // r15
  __m128i v46; // xmm0
  void *v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rax
  __m128i v51; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v52; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+20h] [rbp-D8h]
  __int64 v54; // [rsp+28h] [rbp-D0h]
  __m128i v55; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-B8h]
  int v57; // [rsp+4Ch] [rbp-ACh]
  __m128i v58; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v59; // [rsp+60h] [rbp-98h] BYREF
  int v60; // [rsp+70h] [rbp-88h]
  __int64 v61; // [rsp+78h] [rbp-80h]
  __int64 v62; // [rsp+80h] [rbp-78h]
  __m128i v63; // [rsp+88h] [rbp-70h]
  __m128i v64; // [rsp+98h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+B8h] [rbp-40h]

  v5 = (a3 - 1) / 2;
  v53 = a2;
  v54 = a3;
  v66 = __readfsqword(0x28u);
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
        v51.m128i_i64[0] = v11;
        v52 = v12;
        qfree(v13);
        v12 = _mm_load_si128(&v52);
        v11 = v51.m128i_i64[0];
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
    v18 = v53;
    v19 = a1 + 96 * v53;
  }
  if ( (v54 & 1) == 0 && (v54 - 2) / 2 == v18 )
  {
    v48 = v18 + 1;
    v49 = 2 * (v18 + 1);
    v50 = v49 + 4 * v48;
    v18 = v49 - 1;
    sub_4B60D0((__m128i *)v19, a1 + 32 * v50 - 96);
    v19 = a1 + 96 * v18;
  }
  v20 = *(_DWORD *)(a4 + 32);
  v21 = *(_QWORD *)(a4 + 40);
  v58 = _mm_loadu_si128((const __m128i *)a4);
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v60 = v20;
  v54 = v21;
  v59 = v22;
  if ( v21 )
    v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v23 = *(_QWORD *)(a4 + 48);
  v24 = *(_DWORD *)(a4 + 80);
  *(_QWORD *)(a4 + 48) = 0;
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  *(_OWORD *)(a4 + 56) = 0;
  v26 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  v56 = v23;
  v62 = v23;
  v27 = *(_QWORD *)(a4 + 72);
  v55 = v25;
  v52.m128i_i64[0] = v27;
  LODWORD(v27) = *(_DWORD *)(a4 + 88);
  v63 = v25;
  v57 = v27;
  v65 = v27;
  v64 = v26;
  v28 = (v18 - 1) / 2;
  if ( v18 > v53 )
  {
    while ( 1 )
    {
      v19 = a1 + 96 * v28;
      v29 = *(_DWORD *)(v19 + 80);
      if ( v29 >= v24 && (v24 < v29 || *(_QWORD *)(v19 + 72) >= v52.m128i_i64[0]) )
        break;
      v41 = 96 * v18;
      v42 = (__m128i *)(a1 + 96 * v18);
      if ( 96 * v28 != v41 )
      {
        v43 = (void *)v42[2].m128i_i64[1];
        if ( v43 )
        {
          qfree(v43);
          v42[2].m128i_i64[1] = 0;
        }
        *v42 = _mm_loadu_si128((const __m128i *)v19);
        v42[1] = _mm_loadu_si128((const __m128i *)(v19 + 16));
        v42[2].m128i_i32[0] = *(_DWORD *)(v19 + 32);
        v44 = *(_QWORD *)(v19 + 40);
        if ( v44 )
          v42[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = *(_QWORD *)(v19 + 48);
      v46 = _mm_loadu_si128((const __m128i *)(v19 + 56));
      *(_QWORD *)(v19 + 48) = 0;
      *(_OWORD *)(v19 + 56) = 0;
      v47 = (void *)v42[3].m128i_i64[0];
      if ( v47 )
      {
        v42[3].m128i_i64[1] = 0;
        v51 = v46;
        qfree(v47);
        v46 = _mm_load_si128(&v51);
      }
      v42[3].m128i_i64[0] = v45;
      *(__m128i *)((char *)v42 + 56) = v46;
      v42[4].m128i_i64[1] = *(_QWORD *)(v19 + 72);
      v42[5].m128i_i32[0] = *(_DWORD *)(v19 + 80);
      v42[5].m128i_i32[2] = *(_DWORD *)(v19 + 88);
      v18 = v28;
      if ( v53 >= v28 )
        goto LABEL_26;
      v28 = (v28 - 1) / 2;
    }
    v19 = a1 + 96 * v18;
  }
LABEL_26:
  v30 = *(void **)(v19 + 40);
  if ( v30 )
  {
    qfree(v30);
    *(_QWORD *)(v19 + 40) = 0;
  }
  v31 = v60;
  v32 = v54;
  *(__m128i *)v19 = _mm_load_si128(&v58);
  v33 = _mm_load_si128(&v59);
  *(_DWORD *)(v19 + 32) = v31;
  *(__m128i *)(v19 + 16) = v33;
  if ( v32 )
    *(_QWORD *)(v19 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v34 = *(void **)(v19 + 48);
  v62 = 0;
  v63 = 0;
  if ( v34 )
  {
    *(_QWORD *)(v19 + 56) = 0;
    qfree(v34);
  }
  v35 = v56;
  v36 = v57;
  *(_DWORD *)(v19 + 80) = v24;
  v37 = _mm_load_si128(&v55);
  v64.m128i_i32[2] = v24;
  *(_QWORD *)(v19 + 48) = v35;
  v38 = v52.m128i_i64[0];
  *(_DWORD *)(v19 + 88) = v36;
  v39 = v54;
  *(_QWORD *)(v19 + 72) = v38;
  *(__m128i *)(v19 + 56) = v37;
  v64.m128i_i64[0] = v38;
  v61 = v39;
  sub_4BED10(&v58);
  return v66 - __readfsqword(0x28u);
}
