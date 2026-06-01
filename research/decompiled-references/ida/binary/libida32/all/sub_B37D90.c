void __fastcall sub_B37D90(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v9; // eax
  unsigned __int8 *v10; // rdx
  char v11; // bl
  int v12; // eax
  char v13; // bl
  char *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  char *v21; // rdx
  _BYTE *v22; // rdi
  unsigned __int64 v23; // rax
  char *v24; // r11
  __int64 v25; // r13
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  char *v29; // r13
  char *v30; // rcx
  _BYTE *v31; // rax
  unsigned __int16 *v32; // rsi
  signed __int64 v33; // r14
  void **v34; // r14
  unsigned __int64 v35; // rax
  void **v36; // r15
  void **v37; // r13
  void **v38; // rdi
  void **v39; // rdi
  void **v40; // r13
  void **v41; // r15
  unsigned int *v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  void **v47; // r13
  unsigned __int64 v48; // rax
  void **v49; // r14
  void **v50; // rbx
  void **v51; // rdi
  void **v52; // rdi
  void **v53; // rbx
  void **v54; // r14
  size_t v55; // rdx
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 *v65; // rsi
  __int64 *v66; // rdx
  __int64 *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  char *v70; // rcx
  unsigned __int64 *v71; // rax
  unsigned __int64 *v72; // rdi
  unsigned __int64 v73; // rdx
  int v74; // eax
  int v75; // r13d
  char *v76; // rax
  char *v77; // rdi
  __int64 v78; // r13
  char *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r13
  unsigned __int64 *v82; // r13
  unsigned __int64 *v83; // rdi
  __int64 v84; // r13
  int v85; // eax
  unsigned __int16 *v86; // rdi
  char *s; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 *v88; // [rsp+8h] [rbp-140h]
  unsigned __int16 *v89; // [rsp+10h] [rbp-138h]
  char *v90; // [rsp+18h] [rbp-130h]
  char *v91; // [rsp+20h] [rbp-128h]
  char *v92; // [rsp+28h] [rbp-120h]
  _QWORD v93[2]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int8 *v94; // [rsp+40h] [rbp-108h] BYREF
  __int64 v95; // [rsp+48h] [rbp-100h]
  __int64 v96; // [rsp+50h] [rbp-F8h] BYREF
  void *src; // [rsp+60h] [rbp-E8h] BYREF
  size_t n; // [rsp+68h] [rbp-E0h]
  _QWORD v99[2]; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v100; // [rsp+80h] [rbp-C8h] BYREF
  int v101; // [rsp+88h] [rbp-C0h]
  __int64 v102; // [rsp+8Ch] [rbp-BCh]
  char v103; // [rsp+94h] [rbp-B4h]
  void *dest; // [rsp+98h] [rbp-B0h]
  __m128 v105; // [rsp+A0h] [rbp-A8h] BYREF
  char v106; // [rsp+B8h] [rbp-90h]
  void *v107; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 v108; // [rsp+C8h] [rbp-80h]
  __int64 v109; // [rsp+D0h] [rbp-78h]
  void *v110; // [rsp+E0h] [rbp-68h]
  _BYTE v111[16]; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v112; // [rsp+100h] [rbp-48h]

  v93[0] = a5;
  v93[1] = a6;
  sub_2222710(&v94, v93);
  v9 = sub_B29540((__int64)v94, v95);
  if ( v9 != -1 )
  {
    v11 = v9 & 3;
    goto LABEL_3;
  }
  sub_B2FAF0(&v94, (unsigned __int8 (__fastcall *)(_QWORD))sub_B16660);
  v12 = sub_B29540((__int64)v94, v95);
  v13 = v12;
  if ( v12 != -1 )
  {
    v14 = (char *)sub_B169A0(v12);
    v15 = *(_QWORD *)(a1 + 16);
    s = v14;
    sub_FA3370(&v107, v15, a3, 2648);
    v16 = (__int64)v107;
    if ( v107 )
    {
      v17 = *((unsigned int *)v107 + 106);
      v18 = *((unsigned int *)v107 + 107);
      v19 = v17 + 1;
    }
    else
    {
      v56 = v108;
      v57 = *(_DWORD *)(v108 + 14976);
      if ( v57 )
      {
        v63 = (unsigned int)(v57 - 1);
        *(_DWORD *)(v108 + 14976) = v63;
        v16 = *(_QWORD *)(v56 + 8 * v63 + 14848);
        v64 = *(unsigned int *)(v16 + 536);
        *(_BYTE *)v16 = 0;
        v65 = *(__int64 **)(v16 + 528);
        *(_DWORD *)(v16 + 424) = 0;
        v66 = &v65[8 * v64];
        if ( v65 == v66 )
        {
          v19 = 1;
          v17 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v66 -= 8;
              v67 = (__int64 *)v66[3];
              if ( v67 == v66 + 5 )
                break;
              v90 = (char *)v66;
              v89 = (unsigned __int16 *)v65;
              v88 = (unsigned __int64 *)v16;
              operator delete(v67);
              v66 = (__int64 *)v90;
              v16 = (__int64)v88;
              if ( v65 == (__int64 *)v90 )
                goto LABEL_104;
            }
          }
          while ( v65 != v66 );
LABEL_104:
          v17 = *(unsigned int *)(v16 + 424);
          v19 = v17 + 1;
        }
        *(_DWORD *)(v16 + 536) = 0;
        v18 = *(unsigned int *)(v16 + 428);
      }
      else
      {
        v16 = operator new(0x3A0u);
        v18 = 8;
        *(_BYTE *)v16 = 0;
        *(_QWORD *)(v16 + 96) = v16 + 112;
        *(_QWORD *)(v16 + 128) = v16 + 144;
        *(_QWORD *)(v16 + 160) = v16 + 176;
        *(_QWORD *)(v16 + 192) = v16 + 208;
        *(_QWORD *)(v16 + 224) = v16 + 240;
        *(_QWORD *)(v16 + 256) = v16 + 272;
        *(_QWORD *)(v16 + 288) = v16 + 304;
        *(_QWORD *)(v16 + 320) = v16 + 336;
        *(_QWORD *)(v16 + 352) = v16 + 368;
        *(_QWORD *)(v16 + 384) = v16 + 400;
        *(_QWORD *)(v16 + 416) = v16 + 432;
        *(_QWORD *)(v16 + 104) = 0;
        *(_BYTE *)(v16 + 112) = 0;
        *(_QWORD *)(v16 + 136) = 0;
        *(_BYTE *)(v16 + 144) = 0;
        *(_QWORD *)(v16 + 168) = 0;
        *(_BYTE *)(v16 + 176) = 0;
        *(_QWORD *)(v16 + 200) = 0;
        *(_BYTE *)(v16 + 208) = 0;
        *(_QWORD *)(v16 + 232) = 0;
        *(_BYTE *)(v16 + 240) = 0;
        *(_QWORD *)(v16 + 264) = 0;
        *(_BYTE *)(v16 + 272) = 0;
        *(_QWORD *)(v16 + 296) = 0;
        *(_BYTE *)(v16 + 304) = 0;
        *(_QWORD *)(v16 + 328) = 0;
        *(_BYTE *)(v16 + 336) = 0;
        *(_QWORD *)(v16 + 360) = 0;
        *(_BYTE *)(v16 + 368) = 0;
        *(_QWORD *)(v16 + 392) = 0;
        *(_BYTE *)(v16 + 400) = 0;
        *(_QWORD *)(v16 + 424) = 0x800000000LL;
        *(_QWORD *)(v16 + 528) = v16 + 544;
        v19 = 1;
        *(_QWORD *)(v16 + 536) = 0x600000000LL;
        v17 = 0;
      }
      v107 = (void *)v16;
    }
    v100 = __PAIR64__(a4, a3);
    LOBYTE(v101) = 1;
    if ( v19 > v18 )
    {
      v88 = (unsigned __int64 *)v16;
      sub_22134E0(v16 + 416, v16 + 432, v19, 12);
      v16 = (__int64)v88;
      v17 = *((unsigned int *)v88 + 106);
    }
    v20 = *(_QWORD *)(v16 + 416) + 12 * v17;
    *(_QWORD *)v20 = v100;
    *(_DWORD *)(v20 + 8) = v101;
    v21 = nullptr;
    ++*(_DWORD *)(v16 + 424);
    if ( s )
      v21 = &s[strlen(s)];
    v88 = &v100;
    v100 = __PAIR64__(a4, a3);
    dest = &v105.m128_u16[4];
    v89 = &v105.m128_u16[4];
    v102 = 0;
    v103 = 0;
    v105.m128_u64[0] = 0;
    v105.m128_i8[8] = 0;
    v106 = 0;
    LOBYTE(v101) = 1;
    src = v99;
    sub_B29310(&src, s, (__int64)v21);
    v22 = dest;
    if ( src == v99 )
    {
      v55 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v99[0];
        else
          memcpy(dest, src, n);
        v55 = n;
        v22 = dest;
      }
      v105.m128_u64[0] = v55;
      v22[v55] = 0;
      v22 = src;
    }
    else
    {
      if ( dest == v89 )
      {
        s = (char *)v99[0];
        dest = src;
        v105 = _mm_loadh_ps((const double *)&s);
      }
      else
      {
        s = (char *)v99[0];
        v23 = v105.m128_u64[1];
        dest = src;
        v105 = _mm_loadh_ps((const double *)&s);
        if ( v22 )
        {
          src = v22;
          v99[0] = v23;
          goto LABEL_17;
        }
      }
      v22 = v99;
      src = v99;
    }
LABEL_17:
    n = 0;
    *v22 = 0;
    if ( src != v99 )
      operator delete(src);
    if ( !(_DWORD)v100 || !HIDWORD(v100) )
      goto LABEL_30;
    v24 = (char *)v107;
    if ( v107 )
    {
      v25 = *((unsigned int *)v107 + 134);
      v26 = *((unsigned __int64 **)v107 + 66);
      v27 = *((unsigned int *)v107 + 135);
      v28 = v25 + 1;
      v29 = (char *)&v26[8 * v25];
    }
    else
    {
      v73 = v108;
      v74 = *(_DWORD *)(v108 + 14976);
      if ( v74 )
      {
        v80 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v108 + 14976) = v80;
        v24 = *(char **)(v73 + 8 * v80 + 14848);
        v81 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v26 = *((unsigned __int64 **)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v82 = &v26[8 * v81];
        if ( v26 != v82 )
        {
          do
          {
            while ( 1 )
            {
              v82 -= 8;
              v83 = (unsigned __int64 *)v82[3];
              if ( v83 == v82 + 5 )
                break;
              v89 = (unsigned __int16 *)v26;
              s = v24;
              operator delete(v83);
              v26 = (unsigned __int64 *)v89;
              v24 = s;
              if ( v89 == (unsigned __int16 *)v82 )
                goto LABEL_129;
            }
          }
          while ( v26 != v82 );
LABEL_129:
          v26 = *((unsigned __int64 **)v24 + 66);
        }
        *((_DWORD *)v24 + 134) = 0;
        v27 = *((unsigned int *)v24 + 135);
      }
      else
      {
        v27 = 6;
        v24 = (char *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        v26 = (unsigned __int64 *)(v24 + 544);
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v107 = v24;
      v29 = (char *)v26;
      v28 = 1;
    }
    v30 = (char *)v88;
    if ( v28 > v27 )
    {
      if ( v26 > v88 || v29 <= (char *)v88 )
      {
        v90 = v24;
        v89 = (unsigned __int16 *)(v24 + 544);
        s = v24 + 528;
        v84 = sub_22136C0(v24 + 528, v24 + 544, v28, 64, &src);
        sub_9CBAD0((__int64 *)s, v84);
        v24 = v90;
        v85 = (int)src;
        v86 = *((unsigned __int16 **)v90 + 66);
        if ( v86 == v89 )
        {
          *((_QWORD *)v90 + 66) = v84;
        }
        else
        {
          v89 = (unsigned __int16 *)src;
          s = v90;
          free(v86);
          v24 = s;
          v85 = (int)v89;
          *((_QWORD *)s + 66) = v84;
        }
        *((_DWORD *)v24 + 135) = v85;
        v30 = (char *)v88;
        v29 = (char *)(((unsigned __int64)*((unsigned int *)v24 + 134) << 6) + v84);
      }
      else
      {
        s = (char *)((char *)v88 - (char *)v26);
        v92 = v24;
        v91 = v24 + 544;
        v90 = v24 + 528;
        v89 = (unsigned __int16 *)sub_22136C0(v24 + 528, v24 + 544, v28, 64, &src);
        sub_9CBAD0((__int64 *)v90, (__int64)v89);
        v24 = v92;
        v75 = (int)src;
        v76 = (char *)v89;
        v77 = *((char **)v92 + 66);
        if ( v77 != v91 )
        {
          v90 = (char *)v89;
          v89 = (unsigned __int16 *)v92;
          free(v77);
          v24 = (char *)v89;
          v76 = v90;
        }
        *((_DWORD *)v24 + 135) = v75;
        v78 = *((unsigned int *)v24 + 134);
        v79 = s;
        *((_QWORD *)v24 + 66) = v76;
        v30 = &v79[(_QWORD)v76];
        v29 = &v76[64 * v78];
      }
    }
    *(_QWORD *)v29 = *(_QWORD *)v30;
    *((_DWORD *)v29 + 2) = *((_DWORD *)v30 + 2);
    *(_QWORD *)(v29 + 12) = *(_QWORD *)(v30 + 12);
    *((_DWORD *)v29 + 5) = *((_DWORD *)v30 + 5);
    v31 = v29 + 40;
    *((_QWORD *)v29 + 3) = v29 + 40;
    v32 = *((unsigned __int16 **)v30 + 3);
    v33 = *((_QWORD *)v30 + 4);
    if ( (unsigned __int16 *)((char *)v32 + v33) && !v32 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v33 > 0xF )
    {
      if ( v33 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v90 = v30;
      v89 = v32;
      s = v24;
      v31 = (_BYTE *)operator new(v33 + 1);
      *((_QWORD *)v29 + 5) = v33;
      v24 = s;
      v32 = v89;
      v30 = v90;
      *((_QWORD *)v29 + 3) = v31;
    }
    else
    {
      if ( v33 == 1 )
      {
        v29[40] = *(_BYTE *)v32;
LABEL_29:
        *((_QWORD *)v29 + 4) = v33;
        v31[v33] = 0;
        v29[56] = v30[56];
        ++*((_DWORD *)v24 + 134);
LABEL_30:
        if ( dest != v88 + 5 )
          operator delete(dest);
        if ( (_BYTE)v112 )
        {
          sub_FA3A50(v109, &v107, HIBYTE(v112));
          v109 = 0;
          v112 = 0;
        }
        if ( v110 != v111 )
          operator delete(v110);
        v34 = (void **)v107;
        if ( v107 )
        {
          v35 = v108;
          if ( v108 )
          {
            if ( (unsigned __int64)v107 >= v108 && (unsigned __int64)v107 <= v108 + 14848 )
            {
              v59 = *(unsigned int *)(v108 + 14976);
              *(_DWORD *)(v108 + 14976) = v59 + 1;
              *(_QWORD *)(v35 + 8 * v59 + 14848) = v34;
            }
            else
            {
              v36 = *((void ***)v107 + 66);
              v37 = &v36[8 * (unsigned __int64)*((unsigned int *)v107 + 134)];
              if ( v36 != v37 )
              {
                do
                {
                  while ( 1 )
                  {
                    v37 -= 8;
                    v38 = (void **)v37[3];
                    if ( v38 == v37 + 5 )
                      break;
                    operator delete(v38);
                    if ( v36 == v37 )
                      goto LABEL_43;
                  }
                }
                while ( v36 != v37 );
LABEL_43:
                v37 = (void **)v34[66];
              }
              if ( v37 != v34 + 68 )
                free(v37);
              v39 = (void **)v34[52];
              v40 = v34 + 52;
              if ( v39 != v34 + 54 )
                free(v39);
              v41 = v34 + 12;
              do
              {
                while ( 1 )
                {
                  v40 -= 4;
                  if ( *v40 == v40 + 2 )
                    break;
                  operator delete(*v40);
                  if ( v40 == v41 )
                    goto LABEL_51;
                }
              }
              while ( v40 != v41 );
LABEL_51:
              operator delete(v34, 0x3A0u);
            }
          }
        }
        v10 = v94;
        v11 = v13 & 3;
        goto LABEL_3;
      }
      if ( !v33 )
        goto LABEL_29;
    }
    v89 = (unsigned __int16 *)v30;
    s = v24;
    memcpy(v31, v32, v33);
    v31 = *((_BYTE **)v29 + 3);
    v30 = (char *)v89;
    v24 = s;
    goto LABEL_29;
  }
  sub_FA3370(&v107, *(_QWORD *)(a1 + 16), a3, 2645);
  v42 = (unsigned int *)v107;
  if ( v107 )
  {
    v43 = *((unsigned int *)v107 + 106);
    v44 = *((unsigned int *)v107 + 107);
    v45 = v43 + 1;
  }
  else
  {
    v60 = v108;
    v61 = *(_DWORD *)(v108 + 14976);
    if ( v61 )
    {
      v68 = (unsigned int)(v61 - 1);
      *(_DWORD *)(v108 + 14976) = v68;
      v42 = *(unsigned int **)(v60 + 8 * v68 + 14848);
      v69 = v42[134];
      *(_BYTE *)v42 = 0;
      v70 = *((char **)v42 + 66);
      v42[106] = 0;
      v71 = (unsigned __int64 *)&v70[64 * v69];
      while ( v70 != (char *)v71 )
      {
        while ( 1 )
        {
          v71 -= 8;
          v72 = (unsigned __int64 *)v71[3];
          if ( v72 == v71 + 5 )
            break;
          v88 = v71;
          s = v70;
          operator delete(v72);
          v70 = s;
          v71 = v88;
          if ( s == (char *)v88 )
            goto LABEL_117;
        }
      }
LABEL_117:
      v43 = v42[106];
      v44 = v42[107];
      v42[134] = 0;
      v45 = v43 + 1;
    }
    else
    {
      v62 = operator new(0x3A0u);
      v44 = 8;
      v45 = 1;
      v42 = (unsigned int *)v62;
      *(_BYTE *)v62 = 0;
      *(_QWORD *)(v62 + 96) = v62 + 112;
      *(_QWORD *)(v62 + 128) = v62 + 144;
      *(_QWORD *)(v62 + 160) = v62 + 176;
      *(_QWORD *)(v62 + 192) = v62 + 208;
      *(_QWORD *)(v62 + 224) = v62 + 240;
      *(_QWORD *)(v62 + 256) = v62 + 272;
      *(_QWORD *)(v62 + 288) = v62 + 304;
      *(_QWORD *)(v62 + 320) = v62 + 336;
      *(_QWORD *)(v62 + 352) = v62 + 368;
      *(_QWORD *)(v62 + 384) = v62 + 400;
      *(_QWORD *)(v62 + 416) = v62 + 432;
      *(_QWORD *)(v62 + 104) = 0;
      *(_BYTE *)(v62 + 112) = 0;
      *(_QWORD *)(v62 + 136) = 0;
      *(_BYTE *)(v62 + 144) = 0;
      *(_QWORD *)(v62 + 168) = 0;
      *(_BYTE *)(v62 + 176) = 0;
      *(_QWORD *)(v62 + 200) = 0;
      *(_BYTE *)(v62 + 208) = 0;
      *(_QWORD *)(v62 + 232) = 0;
      *(_BYTE *)(v62 + 240) = 0;
      *(_QWORD *)(v62 + 264) = 0;
      *(_BYTE *)(v62 + 272) = 0;
      *(_QWORD *)(v62 + 296) = 0;
      *(_BYTE *)(v62 + 304) = 0;
      *(_QWORD *)(v62 + 328) = 0;
      *(_BYTE *)(v62 + 336) = 0;
      *(_QWORD *)(v62 + 360) = 0;
      *(_BYTE *)(v62 + 368) = 0;
      *(_QWORD *)(v62 + 392) = 0;
      *(_BYTE *)(v62 + 400) = 0;
      *(_QWORD *)(v62 + 424) = 0x800000000LL;
      *(_QWORD *)(v62 + 528) = v62 + 544;
      *(_QWORD *)(v62 + 536) = 0x600000000LL;
      v43 = 0;
    }
    v107 = v42;
  }
  v100 = __PAIR64__(a4, a3);
  LOBYTE(v101) = 1;
  if ( v45 > v44 )
  {
    sub_22134E0(v42 + 104, v42 + 108, v45, 12);
    v43 = v42[106];
  }
  v46 = *((_QWORD *)v42 + 52) + 12 * v43;
  *(_QWORD *)v46 = v100;
  *(_DWORD *)(v46 + 8) = v101;
  ++v42[106];
  if ( (_BYTE)v112 )
  {
    sub_FA3A50(v109, &v107, HIBYTE(v112));
    v109 = 0;
    v112 = 0;
  }
  if ( v110 != v111 )
    operator delete(v110);
  v47 = (void **)v107;
  if ( v107 )
  {
    v48 = v108;
    if ( v108 )
    {
      if ( (unsigned __int64)v107 < v108 || (unsigned __int64)v107 > v108 + 14848 )
      {
        v49 = *((void ***)v107 + 66);
        v50 = &v49[8 * (unsigned __int64)*((unsigned int *)v107 + 134)];
        if ( v49 != v50 )
        {
          do
          {
            while ( 1 )
            {
              v50 -= 8;
              v51 = (void **)v50[3];
              if ( v51 == v50 + 5 )
                break;
              operator delete(v51);
              if ( v49 == v50 )
                goto LABEL_67;
            }
          }
          while ( v49 != v50 );
LABEL_67:
          v50 = (void **)v47[66];
        }
        if ( v50 != v47 + 68 )
          free(v50);
        v52 = (void **)v47[52];
        v53 = v47 + 52;
        if ( v52 != v47 + 54 )
          free(v52);
        v54 = v47 + 12;
        do
        {
          while ( 1 )
          {
            v53 -= 4;
            if ( *v53 == v53 + 2 )
              break;
            operator delete(*v53);
            if ( v53 == v54 )
              goto LABEL_75;
          }
        }
        while ( v53 != v54 );
LABEL_75:
        operator delete(v47, 0x3A0u);
      }
      else
      {
        v58 = *(unsigned int *)(v108 + 14976);
        *(_DWORD *)(v108 + 14976) = v58 + 1;
        *(_QWORD *)(v48 + 8 * v58 + 14848) = v47;
      }
    }
  }
  v10 = v94;
  v11 = 0;
LABEL_3:
  *(_BYTE *)(a2 + 15) = (32 * v11) | *(_BYTE *)(a2 + 15) & 0x9F | 0x80;
  if ( v10 != (unsigned __int8 *)&v96 )
    operator delete(v10);
}

