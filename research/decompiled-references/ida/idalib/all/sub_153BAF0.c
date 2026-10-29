__int64 __fastcall sub_153BAF0(
        __int64 a1,
        __int64 (__fastcall ***a2)(),
        unsigned int a3,
        void *a4,
        __m128i a5,
        __m128 a6)
{
  __int16 v8; // ax
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned __int16 v14; // cx
  __int64 v15; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // r8
  __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rsi
  signed __int64 v28; // r10
  unsigned __int64 v29; // r11
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char *v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // r11d
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  char *v40; // r9
  size_t v41; // rcx
  char *v42; // rdi
  size_t v43; // r10
  char *v44; // r11
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 i; // rax
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rbp
  __int64 v55; // rbx
  void *v56; // rdi
  __int16 v57; // [rsp+2h] [rbp-196h]
  int v58; // [rsp+4h] [rbp-194h]
  __int64 v60; // [rsp+8h] [rbp-190h]
  char *dest; // [rsp+20h] [rbp-178h]
  int destb; // [rsp+20h] [rbp-178h]
  char *destc; // [rsp+20h] [rbp-178h]
  char *destd; // [rsp+20h] [rbp-178h]
  char *desta; // [rsp+20h] [rbp-178h]
  char *v67; // [rsp+28h] [rbp-170h]
  __int64 n; // [rsp+30h] [rbp-168h]
  size_t na; // [rsp+30h] [rbp-168h]
  size_t v70; // [rsp+38h] [rbp-160h]
  char *v71; // [rsp+38h] [rbp-160h]
  size_t v72; // [rsp+38h] [rbp-160h]
  char *v73; // [rsp+40h] [rbp-158h]
  char *v74; // [rsp+40h] [rbp-158h]
  char *v75; // [rsp+40h] [rbp-158h]
  char *v76; // [rsp+40h] [rbp-158h]
  __int64 v77; // [rsp+48h] [rbp-150h]
  char *v78; // [rsp+48h] [rbp-150h]
  char *v79; // [rsp+48h] [rbp-150h]
  char *v80; // [rsp+58h] [rbp-140h]
  __int64 v81; // [rsp+64h] [rbp-134h]
  int v82; // [rsp+6Ch] [rbp-12Ch]
  __int64 v83; // [rsp+70h] [rbp-128h] BYREF
  void *v84; // [rsp+78h] [rbp-120h]
  __int64 v85; // [rsp+80h] [rbp-118h]
  _BYTE v86[16]; // [rsp+88h] [rbp-110h] BYREF
  __int64 v87; // [rsp+98h] [rbp-100h] BYREF
  void *v88; // [rsp+A0h] [rbp-F8h]
  __int64 v89; // [rsp+A8h] [rbp-F0h]
  _BYTE v90[16]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-D8h] BYREF
  void *src; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-C8h]
  _BYTE v94[16]; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+E8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+F0h] [rbp-A8h]
  __int64 v97; // [rsp+F8h] [rbp-A0h]
  _BYTE v98[16]; // [rsp+100h] [rbp-98h] BYREF
  __int64 v99; // [rsp+110h] [rbp-88h] BYREF
  void *v100; // [rsp+118h] [rbp-80h]
  __int64 v101; // [rsp+120h] [rbp-78h]
  _BYTE v102[16]; // [rsp+128h] [rbp-70h] BYREF
  __int64 v103; // [rsp+138h] [rbp-60h] BYREF
  void *v104; // [rsp+140h] [rbp-58h]
  __int64 v105; // [rsp+148h] [rbp-50h]
  _BYTE v106[72]; // [rsp+150h] [rbp-48h] BYREF

  v57 = *(_WORD *)(a1 + 92);
  v58 = *(_DWORD *)(a1 + 88);
  v84 = v86;
  v85 = 0x200000000LL;
  v89 = 0x200000000LL;
  v8 = *(_WORD *)(a1 + 32);
  v83 = 0;
  v87 = a1 + 504;
  v88 = v90;
  if ( (unsigned __int16)(v8 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 1) )
  {
    v9 = 1;
    sub_14AB020(a1, (unsigned int *)&v83, a5, a6);
  }
  else
  {
    v9 = 0;
  }
  v95 = a1 + 504;
  v91 = 0;
  src = v94;
  v97 = 0x200000000LL;
  v93 = 0x200000000LL;
  v10 = *(_QWORD *)(a1 + 8);
  ptr = v98;
  v11 = *(_QWORD *)(v10 + 56);
  if ( (*(_BYTE *)(v11 + 47) & 0x20) != 0 && *(_WORD *)(a1 + 32) == 189 )
  {
    sub_1490230((const __m128i *)a1, (__int64)&v91, 0, 0, a5, a6);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  }
  if ( (*(_BYTE *)(v11 + 89) & 1) != 0 && *(_WORD *)(a1 + 32) == 20 )
  {
    v99 = 0;
    v100 = v102;
    v101 = 0x200000000LL;
    v105 = 0x200000000LL;
    v103 = a1 + 504;
    v104 = v106;
    sub_14A9F50((const __m128i *)a1, (__int64)&v99, a5, a6);
    v23 = (unsigned int)v93;
    v24 = (char *)v100;
    v25 = 8LL * (unsigned int)v101;
    v26 = (char *)v100 + v25;
    n = v25;
    v27 = v25 >> 3;
    v28 = 8LL * (unsigned int)v93;
    v67 = v26;
    v29 = v27;
    v30 = (unsigned int)v93;
    if ( v28 )
    {
      v31 = v27 + (unsigned int)v93;
      if ( v31 > HIDWORD(v93) )
      {
        v71 = (char *)v100;
        sub_2237220(&src, v94, v31, 8);
        v29 = v27;
        v24 = v71;
        v30 = (unsigned int)v93;
        v32 = (char *)src;
        v28 = 8LL * (unsigned int)v93;
      }
      else
      {
        v32 = (char *)src;
      }
      dest = (char *)src + v28;
      v33 = v28 >> 3;
      if ( v29 <= v28 >> 3 )
      {
        v41 = v28 - n;
        v42 = (char *)src + v28;
        v43 = n;
        v72 = v41;
        v44 = &v32[v41];
        v45 = (n >> 3) + v30;
        if ( v45 > HIDWORD(v93) )
        {
          v80 = v24;
          v79 = &v32[v41];
          v76 = v32;
          sub_2237220(&src, v94, v45, 8);
          v24 = v80;
          v43 = n;
          LODWORD(v30) = v93;
          v44 = v79;
          v32 = v76;
          v42 = (char *)src + 8 * (unsigned int)v93;
        }
        if ( v44 != dest )
        {
          v78 = v24;
          v74 = v32;
          destc = v44;
          memmove(v42, v44, v43);
          v24 = v78;
          v32 = v74;
          LODWORD(v30) = v93;
          v44 = destc;
        }
        LODWORD(v93) = (n >> 3) + v30;
        if ( v32 != v44 )
        {
          v75 = v24;
          destd = v32;
          memmove(&v32[n], v32, v72);
          v24 = v75;
          v32 = destd;
        }
        if ( v24 != v67 )
          memmove(v32, v24, n);
      }
      else
      {
        v34 = v30 + v29;
        LODWORD(v93) = v34;
        if ( v32 != dest )
        {
          v77 = v28 >> 3;
          v73 = v24;
          v70 = v28;
          na = (size_t)v32;
          memcpy(&v32[8 * v34 - v28], v32, v28);
          v33 = v77;
          v24 = v73;
          v28 = v70;
          v32 = (char *)na;
        }
        if ( v33 )
        {
          if ( (v24 >= v32 + 16 || v32 >= v24 + 16) && (unsigned __int64)(v33 - 1) > 3 )
          {
            v35 = 0;
            v36 = 0;
            v37 = ((unsigned __int64)(v33 - 2) >> 1) + 1;
            do
            {
              a5 = _mm_loadu_si128((const __m128i *)&v24[v35]);
              ++v36;
              *(__m128i *)&v32[v35] = a5;
              v35 += 16;
            }
            while ( v36 < v37 );
            v38 = 2 * v37;
            v39 = 16 * v37;
            v40 = &v32[v39];
            if ( v33 != v38 )
              *(_QWORD *)v40 = *(_QWORD *)&v24[v39];
          }
          else
          {
            for ( i = 0; i != v33; ++i )
              *(_QWORD *)&v32[8 * i] = *(_QWORD *)&v24[8 * i];
          }
          v24 += v28;
        }
        if ( v67 != v24 )
          memcpy(dest, v24, v67 - v24);
      }
    }
    else
    {
      if ( v27 + (unsigned __int64)(unsigned int)v93 > HIDWORD(v93) )
      {
        desta = (char *)v100;
        sub_2237220(&src, v94, v27 + (unsigned int)v93, 8);
        LODWORD(v29) = v27;
        v24 = desta;
        v23 = (unsigned int)v93;
      }
      if ( v24 != v67 )
      {
        destb = v29;
        memcpy((char *)src + 8 * v23, v24, n);
        LODWORD(v23) = v93;
        LODWORD(v29) = destb;
      }
      LODWORD(v93) = v29 + v23;
    }
    LODWORD(v101) = 0;
    sub_15D8C50(&v95, &v103);
    LODWORD(v105) = 0;
    sub_15DCED0(v103, &v103);
    if ( v104 != v106 )
      free(v104);
    if ( v100 != v102 )
      free(v100);
  }
  v12 = sub_153A000((const __m128i *)a1, a2, a3, a4, (__int64)&v83, (__int64)&v91, a5, a6);
  if ( !*(_BYTE *)(a1 + 2696)
    && *(_DWORD *)(a1 + 2560)
    && (*(_WORD *)(a1 + 32) == 1
     || *(__int64 (__fastcall **)(__int64, __int64, __m128i, double))(*(_QWORD *)(a1 + 8) + 1152LL) == sub_1436060) )
  {
    sub_15650B0(a1);
  }
  sub_15D8C80(&v83, &v91);
  if ( v9
    && (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 8) != 0
    && (a3 & 1) == 0
    && (v12 & 0xFFFFFFFFFFFFFFFELL) != 0
    && (*(_WORD *)(v12 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0xEE )
  {
    sub_1564820(&v99, a1, (unsigned int)v83, 2061);
    v17 = v99;
    v18 = v83;
    if ( v99 )
    {
      v19 = *(unsigned int *)(v99 + 424);
      v20 = *(unsigned int *)(v99 + 428);
      v21 = v19 + 1;
    }
    else
    {
      v46 = v100;
      v47 = *((_DWORD *)v100 + 3744);
      if ( v47 )
      {
        v50 = (unsigned int)(v47 - 1);
        *((_DWORD *)v100 + 3744) = v50;
        v17 = v46[v50 + 1856];
        v51 = *(unsigned int *)(v17 + 536);
        *(_BYTE *)v17 = 0;
        v52 = *(_QWORD *)(v17 + 528);
        *(_DWORD *)(v17 + 424) = 0;
        v53 = v52 + (v51 << 6);
        if ( v52 != v53 )
        {
          v54 = v18;
          v55 = v52;
          do
          {
            while ( 1 )
            {
              v53 -= 64;
              v56 = *(void **)(v53 + 24);
              if ( v56 == (void *)(v53 + 40) )
                break;
              operator delete(v56);
              if ( v55 == v53 )
                goto LABEL_89;
            }
          }
          while ( v55 != v53 );
LABEL_89:
          v18 = v54;
        }
        v19 = *(unsigned int *)(v17 + 424);
        v20 = *(unsigned int *)(v17 + 428);
        *(_DWORD *)(v17 + 536) = 0;
        v21 = v19 + 1;
      }
      else
      {
        v60 = v83;
        v48 = operator new(0x3A0u);
        v20 = 8;
        v21 = 1;
        v17 = v48;
        *(_BYTE *)v48 = 0;
        *(_QWORD *)(v48 + 96) = v48 + 112;
        *(_QWORD *)(v48 + 128) = v48 + 144;
        *(_QWORD *)(v48 + 160) = v48 + 176;
        *(_QWORD *)(v48 + 192) = v48 + 208;
        *(_QWORD *)(v48 + 224) = v48 + 240;
        *(_QWORD *)(v48 + 256) = v48 + 272;
        *(_QWORD *)(v48 + 288) = v48 + 304;
        *(_QWORD *)(v48 + 320) = v48 + 336;
        *(_QWORD *)(v48 + 352) = v48 + 368;
        *(_QWORD *)(v48 + 384) = v48 + 400;
        *(_QWORD *)(v48 + 416) = v48 + 432;
        *(_QWORD *)(v48 + 104) = 0;
        *(_BYTE *)(v48 + 112) = 0;
        *(_QWORD *)(v48 + 136) = 0;
        *(_BYTE *)(v48 + 144) = 0;
        *(_QWORD *)(v48 + 168) = 0;
        *(_BYTE *)(v48 + 176) = 0;
        *(_QWORD *)(v48 + 200) = 0;
        *(_BYTE *)(v48 + 208) = 0;
        *(_QWORD *)(v48 + 232) = 0;
        *(_BYTE *)(v48 + 240) = 0;
        *(_QWORD *)(v48 + 264) = 0;
        *(_BYTE *)(v48 + 272) = 0;
        *(_QWORD *)(v48 + 296) = 0;
        *(_BYTE *)(v48 + 304) = 0;
        *(_QWORD *)(v48 + 328) = 0;
        *(_BYTE *)(v48 + 336) = 0;
        *(_QWORD *)(v48 + 360) = 0;
        *(_BYTE *)(v48 + 368) = 0;
        *(_QWORD *)(v48 + 392) = 0;
        *(_BYTE *)(v48 + 400) = 0;
        *(_QWORD *)(v48 + 424) = 0x800000000LL;
        v18 = v60;
        *(_QWORD *)(v48 + 528) = v48 + 544;
        *(_QWORD *)(v48 + 536) = 0x600000000LL;
        v19 = 0;
      }
      v99 = v17;
    }
    v81 = v18;
    LOBYTE(v82) = 1;
    if ( v21 > v20 )
    {
      sub_2237220(v17 + 416, v17 + 432, v21, 12);
      v19 = *(unsigned int *)(v17 + 424);
    }
    v22 = *(_QWORD *)(v17 + 416) + 12 * v19;
    *(_QWORD *)v22 = v81;
    *(_DWORD *)(v22 + 8) = v82;
    ++*(_DWORD *)(v17 + 424);
    sub_AEA040((__int64)&v99);
  }
  if ( (_DWORD)v85 && v12 != 1 )
    v12 = sub_1C49890(*(_QWORD *)(a1 + 96), &v83, v12 & 0xFFFFFFFFFFFFFFFELL);
  sub_15DCED0(v95, &v95);
  if ( ptr != v98 )
    free(ptr);
  if ( src != v94 )
    free(src);
  sub_15DCED0(v87, &v87);
  if ( v88 != v90 )
    free(v88);
  if ( v84 != v86 )
    free(v84);
  v13 = *(_DWORD *)(a1 + 2792);
  if ( v13 )
  {
    v14 = *(_WORD *)(a1 + 88);
    v15 = *(_QWORD *)(a1 + 2784) + 24LL * v13 - 24;
    do
    {
      if ( v14 == *(_WORD *)(v15 + 14) )
      {
        if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_27;
      }
      else if ( v14 > *(_WORD *)(v15 + 14) )
      {
        goto LABEL_27;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v15 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v15 + 18) )
        break;
LABEL_27:
      --v13;
      v15 -= 24;
      *(_DWORD *)(a1 + 2792) = v13;
    }
    while ( v13 );
  }
  *(_DWORD *)(a1 + 88) = v58;
  *(_WORD *)(a1 + 92) = v57;
  return v12;
}
