__int64 __fastcall sub_58700(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rax
  unsigned int v9; // ebx
  void (*v10)(void); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 i; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // rdi
  bool v40; // cf
  __int64 *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // r15
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __int64 v50; // rsi
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // [rsp+8h] [rbp-70h]
  __int64 v57; // [rsp+8h] [rbp-70h]
  unsigned int v58; // [rsp+10h] [rbp-68h]
  __int64 v59; // [rsp+10h] [rbp-68h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  __int64 v61; // [rsp+18h] [rbp-60h]
  void *v62; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v63[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a2;
  v63[1] = __readfsqword(0x28u);
  if ( a2[1] == v2 )
  {
    v41 = *(__int64 **)(a1 + 600);
    v42 = *v41;
    if ( *v41 )
    {
      v41[1] = 0;
      qfree(v42);
      *v41 = 0;
      v41[2] = 0;
    }
    return 0;
  }
  else
  {
    sub_585C0((_QWORD *)a1);
    (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 608) + 24LL))(&v62, *(_QWORD *)(a1 + 608), 3);
    if ( v62
      && (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v62 + 24LL))(v62)
      && (unsigned __int8)sub_55960((_QWORD *)a1, &v62) )
    {
      v12 = *(_QWORD *)(a1 + 632);
      v13 = v12 + 40LL * *(_QWORD *)(a1 + 640);
      if ( v13 != v12 )
      {
        if ( ((40 * *(_BYTE *)(a1 + 640)) & 8) == 0 || (*(_DWORD *)(v12 + 12) = -1, v12 += 40, v12 != v13) )
        {
          do
          {
            *(_DWORD *)(v12 + 12) = -1;
            v12 += 80;
            *(_DWORD *)(v12 - 28) = -1;
          }
          while ( v12 != v13 );
        }
      }
      netnode_check(v63, "$ COFF secaddr", 0, 0);
      for ( i = netnode_supfirst(v63[0], 65); ; i = netnode_supnext(v63[0], v17, 65) )
      {
        v17 = i;
        if ( i == -1 )
          break;
        if ( i )
        {
          v15 = netnode_altval(v63[0], i, 65);
          if ( v17 < *(_QWORD *)(a1 + 640) )
          {
            v16 = *(_QWORD *)(a1 + 536);
            if ( v15 >= v16 )
              *(_DWORD *)(*(_QWORD *)(a1 + 632) + 8 * (5 * v17 - 5) + 12) = v15 - v16;
          }
        }
      }
      v18 = *(_QWORD *)(a1 + 160);
      v60 = a1 + 144;
      v19 = *(_QWORD *)(a1 + 152);
      if ( v18 < v19 + 1 )
      {
        v27 = qvector_reserve(v60, 0, v19 + 1, 120);
        v28 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)(a1 + 160) = v18;
        v56 = v27;
        v59 = v28;
        v29 = *(__int64 **)(a1 + 144);
        v30 = *(_QWORD *)(a1 + 152) - 1LL;
        if ( v30 >= 0 )
        {
          v31 = v27;
          do
          {
            v32 = *v29;
            v33 = _mm_loadu_si128((const __m128i *)(v29 + 1));
            *v29 = 0;
            *(_OWORD *)(v29 + 1) = 0;
            *(_QWORD *)v31 = v32;
            *(__m128i *)(v31 + 8) = v33;
            v34 = v29[3];
            v35 = _mm_loadu_si128((const __m128i *)v29 + 2);
            v29[3] = 0;
            *(_QWORD *)(v31 + 24) = v34;
            *(__m128i *)(v31 + 32) = v35;
            v36 = _mm_loadu_si128((const __m128i *)v29 + 3);
            LODWORD(v34) = *((_DWORD *)v29 + 28);
            v29[5] = 0;
            *(__m128i *)(v31 + 48) = v36;
            v37 = _mm_loadu_si128((const __m128i *)v29 + 4);
            *(_DWORD *)(v31 + 112) = v34;
            *(__m128i *)(v31 + 64) = v37;
            *(__m128i *)(v31 + 80) = _mm_loadu_si128((const __m128i *)v29 + 5);
            *(__m128i *)(v31 + 96) = _mm_loadu_si128((const __m128i *)v29 + 6);
            v38 = v29[3];
            if ( v38 )
            {
              v29[4] = 0;
              qfree(v38);
            }
            v39 = *v29;
            if ( *v29 )
            {
              v29[1] = 0;
              qfree(v39);
            }
            v29 += 15;
            v31 += 120;
            v40 = v30-- == 0;
          }
          while ( !v40 );
          v29 = *(__int64 **)(a1 + 144);
        }
        qfree(v29);
        *(_QWORD *)(a1 + 144) = v56;
        *(_QWORD *)(a1 + 160) = v59;
        v19 = *(_QWORD *)(a1 + 152);
      }
      else
      {
        v56 = *(_QWORD *)(a1 + 144);
      }
      v20 = v56 + 120 * v19;
      *(_OWORD *)(v20 + 8) = 0;
      *(_OWORD *)(v20 + 32) = 0;
      *(_QWORD *)v20 = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_DWORD *)(v20 + 112) = -1;
      *(_OWORD *)(v20 + 48) = 0;
      *(_OWORD *)(v20 + 64) = 0;
      *(_OWORD *)(v20 + 80) = 0;
      *(_OWORD *)(v20 + 96) = 0;
      v21 = *(_QWORD *)(a1 + 152);
      v22 = *(_QWORD *)(a1 + 160);
      v23 = v21 + 1;
      v24 = v21 + 2;
      *(_QWORD *)(a1 + 152) = v23;
      v58 = v23;
      if ( v22 < v24 )
      {
        v43 = qvector_reserve(v60, 0, v24, 120);
        v44 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)(a1 + 160) = v22;
        v57 = v43;
        v61 = v44;
        v45 = *(__int64 **)(a1 + 144);
        v46 = *(_QWORD *)(a1 + 152) - 1LL;
        if ( v46 >= 0 )
        {
          v47 = v43;
          do
          {
            v48 = *v45;
            v49 = _mm_loadu_si128((const __m128i *)(v45 + 1));
            *v45 = 0;
            *(_OWORD *)(v45 + 1) = 0;
            *(_QWORD *)v47 = v48;
            *(__m128i *)(v47 + 8) = v49;
            v50 = v45[3];
            v51 = _mm_loadu_si128((const __m128i *)v45 + 2);
            v45[3] = 0;
            *(_QWORD *)(v47 + 24) = v50;
            *(__m128i *)(v47 + 32) = v51;
            v52 = _mm_loadu_si128((const __m128i *)v45 + 3);
            LODWORD(v50) = *((_DWORD *)v45 + 28);
            v45[5] = 0;
            *(__m128i *)(v47 + 48) = v52;
            v53 = _mm_loadu_si128((const __m128i *)v45 + 4);
            *(_DWORD *)(v47 + 112) = v50;
            *(__m128i *)(v47 + 64) = v53;
            *(__m128i *)(v47 + 80) = _mm_loadu_si128((const __m128i *)v45 + 5);
            *(__m128i *)(v47 + 96) = _mm_loadu_si128((const __m128i *)v45 + 6);
            v54 = v45[3];
            if ( v54 )
            {
              v45[4] = 0;
              qfree(v54);
            }
            v55 = *v45;
            if ( *v45 )
            {
              v45[1] = 0;
              qfree(v55);
            }
            v45 += 15;
            v47 += 120;
            v40 = v46-- == 0;
          }
          while ( !v40 );
          v45 = *(__int64 **)(a1 + 144);
        }
        qfree(v45);
        *(_QWORD *)(a1 + 144) = v57;
        *(_QWORD *)(a1 + 160) = v61;
        v23 = *(_QWORD *)(a1 + 152);
      }
      else
      {
        v57 = *(_QWORD *)(a1 + 144);
      }
      v25 = v57 + 120 * v23;
      *(_OWORD *)(v25 + 8) = 0;
      v25 += 112;
      *(_OWORD *)(v25 - 80) = 0;
      *(_QWORD *)(v25 - 112) = 0;
      *(_QWORD *)(v25 - 88) = 0;
      *(_DWORD *)v25 = -1;
      *(_OWORD *)(v25 - 64) = 0;
      *(_OWORD *)(v25 - 48) = 0;
      *(_OWORD *)(v25 - 32) = 0;
      *(_OWORD *)(v25 - 16) = 0;
      ++*(_QWORD *)(a1 + 152);
      v9 = sub_580A0(a1, v25, a2, v58, "", 1);
    }
    else
    {
      v5 = *(__int64 **)(a1 + 600);
      v6 = *v5;
      if ( (unsigned __int64)v5[2] <= 0x23 )
      {
        v26 = qvector_reserve(*(_QWORD *)(a1 + 600), v6, 36, 1);
        *v5 = v26;
        v6 = v26;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_94170);
      v5[1] = 36;
      *(__m128i *)v6 = si128;
      *(__m128i *)(v6 + 16) = _mm_load_si128((const __m128i *)&xmmword_94180);
      *(_DWORD *)(v6 + 31) = 1936876900;
      v8 = *v5;
      v9 = 0;
      *(_BYTE *)(v8 + 35) = 0;
    }
    if ( v62 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v62 + 8LL);
      if ( (char *)v10 == (char *)sub_54910 )
        operator delete(v62, 0x40u);
      else
        v10();
    }
  }
  return v9;
}
