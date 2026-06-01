__int64 __fastcall sub_1ECB7B0(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned int a9)
{
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, __int64, __int64, void *, void *, __int64, __int64); // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // r15
  __int64 (*v24)(); // rax
  void *v25; // rax
  __int64 v26; // rax
  __m128i si128; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  void *v38; // rax
  size_t v39; // rdx
  void (*v40)(); // rax
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 (*v46)(); // rax
  __int64 v47; // rax
  void *v48; // rax
  unsigned __int128 v49; // kr10_16
  size_t v50; // rax
  __int64 v53; // [rsp+10h] [rbp-958h]
  __int64 v55; // [rsp+20h] [rbp-948h]
  char v56; // [rsp+48h] [rbp-920h]
  __int64 v57; // [rsp+50h] [rbp-918h]
  bool v58; // [rsp+70h] [rbp-8F8h]
  void (__fastcall *v59)(__int64, __int64, __int64, const char *, size_t); // [rsp+70h] [rbp-8F8h]
  char v60; // [rsp+70h] [rbp-8F8h]
  unsigned int v61; // [rsp+78h] [rbp-8F0h]
  __int64 v62; // [rsp+80h] [rbp-8E8h]
  __int64 v63; // [rsp+88h] [rbp-8E0h]
  _QWORD *v64; // [rsp+90h] [rbp-8D8h]
  char v65; // [rsp+ABh] [rbp-8BDh]
  int v66; // [rsp+ACh] [rbp-8BCh]
  unsigned int v67; // [rsp+C0h] [rbp-8A8h]
  __int64 v68; // [rsp+C8h] [rbp-8A0h]
  void *v69; // [rsp+E0h] [rbp-888h] BYREF
  char v70; // [rsp+E8h] [rbp-880h]
  _BYTE *v71; // [rsp+F0h] [rbp-878h] BYREF
  unsigned __int64 v72; // [rsp+F8h] [rbp-870h]
  __int64 v73; // [rsp+100h] [rbp-868h] BYREF
  char v74; // [rsp+108h] [rbp-860h]
  _QWORD v75[2]; // [rsp+110h] [rbp-858h] BYREF
  void *v76; // [rsp+120h] [rbp-848h] BYREF
  char v77; // [rsp+128h] [rbp-840h]
  __int64 v78; // [rsp+130h] [rbp-838h] BYREF
  unsigned __int64 v79; // [rsp+138h] [rbp-830h]
  __int64 v80; // [rsp+140h] [rbp-828h] BYREF
  char v81; // [rsp+148h] [rbp-820h]
  void *v82; // [rsp+150h] [rbp-818h] BYREF
  __int128 v83; // [rsp+158h] [rbp-810h]
  __int64 v84; // [rsp+168h] [rbp-800h] BYREF
  void *ptr; // [rsp+170h] [rbp-7F8h] BYREF
  __int128 v86; // [rsp+178h] [rbp-7F0h]
  __int64 v87; // [rsp+188h] [rbp-7E0h] BYREF
  void *v88; // [rsp+190h] [rbp-7D8h] BYREF
  __int64 v89; // [rsp+198h] [rbp-7D0h]
  _BYTE v90[16]; // [rsp+1A0h] [rbp-7C8h] BYREF
  _BYTE *v91; // [rsp+1B0h] [rbp-7B8h] BYREF
  size_t v92; // [rsp+1B8h] [rbp-7B0h]
  void *v93; // [rsp+1C0h] [rbp-7A8h]
  size_t v94; // [rsp+1C8h] [rbp-7A0h]
  __int64 v95; // [rsp+1D0h] [rbp-798h] BYREF
  __int64 v96; // [rsp+1D8h] [rbp-790h]
  _QWORD v97[4]; // [rsp+1E0h] [rbp-788h] BYREF
  unsigned __int128 v98; // [rsp+200h] [rbp-768h] BYREF
  _QWORD v99[5]; // [rsp+210h] [rbp-758h] BYREF
  char v100; // [rsp+238h] [rbp-730h] BYREF
  __m128i v101; // [rsp+250h] [rbp-718h] BYREF
  __m128i v102; // [rsp+260h] [rbp-708h]
  __int64 v103; // [rsp+270h] [rbp-6F8h]
  unsigned __int128 v104; // [rsp+278h] [rbp-6F0h] BYREF
  __int64 v105; // [rsp+288h] [rbp-6E0h]
  _QWORD v106[2]; // [rsp+290h] [rbp-6D8h] BYREF
  __int64 v107; // [rsp+2A0h] [rbp-6C8h] BYREF
  __int64 v108; // [rsp+3A0h] [rbp-5C8h]
  __int64 v109; // [rsp+3B0h] [rbp-5B8h] BYREF
  __int128 v110; // [rsp+3B8h] [rbp-5B0h]
  __int64 v111; // [rsp+3C8h] [rbp-5A0h]
  __int64 v112; // [rsp+3D0h] [rbp-598h]
  __int128 v113; // [rsp+3D8h] [rbp-590h] BYREF
  __int64 v114; // [rsp+3E8h] [rbp-580h]
  _QWORD v115[2]; // [rsp+3F0h] [rbp-578h] BYREF
  char v116; // [rsp+400h] [rbp-568h] BYREF
  __int64 v117; // [rsp+500h] [rbp-468h]
  void *v118; // [rsp+510h] [rbp-458h] BYREF
  __int64 v119; // [rsp+518h] [rbp-450h]
  _BYTE v120[512]; // [rsp+520h] [rbp-448h] BYREF
  void *v121[2]; // [rsp+720h] [rbp-248h] BYREF
  __m128i v122; // [rsp+730h] [rbp-238h] BYREF
  __int64 v123; // [rsp+740h] [rbp-228h]
  __int64 v124; // [rsp+748h] [rbp-220h] BYREF
  __int64 v125; // [rsp+750h] [rbp-218h]
  __int64 v126; // [rsp+758h] [rbp-210h]
  _QWORD v127[65]; // [rsp+760h] [rbp-208h] BYREF

  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4);
  v12 = 0;
  v13 = sub_1FD8800(v11, a1, a2);
  if ( !v13 )
  {
    sub_FD7D70((__int64)v121, a3, a1, a2, -1, 0, 1u, 1);
    LODWORD(v22) = v122.m128i_i8[0] & 1;
    if ( (v122.m128i_i8[0] & 1) != 0 )
    {
      sub_FC2AF0((__int64 *)v121);
      return (unsigned int)v22;
    }
    v25 = v121[0];
    v121[0] = nullptr;
    v53 = (__int64)v25;
    sub_FC2AF0((__int64 *)v121);
    v13 = v53;
    v12 = v53;
  }
  v14 = v13;
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, void *, void *, __int64, __int64))(*(_QWORD *)a5 + 24LL);
  sub_2231100(v121, v13);
  v20.m128i_i64[0] = v15(a5, v14, v16, v17, v18, v19, v121[0], v121[1], v122.m128i_i64[0], v122.m128i_i64[1]);
  v21 = v20.m128i_i64[1];
  v55 = v20.m128i_i64[0];
  v101 = v20;
  v103 = 0x200000000LL;
  v106[0] = &v107;
  v102 = 0u;
  v104 = 0;
  v105 = 0;
  v106[1] = 0x800000000LL;
  v108 = 0;
  sub_1EB0230((std::_V2 *)&v118, (__int64)&v101);
  if ( v118 )
  {
    v121[0] = v118;
    v118 = nullptr;
    sub_A0E8E0((_QWORD **)v121);
    if ( v121[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v121[0] + 8LL))(v121[0]);
    if ( v118 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v118 + 8LL))(v118);
    LODWORD(v22) = 1;
  }
  else
  {
    LODWORD(v22) = sub_1EBF490((__int64)&v101, 0xFu);
    if ( !(_BYTE)v22 )
    {
      v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 112LL))(a7);
      v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 120LL))(a7);
      v24 = *(__int64 (**)())(*(_QWORD *)a7 + 144LL);
      if ( v24 != sub_12DABF0 )
        LODWORD(v22) = ((__int64 (__fastcall *)(__int64))v24)(a7);
      v112 = 0x200000000LL;
      v115[0] = &v116;
      v115[1] = 0x800000000LL;
      v118 = v120;
      v119 = 0x4000000000LL;
      v88 = v90;
      v110 = 0;
      v113 = 0;
      v82 = &v84;
      v83 = 0;
      v109 = 0;
      v111 = 0;
      v114 = 0;
      v117 = 0;
      v89 = 0;
      v90[0] = 0;
      sub_2236E10(&v82, &v84, 256, 1);
      ptr = &v87;
      v86 = 0;
      sub_2236E10(&ptr, &v87, 256, 1);
      v57 = 0;
      while ( 1 )
      {
        sub_1EAFE10((__int64)&v69, (__int64)&v101);
        if ( (v70 & 1) != 0 )
        {
          v43 = v69;
          v69 = nullptr;
          v121[0] = v43;
          sub_A0E8E0((_QWORD **)v121);
          v42 = v121[0];
          if ( v121[0] )
            goto LABEL_100;
          goto LABEL_24;
        }
        if ( (_DWORD)v69 == 1 )
          break;
        if ( !(_DWORD)v69 )
          goto LABEL_24;
        if ( (_DWORD)v69 == 2 )
        {
          if ( HIDWORD(v69) == 16 )
          {
            sub_1EC2CE0((__int64)&v109, (__int64)&v101);
            sub_A0BAF0((__int64 *)&v98, (__int64)&v101);
            v32 = (void *)v98;
            if ( (_QWORD)v98 )
              goto LABEL_97;
            if ( v56 )
            {
              sub_1EB0310((__int64 *)v121, (__int64)&v109, 16, nullptr);
              v42 = v121[0];
              if ( v121[0] )
                goto LABEL_100;
            }
            v57 = 8LL * *((_QWORD *)&v110 + 1) - (unsigned int)v112;
          }
          else if ( HIDWORD(v69) == 17 )
          {
            v121[0] = &v122;
            v121[1] = nullptr;
            v122.m128i_i8[0] = 0;
            if ( (unsigned int)sub_1ECB4B0((__int64)&v101, (__int64)a1, a2, a9, 0, a7, (__int64)v121) )
            {
              if ( v121[0] != &v122 )
                operator delete(v121[0]);
              goto LABEL_24;
            }
            if ( v121[0] != &v122 )
              operator delete(v121[0]);
          }
          else
          {
            sub_A0BAF0((__int64 *)&v98, (__int64)&v101);
            v32 = (void *)v98;
            if ( (_QWORD)v98 )
            {
LABEL_97:
              v121[0] = v32;
              *(_QWORD *)&v98 = 0;
              sub_A0E8E0((_QWORD **)v121);
              if ( v121[0] )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v121[0] + 8LL))(v121[0]);
              v42 = (void *)v98;
              if ( (_QWORD)v98 )
LABEL_100:
                (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 8LL))(v42);
LABEL_24:
              LODWORD(v22) = 1;
              sub_A0B030((__int64 *)&v69);
              goto LABEL_25;
            }
          }
LABEL_74:
          sub_A0B030((__int64 *)&v69);
        }
        else
        {
          LODWORD(v119) = 0;
          v71 = nullptr;
          v72 = 0;
          sub_2027F10(&v73, &v101, HIDWORD(v69), &v118, &v71);
          if ( (v74 & 1) != 0 )
          {
LABEL_86:
            sub_A0AE90(&v73);
            goto LABEL_24;
          }
          switch ( (int)v73 )
          {
            case 1:
              if ( *(_QWORD *)v118 != 34
                || (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, unsigned __int64))(*(_QWORD *)a7 + 16LL))(
                     a7,
                     v71,
                     v72) )
              {
                goto LABEL_86;
              }
              goto LABEL_68;
            case 2:
              if ( !(_BYTE)v22 )
                goto LABEL_68;
              LODWORD(v98) = 2;
              v33 = sub_1EAC840((__int64 *)&v118, &v98, (__int64 *)&v71);
              v34 = (unsigned int)v98;
              v63 = v35;
              v62 = v33;
              LODWORD(v98) = v98 + 1;
              v36 = *((_QWORD *)v118 + v34);
              if ( v36 )
              {
                v59 = *(void (__fastcall **)(__int64, __int64, __int64, const char *, size_t))(*(_QWORD *)a7 + 152LL);
                v50 = j__strlen(&byte_22F0C30);
                v59(a7, v62, v63, &byte_22F0C30, v50);
                sub_A0AE90(&v73);
                goto LABEL_74;
              }
              LODWORD(v98) = v34 + 3;
              v37 = v72;
              if ( v72 > 0x13 )
              {
                v36 = v72 - 20;
                v37 = 20;
              }
              v72 = v36;
              v71 += v37;
              v38 = (void *)sub_1EAC840((__int64 *)&v118, &v98, (__int64 *)&v71);
              sub_1EAAE30((__int64)v121, (__int64)&v82, v38, v39, (__int64)v88, v89);
              v40 = *(void (**)())(*(_QWORD *)a7 + 152LL);
              if ( v40 != nullsub_612 )
                ((void (__fastcall *)(__int64, __int64, __int64, void *, void *))v40)(a7, v62, v63, v121[0], v121[1]);
              sub_1EADF80(&v122);
              goto LABEL_68;
            case 5:
              if ( !v56 )
                goto LABEL_68;
              v26 = *((_QWORD *)v118 + 1);
              v66 = *(_QWORD *)v118;
              v67 = v26;
              if ( !v66 )
                goto LABEL_68;
              v58 = (_DWORD)v26 == 0;
              if ( v65 != 1 && !(_DWORD)v26 )
                goto LABEL_68;
              v64 = v71;
              v61 = 0;
              break;
            case 6:
              (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64))(*(_QWORD *)a7 + 24LL))(a7, v71, v72);
              goto LABEL_68;
            case 7:
              LODWORD(v95) = 0;
              sub_1EAC540((__m128i **)&v98, (__int64 *)&v118, &v95);
              sub_1EAAE30((__int64)v121, (__int64)&v82, (void *)v98, *((size_t *)&v98 + 1), (__int64)v88, v89);
              (*(void (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a7 + 32LL))(a7, v121[0], v121[1]);
              sub_1EADF80(&v122);
              v41 = (void *)v98;
              if ( (_QWORD *)v98 == v99 )
                goto LABEL_68;
              goto LABEL_88;
            case 8:
              v121[0] = &v122;
              sub_1EA9D80(v121, v71, (__int64)&v71[v72]);
              sub_A0AAD0((__int64)&v88, v121);
              v41 = v121[0];
              if ( v121[0] != &v122 )
LABEL_88:
                operator delete(v41);
              goto LABEL_68;
            default:
              goto LABEL_68;
          }
          while ( 1 )
          {
            v75[0] = &v109;
            v75[1] = 8LL * *((_QWORD *)&v110 + 1) - (unsigned int)v112;
            sub_1EAF7C0((__int64 *)&v98, (__int64)&v109, *v64 + v57);
            if ( (_QWORD)v98 )
            {
              v121[0] = (void *)v98;
              *(_QWORD *)&v98 = 0;
              sub_A0E8E0((_QWORD **)v121);
              if ( v121[0] )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v121[0] + 8LL))(v121[0]);
              if ( (_QWORD)v98 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v98 + 8LL))(v98);
            }
            sub_1EAF8B0((__int64)&v76, (__int64)&v109);
            if ( (v77 & 1) != 0 )
            {
              v48 = v76;
              v76 = nullptr;
              v121[0] = v48;
              sub_A0E8E0((_QWORD **)v121);
              if ( v121[0] )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v121[0] + 8LL))(v121[0]);
            }
            v121[0] = &v122;
            v121[1] = (void *)0x4000000000LL;
            v78 = 0;
            v79 = 0;
            sub_2027F10(&v80, &v109, (unsigned int)v76, v121, &v78);
            if ( (v81 & 1) != 0 )
            {
              v47 = v80;
              v80 = 0;
              *(_QWORD *)&v98 = v47;
              sub_A0E8E0((_QWORD **)&v98);
              if ( (_QWORD)v98 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v98 + 8LL))(v98);
            }
            if ( (_DWORD)v80 != 1 )
              break;
            v68 = *((_QWORD *)v121[0] + 3);
            sub_1EA7C00(&v91, (__int64 *)v121, v78, v79);
            sub_1EAAE30((__int64)&v95, (__int64)&v82, v91, v92, (__int64)v88, v89);
            if ( v94 )
            {
              sub_1EAAE30((__int64)&v98, (__int64)&ptr, v93, v94, (__int64)v88, v89);
              v49 = v98;
              sub_1EADF80(v99);
              v45 = v49 >> 64;
              v44 = v49;
            }
            else
            {
              v44 = v95;
              v45 = v96;
            }
            v46 = *(__int64 (**)())(*(_QWORD *)a7 + 136LL);
            if ( v46 == sub_12DABE0 )
            {
              sub_1EADF80(v97);
            }
            else
            {
              v60 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, bool, bool, _QWORD))v46)(
                      a7,
                      v95,
                      v96,
                      v44,
                      v45,
                      v58,
                      v68 != 0,
                      0);
              sub_1EADF80(v97);
              if ( !v60 )
                break;
            }
            sub_A0AE90(&v80);
            if ( v121[0] != &v122 )
              free(v121[0]);
            sub_A0AE90((__int64 *)&v76);
            sub_1EAF840((__int64)v75);
            if ( v66 != ++v61 )
            {
              v58 = v67 <= v61;
              ++v64;
              if ( v67 > v61 || v65 == 1 )
                continue;
            }
            goto LABEL_68;
          }
          sub_A0AE90(&v80);
          if ( v121[0] != &v122 )
            free(v121[0]);
          sub_A0AE90((__int64 *)&v76);
          sub_1EAF840((__int64)v75);
LABEL_68:
          sub_A0AE90(&v73);
          sub_A0B030((__int64 *)&v69);
        }
      }
      sub_A0B030((__int64 *)&v69);
      if ( a6 )
      {
        sub_1EC2D40((__m128i *)v121, &v101);
        while ( !(unsigned __int8)sub_1EBF490((__int64)&v101, 0x12u) )
        {
          while ( 1 )
          {
            sub_1EAFE10((__int64)&v80, (__int64)&v101);
            if ( (v81 & 1) != 0 )
              goto LABEL_49;
            if ( (_DWORD)v80 == 1 )
              break;
            if ( !(_DWORD)v80 )
              goto LABEL_49;
            if ( (_DWORD)v80 == 2 )
            {
              sub_A0BAF0(&v95, (__int64)&v101);
              if ( v95 )
              {
                *(_QWORD *)&v98 = v95;
                v95 = 0;
                sub_A0E8E0((_QWORD **)&v98);
                if ( (_QWORD)v98 )
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v98 + 8LL))(v98);
                if ( v95 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
                goto LABEL_49;
              }
            }
            else
            {
              LODWORD(v119) = 0;
              v91 = nullptr;
              v92 = 0;
              sub_2027F10(&v95, &v101, HIDWORD(v80), &v118, &v91);
              if ( (v96 & 1) != 0 )
                goto LABEL_125;
              if ( (_DWORD)v95 == 1 )
              {
                LOBYTE(v99[0]) = 0;
                v98 = (unsigned __int64)v99;
                v99[3] = &v100;
                v99[4] = 0;
                v100 = 0;
                if ( (unsigned __int8)sub_1EADD10(&v118, v91, v92, (__int64)&v98) )
                {
                  sub_1EAB240((__int64)&v98);
LABEL_125:
                  sub_A0AE90(&v95);
LABEL_49:
                  sub_A0B030(&v80);
                  sub_A0AEB0((__int64)v127);
                  sub_A0AD20((__int64)&v124);
                  LODWORD(v22) = a6;
                  goto LABEL_25;
                }
                (*(void (__fastcall **)(__int64, unsigned __int128 *))(*(_QWORD *)a7 + 160LL))(a7, &v98);
                sub_1EAB240((__int64)&v98);
              }
              sub_A0AE90(&v95);
            }
            sub_A0B030(&v80);
          }
          sub_A0B030(&v80);
        }
        si128 = _mm_load_si128((const __m128i *)v121);
        v22 = v127;
        v28 = _mm_load_si128(&v122);
        v103 = v123;
        v101 = si128;
        v102 = v28;
        v98 = v104;
        v99[0] = v105;
        v29 = v124;
        v124 = 0;
        *(_QWORD *)&v104 = v29;
        v30 = v125;
        v125 = 0;
        *((_QWORD *)&v104 + 1) = v30;
        v31 = v126;
        v126 = 0;
        v105 = v31;
        sub_A0AD20((__int64)&v98);
        sub_1EC2EC0((__int64)v106, (__int64)v127);
        v108 = v127[34];
        sub_A0AEB0((__int64)v127);
        sub_A0AD20((__int64)&v124);
      }
      LOBYTE(v22) = (unsigned int)sub_1EBFAB0(0, v55, v21, (__int64)a1, a2, a9, 0, a7, a8) != 0;
LABEL_25:
      if ( ptr != &v87 )
        free(ptr);
      if ( v82 != &v84 )
        free(v82);
      if ( v88 != v90 )
        operator delete(v88);
      if ( v118 != v120 )
        free(v118);
      sub_A0AEB0((__int64)v115);
      sub_A0AD20((__int64)&v113);
    }
  }
  sub_A0AEB0((__int64)v106);
  sub_A0AD20((__int64)&v104);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  return (unsigned int)v22;
}
