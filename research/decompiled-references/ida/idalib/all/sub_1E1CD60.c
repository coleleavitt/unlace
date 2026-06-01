__int64 __fastcall sub_1E1CD60(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rbx
  __m128 si128; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14; // rcx
  char v15; // dl
  int v16; // eax
  int v17; // esi
  char v18; // dl
  unsigned int v19; // esi
  unsigned int v20; // r8d
  char v21; // si
  unsigned int v22; // r8d
  int v23; // edx
  int v24; // r13d
  __int64 v25; // rsi
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  char v29; // dl
  int v30; // ecx
  __int64 v31; // r13
  char *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rbx
  char v36; // dl
  int v37; // eax
  __int64 v38; // rax
  char *v39; // r13
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rsi
  char v43; // cl
  char v44; // dl
  int v45; // ecx
  int v46; // r8d
  char v47; // al
  int v48; // edx
  int v49; // r14d
  int v50; // r13d
  unsigned __int64 v51; // r15
  char v52; // r14
  unsigned __int64 v53; // rax
  _BYTE *v54; // r13
  _BYTE *v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // si
  __int64 v60; // rax
  __int64 v61; // rdi
  char v62; // al
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rax
  _DWORD *v66; // rdx
  _DWORD *v67; // rcx
  int v68; // esi
  int v69; // edi
  int v70; // eax
  unsigned __int64 v71; // rcx
  __m128 v72; // xmm0
  void *v73; // r13
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  int v77; // eax
  unsigned __int16 *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rbp
  unsigned __int64 v81; // rbx
  char *v82; // rax
  __int64 v83; // rdx
  unsigned __int16 v84; // ax
  _DWORD *v85; // r8
  __int64 v86; // rax
  __int64 v87; // r8
  _QWORD *v88; // rax
  _QWORD *v89; // r8
  _QWORD *v90; // rsi
  __int64 v91; // [rsp-10h] [rbp-2B8h]
  int v93; // [rsp+20h] [rbp-288h]
  unsigned int v94; // [rsp+28h] [rbp-280h]
  __int64 v95; // [rsp+28h] [rbp-280h]
  int v96; // [rsp+30h] [rbp-278h]
  int v97; // [rsp+30h] [rbp-278h]
  void *v98; // [rsp+30h] [rbp-278h]
  __int64 v99; // [rsp+48h] [rbp-260h]
  __int64 v100; // [rsp+68h] [rbp-240h]
  __int64 v101; // [rsp+70h] [rbp-238h] BYREF
  _DWORD *v102; // [rsp+78h] [rbp-230h]
  __m128i v103; // [rsp+80h] [rbp-228h] BYREF
  __m128i v104; // [rsp+90h] [rbp-218h] BYREF
  void *v105; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-200h]
  _BYTE v107[32]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v108[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE v109[32]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __m128 v111; // [rsp+108h] [rbp-1A0h]
  _BYTE v112[16]; // [rsp+118h] [rbp-190h] BYREF
  char v113; // [rsp+128h] [rbp-180h]
  void *v114; // [rsp+130h] [rbp-178h] BYREF
  __int64 v115; // [rsp+138h] [rbp-170h]
  _QWORD v116[4]; // [rsp+140h] [rbp-168h] BYREF
  __m128 v117[4]; // [rsp+160h] [rbp-148h] BYREF
  _BYTE *v118; // [rsp+1A8h] [rbp-100h]
  _BYTE *v119; // [rsp+1B8h] [rbp-F0h]
  void *v120; // [rsp+1C0h] [rbp-E8h]
  _QWORD *v121; // [rsp+1C8h] [rbp-E0h]
  __int64 v122; // [rsp+1D0h] [rbp-D8h]
  void *v123[25]; // [rsp+1E0h] [rbp-C8h] BYREF

  v9 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v102 = a4;
  v105 = v107;
  v106 = 0x400000000LL;
  v108[1] = (void *)0x400000000LL;
  ptr = v112;
  v111 = si128;
  v113 = 0;
  v11 = *(_QWORD *)(a3 + 16);
  v101 = a3;
  v108[0] = v109;
  if ( (v11 & 0x100000000LL) == 0 )
  {
    v36 = *(_BYTE *)(a3 + 16);
    if ( v36 == 26 )
    {
      v37 = ((*(_BYTE *)(v9 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v38 = 16;
      if ( v36 == 25 )
        goto LABEL_31;
      v37 = 15;
    }
    v38 = 8 * ((v37 + 8 * (unsigned int)*(unsigned __int16 *)(v9 + 22)) >> 3) + 8;
LABEL_31:
    v39 = (char *)v102 + v38;
    v40 = sub_F6C520(*(_QWORD *)(v9 + 24));
    v95 = sub_1E1DA60(
            a1,
            a2,
            *(_QWORD *)(v101 + 24),
            v40 * ((unsigned __int64)&v39[-(v39 != nullptr)] / v40 + (v39 != nullptr)));
    if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v41 = *(_QWORD *)(v9 + 16) >> 24;
      if ( (v41 & 0x20) != 0 )
      {
        v42 = 8LL * *(unsigned __int16 *)(v9 + 22) + 48;
        v43 = (unsigned __int8)v41 >> 6;
        v44 = *(_BYTE *)(v9 + 19);
        v45 = v43 & 1;
        if ( (v44 & 0x40) != 0 )
          v45 += (*(_BYTE *)(((v9 + v42 + ((v44 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v46 = ((v9 + v42 + (((char)BYTE3(*(_QWORD *)(v9 + 16)) >> 5) & 4) + 7) & 0xFFFFFFF8) + 8 * v45;
        v47 = ((unsigned __int8)v44 >> 1) & 0xF;
        if ( v47 == 2 )
        {
          v46 += 8 * (*(_WORD *)((v9 + v42 + ((v44 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        }
        else
        {
          switch ( v47 )
          {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 11:
              switch ( v47 )
              {
                case 6:
                case 7:
                case 8:
                  v46 += 8;
                  goto LABEL_44;
                case 9:
                  goto LABEL_119;
                case 10:
                  goto LABEL_118;
                default:
LABEL_44:
                  switch ( v47 )
                  {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                      goto LABEL_46;
                    case 9:
                      goto LABEL_119;
                    case 10:
                      goto LABEL_118;
                    default:
                      goto LABEL_135;
                  }
              }
            case 9:
LABEL_119:
              v46 += 8;
              break;
            case 10:
LABEL_118:
              v46 += 16;
              break;
            default:
LABEL_135:
              JUMPOUT(0x2EAE12);
          }
        }
      }
      else
      {
        v46 = 0;
      }
LABEL_46:
      v48 = 0;
      v49 = v101 + 48;
      v50 = (_DWORD)v102 + 16;
      if ( *(_BYTE *)(v101 + 16) != 25 )
        v48 = *(unsigned __int16 *)(v101 + 22);
      v97 = v48;
      v93 = v46;
      sub_F6CCB0(&v101, si128);
      if ( !(unsigned __int8)sub_1E2FA80(
                               (_DWORD)a1,
                               v50,
                               v97,
                               v49,
                               v93,
                               (unsigned int)&v105,
                               (__int64)v108,
                               (__int64)&ptr) )
        goto LABEL_49;
    }
LABEL_20:
    v34 = 0;
    goto LABEL_21;
  }
  v12 = v11 >> 24;
  if ( (v12 & 0x20) != 0 )
  {
    v14 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
    v15 = v12;
    v16 = (v12 & 0x40) != 0;
    v17 = v9 + v14 + ((v15 >> 5) & 4) + 7;
    v18 = *(_BYTE *)(v9 + 19);
    v19 = v17 & 0xFFFFFFF8;
    if ( (v18 & 0x40) != 0 )
      v16 += (*(_BYTE *)(((v9 + v14 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v20 = v19 + 8 * v16;
    v21 = ((unsigned __int8)v18 >> 1) & 0xF;
    if ( v21 != 2 )
      __asm { jmp     rax }
    v22 = v20 + 8 * (*(_WORD *)((v9 + ((v18 >> 5) & 4) + v14 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v22 = 0;
  }
  v23 = 0;
  v24 = (_DWORD)v102 + 16;
  if ( *(_BYTE *)(v9 + 16) != 25 )
    v23 = *(unsigned __int16 *)(v9 + 22);
  v96 = v23;
  v94 = v22;
  sub_F6CCB0(&v101, si128);
  if ( (unsigned __int8)sub_1E2FA80(
                          (_DWORD)a1,
                          v24,
                          v96,
                          (int)v9 + 48,
                          v94,
                          (unsigned int)&v105,
                          (__int64)v108,
                          (__int64)&ptr) )
    goto LABEL_20;
  v25 = *a1;
  v26 = *(_QWORD *)(*a1 + 3032);
  if ( !v26 )
    v26 = *(_QWORD *)(v25 + 544);
  v27 = *(_BYTE *)(v26 + 8);
  v28 = v26 - 64;
  if ( (v27 & 0x7Fu) - 59 >= 3 )
    v28 = 0;
  sub_19A2CD0((__int64)v123, v25, v28, a5, 1, v91);
  v29 = *(_BYTE *)(v101 + 16);
  if ( v29 == 26 )
  {
    v30 = ((*(_BYTE *)(v101 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v31 = 16;
    if ( v29 == 25 )
      goto LABEL_18;
    v30 = 15;
  }
  v31 = 8 * ((v30 + 8 * (unsigned int)*(unsigned __int16 *)(v101 + 22)) >> 3) + 8;
LABEL_18:
  v32 = (char *)v102 + v31;
  v33 = sub_F6C520(*(_QWORD *)(v101 + 24));
  v95 = sub_1E1DA60(
          a1,
          a2,
          *(_QWORD *)(v101 + 24),
          v33 * ((unsigned __int64)&v32[-(v32 != nullptr)] / v33 + (v32 != nullptr)));
  if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v34 = 0;
    sub_19A2DA0((__int64 *)v123);
    goto LABEL_21;
  }
  sub_19A2DA0((__int64 *)v123);
LABEL_49:
  sub_A5E110(v117, v9);
  sub_F6CCB0(a6, si128);
  v51 = (unsigned int)v106;
  v52 = v113;
  if ( !v113 )
  {
    v55 = v118;
LABEL_81:
    v52 = 0;
    if ( v55 )
    {
      v118 = nullptr;
      v52 = 1;
    }
    goto LABEL_69;
  }
  v53 = v111.m128_u64[0];
  if ( (unsigned int)v106 == v111.m128_u64[0] )
    goto LABEL_84;
  if ( (unsigned int)v106 < v111.m128_u64[0] )
  {
    v111.m128_u64[0] = (unsigned int)v106;
LABEL_84:
    v54 = ptr;
    goto LABEL_57;
  }
  if ( (unsigned int)v106 > v111.m128_u64[1] )
  {
    sub_2236E10(&ptr, v112, (unsigned int)v106, 1);
    v53 = v111.m128_u64[0];
  }
  v54 = ptr;
  if ( (char *)ptr + v53 != (char *)ptr + v51 )
    memset((char *)ptr + v53, 0, v51 - v53);
  v111.m128_u64[0] = v51;
LABEL_57:
  v55 = v118;
  if ( !v54 )
    goto LABEL_81;
  if ( !v118 )
    goto LABEL_68;
  if ( *(_BYTE *)(v101 + 16) == 25 )
  {
    v57 = 0;
    v56 = 0;
  }
  else
  {
    v56 = *(unsigned __int16 *)(v101 + 22);
    v57 = *(unsigned __int16 *)(v101 + 22);
  }
  if ( (_DWORD)v106 != v56 )
    goto LABEL_68;
  if ( v118 == &v118[v57] )
    goto LABEL_67;
  if ( *v54 == *v118 )
  {
    v58 = 1;
    while ( v58 != v57 )
    {
      v59 = v118[v58++];
      if ( v59 != v54[v58 - 1] )
        goto LABEL_68;
    }
LABEL_67:
    v52 = 0;
  }
LABEL_68:
  v118 = v54;
LABEL_69:
  memset(v123, 0, 0x88u);
  v60 = *a1;
  v99 = *a1;
  if ( !v122 )
    goto LABEL_70;
  v72 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(v123[16]) = 1;
  v73 = nullptr;
  v123[0] = &v123[3];
  v123[8] = &v123[10];
  v123[9] = (void *)0x600000000LL;
  *(__m128 *)&v123[1] = v72;
  sub_18C74E0(v60, 4, 0, 4);
  v98 = v120;
  if ( !v120 )
    goto LABEL_133;
  v100 = v9;
  do
  {
    if ( v122 )
    {
      v78 = (unsigned __int16 *)v121[(_QWORD)v73];
      v104.m128i_i8[0] = *((_BYTE *)v73 + (_QWORD)v119);
      v104.m128i_i64[1] = (__int64)v78;
      v103 = _mm_load_si128(&v104);
      if ( v78 )
      {
        v79 = sub_1E11560(a1, v78, v72, a8, (__int64)v121, v74, v75);
        if ( v79 == 1
          || (v80 = *a1,
              v81 = v79 & 0xFFFFFFFFFFFFFFFELL,
              v82 = sub_F5ED10(v104.m128i_i8),
              v84 = sub_1E72620(v80, v81, v82, v83),
              !HIBYTE(v84)) )
        {
          v34 = 0;
          sub_190D5E0(v99, v72);
          goto LABEL_74;
        }
        switch ( (_BYTE)v84 )
        {
          case 2:
            goto LABEL_113;
          case 3:
            v103.m128i_i64[1] = v81;
            break;
          case 1:
            v103.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v104);
LABEL_113:
            v103.m128i_i64[1] = 0;
            break;
        }
      }
    }
    else
    {
      v104.m128i_i8[0] = *((_BYTE *)v73 + (_QWORD)v119);
      v104.m128i_i64[1] = 0;
      a8 = (__m128)_mm_load_si128(&v104);
      v103 = (__m128i)a8;
    }
    v76 = *a1;
    v77 = sub_F6CCB0(&v101, v72);
    v114 = v123[0];
    v116[1] = LODWORD(v123[9]);
    v115 = (__int64)v123[1];
    v116[0] = v123[8];
    if ( !(unsigned __int8)sub_19EE280(v76, &v114, v103.m128i_i8, v77) )
    {
      v114 = v116;
      v115 = 0x100000000LL;
      sub_F5EEE0((__int64 *)v123, &v103, (__int64)&v114);
      if ( v114 != v116 )
        free(v114);
    }
    v73 = (char *)v73 + 1;
  }
  while ( v98 != v73 );
  v9 = v100;
LABEL_133:
  v52 = 1;
  v119 = v123[0];
  v120 = v123[1];
  v121 = v123[8];
  v122 = LODWORD(v123[9]);
  sub_190D5E0(v99, v72);
  v99 = *a1;
LABEL_70:
  if ( *(_DWORD *)(v99 + 12632) )
    goto LABEL_72;
  v61 = v101;
  if ( v95 != *(_QWORD *)(v9 + 24) )
    goto LABEL_72;
  v86 = *(unsigned __int16 *)(v9 + 22);
  v87 = 8 * v86;
  if ( v86 != (unsigned int)v106 )
    goto LABEL_72;
  v88 = (_QWORD *)(v9 + 48);
  v89 = (_QWORD *)(v9 + 48 + v87);
  if ( (_QWORD *)(v9 + 48) == v89 )
    goto LABEL_128;
  if ( *(_QWORD *)v105 != *(_QWORD *)(v9 + 48) )
    goto LABEL_72;
  v90 = v105;
  while ( 1 )
  {
    ++v88;
    ++v90;
    if ( v89 == v88 )
      break;
    if ( *v88 != *v90 )
      goto LABEL_72;
  }
LABEL_128:
  v34 = v101;
  if ( v52 )
  {
LABEL_72:
    v34 = sub_1E6A200(v99, v95, (_DWORD)v105, v106, 0, 0, (__int64)v117);
    if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v34 = 0;
      goto LABEL_74;
    }
    v61 = v34;
  }
  v62 = *(_BYTE *)(v61 + 16);
  if ( v62 == 26 )
  {
    v63 = ((*(_BYTE *)(v61 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    goto LABEL_88;
  }
  v64 = 16;
  if ( v62 != 25 )
  {
    v63 = 15;
LABEL_88:
    v64 = 8 * ((v63 + 8 * (unsigned int)*(unsigned __int16 *)(v61 + 22)) >> 3) + 8;
  }
  v65 = sub_1EA6140(a2, v34, v64, 8);
  v67 = v102;
  *v66 = *v102;
  v66[1] = v67[1];
  v66[2] = v67[2];
  if ( *(_BYTE *)(v101 + 16) == 26 && (*(_BYTE *)(v101 + 19) & 0x1E) != 0 )
  {
    v69 = v67[2 * *(unsigned __int16 *)(v101 + 22) + 4];
    v68 = v67[2 * *(unsigned __int16 *)(v101 + 22) + 5];
  }
  else
  {
    v68 = 0;
    v69 = 0;
  }
  if ( *(_BYTE *)(v65 + 16) == 26 && (*(_BYTE *)(v65 + 19) & 0x1E) != 0 )
  {
    v85 = &v66[2 * *(unsigned __int16 *)(v65 + 22) + 4];
    *v85 = v69;
    v85[1] = v68;
  }
  v66[3] = v67[3];
  if ( *(_BYTE *)(v65 + 16) != 25 )
  {
    v70 = *(unsigned __int16 *)(v65 + 22);
    if ( v70 )
    {
      v71 = 0;
      do
      {
        *(_QWORD *)&v66[v71 / 4 + 4] = *(_QWORD *)((char *)v108[0] + v71);
        v71 += 8LL;
      }
      while ( v71 != 8LL * (unsigned int)(v70 - 1) + 8 );
    }
  }
LABEL_74:
  if ( LOBYTE(v123[16]) )
  {
    if ( v123[8] != &v123[10] )
      free(v123[8]);
    if ( v123[0] != &v123[3] )
      free(v123[0]);
  }
LABEL_21:
  if ( ptr != v112 )
    free(ptr);
  if ( v108[0] != v109 )
    free(v108[0]);
  if ( v105 != v107 )
    free(v105);
  return v34;
}
