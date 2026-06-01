__int64 __fastcall sub_14BAB20(__int64 a1, unsigned int a2)
{
  int *v2; // rbp
  __int64 v3; // rbx
  int v4; // eax
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  void **v11; // r13
  __m128i *v12; // r8
  __int64 v13; // r9
  __m128i *v14; // rsi
  char *v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r12
  _QWORD *v20; // r14
  _QWORD *v21; // rbp
  __m128i *v22; // rbx
  const void **v23; // r15
  __m128i *v24; // rbp
  __m128i *v25; // rbx
  __m128i *v26; // r14
  __m128i *v27; // r15
  unsigned int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  size_t v34; // rcx
  size_t v35; // r12
  size_t v36; // rdx
  const void *v37; // rsi
  const void *v38; // rdi
  int v39; // eax
  __m128i *v40; // r14
  __int64 v41; // rbx
  __int32 v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // rdi
  _BYTE *v48; // r12
  unsigned __int64 v49; // rdx
  __m128i *v50; // rcx
  const __m128i *v51; // rax
  __m128i v52; // xmm2
  __m128i si128; // xmm0
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // r15
  __int32 v61; // ebp
  __int64 v62; // r13
  __int64 v63; // rbx
  void *v64; // rdi
  unsigned int v65; // r14d
  size_t v66; // rax
  void **v67; // rsi
  __int64 v68; // [rsp+8h] [rbp-290h]
  __m128i v69; // [rsp+10h] [rbp-288h] BYREF
  void **v70; // [rsp+20h] [rbp-278h]
  char *v71; // [rsp+28h] [rbp-270h]
  _BYTE **v72; // [rsp+30h] [rbp-268h]
  __m128i *v73; // [rsp+38h] [rbp-260h]
  char v74; // [rsp+43h] [rbp-255h]
  unsigned int v75; // [rsp+44h] [rbp-254h]
  void **p_ptr; // [rsp+48h] [rbp-250h]
  char *v77; // [rsp+50h] [rbp-248h]
  __int64 v78; // [rsp+58h] [rbp-240h]
  _BYTE *v79; // [rsp+60h] [rbp-238h] BYREF
  char v80; // [rsp+68h] [rbp-230h]
  __int64 v81; // [rsp+70h] [rbp-228h]
  int v82; // [rsp+78h] [rbp-220h]
  __int16 v83; // [rsp+7Ch] [rbp-21Ch]
  __int64 (__fastcall *v84)(__int64); // [rsp+80h] [rbp-218h]
  __int64 v85; // [rsp+88h] [rbp-210h]
  __int64 v86; // [rsp+90h] [rbp-208h]
  __int64 v87; // [rsp+A0h] [rbp-1F8h] BYREF
  int v88; // [rsp+A8h] [rbp-1F0h]
  void *v89; // [rsp+B8h] [rbp-1E0h]
  __int64 v90; // [rsp+C8h] [rbp-1D0h] BYREF
  __m128i v91[5]; // [rsp+E0h] [rbp-1B8h] BYREF
  void *v92; // [rsp+130h] [rbp-168h] BYREF
  __int64 v93; // [rsp+138h] [rbp-160h]
  _BYTE v94[72]; // [rsp+140h] [rbp-158h] BYREF
  int v95; // [rsp+188h] [rbp-110h] BYREF
  void *v96; // [rsp+190h] [rbp-108h]
  int *v97; // [rsp+198h] [rbp-100h]
  int *v98; // [rsp+1A0h] [rbp-F8h]
  __int64 v99; // [rsp+1A8h] [rbp-F0h]
  void *ptr; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v101; // [rsp+1B8h] [rbp-E0h]
  char v102; // [rsp+1C0h] [rbp-D8h] BYREF

  v2 = (int *)(a1 + 16);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 16);
  v75 = a2;
  *(_DWORD *)(a1 + 40) = v4;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v79 = (_BYTE *)(a1 + 1952);
  v5 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v80 = v5;
  v83 = 63;
  v81 = a1;
  v82 = 1507350;
  v84 = sub_146A990;
  v85 = 0;
  v86 = 0;
  v72 = &v79;
  v74 = sub_156A040(&v79, 14, &byte_22F0C30, 0);
  if ( v74 )
  {
    result = 1;
    goto LABEL_3;
  }
  v11 = &v92;
  p_ptr = &ptr;
  ptr = &v102;
  v101 = 0x400000000LL;
  while ( 1 )
  {
    sub_14B78D0((__int64)&v92, v3, v6, v7, v8, v9);
    if ( v94[24] )
    {
      v48 = ptr;
      v49 = (unsigned int)v101 + 1LL;
      v50 = (__m128i *)((char *)ptr + 40 * (unsigned int)v101);
      v51 = (const __m128i *)&v92;
      if ( v49 > HIDWORD(v101) )
      {
        v67 = p_ptr + 2;
        if ( ptr > &v92 || v50 <= (__m128i *)&v92 )
        {
          sub_2237220(p_ptr, v67, v49, 40);
          v50 = (__m128i *)((char *)ptr + 40 * (unsigned int)v101);
          v51 = (const __m128i *)&v92;
        }
        else
        {
          sub_2237220(p_ptr, v67, v49, 40);
          v51 = (const __m128i *)((char *)ptr + (char *)&v92 - v48);
          v50 = (__m128i *)((char *)ptr + 40 * (unsigned int)v101);
        }
      }
      *v50 = _mm_loadu_si128(v51);
      v52 = _mm_loadu_si128(v51 + 1);
      LODWORD(v101) = v101 + 1;
      v50[1] = v52;
      v50[2].m128i_i64[0] = v51[2].m128i_i64[0];
    }
    else
    {
      v74 = 1;
    }
    if ( *(_WORD *)(v3 + 32) != 66 )
      break;
    v47 = *(__int64 **)(v3 + 8);
    *(_DWORD *)(v3 + 40) = *(_DWORD *)(v3 + 16);
    sub_14634E0(v47, v2);
  }
  if ( !v74 )
  {
    v14 = (__m128i *)ptr;
    v93 = 0x400000000LL;
    v77 = (char *)ptr;
    v15 = (char *)ptr;
    v92 = v94;
    v78 = 40LL * (unsigned int)v101;
    v16 = (unsigned __int64)v91;
    v95 = 0;
    v96 = nullptr;
    v97 = &v95;
    v98 = &v95;
    v99 = 0;
    v71 = (char *)ptr + v78;
    if ( ptr == (char *)ptr + v78 )
    {
LABEL_77:
      v65 = *(_DWORD *)&v77[v78 - 4];
      sub_1564820(v91, v3, v65, 1566);
      v66 = j__strlen(", *");
      v14 = (__m128i *)v65;
      sub_9EC740((__int64)&v87, v65, ", *", v66, 0);
      if ( (_DWORD)v87 && HIDWORD(v87) )
      {
        v14 = (__m128i *)&v87;
        sub_14B8100(v91[0].m128i_i64, (unsigned __int64)&v87);
      }
      if ( v89 != &v90 )
        operator delete(v89);
      sub_AEA040((__int64)v91);
LABEL_22:
      v20 = v96;
      if ( v96 )
      {
        do
        {
          v14 = (__m128i *)v20[3];
          sub_9ED9D0((__int64)(v11 + 10), v14);
          v21 = (_QWORD *)v20[2];
          operator delete(v20);
          v20 = v21;
        }
        while ( v21 );
      }
      if ( v92 != v11 + 2 )
        free(v92);
      if ( (unsigned __int8)sub_14808E0((__int64)v72, v14->m128i_i64, v17, v16, (__int64)v12, v13) )
        result = 1;
      else
        result = sub_19D1300(*(_QWORD *)(*(_QWORD *)(v3 + 96) + 736LL), ptr, (unsigned int)v101, v75, HIDWORD(v86));
      goto LABEL_10;
    }
    v73 = (__m128i *)v3;
LABEL_14:
    v17 = *(unsigned int *)v15;
    if ( !(_DWORD)v17
      && (*((_DWORD *)v15 + 1) & 0x7FFFFFFF) == 0
      && (*((_DWORD *)v15 + 2) & 0x7FFFFFFF) == 0
      && (*((_DWORD *)v15 + 3) & 0x7FFFFFFF) == 0 )
    {
      if ( v74 )
      {
        v14 = v73;
        sub_1564820(v91, v73, *((unsigned int *)v15 + 8), 1565);
        sub_AEA040((__int64)v91);
      }
      else
      {
        v74 = 1;
      }
      goto LABEL_20;
    }
    v18 = *((_QWORD *)v15 + 2);
    v19 = *((_QWORD *)v15 + 3);
    v91[0].m128i_i64[0] = v18;
    v91[0].m128i_i64[1] = v19;
    if ( v99 )
    {
      v14 = v91;
      sub_10E74B0((__int64)(v11 + 10), v91[0].m128i_i64);
      if ( (_BYTE)v17 )
        goto LABEL_20;
      v40 = *((__m128i **)v15 + 2);
      v19 = *((_QWORD *)v15 + 3);
LABEL_51:
      sub_1564820(v91, v73, *((unsigned int *)v15 + 8), 1564);
      v41 = v91[0].m128i_i64[0];
      v42 = *((_DWORD *)v15 + 9);
      if ( v91[0].m128i_i64[0] )
      {
        v43 = *(unsigned int *)(v91[0].m128i_i64[0] + 424);
        v44 = *(unsigned int *)(v91[0].m128i_i64[0] + 428);
        v45 = v43 + 1;
      }
      else
      {
        v54 = v91[0].m128i_i64[1];
        v55 = *(_DWORD *)(v91[0].m128i_i64[1] + 14976);
        if ( v55 )
        {
          v57 = (unsigned int)(v55 - 1);
          *(_DWORD *)(v91[0].m128i_i64[1] + 14976) = v57;
          v41 = *(_QWORD *)(v54 + 8 * v57 + 14848);
          v58 = *(unsigned int *)(v41 + 536);
          *(_BYTE *)v41 = 0;
          v59 = *(_QWORD *)(v41 + 528);
          *(_DWORD *)(v41 + 424) = 0;
          v60 = v59 + (v58 << 6);
          if ( v59 == v60 )
          {
            v45 = 1;
            v43 = 0;
          }
          else
          {
            v69.m128i_i64[0] = (__int64)v15;
            v61 = v42;
            v70 = v11;
            v62 = v41;
            v63 = v59;
            do
            {
              while ( 1 )
              {
                v60 -= 64;
                v64 = *(void **)(v60 + 24);
                if ( v64 == (void *)(v60 + 40) )
                  break;
                operator delete(v64);
                if ( v63 == v60 )
                  goto LABEL_75;
              }
            }
            while ( v63 != v60 );
LABEL_75:
            v41 = v62;
            v42 = v61;
            v11 = v70;
            v15 = (char *)v69.m128i_i64[0];
            v43 = *(unsigned int *)(v41 + 424);
            v45 = v43 + 1;
          }
          *(_DWORD *)(v41 + 536) = 0;
          v44 = *(unsigned int *)(v41 + 428);
        }
        else
        {
          v69.m128i_i32[0] = *((_DWORD *)v15 + 9);
          v56 = operator new(0x3A0u);
          v44 = 8;
          v45 = 1;
          v41 = v56;
          *(_BYTE *)v56 = 0;
          *(_QWORD *)(v56 + 96) = v56 + 112;
          *(_QWORD *)(v56 + 128) = v56 + 144;
          *(_QWORD *)(v56 + 160) = v56 + 176;
          *(_QWORD *)(v56 + 192) = v56 + 208;
          *(_QWORD *)(v56 + 224) = v56 + 240;
          *(_QWORD *)(v56 + 256) = v56 + 272;
          *(_QWORD *)(v56 + 288) = v56 + 304;
          *(_QWORD *)(v56 + 320) = v56 + 336;
          *(_QWORD *)(v56 + 352) = v56 + 368;
          *(_QWORD *)(v56 + 384) = v56 + 400;
          *(_QWORD *)(v56 + 416) = v56 + 432;
          *(_QWORD *)(v56 + 104) = 0;
          *(_BYTE *)(v56 + 112) = 0;
          *(_QWORD *)(v56 + 136) = 0;
          *(_BYTE *)(v56 + 144) = 0;
          *(_QWORD *)(v56 + 168) = 0;
          *(_BYTE *)(v56 + 176) = 0;
          *(_QWORD *)(v56 + 200) = 0;
          *(_BYTE *)(v56 + 208) = 0;
          *(_QWORD *)(v56 + 232) = 0;
          *(_BYTE *)(v56 + 240) = 0;
          *(_QWORD *)(v56 + 264) = 0;
          *(_BYTE *)(v56 + 272) = 0;
          *(_QWORD *)(v56 + 296) = 0;
          *(_BYTE *)(v56 + 304) = 0;
          *(_QWORD *)(v56 + 328) = 0;
          *(_BYTE *)(v56 + 336) = 0;
          *(_QWORD *)(v56 + 360) = 0;
          *(_BYTE *)(v56 + 368) = 0;
          *(_QWORD *)(v56 + 392) = 0;
          *(_BYTE *)(v56 + 400) = 0;
          *(_QWORD *)(v56 + 424) = 0x800000000LL;
          v42 = v69.m128i_i32[0];
          *(_QWORD *)(v56 + 528) = v56 + 544;
          *(_QWORD *)(v56 + 536) = 0x600000000LL;
          v43 = 0;
        }
        v91[0].m128i_i64[0] = v41;
      }
      LODWORD(v87) = v42;
      HIDWORD(v87) = v42;
      LOBYTE(v88) = 1;
      if ( v45 > v44 )
      {
        sub_2237220(v41 + 416, v41 + 432, v45, 12);
        v43 = *(unsigned int *)(v41 + 424);
      }
      v14 = v40;
      v46 = *(_QWORD *)(v41 + 416) + 12 * v43;
      *(_QWORD *)v46 = v87;
      *(_DWORD *)(v46 + 8) = v88;
      ++*(_DWORD *)(v41 + 424);
      sub_AEC220((unsigned __int8 **)v91, v40, v19);
      sub_AEA040((__int64)v91);
      goto LABEL_20;
    }
    v16 = (unsigned int)v93;
    v12 = (__m128i *)v92;
    v22 = (__m128i *)((char *)v92 + 16 * (unsigned int)v93);
    if ( v92 == v22 )
    {
      if ( (unsigned int)v93 > 3uLL )
        goto LABEL_67;
LABEL_63:
      v17 = v16 + 1;
      si128 = _mm_load_si128(v91);
      if ( v16 + 1 > HIDWORD(v93) )
      {
        v14 = (__m128i *)(v11 + 2);
        v69 = si128;
        sub_2237220(v11, v11 + 2, v17, 16);
        si128 = _mm_load_si128(&v69);
        v22 = (__m128i *)((char *)v92 + 16 * (unsigned int)v93);
      }
      *v22 = si128;
      LODWORD(v93) = v93 + 1;
      goto LABEL_20;
    }
    v69.m128i_i64[0] = (unsigned int)v93;
    v23 = (const void **)v92;
    v70 = (void **)v15;
    v24 = (__m128i *)((char *)v92 + 16 * (unsigned int)v93);
    v25 = (__m128i *)v18;
    v26 = (__m128i *)v92;
    while ( 1 )
    {
      if ( (const void *)v19 == v23[1] )
      {
        if ( !v19 )
          break;
        v14 = v25;
        if ( !memcmp(*v23, v25, v19) )
          break;
      }
      v23 += 2;
      if ( v24 == (__m128i *)v23 )
      {
        v22 = v24;
        v16 = v69.m128i_i64[0];
        v15 = (char *)v70;
        v12 = v26;
        goto LABEL_35;
      }
    }
    v12 = v26;
    v40 = v25;
    v22 = v24;
    v16 = v69.m128i_i64[0];
    v15 = (char *)v70;
    if ( v23 != (const void **)v22 )
      goto LABEL_51;
LABEL_35:
    if ( v16 <= 3 )
      goto LABEL_63;
    v27 = v12;
    v69.m128i_i64[0] = (__int64)v15;
    while ( 1 )
    {
      v31 = sub_9F5F30(v11 + 10, v11 + 11, (const void **)v27);
      v33 = v32;
      if ( !v32 )
        goto LABEL_39;
      if ( !v31 && (void **)v32 != v11 + 11 )
      {
        v34 = v27->m128i_u64[1];
        v36 = *(_QWORD *)(v32 + 40);
        v35 = v36;
        if ( v34 <= v36 )
          v36 = v27->m128i_u64[1];
        if ( v36
          && (v37 = *(const void **)(v33 + 32),
              v38 = (const void *)v27->m128i_i64[0],
              v70 = (void **)v27->m128i_i64[1],
              v39 = memcmp(v38, v37, v36),
              v34 = (size_t)v70,
              v39) )
        {
          if ( v39 >= 0 )
            goto LABEL_49;
        }
        else if ( v34 == v35 || v34 >= v35 )
        {
LABEL_49:
          v28 = 0;
          goto LABEL_38;
        }
      }
      v28 = 1;
LABEL_38:
      v29 = operator new(0x30u);
      v30 = v27->m128i_i64[1];
      *(_QWORD *)(v29 + 32) = v27->m128i_i64[0];
      *(_QWORD *)(v29 + 40) = v30;
      std::_Rb_tree_insert_and_rebalance(v28, v29, v33, v11 + 11);
      ++v99;
LABEL_39:
      if ( v22 == ++v27 )
      {
        v15 = (char *)v69.m128i_i64[0];
LABEL_67:
        v14 = v91;
        LODWORD(v93) = 0;
        sub_10E74B0((__int64)(v11 + 10), v91[0].m128i_i64);
LABEL_20:
        v15 += 40;
        if ( v71 == v15 )
        {
          v3 = (__int64)v73;
          if ( v74 )
            goto LABEL_22;
          goto LABEL_77;
        }
        goto LABEL_14;
      }
    }
  }
  LOWORD(v92) = 23;
  sub_15680D0(v3, &v92, 1, 1);
  result = 1;
LABEL_10:
  if ( ptr != p_ptr + 2 )
  {
    v68 = result;
    free(ptr);
    result = v68;
  }
LABEL_3:
  *v79 = v80;
  return result;
}
