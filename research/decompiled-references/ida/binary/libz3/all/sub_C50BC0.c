unsigned __int64 __fastcall sub_C50BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char **exception; // r15
  char **v6; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rcx
  __int64 v13; // rax
  void *v14; // r15
  int v15; // eax
  void *v16; // r14
  int v17; // eax
  void *v18; // r13
  int v19; // eax
  void *v20; // r13
  void *v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // r15
  size_t v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  _DWORD *v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rsi
  unsigned int v40; // eax
  struct _Unwind_Exception *v41; // rdi
  unsigned __int64 result; // rax
  unsigned int v43; // r15d
  unsigned int *v44; // rax
  unsigned int v45; // r15d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // [rsp-8h] [rbp-D8h]
  int v51; // [rsp-8h] [rbp-D8h]
  int v52; // [rsp+0h] [rbp-D0h]
  int v53; // [rsp+0h] [rbp-D0h]
  int v54; // [rsp+8h] [rbp-C8h]
  int v55; // [rsp+10h] [rbp-C0h]
  int v56; // [rsp+18h] [rbp-B8h]
  int v57; // [rsp+20h] [rbp-B0h]
  void *v58; // [rsp+20h] [rbp-B0h]
  int v60; // [rsp+28h] [rbp-A8h]
  int v61; // [rsp+30h] [rbp-A0h]
  int v62[2]; // [rsp+30h] [rbp-A0h]
  struct _Unwind_Exception *v63; // [rsp+38h] [rbp-98h]
  struct _Unwind_Exception *v64; // [rsp+38h] [rbp-98h]
  struct _Unwind_Exception *v65; // [rsp+38h] [rbp-98h]
  int v66; // [rsp+40h] [rbp-90h]
  int v67; // [rsp+40h] [rbp-90h]
  int v68; // [rsp+48h] [rbp-88h] BYREF
  int v69; // [rsp+50h] [rbp-80h] BYREF
  int v70; // [rsp+58h] [rbp-78h] BYREF
  int v71[4]; // [rsp+60h] [rbp-70h] BYREF
  __int64 v72; // [rsp+70h] [rbp-60h] BYREF
  __int64 v73; // [rsp+78h] [rbp-58h]
  int v74[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v75; // [rsp+88h] [rbp-48h]
  __int64 v76; // [rsp+90h] [rbp-40h] BYREF
  __int64 v77; // [rsp+98h] [rbp-38h]
  int v78; // [rsp+A0h] [rbp-30h]
  void *v79; // [rsp+A8h] [rbp-28h]
  int v80; // [rsp+B0h] [rbp-20h]
  __int64 v81; // [rsp+B8h] [rbp-18h]

  v10 = a1 + 8;
  *(_QWORD *)(v10 - 8) = a2;
  sub_16669D0(v10, a2);
  sub_16744A0(a1 + 24, a2);
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 104) = 0;
  v11 = sub_186B270(0x2C0u);
  v12 = (_BYTE *)v11;
  do
  {
    v12[20] &= 0xFCu;
    v12[36] &= 0xFCu;
    v12[52] &= 0xFCu;
    v12[68] &= 0xFCu;
    v12 += 88;
    *((_QWORD *)v12 - 11) = 0;
    *((_DWORD *)v12 - 18) = 0;
    *((_QWORD *)v12 - 8) = 0;
    *((_DWORD *)v12 - 14) = 1;
    *((_QWORD *)v12 - 6) = 0;
    *((_DWORD *)v12 - 10) = 0;
    *((_QWORD *)v12 - 4) = 0;
    *((_DWORD *)v12 - 6) = 1;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v12 != (_BYTE *)(v11 + 704) );
  *(_QWORD *)(a1 + 112) = v11;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = 8;
  v13 = sub_186B270(0x280u);
  *(_QWORD *)v13 = 0;
  *(_QWORD *)(v13 + 224) = 1;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 1;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 1;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 88) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 104) = 0;
  *(_QWORD *)(v13 + 112) = 1;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 128) = 0;
  *(_QWORD *)(v13 + 136) = 0;
  *(_QWORD *)(v13 + 144) = 1;
  *(_QWORD *)(v13 + 152) = 0;
  *(_QWORD *)(v13 + 160) = 0;
  *(_QWORD *)(v13 + 168) = 0;
  *(_QWORD *)(v13 + 176) = 0;
  *(_QWORD *)(v13 + 184) = 0;
  *(_QWORD *)(v13 + 192) = 1;
  *(_QWORD *)(v13 + 200) = 0;
  *(_QWORD *)(v13 + 208) = 0;
  *(_QWORD *)(v13 + 216) = 0;
  *(_BYTE *)(v13 + 228) = 0;
  *(_QWORD *)(v13 + 248) = 0;
  *(_OWORD *)(v13 + 232) = 0;
  *(_QWORD *)(v13 + 256) = 0;
  *(_QWORD *)(v13 + 264) = 0;
  *(_QWORD *)(v13 + 272) = 1;
  *(_QWORD *)(v13 + 280) = 0;
  *(_QWORD *)(v13 + 288) = 0;
  *(_QWORD *)(v13 + 296) = 0;
  *(_QWORD *)(v13 + 304) = 1;
  *(_QWORD *)(v13 + 312) = 0;
  *(_QWORD *)(v13 + 320) = 0;
  *(_QWORD *)(v13 + 328) = 0;
  *(_QWORD *)(v13 + 336) = 0;
  *(_QWORD *)(v13 + 344) = 0;
  *(_QWORD *)(v13 + 352) = 1;
  *(_QWORD *)(v13 + 360) = 0;
  *(_QWORD *)(v13 + 368) = 0;
  *(_QWORD *)(v13 + 376) = 0;
  *(_QWORD *)(v13 + 384) = 1;
  *(_QWORD *)(v13 + 392) = 0;
  *(_QWORD *)(v13 + 400) = 0;
  *(_QWORD *)(v13 + 408) = 0;
  *(_QWORD *)(v13 + 416) = 0;
  *(_QWORD *)(v13 + 424) = 0;
  *(_QWORD *)(v13 + 432) = 1;
  *(_QWORD *)(v13 + 440) = 0;
  *(_QWORD *)(v13 + 448) = 0;
  *(_QWORD *)(v13 + 456) = 0;
  *(_QWORD *)(v13 + 464) = 1;
  *(_QWORD *)(v13 + 488) = 0;
  *(_QWORD *)(v13 + 496) = 0;
  *(_QWORD *)(v13 + 504) = 0;
  *(_QWORD *)(v13 + 512) = 1;
  *(_QWORD *)(v13 + 520) = 0;
  *(_OWORD *)(v13 + 472) = 0;
  *(_QWORD *)(v13 + 528) = 0;
  *(_QWORD *)(a1 + 144) = 8;
  *(_QWORD *)(v13 + 536) = 0;
  *(_QWORD *)(v13 + 544) = 1;
  v14 = qword_1C7F2C0;
  *(_QWORD *)(v13 + 552) = 0;
  *(_QWORD *)(v13 + 560) = 0;
  *(_QWORD *)(v13 + 568) = 0;
  *(_QWORD *)(v13 + 576) = 0;
  *(_QWORD *)(v13 + 584) = 0;
  *(_QWORD *)(v13 + 592) = 1;
  *(_QWORD *)(v13 + 600) = 0;
  *(_QWORD *)(v13 + 608) = 0;
  *(_QWORD *)(v13 + 616) = 0;
  *(_QWORD *)(v13 + 624) = 1;
  *(_QWORD *)(v13 + 632) = 0;
  *(_QWORD *)(a1 + 136) = v13;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 184) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(v14, a1 + 160, a3);
  else
    *(_DWORD *)(a1 + 160) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v14, a1 + 176, a3 + 16);
  }
  else
  {
    v15 = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a1 + 180) &= ~1u;
    *(_DWORD *)(a1 + 176) = v15;
  }
  v16 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 1;
  *(_QWORD *)(a1 + 216) = 0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
  {
    sub_182C690(v16, a1 + 192, a4);
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)(a1 + 192) = *(_DWORD *)a4;
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
    {
LABEL_9:
      v17 = *(_DWORD *)(a4 + 16);
      *(_BYTE *)(a1 + 212) &= ~1u;
      *(_DWORD *)(a1 + 208) = v17;
      goto LABEL_10;
    }
  }
  sub_182C690(v16, a1 + 208, a4 + 16);
LABEL_10:
  *(_QWORD *)v71 = 2;
  *(_QWORD *)&v71[2] = 0;
  v72 = 1;
  v73 = 0;
  sub_182CBA0(qword_1C7F2C0, &v72);
  BYTE4(v72) &= ~1u;
  LODWORD(v72) = 1;
  v74[1] = 0;
  v75 = 0;
  v76 = 1;
  v77 = 0;
  v74[0] = 2;
  if ( (v72 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v76, &v72);
  }
  else
  {
    BYTE4(v76) &= ~1u;
    LODWORD(v76) = v72;
  }
  if ( (v76 & 0x100000000LL) != 0 || (_DWORD)v76 != 1 || (*(_BYTE *)(a4 + 20) & 1) != 0 || *(_DWORD *)(a4 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v74, a4);
  }
  else
  {
    v58 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, v74, a4);
    sub_182CBA0(v58, &v76);
    BYTE4(v76) &= ~1u;
    LODWORD(v76) = 1;
  }
  v18 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 228) &= 0xFCu;
  *(_BYTE *)(a1 + 244) &= 0xFCu;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  if ( (v74[1] & 1) != 0 )
    sub_182C690(v18, a1 + 224, v74);
  else
    *(_DWORD *)(a1 + 224) = v74[0];
  if ( (v76 & 0x100000000LL) != 0 )
  {
    sub_182C690(v18, a1 + 240, &v76);
  }
  else
  {
    v19 = v76;
    *(_BYTE *)(a1 + 244) &= ~1u;
    *(_DWORD *)(a1 + 240) = v19;
  }
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v74);
  sub_182CBA0(v20, &v76);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v71);
  sub_182CBA0(v21, &v72);
  v22 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 256) = a5;
  v23 = sub_15D2CD0(v22, 5, 0, 0, 0);
  v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
  v25 = *(_QWORD *)(a2 + 840);
  *(__m128i *)v71 = v24;
  v61 = v25;
  sub_180C5A0(&v69, "");
  sub_180C5A0(&v68, "<");
  v26 = sub_15E3D10(
          a2,
          (int)&v68,
          (int)&v69,
          2,
          (int)v71,
          v61,
          1,
          v50,
          v52,
          (int)a1 + 224,
          (int)a1 + 192,
          (int)a1 + 160,
          (int)&v76,
          (int)&v68,
          v61,
          a2,
          v66,
          v68,
          v69,
          v70,
          v71[0],
          v71[2],
          v72,
          v73,
          v74[0],
          v75,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = *(_QWORD *)(a1 + 80);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 88);
    v30 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v29, v28);
  }
  *(_QWORD *)(a1 + 80) = v27;
  *(_QWORD *)v62 = v63[26].exception_cleanup;
  sub_180C5A0(v74, "");
  sub_180C5A0(&v70, "<=");
  v31 = sub_15E3D10(
          (int)v63,
          (int)&v70,
          (int)v74,
          2,
          (int)v71,
          v62[0],
          1,
          v51,
          v53,
          v54,
          v55,
          v56,
          v57,
          v60,
          v62[0],
          (int)v63,
          v67,
          v68,
          v69,
          v70,
          v71[0],
          v71[2],
          v72,
          v73,
          v74[0],
          v75,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
  v32 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v33 = *(_QWORD *)(a1 + 64);
  if ( v33 )
  {
    v34 = *(_QWORD *)(a1 + 72);
    v30 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v34, v33);
  }
  v35 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 64) = v32;
  v64 = (struct _Unwind_Exception *)v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = *(_DWORD **)(a1 + 56);
  if ( v36 )
  {
    v37 = *(v36 - 1);
    v38 = *(v36 - 2);
    if ( v37 == v38 )
    {
      v45 = (3 * v37 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v37 + 8 >= (unsigned int)v46 || v37 >= v45 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v74, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v74);
        sub_233E40((__int64)v74);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v36 - 2, v46);
      v48 = v47[1];
      v36 = v47 + 2;
      *v47 = v45;
      *(_QWORD *)(a1 + 56) = v47 + 2;
      LODWORD(v47) = v48;
      v33 = (size_t)&v36[2 * v48];
      v38 = v45;
      v40 = (_DWORD)v47 + 1;
    }
    else
    {
      v39 = v37;
      v40 = v37 + 1;
      v33 = (size_t)&v36[2 * v39];
    }
    *(_QWORD *)v33 = v64;
    v41 = *(struct _Unwind_Exception **)(a1 + 64);
    *(v36 - 1) = v40;
    v65 = v41;
    if ( !v41 )
      goto LABEL_36;
  }
  else
  {
    v49 = (_QWORD *)sub_186B270(0x18u);
    v36 = v49 + 1;
    *(_QWORD *)(a1 + 56) = v49 + 1;
    v49[1] = v64;
    *v49 = 0x100000002LL;
    v65 = *(struct _Unwind_Exception **)(a1 + 64);
    if ( !v65 )
    {
      v40 = 1;
      goto LABEL_37;
    }
  }
  ++LODWORD(v65->exception_cleanup);
  v40 = *(v36 - 1);
  v38 = *(v36 - 2);
LABEL_36:
  if ( v38 == v40 )
  {
    v43 = (3 * v38 + 1) >> 1;
    v33 = 8 * v43 + 8;
    if ( 8 * v38 + 8 >= (unsigned int)v33 || v38 >= v43 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v74, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v74);
      sub_233E40((__int64)v74);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (unsigned int *)sub_186B300(v36 - 2, v33);
    v36 = v44 + 2;
    *v44 = v43;
    v40 = v44[1];
    *(_QWORD *)(a1 + 56) = v36;
  }
LABEL_37:
  *(_QWORD *)&v36[2 * v40] = v65;
  *(v36 - 1) = v40 + 1;
  result = 3 * Z3_get_estimated_alloc_size_0(v65, v33);
  if ( result < 0x80000000 )
    result = 0x80000000LL;
  *(_QWORD *)(a1 + 264) = result;
  return result;
}

