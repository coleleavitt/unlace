__int64 __fastcall sub_E0EAB0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ecx
  int v3; // r13d
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 result; // rax
  char *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 *v13; // rcx
  signed __int64 v14; // r9
  _BYTE *v15; // rsi
  unsigned __int8 *v16; // rax
  void **v17; // r8
  _QWORD *v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  void **v22; // r9
  _BYTE *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int8 *v33; // r12
  _QWORD *v34; // rdx
  _BYTE *v35; // rdx
  __int64 v36; // rax
  unsigned __int8 **v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // r12
  unsigned __int64 v41; // rcx
  unsigned __int8 *v42; // rdx
  __int64 v43; // rax
  size_t v44; // rdx
  unsigned __int8 *v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 *v52; // r12
  void *v53; // rdi
  unsigned __int8 *v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // rbx
  __int64 *v62; // r12
  unsigned int v63; // r14d
  __int64 v64; // rbp
  void *v65; // rdi
  __int64 v66; // rsi
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // r13
  _QWORD *v72; // rbp
  __int64 v73; // r14
  __int64 v74; // rbx
  void *v75; // rdi
  unsigned __int8 *v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // rbx
  unsigned int v84; // r14d
  __int64 v85; // rbp
  void *v86; // rdi
  __int64 v87; // [rsp+8h] [rbp-190h]
  unsigned int v88; // [rsp+14h] [rbp-184h]
  __int64 *v90; // [rsp+28h] [rbp-170h]
  signed __int64 v91; // [rsp+28h] [rbp-170h]
  signed __int64 v92; // [rsp+28h] [rbp-170h]
  __int64 *v93; // [rsp+28h] [rbp-170h]
  __int64 v94; // [rsp+28h] [rbp-170h]
  signed __int64 v95; // [rsp+28h] [rbp-170h]
  __int64 *v96; // [rsp+28h] [rbp-170h]
  __int64 *v97; // [rsp+28h] [rbp-170h]
  unsigned int v98; // [rsp+28h] [rbp-170h]
  __int64 v99; // [rsp+28h] [rbp-170h]
  unsigned __int64 v100; // [rsp+28h] [rbp-170h]
  _QWORD *v101; // [rsp+28h] [rbp-170h]
  unsigned __int64 v102; // [rsp+28h] [rbp-170h]
  __int64 *v103; // [rsp+30h] [rbp-168h]
  __int64 *v104; // [rsp+30h] [rbp-168h]
  void **v105; // [rsp+30h] [rbp-168h]
  unsigned __int64 v106; // [rsp+30h] [rbp-168h]
  void *v107; // [rsp+30h] [rbp-168h]
  void **v108; // [rsp+30h] [rbp-168h]
  unsigned __int8 *v109; // [rsp+30h] [rbp-168h]
  unsigned int v110; // [rsp+38h] [rbp-160h]
  void **srcb; // [rsp+40h] [rbp-158h]
  unsigned __int8 *srcc; // [rsp+40h] [rbp-158h]
  _BYTE *srcd; // [rsp+40h] [rbp-158h]
  char *src; // [rsp+40h] [rbp-158h]
  char *srca; // [rsp+40h] [rbp-158h]
  int v117; // [rsp+48h] [rbp-150h]
  unsigned __int64 v118; // [rsp+48h] [rbp-150h]
  char *v119; // [rsp+58h] [rbp-140h]
  void *v120; // [rsp+60h] [rbp-138h] BYREF
  size_t n; // [rsp+68h] [rbp-130h]
  _QWORD v122[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 (__fastcall **v123)(); // [rsp+80h] [rbp-118h] BYREF
  int v124; // [rsp+88h] [rbp-110h]
  __int128 v125; // [rsp+90h] [rbp-108h]
  __int64 v126; // [rsp+A0h] [rbp-F8h]
  char v127; // [rsp+A8h] [rbp-F0h]
  int v128; // [rsp+ACh] [rbp-ECh]
  void **p_ptr; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  char v132; // [rsp+D8h] [rbp-C0h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) - 1;
  v110 = v2;
  if ( a2 && v2 > a2 )
  {
    v3 = (a2 & 1) + (a2 >> 1);
    v88 = v2 - (a2 >> 1);
  }
  else
  {
    v88 = v2;
    v3 = v2;
  }
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v87 = result;
  if ( v5 != result )
  {
    v7 = &v132;
    v8 = v3;
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      v10 = v9;
      if ( v8 <= v4 && v88 > v4 )
      {
        if ( v8 == v4 )
        {
          v31 = sub_E0E850(a1, v9, 2394);
          v32 = v110 - a2;
          v33 = *(unsigned __int8 **)v31;
          v34 = (_QWORD *)v31;
          if ( !*(_QWORD *)v31 )
          {
            v66 = *(_QWORD *)(v31 + 8);
            v67 = *(_DWORD *)(v66 + 14976);
            if ( v67 )
            {
              v68 = (unsigned int)(v67 - 1);
              *(_DWORD *)(v66 + 14976) = v68;
              v33 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
              v69 = *((unsigned int *)v33 + 134);
              v70 = *((_QWORD *)v33 + 66);
              *v33 = 0;
              *((_DWORD *)v33 + 106) = 0;
              v71 = v70 + (v69 << 6);
              if ( v70 != v71 )
              {
                v98 = v4;
                v72 = v34;
                src = v7;
                v73 = v5;
                v74 = v70;
                do
                {
                  while ( 1 )
                  {
                    v71 -= 64;
                    v75 = *(void **)(v71 + 24);
                    if ( v75 == (void *)(v71 + 40) )
                      break;
                    operator delete(v75);
                    if ( v74 == v71 )
                      goto LABEL_78;
                  }
                }
                while ( v74 != v71 );
LABEL_78:
                v34 = v72;
                v32 = v110 - a2;
                v5 = v73;
                v4 = v98;
                v7 = src;
              }
              *((_DWORD *)v33 + 134) = 0;
            }
            else
            {
              v101 = v34;
              v33 = (unsigned __int8 *)operator new(0x3A0u);
              *v33 = 0;
              *((_QWORD *)v33 + 12) = v33 + 112;
              *((_QWORD *)v33 + 16) = v33 + 144;
              *((_QWORD *)v33 + 20) = v33 + 176;
              *((_QWORD *)v33 + 24) = v33 + 208;
              *((_QWORD *)v33 + 28) = v33 + 240;
              *((_QWORD *)v33 + 32) = v33 + 272;
              *((_QWORD *)v33 + 36) = v33 + 304;
              *((_QWORD *)v33 + 40) = v33 + 336;
              *((_QWORD *)v33 + 44) = v33 + 368;
              *((_QWORD *)v33 + 48) = v33 + 400;
              *((_QWORD *)v33 + 52) = v33 + 432;
              *((_QWORD *)v33 + 13) = 0;
              v33[112] = 0;
              *((_QWORD *)v33 + 17) = 0;
              v33[144] = 0;
              *((_QWORD *)v33 + 21) = 0;
              v33[176] = 0;
              *((_QWORD *)v33 + 25) = 0;
              v33[208] = 0;
              *((_QWORD *)v33 + 29) = 0;
              v33[240] = 0;
              *((_QWORD *)v33 + 33) = 0;
              v33[272] = 0;
              *((_QWORD *)v33 + 37) = 0;
              v33[304] = 0;
              *((_QWORD *)v33 + 41) = 0;
              v33[336] = 0;
              *((_QWORD *)v33 + 45) = 0;
              v33[368] = 0;
              *((_QWORD *)v33 + 49) = 0;
              v33[400] = 0;
              *((_QWORD *)v33 + 53) = 0x800000000LL;
              v34 = v101;
              *((_QWORD *)v33 + 66) = v33 + 544;
              v32 = v110 - a2;
              *((_QWORD *)v33 + 67) = 0x600000000LL;
            }
            *v34 = v33;
          }
          v33[*v33 + 1] = 3;
          v35 = (_BYTE *)*v34;
          v36 = (unsigned __int8)*v35;
          *v35 = v36 + 1;
          *(_QWORD *)&v35[8 * v36 + 16] = v32;
        }
        goto LABEL_9;
      }
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      v12 = v11;
      if ( v11 && (*(_BYTE *)(v11 + 28) & 0x7F) == 0x26 && (*(_BYTE *)(v11 + 87) & 0x20) != 0 )
      {
        v37 = (unsigned __int8 **)sub_E0E850(a1, v10, 2415);
        v38 = *(_QWORD *)(sub_B68470(v12 + 72) + 16);
        if ( (v38 & 4) != 0 )
          v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = *v37;
        v41 = v39 - 64;
        if ( !v39 )
          v41 = 0;
        if ( !v40 )
        {
          v76 = v37[1];
          v77 = *((_DWORD *)v76 + 3744);
          if ( v77 )
          {
            v78 = (unsigned int)(v77 - 1);
            *((_DWORD *)v76 + 3744) = v78;
            v40 = *(unsigned __int8 **)&v76[8 * v78 + 14848];
            v79 = *((unsigned int *)v40 + 134);
            v80 = *((_QWORD *)v40 + 66);
            *v40 = 0;
            *((_DWORD *)v40 + 106) = 0;
            v81 = v80 + (v79 << 6);
            if ( v80 != v81 )
            {
              v109 = v40;
              v82 = v5;
              v83 = v81;
              srca = v7;
              v84 = v4;
              v85 = v80;
              do
              {
                while ( 1 )
                {
                  v83 -= 64;
                  v86 = *(void **)(v83 + 24);
                  if ( v86 == (void *)(v83 + 40) )
                    break;
                  v100 = v41;
                  operator delete(v86);
                  v41 = v100;
                  if ( v85 == v83 )
                    goto LABEL_90;
                }
              }
              while ( v85 != v83 );
LABEL_90:
              v5 = v82;
              v4 = v84;
              v40 = v109;
              v7 = srca;
            }
            *((_DWORD *)v40 + 134) = 0;
          }
          else
          {
            v102 = v41;
            v40 = (unsigned __int8 *)operator new(0x3A0u);
            *v40 = 0;
            *((_QWORD *)v40 + 12) = v40 + 112;
            *((_QWORD *)v40 + 16) = v40 + 144;
            *((_QWORD *)v40 + 20) = v40 + 176;
            *((_QWORD *)v40 + 24) = v40 + 208;
            *((_QWORD *)v40 + 28) = v40 + 240;
            *((_QWORD *)v40 + 32) = v40 + 272;
            *((_QWORD *)v40 + 36) = v40 + 304;
            *((_QWORD *)v40 + 40) = v40 + 336;
            *((_QWORD *)v40 + 44) = v40 + 368;
            *((_QWORD *)v40 + 48) = v40 + 400;
            *((_QWORD *)v40 + 52) = v40 + 432;
            *((_QWORD *)v40 + 13) = 0;
            v40[112] = 0;
            *((_QWORD *)v40 + 17) = 0;
            v40[144] = 0;
            *((_QWORD *)v40 + 21) = 0;
            v40[176] = 0;
            *((_QWORD *)v40 + 25) = 0;
            v40[208] = 0;
            *((_QWORD *)v40 + 29) = 0;
            v40[240] = 0;
            *((_QWORD *)v40 + 33) = 0;
            v40[272] = 0;
            *((_QWORD *)v40 + 37) = 0;
            v40[304] = 0;
            *((_QWORD *)v40 + 41) = 0;
            v40[336] = 0;
            *((_QWORD *)v40 + 45) = 0;
            v40[368] = 0;
            *((_QWORD *)v40 + 49) = 0;
            v40[400] = 0;
            *((_QWORD *)v40 + 53) = 0x800000000LL;
            v41 = v102;
            *((_QWORD *)v40 + 66) = v40 + 544;
            *((_QWORD *)v40 + 67) = 0x600000000LL;
          }
          *v37 = v40;
        }
        v40[*v40 + 1] = 10;
        v42 = *v37;
        v43 = **v37;
        *v42 = v43 + 1;
        *(_QWORD *)&v42[8 * v43 + 16] = v41;
        goto LABEL_9;
      }
      v125 = 0;
      ptr = v7;
      v123 = &off_2BC1F40;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      p_ptr = &ptr;
      v124 = 2;
      v127 = 0;
      v128 = 1;
      v126 = 0;
      sub_2257B70(&v123, 0, 0, 0);
      (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v5 + 16LL))(v5, &v123);
      if ( si128.m128i_i64[0] )
        break;
LABEL_15:
      v123 = (__int64 (__fastcall **)())&unk_2C4C288;
      sub_2257A60(&v123);
      if ( ptr != v7 )
        free(ptr);
LABEL_9:
      ++v4;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      v5 = result;
      if ( v87 == result )
        return result;
    }
    v13 = (__int64 *)sub_E0E850(a1, v10, 2392);
    v14 = (signed __int64)p_ptr[1];
    v15 = *p_ptr;
    v16 = (unsigned __int8 *)*v13;
    if ( !*v13 )
    {
      v54 = (unsigned __int8 *)v13[1];
      v55 = *((_DWORD *)v54 + 3744);
      if ( v55 )
      {
        v56 = (unsigned int)(v55 - 1);
        *((_DWORD *)v54 + 3744) = v56;
        v16 = *(unsigned __int8 **)&v54[8 * v56 + 14848];
        v57 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v58 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v59 = v58 + (v57 << 6);
        if ( v58 != v59 )
        {
          v118 = v10;
          v60 = v5;
          v61 = v59;
          v62 = v13;
          v119 = v7;
          v63 = v4;
          v64 = v58;
          do
          {
            while ( 1 )
            {
              v61 -= 64;
              v65 = *(void **)(v61 + 24);
              if ( v65 == (void *)(v61 + 40) )
                break;
              srcc = v16;
              v95 = v14;
              operator delete(v65);
              v14 = v95;
              v16 = srcc;
              if ( v64 == v61 )
                goto LABEL_67;
            }
          }
          while ( v64 != v61 );
LABEL_67:
          v13 = v62;
          v5 = v60;
          v4 = v63;
          v10 = v118;
          v7 = v119;
        }
        *((_DWORD *)v16 + 134) = 0;
      }
      else
      {
        srcd = *p_ptr;
        v107 = p_ptr[1];
        v96 = v13;
        v16 = (unsigned __int8 *)operator new(0x3A0u);
        *v16 = 0;
        *((_QWORD *)v16 + 12) = v16 + 112;
        *((_QWORD *)v16 + 16) = v16 + 144;
        *((_QWORD *)v16 + 20) = v16 + 176;
        *((_QWORD *)v16 + 24) = v16 + 208;
        *((_QWORD *)v16 + 28) = v16 + 240;
        *((_QWORD *)v16 + 32) = v16 + 272;
        *((_QWORD *)v16 + 36) = v16 + 304;
        *((_QWORD *)v16 + 40) = v16 + 336;
        *((_QWORD *)v16 + 44) = v16 + 368;
        *((_QWORD *)v16 + 48) = v16 + 400;
        *((_QWORD *)v16 + 52) = v16 + 432;
        *((_QWORD *)v16 + 13) = 0;
        v16[112] = 0;
        *((_QWORD *)v16 + 17) = 0;
        v16[144] = 0;
        *((_QWORD *)v16 + 21) = 0;
        v16[176] = 0;
        *((_QWORD *)v16 + 25) = 0;
        v16[208] = 0;
        *((_QWORD *)v16 + 29) = 0;
        v16[240] = 0;
        *((_QWORD *)v16 + 33) = 0;
        v16[272] = 0;
        *((_QWORD *)v16 + 37) = 0;
        v16[304] = 0;
        *((_QWORD *)v16 + 41) = 0;
        v16[336] = 0;
        *((_QWORD *)v16 + 45) = 0;
        v16[368] = 0;
        *((_QWORD *)v16 + 49) = 0;
        v16[400] = 0;
        *((_QWORD *)v16 + 53) = 0x800000000LL;
        v13 = v96;
        *((_QWORD *)v16 + 66) = v16 + 544;
        v14 = (signed __int64)v107;
        *((_QWORD *)v16 + 67) = 0x600000000LL;
        v15 = srcd;
      }
      *v13 = (__int64)v16;
    }
    v17 = &v120;
    v16[*v16 + 1] = 0;
    v120 = v122;
    if ( &v15[v14] && !v15 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v14 > 0xF )
    {
      if ( v14 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v103 = v13;
      v91 = v14;
      v18 = (_QWORD *)operator new(v14 + 1);
      v14 = v91;
      v13 = v103;
      v120 = v18;
      v122[0] = v91;
    }
    else
    {
      if ( v14 == 1 )
      {
        LOBYTE(v122[0]) = *v15;
        v18 = v122;
        goto LABEL_23;
      }
      v18 = v122;
      if ( !v14 )
      {
LABEL_23:
        n = v14;
        *((_BYTE *)v18 + v14) = 0;
        v19 = (_BYTE *)*v13;
        v20 = *(unsigned __int8 *)*v13;
        *v19 = v20 + 1;
        v21 = 32 * (v20 + 3);
        v22 = (void **)&v19[v21];
        v23 = *(_BYTE **)&v19[v21];
        if ( v120 == v122 )
        {
          v44 = n;
          if ( n )
          {
            if ( n == 1 )
            {
              *v23 = v122[0];
              v44 = n;
              v23 = *v22;
            }
            else
            {
              v105 = v22;
              v93 = v13;
              memcpy(v23, v120, n);
              v22 = v105;
              v44 = n;
              v17 = &v120;
              v13 = v93;
              v23 = *v105;
            }
          }
          v22[1] = (void *)v44;
          v23[v44] = 0;
          v23 = v120;
          goto LABEL_27;
        }
        if ( v23 == &v19[v21 + 16] )
        {
          *v22 = v120;
          v22[1] = (void *)n;
          v22[2] = (void *)v122[0];
        }
        else
        {
          v24 = *(_QWORD *)&v19[32 * (int)v20 + 112];
          *v22 = v120;
          v22[1] = (void *)n;
          v22[2] = (void *)v122[0];
          if ( v23 )
          {
            v120 = v23;
            v122[0] = v24;
LABEL_27:
            n = 0;
            *v23 = 0;
            if ( v120 != v122 )
            {
              v90 = v13;
              operator delete(v120);
              v17 = &v120;
              v13 = v90;
            }
            v25 = *v13;
            v26 = HIDWORD(v10);
            if ( *v13 )
            {
              v27 = *(unsigned int *)(v25 + 424);
              v28 = *(unsigned int *)(v25 + 428);
              v29 = v27 + 1;
            }
            else
            {
              v45 = (unsigned __int8 *)v13[1];
              v46 = *((_DWORD *)v45 + 3744);
              if ( v46 )
              {
                v47 = (unsigned int)(v46 - 1);
                *((_DWORD *)v45 + 3744) = v47;
                v25 = *(_QWORD *)&v45[8 * v47 + 14848];
                v48 = *(unsigned int *)(v25 + 536);
                *(_BYTE *)v25 = 0;
                v49 = *(_QWORD *)(v25 + 528);
                *(_DWORD *)(v25 + 424) = 0;
                v50 = v49 + (v48 << 6);
                if ( v49 == v50 )
                {
                  v29 = 1;
                  v27 = 0;
                }
                else
                {
                  v117 = v10;
                  v10 = v5;
                  v51 = v50;
                  v52 = v13;
                  do
                  {
                    while ( 1 )
                    {
                      v51 -= 64;
                      v53 = *(void **)(v51 + 24);
                      if ( v53 == (void *)(v51 + 40) )
                        break;
                      srcb = v17;
                      v106 = v26;
                      v94 = v25;
                      operator delete(v53);
                      v25 = v94;
                      v26 = v106;
                      v17 = srcb;
                      if ( v49 == v51 )
                        goto LABEL_60;
                    }
                  }
                  while ( v49 != v51 );
LABEL_60:
                  v27 = *(unsigned int *)(v25 + 424);
                  v13 = v52;
                  v5 = v10;
                  LODWORD(v10) = v117;
                  v29 = v27 + 1;
                }
                *(_DWORD *)(v25 + 536) = 0;
                v28 = *(unsigned int *)(v25 + 428);
              }
              else
              {
                v97 = v13;
                v25 = operator new(0x3A0u);
                v28 = 8;
                *(_BYTE *)v25 = 0;
                *(_QWORD *)(v25 + 96) = v25 + 112;
                *(_QWORD *)(v25 + 128) = v25 + 144;
                *(_QWORD *)(v25 + 160) = v25 + 176;
                *(_QWORD *)(v25 + 192) = v25 + 208;
                *(_QWORD *)(v25 + 224) = v25 + 240;
                *(_QWORD *)(v25 + 256) = v25 + 272;
                *(_QWORD *)(v25 + 288) = v25 + 304;
                *(_QWORD *)(v25 + 320) = v25 + 336;
                *(_QWORD *)(v25 + 352) = v25 + 368;
                *(_QWORD *)(v25 + 384) = v25 + 400;
                *(_QWORD *)(v25 + 416) = v25 + 432;
                *(_QWORD *)(v25 + 104) = 0;
                *(_BYTE *)(v25 + 112) = 0;
                *(_QWORD *)(v25 + 136) = 0;
                *(_BYTE *)(v25 + 144) = 0;
                *(_QWORD *)(v25 + 168) = 0;
                *(_BYTE *)(v25 + 176) = 0;
                *(_QWORD *)(v25 + 200) = 0;
                *(_BYTE *)(v25 + 208) = 0;
                *(_QWORD *)(v25 + 232) = 0;
                *(_BYTE *)(v25 + 240) = 0;
                *(_QWORD *)(v25 + 264) = 0;
                *(_BYTE *)(v25 + 272) = 0;
                *(_QWORD *)(v25 + 296) = 0;
                *(_BYTE *)(v25 + 304) = 0;
                *(_QWORD *)(v25 + 328) = 0;
                *(_BYTE *)(v25 + 336) = 0;
                *(_QWORD *)(v25 + 360) = 0;
                *(_BYTE *)(v25 + 368) = 0;
                *(_QWORD *)(v25 + 392) = 0;
                *(_BYTE *)(v25 + 400) = 0;
                *(_QWORD *)(v25 + 424) = 0x800000000LL;
                v13 = v97;
                v26 = HIDWORD(v10);
                v17 = &v120;
                *(_QWORD *)(v25 + 528) = v25 + 544;
                v29 = 1;
                *(_QWORD *)(v25 + 536) = 0x600000000LL;
                v27 = 0;
              }
              *v13 = v25;
            }
            v120 = (void *)__PAIR64__(v26, v10);
            LOBYTE(n) = 1;
            if ( v29 > v28 )
            {
              v108 = v17;
              v99 = v25;
              sub_22134E0(v25 + 416, v25 + 432, v29, 12);
              v25 = v99;
              v17 = v108;
              v27 = *(unsigned int *)(v99 + 424);
            }
            v30 = *(_QWORD *)(v25 + 416) + 12 * v27;
            *(_QWORD *)v30 = *v17;
            *(_DWORD *)(v30 + 8) = *((_DWORD *)v17 + 2);
            ++*(_DWORD *)(v25 + 424);
            goto LABEL_15;
          }
        }
        v23 = v122;
        v120 = v122;
        goto LABEL_27;
      }
    }
    v104 = v13;
    v92 = v14;
    memcpy(v18, v15, v14);
    v18 = v120;
    v14 = v92;
    v13 = v104;
    v17 = &v120;
    goto LABEL_23;
  }
  return result;
}

