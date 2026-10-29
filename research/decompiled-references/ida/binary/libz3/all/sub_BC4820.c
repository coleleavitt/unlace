__int64 __fastcall sub_BC4820(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char **exception; // r14
  __int64 v5; // rdx
  char **v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // r15
  _DWORD *v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  const void *v14; // rcx
  int v15; // r12d
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  __m128i v20; // xmm0
  _QWORD *v21; // r12
  __int64 v22; // rbx
  __int64 v23; // r13
  __m128i v24; // xmm0
  _QWORD *v25; // rdx
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r12
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 *v42; // rbx
  __int64 *v43; // r13
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 **v48; // rcx
  unsigned int v50; // r9d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // ebx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __m128i v60; // xmm0
  int v61; // [rsp-8h] [rbp-108h]
  __int64 *v62; // [rsp+0h] [rbp-100h]
  _QWORD *v63; // [rsp+8h] [rbp-F8h]
  unsigned int v64; // [rsp+8h] [rbp-F8h]
  __int64 *v65; // [rsp+10h] [rbp-F0h]
  unsigned int **v66; // [rsp+18h] [rbp-E8h]
  unsigned int v67; // [rsp+20h] [rbp-E0h]
  __int64 v68; // [rsp+28h] [rbp-D8h]
  __int64 v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+28h] [rbp-D8h]
  _DWORD *v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+38h] [rbp-C8h]
  __int64 v73; // [rsp+38h] [rbp-C8h]
  __int64 *v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v75; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v76; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v79; // [rsp+70h] [rbp-90h]
  __int64 **v80; // [rsp+80h] [rbp-80h] BYREF
  char v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  int v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  int v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __m128i v88; // [rsp+B8h] [rbp-48h] BYREF

  v75 = a3;
  v8 = a4[1];
  v74 = a4;
  if ( a3[1] == v8 )
    return 0;
  v77 = 0;
  v66 = &v76;
  v76 = nullptr;
  v65 = &v77;
  sub_BB8720(a1, a2, &v77, &v76);
  v10 = v77;
  v71 = v76;
  v72 = *(_QWORD *)(a1 + 16);
  if ( v77 )
  {
    v11 = v76;
    v12 = *(_DWORD *)(v77 - 4);
    if ( v76 )
    {
LABEL_4:
      v13 = *(v11 - 1);
      v14 = v11;
      goto LABEL_5;
    }
  }
  else
  {
    v11 = v76;
    v12 = 0;
    if ( v76 )
      goto LABEL_4;
  }
  v13 = 0;
  v14 = v11;
LABEL_5:
  v15 = *(_DWORD *)(a1 + 8);
  v62 = (__int64 *)&v80;
  sub_B72D60((__int64)&v80, v72, v13, v14, v12, v77);
  v86 = v15;
  v87 = 0;
  v88.m128i_i64[1] = (__int64)v74;
  v80 = (__int64 **)&off_1C579E8;
  v88.m128i_i64[0] = (__int64)v75;
  nullsub_687();
  v16 = sub_180C100(v72 + 8400, 72);
  v68 = v16;
  *(_BYTE *)(v16 + 8) = v81 & 3 | *(_BYTE *)(v16 + 8) & 0xFC;
  *(_DWORD *)(v16 + 12) = v82;
  *(_QWORD *)(v16 + 16) = v83;
  *(_DWORD *)(v16 + 24) = v84;
  *(_QWORD *)(v16 + 32) = v85;
  *(_QWORD *)v16 = qword_1C6E7C8;
  v17 = v86;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 40) = v17;
  if ( !v87 )
  {
    *(__m128i *)(v16 + 56) = _mm_loadu_si128(&v88);
    *(_QWORD *)v16 = &off_1C579E8;
    goto LABEL_16;
  }
  v18 = *(_DWORD *)(v87 - 4);
  v64 = *(_DWORD *)(v87 - 8);
  v19 = (_QWORD *)sub_186B270(16LL * v64 + 8);
  v20 = _mm_cvtsi32_si128(v64);
  v21 = v19 + 1;
  v63 = v19 + 1;
  *v19 = _mm_unpacklo_epi32(v20, _mm_cvtsi32_si128(v18)).m128i_u64[0];
  *(_QWORD *)(v68 + 48) = v19 + 1;
  v22 = v87;
  if ( v87 )
  {
    v23 = v87 + 16LL * *(unsigned int *)(v87 - 4);
    if ( v87 == v23 )
    {
      v60 = _mm_loadu_si128(&v88);
      *(_QWORD *)v68 = &off_1C579E8;
      *(__m128i *)(v68 + 56) = v60;
    }
    else
    {
      do
      {
        sub_15D0E50(v21, v22);
        v22 += 16;
        v21 += 2;
      }
      while ( v23 != v22 );
      v24 = _mm_loadu_si128(&v88);
      v25 = *(_QWORD **)(v68 + 48);
      *(_QWORD *)v68 = &off_1C579E8;
      v63 = v25;
      *(__m128i *)(v68 + 56) = v24;
      if ( !v25 )
        goto LABEL_16;
    }
  }
  else
  {
    *(__m128i *)(v68 + 56) = _mm_loadu_si128(&v88);
    *(_QWORD *)v68 = &off_1C579E8;
  }
  if ( *((_DWORD *)v63 - 1) )
  {
    v26 = *(_QWORD **)(v72 + 8600);
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v54 = (3 * v27 + 1) >> 1;
        v55 = 8 * v54 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v55 || v27 >= v54 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526((__int64 *)&v78, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v78);
          sub_233E40((__int64)&v78);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (unsigned int *)sub_186B300(v26 - 1, v55);
        v57 = v56[1];
        v26 = v56 + 2;
        *(_QWORD *)(v72 + 8600) = v56 + 2;
        *v56 = v54;
        LODWORD(v56) = v57;
        v30 = &v26[v57];
        v29 = (_DWORD)v56 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v26[v28];
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      v26 = v58 + 1;
      *v58 = 2;
      v30 = v58 + 1;
      *(_QWORD *)(v72 + 8600) = v58 + 1;
      v29 = 1;
    }
    *v30 = v68;
    *((_DWORD *)v26 - 1) = v29;
  }
LABEL_16:
  v31 = v87;
  v80 = (__int64 **)qword_1C6E7C8;
  if ( v87 )
  {
    v32 = *(unsigned int *)(v87 - 4);
    if ( (_DWORD)v32 )
    {
      v33 = v87 + 16 * v32;
      do
      {
        v34 = v31;
        v31 += 16;
        sub_15D0DF0(v34);
      }
      while ( v33 != v31 );
      v31 = v87;
    }
    sub_186B220((void *)(v31 - 8));
  }
  v79 = 0u;
  v78 = 0;
  v35 = (_QWORD *)operator new(0x18u);
  *v35 = a1;
  v36 = _mm_loadl_epi64((const __m128i *)off_1C57F10);
  v35[1] = &v75;
  v37 = *(_QWORD *)(a1 + 24);
  v35[2] = &v74;
  *(_QWORD *)&v78 = v35;
  v38 = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)sub_BAFFF0);
  v79 = v38;
  if ( *(_QWORD *)(v37 + 912) )
  {
    v39 = sub_BAFFF0((__int64)&v78);
    v40 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v80 = nullptr;
    sub_966750(a1, v39, -1, 0, 0, -1, &v80, v61, (int)&v80, (int)v63, (int)&v77, &v76);
    if ( v80 )
      sub_186B220(v80 - 1);
    if ( v40 )
    {
      if ( (*(_DWORD *)(v40 + 8))-- == 1 )
        sub_15D7BC0(v37, v40);
    }
    v42 = v74;
    v43 = v75;
    if ( v75[1] == v74[1] )
      goto LABEL_35;
    goto LABEL_31;
  }
  v43 = v75;
  v42 = v74;
  if ( v74[1] != v75[1] )
  {
LABEL_31:
    v44 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8760LL);
    v73 = v68 | 3;
    if ( v44 )
    {
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 == *((_DWORD *)v44 - 2) )
      {
        v50 = (3 * v45 + 1) >> 1;
        v51 = 8 * (v50 + ((3 * v45 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v45 + 8 >= (unsigned int)v51 || v45 >= v50 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v62, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v62);
          sub_233E40((__int64)v62);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = (3 * v45 + 1) >> 1;
        v69 = *(_QWORD *)(a1 + 16);
        v52 = (unsigned int *)sub_186B300(v44 - 1, v51);
        v53 = v52[1];
        v44 = v52 + 2;
        *(_QWORD *)(v69 + 8760) = v52 + 2;
        *v52 = v67;
        LODWORD(v52) = v53;
        v48 = (__int64 **)&v44[3 * v53];
        v47 = (_DWORD)v52 + 1;
      }
      else
      {
        v46 = v45;
        v47 = v45 + 1;
        v48 = (__int64 **)&v44[3 * v46];
      }
    }
    else
    {
      v70 = *(_QWORD *)(a1 + 16);
      v59 = (_QWORD *)sub_186B270(0x38u);
      v44 = v59 + 1;
      *v59 = 2;
      v47 = 1;
      v48 = (__int64 **)v44;
      *(_QWORD *)(v70 + 8760) = v44;
    }
    *v48 = v43;
    v48[1] = v42;
    v48[2] = (__int64 *)v73;
    *((_DWORD *)v44 - 1) = v47;
LABEL_35:
    if ( *(_QWORD *)(v37 + 912) )
      std::operator<<<std::char_traits<char>>();
    if ( v79.m128i_i64[0] )
      *(double *)v38.m128i_i64 = ((double (__fastcall *)(__int128 *, __int128 *, __int64))v79.m128i_i64[0])(
                                   &v78,
                                   &v78,
                                   3);
    goto LABEL_39;
  }
  *(double *)v38.m128i_i64 = ((double (__fastcall *)(__int128 *, __int128 *, __int64))sub_BB02C0)(&v78, &v78, 3);
LABEL_39:
  sub_BC45D0(a1, v75, v74, v65, v66, *(double *)v38.m128i_i64);
  *(_BYTE *)(a1 + 4170) = 1;
  sub_BBB3C0(a1, v75, v74);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  if ( v71 )
    sub_186B220(v71 - 2);
  return 1;
}

