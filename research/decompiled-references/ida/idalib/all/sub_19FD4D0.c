void __fastcall sub_19FD4D0(__int64 *a1, char *a2, char *a3, int a4)
{
  __int64 v8; // rdx
  char v9; // cl
  bool v10; // zf
  char v11; // al
  unsigned __int8 v12; // si
  unsigned __int8 v13; // cl
  char v14; // al
  int v15; // esi
  unsigned __int8 v16; // al
  const char *v17; // r15
  __int64 *v18; // rax
  __int64 *v19; // r8
  unsigned __int64 v20; // r15
  void *v21; // rdi
  size_t v22; // rax
  __int64 *v23; // rax
  size_t v24; // rax
  __int64 (__fastcall ***v25)(); // rsi
  size_t v26; // rax
  size_t v27; // r15
  int v28; // eax
  __int64 v29; // r13
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // r10d
  __int64 v33; // r15
  _BYTE *v34; // rsi
  void *v35; // rdx
  _BYTE *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r15
  __int64 *v46; // r9
  __int64 v47; // r15
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  char *v52; // rcx
  unsigned __int64 v53; // r15
  __int64 *v54; // r11
  __int64 *v55; // r10
  char *v56; // r15
  __int64 v57; // r13
  int v58; // eax
  __int64 *v59; // rdi
  size_t v60; // rdx
  __int64 v61; // r15
  unsigned __int64 v62; // rsi
  __int64 v63; // r15
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  _BYTE *v66; // rsi
  __int64 v67; // rdx
  __int64 *v68; // r9
  __int64 v69; // rdx
  int v70; // eax
  char *v71; // r15
  __int64 v72; // r13
  int v73; // eax
  __int64 *v74; // rdi
  __int64 v75; // r15
  int v76; // r13d
  __int64 *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rcx
  __int64 *v82; // rax
  __int64 *v83; // rdi
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rcx
  __int64 *v89; // rax
  __int64 *v90; // rdi
  char *v91; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 v92; // [rsp+8h] [rbp-2D0h]
  __int64 *v93; // [rsp+10h] [rbp-2C8h]
  __int64 *v94; // [rsp+18h] [rbp-2C0h]
  _QWORD *v95; // [rsp+28h] [rbp-2B0h] BYREF
  __m128i v96; // [rsp+30h] [rbp-2A8h] BYREF
  _QWORD v97[2]; // [rsp+40h] [rbp-298h] BYREF
  void *src; // [rsp+50h] [rbp-288h] BYREF
  size_t n; // [rsp+58h] [rbp-280h]
  _QWORD v100[2]; // [rsp+60h] [rbp-278h] BYREF
  __int64 (__fastcall **v101)(); // [rsp+70h] [rbp-268h] BYREF
  int v102; // [rsp+78h] [rbp-260h]
  __int128 v103; // [rsp+80h] [rbp-258h]
  void *dest; // [rsp+90h] [rbp-248h]
  char v105; // [rsp+98h] [rbp-240h]
  int v106; // [rsp+9Ch] [rbp-23Ch]
  void **p_ptr; // [rsp+A0h] [rbp-238h]
  int v108; // [rsp+B0h] [rbp-228h] BYREF
  int v109; // [rsp+B4h] [rbp-224h]
  char v110; // [rsp+B8h] [rbp-220h]
  __int64 v111; // [rsp+BCh] [rbp-21Ch]
  char v112; // [rsp+C4h] [rbp-214h]
  void *v113; // [rsp+C8h] [rbp-210h]
  __m128 v114; // [rsp+D0h] [rbp-208h] BYREF
  char v115; // [rsp+E8h] [rbp-1F0h]
  _BYTE v116[144]; // [rsp+F0h] [rbp-1E8h] BYREF
  void *ptr; // [rsp+180h] [rbp-158h] BYREF
  __m128i si128; // [rsp+188h] [rbp-150h]
  _BYTE v119[320]; // [rsp+198h] [rbp-140h] BYREF

  v102 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v119;
  v103 = 0;
  v105 = 0;
  v101 = &off_2BEBEE0;
  v106 = 1;
  dest = nullptr;
  p_ptr = &ptr;
  sub_227B8B0(&v101, 0, 0, 0);
  v8 = *(_QWORD *)(*a1 + 232);
  v9 = (*(_BYTE *)(v8 + 1) >> 2) & 2;
  v96.m128i_i8[1] = v9 | v96.m128i_i8[1] & 0xFD;
  v10 = (*(_WORD *)v8 & 0x1008) == 0;
  v96.m128i_i8[2] = (*(_BYTE *)(v8 + 3) >> 2 << 7) | v96.m128i_i8[2] & 0x7F;
  v11 = (*(_BYTE *)(v8 + 1) >> 1) & 8 | (4 * (*(_BYTE *)v8 & 1)) | v9 & 0xF3 | !v10 | v96.m128i_i8[3] & 0xF0;
  v12 = *(_BYTE *)(v8 + 1);
  v13 = v12 >> 4;
  v14 = (32 * (((v12 >> 3) ^ 1) & 1)) | (8 * *(_BYTE *)v8) & 0x10 | v11 & 0xCF;
  v15 = *(_DWORD *)v8 & 0x10000080;
  v96.m128i_i8[3] = (((v13 ^ 1) & 1) << 6) | v14 & 0xBF;
  v16 = *(_BYTE *)(v8 + 3);
  v96.m128i_i64[1] = 0;
  v96.m128i_i8[4] = (4 * (v15 == 128)) | (v16 >> 2) & 2 | v96.m128i_i8[4] & 0xF9;
  v96.m128i_i8[5] = (*(_BYTE *)(v8 + 89) << 7) | v96.m128i_i8[5] & 0x7F;
  v10 = a4 == 20;
  v17 = "or";
  if ( !v10 )
    v17 = "and";
  v96.m128i_i64[0] = v96.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  v97[0] = v17;
  v18 = (__int64 *)j__strlen(v17);
  v97[1] = v18;
  if ( (unsigned __int64)v18 > *((_QWORD *)&v103 + 1) - (_QWORD)dest )
  {
    v19 = (__int64 *)sub_227BF10(&v101, v17, v18);
  }
  else
  {
    v19 = (__int64 *)&v101;
    if ( v18 )
    {
      v91 = (char *)v18;
      memcpy(dest, v17, (size_t)v18);
      v19 = (__int64 *)&v101;
      dest = (char *)dest + (_QWORD)v91;
    }
  }
  v91 = (char *)v19;
  v20 = j__strlen("(");
  v21 = *((void **)v91 + 4);
  if ( v20 > *((_QWORD *)v91 + 3) - (_QWORD)v21 )
  {
    sub_227BF10(v91, "(", v20);
  }
  else if ( v20 )
  {
    memcpy(v21, "(", v20);
    *((_QWORD *)v91 + 4) += v20;
  }
  v92 = 0;
  v22 = j__strlen("\n");
  sub_F07C00(a2, (__int64)&v101, 0, &v96, 0, 0, "\n", v22);
  v23 = (__int64 *)j__strlen(", ");
  if ( (unsigned __int64)v23 > *((_QWORD *)&v103 + 1) - (_QWORD)dest )
  {
    sub_227BF10(&v101, ", ", v23);
  }
  else if ( v23 )
  {
    v91 = (char *)v23;
    memcpy(dest, ", ", (size_t)v23);
    dest = (char *)dest + (_QWORD)v91;
  }
  v92 = 0;
  v91 = "\n";
  v24 = j__strlen("\n");
  v25 = &v101;
  sub_F07C00(a3, (__int64)&v101, 0, &v96, 0, 0, "\n", v24);
  v26 = j__strlen(")");
  v27 = v26;
  if ( v26 > *((_QWORD *)&v103 + 1) - (_QWORD)dest )
  {
    v25 = (__int64 (__fastcall ***)())")";
    sub_227BF10(&v101, ")", v26);
  }
  else if ( v26 )
  {
    v25 = (__int64 (__fastcall ***)())")";
    memcpy(dest, ")", v26);
    dest = (char *)dest + v27;
  }
  LODWORD(v94) = sub_EEC140((unsigned __int64)a3);
  v28 = sub_EEB7E0((unsigned __int64)a2, (__int64)v25, 0.0);
  v29 = *a1;
  LODWORD(v91) = v28;
  v30 = sub_EEB7E0((unsigned __int64)a2, (__int64)v25, 0.0);
  sub_168B9F0((__int64)v116, (__int64 *)(v29 + 8), v30, 0x1777u, 0);
  v31 = sub_1682BA0((__int64)v116, (__int64)v97);
  v32 = (int)v91;
  v33 = v31;
  v91 = (char *)v100;
  v34 = *p_ptr;
  v35 = p_ptr[1];
  src = v100;
  v113 = &v114.m128_u16[4];
  v93 = &v114.m128_i64[1];
  v111 = 0;
  v112 = 0;
  v114.m128_u64[0] = 0;
  v114.m128_i8[8] = 0;
  v115 = 0;
  v108 = v32;
  v109 = (int)v94;
  v110 = 1;
  sub_19F6410(&src, v34, (__int64)v35 + (_QWORD)v34);
  v36 = v113;
  if ( src == v100 )
  {
    v60 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v113 = v100[0];
      else
        memcpy(v113, src, n);
      v60 = n;
      v36 = v113;
    }
    v114.m128_u64[0] = v60;
    v36[v60] = 0;
    v36 = src;
  }
  else
  {
    if ( v113 == v93 )
    {
      v91 = (char *)v100[0];
      v113 = src;
      v114 = _mm_loadh_ps((const double *)&v91);
    }
    else
    {
      v91 = (char *)v100[0];
      v37 = v114.m128_u64[1];
      v113 = src;
      v114 = _mm_loadh_ps((const double *)&v91);
      if ( v36 )
      {
        src = v36;
        v100[0] = v37;
        goto LABEL_19;
      }
    }
    v36 = v100;
    src = v100;
  }
LABEL_19:
  n = 0;
  *v36 = 0;
  if ( src != v100 )
    operator delete(src);
  if ( *(_BYTE *)(v33 + 120) )
  {
    if ( !v108 || !v109 )
      goto LABEL_24;
    v46 = *(__int64 **)(v33 + 32);
    if ( v46 )
    {
      v61 = *((unsigned int *)v46 + 134);
      v62 = *((unsigned int *)v46 + 135);
      v49 = v61 + 1;
      v63 = v61 << 6;
    }
    else
    {
      v69 = *(_QWORD *)(v33 + 40);
      v70 = *(_DWORD *)(v69 + 14976);
      if ( v70 )
      {
        v79 = (unsigned int)(v70 - 1);
        *(_DWORD *)(v69 + 14976) = v79;
        v46 = *(__int64 **)(v69 + 8 * v79 + 14848);
        v80 = *((unsigned int *)v46 + 134);
        *(_BYTE *)v46 = 0;
        v81 = (__int64 *)v46[66];
        *((_DWORD *)v46 + 106) = 0;
        v82 = &v81[8 * v80];
        while ( v81 != v82 )
        {
          while ( 1 )
          {
            v82 -= 8;
            v83 = (__int64 *)v82[3];
            if ( v83 == v82 + 5 )
              break;
            v94 = v82;
            v93 = v81;
            v91 = (char *)v46;
            operator delete(v83);
            v81 = v93;
            v82 = v94;
            v46 = (__int64 *)v91;
            if ( v93 == v94 )
              goto LABEL_73;
          }
        }
LABEL_73:
        *((_DWORD *)v46 + 134) = 0;
        v62 = *((unsigned int *)v46 + 135);
      }
      else
      {
        v62 = 6;
        v46 = (__int64 *)operator new(0x3A0u);
        *(_BYTE *)v46 = 0;
        v46[12] = (__int64)(v46 + 14);
        v46[16] = (__int64)(v46 + 18);
        v46[20] = (__int64)(v46 + 22);
        v46[24] = (__int64)(v46 + 26);
        v46[28] = (__int64)(v46 + 30);
        v46[32] = (__int64)(v46 + 34);
        v46[36] = (__int64)(v46 + 38);
        v46[40] = (__int64)(v46 + 42);
        v46[44] = (__int64)(v46 + 46);
        v46[48] = (__int64)(v46 + 50);
        v46[52] = (__int64)(v46 + 54);
        v46[13] = 0;
        *((_BYTE *)v46 + 112) = 0;
        v46[17] = 0;
        *((_BYTE *)v46 + 144) = 0;
        v46[21] = 0;
        *((_BYTE *)v46 + 176) = 0;
        v46[25] = 0;
        *((_BYTE *)v46 + 208) = 0;
        v46[29] = 0;
        *((_BYTE *)v46 + 240) = 0;
        v46[33] = 0;
        *((_BYTE *)v46 + 272) = 0;
        v46[37] = 0;
        *((_BYTE *)v46 + 304) = 0;
        v46[41] = 0;
        *((_BYTE *)v46 + 336) = 0;
        v46[45] = 0;
        *((_BYTE *)v46 + 368) = 0;
        v46[49] = 0;
        *((_BYTE *)v46 + 400) = 0;
        v46[53] = 0x800000000LL;
        v46[66] = (__int64)(v46 + 68);
        v46[67] = 0x600000000LL;
      }
      *(_QWORD *)(v33 + 32) = v46;
      v49 = 1;
      v63 = 0;
    }
    v64 = v46[66];
    v52 = (char *)&v108;
    v53 = v64 + v63;
    if ( v49 <= v62 )
    {
LABEL_56:
      v65 = *(_QWORD *)v52;
      v93 = v46;
      *(_QWORD *)v53 = v65;
      *(_DWORD *)(v53 + 8) = *((_DWORD *)v52 + 2);
      *(_QWORD *)(v53 + 12) = *(_QWORD *)(v52 + 12);
      *(_DWORD *)(v53 + 20) = *((_DWORD *)v52 + 5);
      *(_QWORD *)(v53 + 24) = v53 + 40;
      v66 = *((_BYTE **)v52 + 3);
      v67 = *((_QWORD *)v52 + 4);
      v91 = v52;
      sub_19F64D0((_QWORD *)(v53 + 24), v66, (__int64)&v66[v67]);
      v68 = v93;
      *(_BYTE *)(v53 + 56) = v91[56];
      ++*((_DWORD *)v68 + 134);
      goto LABEL_24;
    }
    v54 = v46 + 66;
    v55 = v46 + 68;
    v94 = v46;
    if ( v64 <= (unsigned __int64)&v108 && v53 > (unsigned __int64)&v108 )
    {
      v93 = v46 + 68;
      v91 = (char *)(v46 + 66);
      v71 = (char *)&v108 - v64;
      v72 = sub_2237400(v46 + 66, v46 + 68, v49, 64, &src);
      sub_9EF810((__int64 *)v91, v72);
      v46 = v94;
      v73 = (int)src;
      v74 = (__int64 *)v94[66];
      if ( v74 == v93 )
      {
        v94[66] = v72;
      }
      else
      {
        v93 = (__int64 *)src;
        v91 = (char *)v94;
        free(v74);
        v46 = (__int64 *)v91;
        v73 = (int)v93;
        *((_QWORD *)v91 + 66) = v72;
      }
      *((_DWORD *)v46 + 135) = v73;
      v52 = &v71[v72];
      v53 = v72 + ((unsigned __int64)*((unsigned int *)v46 + 134) << 6);
      goto LABEL_56;
    }
LABEL_66:
    v93 = v55;
    v91 = (char *)v54;
    v75 = sub_2237400(v54, v55, v49, 64, &src);
    sub_9EF810((__int64 *)v91, v75);
    v46 = v94;
    v76 = (int)src;
    v77 = (__int64 *)v94[66];
    if ( v77 != v93 )
    {
      v91 = (char *)v94;
      free(v77);
      v46 = (__int64 *)v91;
    }
    v78 = *((unsigned int *)v46 + 134);
    v46[66] = v75;
    v52 = (char *)&v108;
    *((_DWORD *)v46 + 135) = v76;
    v53 = (v78 << 6) + v75;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v33 + 132) )
  {
    v38 = (__int64 *)sub_168B9E0((_QWORD *)v33);
    v42 = *(_QWORD **)(v33 + 16);
    if ( v42 )
    {
      v43 = *v42;
      v91 = (char *)v38;
      v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v43 + 32))(v42);
      v38 = (__int64 *)v91;
    }
    v95 = v42;
    v44 = sub_1587BC0((__int64)v38, (__int64 *)&v95, (__int64)v38, v39, v40, v41);
    if ( v108 )
    {
      if ( v109 )
      {
        v45 = *v44 + 32LL * *(unsigned int *)(v33 + 128);
        v46 = *(__int64 **)(v45 + 8);
        if ( v46 )
        {
          v47 = *((unsigned int *)v46 + 134);
          v48 = *((unsigned int *)v46 + 135);
          v49 = v47 + 1;
          v50 = v47 << 6;
        }
        else
        {
          v84 = *(_QWORD *)(v45 + 16);
          v85 = *(_DWORD *)(v84 + 14976);
          if ( v85 )
          {
            v86 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v84 + 14976) = v86;
            v46 = *(__int64 **)(v84 + 8 * v86 + 14848);
            v87 = *((unsigned int *)v46 + 134);
            *(_BYTE *)v46 = 0;
            v88 = (__int64 *)v46[66];
            *((_DWORD *)v46 + 106) = 0;
            v89 = &v88[8 * v87];
            while ( v88 != v89 )
            {
              while ( 1 )
              {
                v89 -= 8;
                v90 = (__int64 *)v89[3];
                if ( v90 == v89 + 5 )
                  break;
                v94 = v89;
                v93 = v88;
                v91 = (char *)v46;
                operator delete(v90);
                v88 = v93;
                v89 = v94;
                v46 = (__int64 *)v91;
                if ( v93 == v94 )
                  goto LABEL_81;
              }
            }
LABEL_81:
            *((_DWORD *)v46 + 134) = 0;
            v48 = *((unsigned int *)v46 + 135);
          }
          else
          {
            v48 = 6;
            v46 = (__int64 *)operator new(0x3A0u);
            *(_BYTE *)v46 = 0;
            v46[12] = (__int64)(v46 + 14);
            v46[16] = (__int64)(v46 + 18);
            v46[20] = (__int64)(v46 + 22);
            v46[24] = (__int64)(v46 + 26);
            v46[28] = (__int64)(v46 + 30);
            v46[32] = (__int64)(v46 + 34);
            v46[36] = (__int64)(v46 + 38);
            v46[40] = (__int64)(v46 + 42);
            v46[44] = (__int64)(v46 + 46);
            v46[48] = (__int64)(v46 + 50);
            v46[52] = (__int64)(v46 + 54);
            v46[13] = 0;
            *((_BYTE *)v46 + 112) = 0;
            v46[17] = 0;
            *((_BYTE *)v46 + 144) = 0;
            v46[21] = 0;
            *((_BYTE *)v46 + 176) = 0;
            v46[25] = 0;
            *((_BYTE *)v46 + 208) = 0;
            v46[29] = 0;
            *((_BYTE *)v46 + 240) = 0;
            v46[33] = 0;
            *((_BYTE *)v46 + 272) = 0;
            v46[37] = 0;
            *((_BYTE *)v46 + 304) = 0;
            v46[41] = 0;
            *((_BYTE *)v46 + 336) = 0;
            v46[45] = 0;
            *((_BYTE *)v46 + 368) = 0;
            v46[49] = 0;
            *((_BYTE *)v46 + 400) = 0;
            v46[53] = 0x800000000LL;
            v46[66] = (__int64)(v46 + 68);
            v46[67] = 0x600000000LL;
          }
          *(_QWORD *)(v45 + 8) = v46;
          v49 = 1;
          v50 = 0;
        }
        v51 = v46[66];
        v52 = (char *)&v108;
        v53 = v51 + v50;
        if ( v49 <= v48 )
          goto LABEL_56;
        v54 = v46 + 66;
        v55 = v46 + 68;
        v94 = v46;
        if ( v51 <= (unsigned __int64)&v108 && v53 > (unsigned __int64)&v108 )
        {
          v93 = v46 + 68;
          v91 = (char *)(v46 + 66);
          v56 = (char *)&v108 - v51;
          v57 = sub_2237400(v46 + 66, v46 + 68, v49, 64, &src);
          sub_9EF810((__int64 *)v91, v57);
          v46 = v94;
          v58 = (int)src;
          v59 = (__int64 *)v94[66];
          if ( v59 == v93 )
          {
            v94[66] = v57;
          }
          else
          {
            v93 = (__int64 *)src;
            v91 = (char *)v94;
            free(v59);
            v46 = (__int64 *)v91;
            v58 = (int)v93;
            *((_QWORD *)v91 + 66) = v57;
          }
          *((_DWORD *)v46 + 135) = v58;
          v52 = &v56[v57];
          v53 = v57 + ((unsigned __int64)*((unsigned int *)v46 + 134) << 6);
          goto LABEL_56;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_24:
  if ( v113 != &v114.m128_u16[4] )
    operator delete(v113);
  sub_15F7200(v116);
  v101 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v101);
  if ( ptr != v119 )
    free(ptr);
}
