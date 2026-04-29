unsigned __int64 __fastcall sub_47AD0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__m128 *, __m128i *))
{
  __int64 v3; // r13
  __m128i v6; // xmm0
  size_t v7; // r12
  __int64 v8; // rax
  __m128i v9; // xmm0
  size_t v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  char v18; // r12
  __int64 v19; // r15
  __m128i v20; // xmm0
  __m128i v21; // xmm5
  __m128i v22; // xmm4
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbp
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i v38; // xmm4
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  void *v44; // rax
  const void *v45; // rsi
  void *v46; // rax
  const void *v47; // rsi
  __m128i v48; // [rsp+0h] [rbp-188h] BYREF
  __int64 v49; // [rsp+18h] [rbp-170h]
  __m128i *v50; // [rsp+20h] [rbp-168h]
  __m128 *v51; // [rsp+28h] [rbp-160h]
  __m128i v52; // [rsp+30h] [rbp-158h] BYREF
  __int64 v53; // [rsp+40h] [rbp-148h]
  __int64 v54; // [rsp+48h] [rbp-140h]
  char v55; // [rsp+57h] [rbp-131h]
  __int64 v56; // [rsp+58h] [rbp-130h]
  __m128i v57; // [rsp+60h] [rbp-128h] BYREF
  __m128i v58; // [rsp+70h] [rbp-118h] BYREF
  void *v59; // [rsp+80h] [rbp-108h]
  __int128 v60; // [rsp+88h] [rbp-100h]
  __int64 v61; // [rsp+98h] [rbp-F0h]
  __m128i v62; // [rsp+A0h] [rbp-E8h]
  __int64 v63; // [rsp+B0h] [rbp-D8h]
  char v64; // [rsp+B8h] [rbp-D0h]
  __int64 v65; // [rsp+C0h] [rbp-C8h]
  __m128i v66; // [rsp+C8h] [rbp-C0h]
  __m128i v67; // [rsp+E0h] [rbp-A8h] BYREF
  void *v68; // [rsp+F0h] [rbp-98h]
  __int128 v69; // [rsp+F8h] [rbp-90h]
  __int64 v70; // [rsp+108h] [rbp-80h]
  __m128i v71; // [rsp+110h] [rbp-78h] BYREF
  __int64 v72; // [rsp+120h] [rbp-68h]
  char v73; // [rsp+128h] [rbp-60h]
  __int64 v74; // [rsp+130h] [rbp-58h]
  __m128i v75; // [rsp+138h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+148h] [rbp-40h]

  v49 = a2;
  v76 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a1 + 104;
    if ( a2 != a1 + 104 )
    {
      v50 = &v58;
      v51 = (__m128 *)&v67;
      while ( 1 )
      {
        v6 = _mm_loadu_si128((const __m128i *)a1);
        v7 = *(_QWORD *)(a1 + 24);
        v59 = nullptr;
        v60 = 0;
        v58 = v6;
        if ( v7 )
        {
          v46 = (void *)qalloc_or_throw(v7);
          v47 = *(const void **)(a1 + 16);
          *((_QWORD *)&v60 + 1) = v7;
          v59 = v46;
          memcpy(v46, v47, v7);
          *(_QWORD *)&v60 = v7;
        }
        v8 = *(_QWORD *)(a1 + 40);
        v9 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v68 = nullptr;
        v10 = *(_QWORD *)(v3 + 24);
        v69 = 0;
        v61 = v8;
        v11 = *(_QWORD *)(a1 + 64);
        v62 = v9;
        v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        v63 = v11;
        LOBYTE(v11) = *(_BYTE *)(a1 + 72);
        v66 = v12;
        v13 = _mm_loadu_si128((const __m128i *)v3);
        v64 = v11;
        v14 = *(_QWORD *)(a1 + 80);
        v67 = v13;
        v65 = v14;
        if ( v10 )
        {
          v44 = (void *)qalloc_or_throw(v10);
          v45 = *(const void **)(v3 + 16);
          v68 = v44;
          *((_QWORD *)&v69 + 1) = v10;
          memcpy(v44, v45, v10);
          *(_QWORD *)&v69 = v10;
        }
        v15 = _mm_loadu_si128((const __m128i *)(v3 + 48));
        v70 = *(_QWORD *)(v3 + 40);
        v16 = *(_QWORD *)(v3 + 64);
        v71 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(v3 + 88));
        v72 = v16;
        LOBYTE(v16) = *(_BYTE *)(v3 + 72);
        v75 = v17;
        v73 = v16;
        v74 = *(_QWORD *)(v3 + 80);
        v18 = a3(v51, v50);
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree(v68);
        }
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        v19 = v3 + 104;
        if ( v18 )
        {
          v20 = _mm_loadu_si128((const __m128i *)(v3 + 48));
          v21 = _mm_loadu_si128((const __m128i *)(v3 + 24));
          v22 = _mm_loadu_si128((const __m128i *)v3);
          v53 = *(_QWORD *)(v3 + 16);
          v23 = *(_QWORD *)(v3 + 40);
          v71 = v20;
          v24 = _mm_loadu_si128((const __m128i *)(v3 + 88));
          v54 = v23;
          v25 = *(_QWORD *)(v3 + 64);
          *(_QWORD *)(v3 + 16) = 0;
          v72 = v25;
          LOBYTE(v25) = *(_BYTE *)(v3 + 72);
          v57 = v22;
          v55 = v25;
          v26 = *(_QWORD *)(v3 + 80);
          v52 = v21;
          v56 = v26;
          *(_OWORD *)(v3 + 24) = 0;
          v27 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - a1) >> 3);
          v75 = v24;
          if ( v3 - a1 > 0 )
          {
            do
            {
              v28 = *(_QWORD *)(v3 - 104);
              v29 = *(_QWORD *)(v3 + 16);
              v3 -= 104;
              v30 = *(_QWORD *)(v3 + 16);
              v31 = _mm_loadu_si128((const __m128i *)(v3 + 24));
              *(_QWORD *)(v3 + 16) = 0;
              *(_QWORD *)(v3 + 104) = v28;
              v32 = *(_QWORD *)(v3 + 8);
              *(_OWORD *)(v3 + 24) = 0;
              *(_QWORD *)(v3 + 112) = v32;
              if ( v29 )
              {
                *(_QWORD *)(v3 + 128) = 0;
                v48 = v31;
                qfree(v29);
                v31 = _mm_load_si128(&v48);
              }
              v33 = *(_QWORD *)(v3 + 40);
              *(__m128i *)(v3 + 128) = v31;
              v34 = _mm_loadu_si128((const __m128i *)(v3 + 48));
              *(_QWORD *)(v3 + 120) = v30;
              *(_QWORD *)(v3 + 144) = v33;
              v35 = *(_QWORD *)(v3 + 64);
              *(__m128i *)(v3 + 152) = v34;
              v36 = _mm_loadu_si128((const __m128i *)(v3 + 88));
              *(_QWORD *)(v3 + 168) = v35;
              LOBYTE(v35) = *(_BYTE *)(v3 + 72);
              *(__m128i *)(v3 + 192) = v36;
              *(_BYTE *)(v3 + 176) = v35;
              *(_QWORD *)(v3 + 184) = *(_QWORD *)(v3 + 80);
              --v27;
            }
            while ( v27 );
          }
          v37 = *(_QWORD *)(a1 + 16);
          *(__m128i *)a1 = _mm_load_si128(&v57);
          if ( v37 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            qfree(v37);
          }
          v38 = _mm_load_si128(&v52);
          v39 = _mm_load_si128(&v71);
          *(_QWORD *)(a1 + 16) = v53;
          v40 = v54;
          *(__m128i *)(a1 + 48) = v39;
          v41 = _mm_loadu_si128(&v75);
          *(_QWORD *)(a1 + 40) = v40;
          v42 = v72;
          *(__m128i *)(a1 + 24) = v38;
          *(_QWORD *)(a1 + 64) = v42;
          LOBYTE(v42) = v55;
          *(__m128i *)(a1 + 88) = v41;
          *(_BYTE *)(a1 + 72) = v42;
          *(_QWORD *)(a1 + 80) = v56;
          if ( v49 == v19 )
            return v76 - __readfsqword(0x28u);
        }
        else
        {
          sub_47680(v3, a3);
          if ( v49 == v19 )
            return v76 - __readfsqword(0x28u);
        }
        v3 = v19;
      }
    }
  }
  return v76 - __readfsqword(0x28u);
}
