void __fastcall sub_5AEFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  void *v12; // r15
  int v13; // r12d
  __int64 v14; // rbp
  void *v15; // r14
  __m128i v16; // xmm1
  void *v17; // rdi
  void *v18; // rdi
  __m128i v19; // xmm6
  __m128i v20; // xmm4
  void *v21; // r14
  int v22; // r13d
  __int64 v23; // rbp
  void *v24; // r15
  __m128i v25; // xmm1
  void *v26; // rdi
  void *v27; // rdi
  __m128i v28; // xmm5
  int v29; // eax
  void *v30; // r15
  int v31; // r13d
  __int64 v32; // rbp
  void *v33; // r14
  __m128i v34; // xmm1
  void *v35; // rdi
  void *v36; // rdi
  __m128i v37; // xmm6
  void *v38; // r12
  __m128i v39; // xmm1
  void *v40; // rdi
  void *v41; // rdi
  __m128i v42; // xmm4
  __m128i v43; // xmm7
  void *v44; // r14
  int v45; // r12d
  __int64 v46; // rbp
  void *v47; // r15
  __m128i si128; // xmm1
  void *v49; // rdi
  void *v50; // rdi
  __m128i v51; // xmm7
  void *v52; // r13
  __m128i v53; // xmm1
  void *v54; // rdi
  void *v55; // rdi
  __m128i v56; // xmm3
  __m128i v57; // [rsp+0h] [rbp-58h] BYREF
  __m128i v58[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( !*(_QWORD *)(a5 + 16) )
    goto LABEL_41;
  v9 = (*(__int64 (__fastcall **)(__int64))(a5 + 24))(a5);
  v10 = *(_QWORD *)(a5 + 16);
  if ( v9 < 0 )
  {
    if ( !v10 )
      goto LABEL_41;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a3, a4) < 0 )
    {
      v43 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v44 = *(void **)a1;
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v45 = *(_DWORD *)(a1 + 24);
      v46 = *(_QWORD *)(a1 + 32);
      v47 = *(void **)a3;
      si128 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_QWORD *)a3 = 0;
      *(_OWORD *)(a3 + 8) = 0;
      v49 = *(void **)a1;
      v57 = v43;
      if ( v49 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v58[0] = si128;
        qfree(v49);
        si128 = _mm_load_si128(v58);
      }
      *(_QWORD *)a1 = v47;
      *(__m128i *)(a1 + 8) = si128;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 32);
      v50 = *(void **)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)(a3 + 8) = 0;
        qfree(v50);
      }
      v51 = _mm_load_si128(&v57);
      *(_QWORD *)a3 = v44;
      *(_DWORD *)(a3 + 24) = v45;
      *(_QWORD *)(a3 + 32) = v46;
      *(__m128i *)(a3 + 8) = v51;
    }
    else
    {
      if ( !*(_QWORD *)(a5 + 16) )
        goto LABEL_41;
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a2, a4);
      v30 = *(void **)a1;
      v31 = *(_DWORD *)(a1 + 24);
      v32 = *(_QWORD *)(a1 + 32);
      v57 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      if ( v29 < 0 )
      {
        v38 = *(void **)a4;
        v39 = _mm_loadu_si128((const __m128i *)(a4 + 8));
        *(_QWORD *)a4 = 0;
        *(_OWORD *)(a4 + 8) = 0;
        v40 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v58[0] = v39;
          qfree(v40);
          v39 = _mm_load_si128(v58);
        }
        *(_QWORD *)a1 = v38;
        *(__m128i *)(a1 + 8) = v39;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 24);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a4 + 32);
        v41 = *(void **)a4;
        if ( *(_QWORD *)a4 )
        {
          *(_QWORD *)(a4 + 8) = 0;
          qfree(v41);
        }
        v42 = _mm_load_si128(&v57);
        *(_QWORD *)a4 = v30;
        *(_DWORD *)(a4 + 24) = v31;
        *(_QWORD *)(a4 + 32) = v32;
        *(__m128i *)(a4 + 8) = v42;
      }
      else
      {
        v33 = *(void **)a2;
        v34 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        *(_QWORD *)a2 = 0;
        *(_OWORD *)(a2 + 8) = 0;
        v35 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v58[0] = v34;
          qfree(v35);
          v34 = _mm_load_si128(v58);
        }
        *(_QWORD *)a1 = v33;
        *(__m128i *)(a1 + 8) = v34;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
        v36 = *(void **)a2;
        if ( *(_QWORD *)a2 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          qfree(v36);
        }
        v37 = _mm_load_si128(&v57);
        *(_QWORD *)a2 = v30;
        *(_DWORD *)(a2 + 24) = v31;
        *(_QWORD *)(a2 + 32) = v32;
        *(__m128i *)(a2 + 8) = v37;
      }
    }
  }
  else
  {
    if ( !v10 )
      goto LABEL_41;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a2, a4) >= 0 )
    {
      if ( *(_QWORD *)(a5 + 16) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a3, a4);
        v12 = *(void **)a1;
        v13 = *(_DWORD *)(a1 + 24);
        v14 = *(_QWORD *)(a1 + 32);
        v57 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        if ( v11 < 0 )
        {
          v52 = *(void **)a4;
          v53 = _mm_loadu_si128((const __m128i *)(a4 + 8));
          *(_QWORD *)a4 = 0;
          *(_OWORD *)(a4 + 8) = 0;
          v54 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            v58[0] = v53;
            qfree(v54);
            v53 = _mm_load_si128(v58);
          }
          *(_QWORD *)a1 = v52;
          *(__m128i *)(a1 + 8) = v53;
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 24);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(a4 + 32);
          v55 = *(void **)a4;
          if ( *(_QWORD *)a4 )
          {
            *(_QWORD *)(a4 + 8) = 0;
            qfree(v55);
          }
          v56 = _mm_load_si128(&v57);
          *(_QWORD *)a4 = v12;
          *(_DWORD *)(a4 + 24) = v13;
          *(_QWORD *)(a4 + 32) = v14;
          *(__m128i *)(a4 + 8) = v56;
        }
        else
        {
          v15 = *(void **)a3;
          v16 = _mm_loadu_si128((const __m128i *)(a3 + 8));
          *(_QWORD *)a3 = 0;
          *(_OWORD *)(a3 + 8) = 0;
          v17 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            v58[0] = v16;
            qfree(v17);
            v16 = _mm_load_si128(v58);
          }
          *(_QWORD *)a1 = v15;
          *(__m128i *)(a1 + 8) = v16;
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 24);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 32);
          v18 = *(void **)a3;
          if ( *(_QWORD *)a3 )
          {
            *(_QWORD *)(a3 + 8) = 0;
            qfree(v18);
          }
          v19 = _mm_load_si128(&v57);
          *(_QWORD *)a3 = v12;
          *(_DWORD *)(a3 + 24) = v13;
          *(_QWORD *)(a3 + 32) = v14;
          *(__m128i *)(a3 + 8) = v19;
        }
        return;
      }
LABEL_41:
      std::__throw_bad_function_call();
    }
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v21 = *(void **)a1;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v22 = *(_DWORD *)(a1 + 24);
    v23 = *(_QWORD *)(a1 + 32);
    v24 = *(void **)a2;
    v25 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = 0;
    *(_OWORD *)(a2 + 8) = 0;
    v26 = *(void **)a1;
    v57 = v20;
    if ( v26 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v58[0] = v25;
      qfree(v26);
      v25 = _mm_load_si128(v58);
    }
    *(_QWORD *)a1 = v24;
    *(__m128i *)(a1 + 8) = v25;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    v27 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v27);
    }
    v28 = _mm_load_si128(&v57);
    *(_QWORD *)a2 = v21;
    *(_DWORD *)(a2 + 24) = v22;
    *(_QWORD *)(a2 + 32) = v23;
    *(__m128i *)(a2 + 8) = v28;
  }
}
