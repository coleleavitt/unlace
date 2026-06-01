__int64 __fastcall sub_18D5BA0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  __m128i v17; // xmm2
  unsigned int v18; // esi
  __int64 v19; // rax
  _BYTE *v20; // rdx
  __int64 v21; // r13
  bool v22; // al
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // edx
  void **p_ptr; // rbp
  unsigned __int16 v27; // r12
  __int64 (__fastcall ***v28)(); // r14
  __int64 v29; // r12
  __int64 v30; // r13
  _BYTE *v31; // rax
  unsigned __int64 v32; // rcx
  __int16 v33; // si
  unsigned __int64 v34; // rcx
  __int16 v35; // ax
  bool v36; // cc
  __int64 v37; // r13
  unsigned __int8 *v38; // r12
  unsigned __int8 *v39; // rdx
  __int64 v40; // rax
  char *v41; // rsi
  char *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r13
  __int64 (__fastcall **v48)(); // rax
  _QWORD *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // r13
  unsigned __int8 *v52; // r12
  _BYTE *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r14
  const __m128i *v61; // rbp
  __int64 v62; // rbx
  void *v63; // rdi
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r14
  unsigned __int8 *v71; // r13
  const __m128i *v72; // r12
  __int64 v73; // rbx
  __int64 v74; // rbp
  void *v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rdi
  int v81; // edx
  _QWORD *v82; // rcx
  __int64 v83; // r13
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  __int64 v88; // [rsp+0h] [rbp-188h]
  unsigned __int64 v89; // [rsp+0h] [rbp-188h]
  __m128i v91; // [rsp+10h] [rbp-178h] BYREF
  void **v92; // [rsp+20h] [rbp-168h]
  char *v93; // [rsp+28h] [rbp-160h]
  __int64 (__fastcall ***v94)(); // [rsp+30h] [rbp-158h]
  void **v95; // [rsp+38h] [rbp-150h]
  void *v96[2]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v97; // [rsp+50h] [rbp-138h] BYREF
  void *v98[2]; // [rsp+60h] [rbp-128h] BYREF
  char v99; // [rsp+70h] [rbp-118h] BYREF
  __int64 (__fastcall **v100)(); // [rsp+80h] [rbp-108h] BYREF
  int v101; // [rsp+88h] [rbp-100h]
  __int128 v102; // [rsp+90h] [rbp-F8h]
  _BYTE *v103; // [rsp+A0h] [rbp-E8h]
  char v104; // [rsp+A8h] [rbp-E0h]
  int v105; // [rsp+ACh] [rbp-DCh]
  __int64 *v106; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  unsigned __int8 *v109; // [rsp+E0h] [rbp-A8h]
  __int64 v110; // [rsp+E8h] [rbp-A0h]
  char v111; // [rsp+138h] [rbp-50h]
  unsigned int v112; // [rsp+140h] [rbp-48h]
  char v113; // [rsp+144h] [rbp-44h]

  v6 = a2;
  v9 = *(_QWORD *)(a2 + 544);
  if ( v9 )
  {
    v10 = *(_BYTE *)(v9 + 8) & 0x7F;
    if ( (unsigned __int8)v10 <= 0x27u && (v11 = 0xFC00040180LL, _bittest64(&v11, v10)) )
    {
LABEL_4:
      v88 = sub_B8C1B0(v9);
      if ( v88 )
        goto LABEL_5;
    }
    else
    {
      v13 = 0xFC00040180LL;
      while ( 1 )
      {
        v14 = sub_B72690(v9);
        v9 = v14;
        if ( !v14 )
          break;
        v15 = *(_BYTE *)(v14 + 8) & 0x7F;
        if ( (unsigned __int8)v15 <= 0x27u && _bittest64(&v13, v15) )
          goto LABEL_4;
      }
    }
  }
  v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 248) + 2264LL) + 80LL);
  v77 = *(_QWORD *)(v76 + 72);
  v78 = v77 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v77 & 1) == 0 )
  {
    v82 = (_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v77 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v88 = v77 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v77 & 2) == 0 )
        goto LABEL_5;
      v83 = v82[2295];
      v84 = v76 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v83 )
      {
        v85 = v82[294];
        v82[304] += 24LL;
        v86 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v82[295] >= v86 + 24 && v85 )
        {
          v82[294] = v86 + 24;
          v87 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v87 = sub_986170((__int64)(v82 + 294), 24, 24, 3, a5, a6);
          v86 = v87 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v87 = v83;
        v84 = v86 | 4;
        *(_DWORD *)(v87 + 8) = 0;
        *(_QWORD *)(v87 + 16) = v76;
      }
      v78 = v84 & 0xFFFFFFFFFFFFFFFELL;
      v77 = v78 | 1;
      *(_QWORD *)(v76 + 72) = v78 | 1;
    }
  }
  v79 = v77 & 0xFFFFFFFFFFFFFFF8LL;
  v88 = v79;
  if ( v78 )
  {
    if ( (v78 & 4) != 0 )
    {
      v88 = 0;
      if ( v79 )
      {
        v80 = *(_QWORD *)v79;
        v81 = *(_DWORD *)(*(_QWORD *)v79 + 12LL);
        if ( *(_DWORD *)(v79 + 8) != v81 )
        {
          *(_DWORD *)(v79 + 8) = v81;
          v89 = v79;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v80 + 152LL))(v80, v76);
          v79 = v89;
        }
        v88 = *(_QWORD *)(v79 + 16);
      }
    }
  }
LABEL_5:
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a4 > 0xAAAAAAAAAAAAAAALL )
    std::__throw_length_error("vector::reserve");
  if ( a4 )
  {
    v16 = 24 * a4;
    v91.m128i_i64[0] = operator new(v16);
    if ( *(_QWORD *)a1 )
      operator delete(*(void **)a1);
    v17 = _mm_loadl_epi64(&v91);
    *(_QWORD *)(a1 + 16) = v16 + v17.m128i_i64[0];
    v91.m128i_i64[1] = (__int64)&a3->m128i_i64[v16 / 8];
    v92 = v98;
    *(__m128i *)a1 = _mm_unpacklo_epi64(v17, v17);
    v93 = &v99;
    while ( !sub_13E04F0(a3[1].m128i_i16[0], *(char **)(v6 + 232)) )
    {
      v41 = *(char **)(a1 + 8);
      if ( v41 == *(char **)(a1 + 16) )
      {
        sub_145E960(a1, v41, a3);
      }
      else
      {
        v42 = v41 + 24;
        *(__m128i *)(v42 - 24) = _mm_loadu_si128(a3);
        *((_QWORD *)v42 - 1) = a3[1].m128i_i64[0];
        *(_QWORD *)(a1 + 8) = v42;
      }
LABEL_30:
      a3 = (const __m128i *)((char *)a3 + 24);
      if ( (const __m128i *)v91.m128i_i64[1] == a3 )
        return a1;
    }
    v25 = a3->m128i_i32[0];
    p_ptr = &ptr;
    if ( (*(_BYTE *)(v88 + 28) & 0x7F) == 0 )
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)(v6 + 8), v25, 0x1617u, 0);
      sub_15F7200(&ptr);
      v25 = a3->m128i_i32[0];
    }
    sub_168B9F0((__int64)&ptr, (__int64 *)(v6 + 8), v25, 0x162Au, 0);
    v27 = a3[1].m128i_u16[0];
    if ( v111 )
    {
      v37 = v27;
      v38 = v109;
      if ( !v109 )
      {
        v55 = v110;
        v56 = *(_DWORD *)(v110 + 14976);
        if ( v56 )
        {
          v57 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v110 + 14976) = v57;
          v38 = *(unsigned __int8 **)(v55 + 8 * v57 + 14848);
          v58 = *((unsigned int *)v38 + 134);
          v59 = *((_QWORD *)v38 + 66);
          *v38 = 0;
          *((_DWORD *)v38 + 106) = 0;
          v58 <<= 6;
          v60 = v59 + v58;
          if ( v59 != v59 + v58 )
          {
            v91.m128i_i64[0] = (__int64)&ptr;
            v61 = a3;
            v62 = v59;
            do
            {
              while ( 1 )
              {
                v60 -= 64;
                v63 = *(void **)(v60 + 24);
                if ( v63 == (void *)(v60 + 40) )
                  break;
                operator delete(v63);
                if ( v62 == v60 )
                  goto LABEL_72;
              }
            }
            while ( v62 != v60 );
LABEL_72:
            a3 = v61;
            p_ptr = (void **)v91.m128i_i64[0];
          }
          *((_DWORD *)v38 + 134) = 0;
        }
        else
        {
          v38 = (unsigned __int8 *)operator new(0x3A0u);
          *v38 = 0;
          *((_QWORD *)v38 + 12) = v38 + 112;
          *((_QWORD *)v38 + 16) = v38 + 144;
          *((_QWORD *)v38 + 20) = v38 + 176;
          *((_QWORD *)v38 + 24) = v38 + 208;
          *((_QWORD *)v38 + 28) = v38 + 240;
          *((_QWORD *)v38 + 32) = v38 + 272;
          *((_QWORD *)v38 + 36) = v38 + 304;
          *((_QWORD *)v38 + 40) = v38 + 336;
          *((_QWORD *)v38 + 44) = v38 + 368;
          *((_QWORD *)v38 + 48) = v38 + 400;
          *((_QWORD *)v38 + 52) = v38 + 432;
          *((_QWORD *)v38 + 13) = 0;
          v38[112] = 0;
          *((_QWORD *)v38 + 17) = 0;
          v38[144] = 0;
          *((_QWORD *)v38 + 21) = 0;
          v38[176] = 0;
          *((_QWORD *)v38 + 25) = 0;
          v38[208] = 0;
          *((_QWORD *)v38 + 29) = 0;
          v38[240] = 0;
          *((_QWORD *)v38 + 33) = 0;
          v38[272] = 0;
          *((_QWORD *)v38 + 37) = 0;
          v38[304] = 0;
          *((_QWORD *)v38 + 41) = 0;
          v38[336] = 0;
          *((_QWORD *)v38 + 45) = 0;
          v38[368] = 0;
          *((_QWORD *)v38 + 49) = 0;
          v38[400] = 0;
          *((_QWORD *)v38 + 53) = 0x800000000LL;
          *((_QWORD *)v38 + 66) = v38 + 544;
          *((_QWORD *)v38 + 67) = 0x600000000LL;
        }
        v109 = v38;
      }
      v28 = &v100;
      v38[*v38 + 1] = 4;
      v39 = v109;
      v40 = *v109;
      *v109 = v40 + 1;
      *(_QWORD *)&v39[8 * v40 + 16] = v37;
    }
    else
    {
      v28 = &v100;
      if ( v113 )
      {
        v47 = sub_168B9E0(&ptr);
        v48 = (__int64 (__fastcall **)())si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
          v48 = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
        v28 = &v100;
        v100 = v48;
        v49 = sub_1587BC0(v47, (__int64 *)&v100, v43, v44, v45, v46);
        v50 = v27;
        v51 = *v49 + 32LL * v112;
        v52 = *(unsigned __int8 **)(v51 + 8);
        if ( !v52 )
        {
          v64 = *(_QWORD *)(v51 + 16);
          v65 = *(_DWORD *)(v64 + 14976);
          if ( v65 )
          {
            v66 = (unsigned int)(v65 - 1);
            *(_DWORD *)(v64 + 14976) = v66;
            v52 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
            v67 = *((unsigned int *)v52 + 134);
            v68 = *((_QWORD *)v52 + 66);
            *v52 = 0;
            *((_DWORD *)v52 + 106) = 0;
            v69 = v68 + (v67 << 6);
            if ( v68 != v69 )
            {
              v91.m128i_i64[0] = v6;
              v94 = &v100;
              v70 = v51;
              v71 = v52;
              v72 = a3;
              v95 = &ptr;
              v73 = v69;
              v74 = v68;
              do
              {
                while ( 1 )
                {
                  v73 -= 64;
                  v75 = *(void **)(v73 + 24);
                  if ( v75 == (void *)(v73 + 40) )
                    break;
                  operator delete(v75);
                  if ( v74 == v73 )
                    goto LABEL_80;
                }
              }
              while ( v74 != v73 );
LABEL_80:
              a3 = v72;
              v52 = v71;
              v6 = v91.m128i_i64[0];
              v51 = v70;
              p_ptr = v95;
              v28 = v94;
            }
            *((_DWORD *)v52 + 134) = 0;
          }
          else
          {
            v91.m128i_i64[0] = v50;
            v52 = (unsigned __int8 *)operator new(0x3A0u);
            *v52 = 0;
            *((_QWORD *)v52 + 12) = v52 + 112;
            *((_QWORD *)v52 + 16) = v52 + 144;
            *((_QWORD *)v52 + 20) = v52 + 176;
            *((_QWORD *)v52 + 24) = v52 + 208;
            *((_QWORD *)v52 + 28) = v52 + 240;
            *((_QWORD *)v52 + 32) = v52 + 272;
            *((_QWORD *)v52 + 36) = v52 + 304;
            *((_QWORD *)v52 + 40) = v52 + 336;
            *((_QWORD *)v52 + 44) = v52 + 368;
            *((_QWORD *)v52 + 48) = v52 + 400;
            *((_QWORD *)v52 + 52) = v52 + 432;
            *((_QWORD *)v52 + 13) = 0;
            v52[112] = 0;
            *((_QWORD *)v52 + 17) = 0;
            v52[144] = 0;
            *((_QWORD *)v52 + 21) = 0;
            v52[176] = 0;
            *((_QWORD *)v52 + 25) = 0;
            v52[208] = 0;
            *((_QWORD *)v52 + 29) = 0;
            v52[240] = 0;
            *((_QWORD *)v52 + 33) = 0;
            v52[272] = 0;
            *((_QWORD *)v52 + 37) = 0;
            v52[304] = 0;
            *((_QWORD *)v52 + 41) = 0;
            v52[336] = 0;
            *((_QWORD *)v52 + 45) = 0;
            v52[368] = 0;
            *((_QWORD *)v52 + 49) = 0;
            v52[400] = 0;
            *((_QWORD *)v52 + 53) = 0x800000000LL;
            v50 = v91.m128i_i64[0];
            *((_QWORD *)v52 + 66) = v52 + 544;
            *((_QWORD *)v52 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v51 + 8) = v52;
        }
        v52[*v52 + 1] = 4;
        v53 = *(_BYTE **)(v51 + 8);
        v54 = (unsigned __int8)*v53;
        *v53 = v54 + 1;
        *(_QWORD *)&v53[8 * v54 + 16] = v50;
      }
    }
    sub_15F7200(p_ptr);
    ptr = p_ptr + 3;
    v101 = 2;
    v104 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    v100 = &off_2BEBEE0;
    v105 = 1;
    v103 = nullptr;
    v102 = 0;
    v106 = (__int64 *)p_ptr;
    sub_227B8B0(v28, 0, 0, 0);
    v29 = *(_QWORD *)(a1 + 8);
    if ( v29 == *(_QWORD *)(a1 + 16) )
    {
      sub_18C5400(a1, *(_BYTE **)(a1 + 8));
      v30 = *(_QWORD *)(a1 + 8);
      v29 = v30 - 24;
    }
    else
    {
      v30 = v29 + 24;
      *(_QWORD *)v29 = 0;
      *(_QWORD *)(v29 + 8) = 0;
      *(_DWORD *)(v29 + 16) = 0;
      *(_QWORD *)(a1 + 8) = v29 + 24;
    }
    *(_QWORD *)(v30 - 16) = 0;
    v31 = v103;
    *(_WORD *)(v30 - 8) = 0;
    v32 = *((_QWORD *)&v102 + 1);
    *(_WORD *)(v30 - 6) = 0;
    v33 = a3[1].m128i_i16[0];
    *(_DWORD *)(v30 - 20) = 0;
    *(_DWORD *)(v30 - 24) = 0;
    if ( (unsigned __int16)(v33 - 214) > 1u )
    {
      *(_WORD *)(v30 - 8) = 14;
      if ( v32 > (unsigned __int64)v31 )
        goto LABEL_42;
    }
    else
    {
      if ( (unsigned __int64)v31 >= v32 )
      {
        sub_227BA10(v28, 76);
      }
      else
      {
        v103 = v31 + 1;
        *v31 = 76;
      }
      v34 = *((_QWORD *)&v102 + 1);
      *(_WORD *)(v30 - 8) = 15;
      v31 = v103;
      if ( v34 > (unsigned __int64)v103 )
      {
LABEL_42:
        v91.m128i_i64[0] = (__int64)v28;
        v103 = v31 + 1;
        *v31 = 34;
        v35 = a3[1].m128i_i16[0];
        v36 = (unsigned __int16)v35 <= 0xD4u;
        if ( v35 != 212 )
          goto LABEL_43;
        goto LABEL_53;
      }
    }
    v91.m128i_i64[0] = sub_227BA10(v28, 34);
    v35 = a3[1].m128i_i16[0];
    v36 = (unsigned __int16)v35 <= 0xD4u;
    if ( v35 != 212 )
    {
LABEL_43:
      if ( v36 )
      {
        if ( v35 == 209 )
        {
          v18 = 1;
          goto LABEL_19;
        }
        if ( v35 == 210 )
        {
          v18 = 6;
LABEL_19:
          sub_C05290(v96, v18, v88, 0);
          sub_13D3E20(v92, (_BYTE *)v96[0], (__int64)v96[1], 0);
          v19 = sub_227BF10(v91.m128i_i64[0], v98[0], v98[1]);
          v20 = *(_BYTE **)(v19 + 32);
          if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
          {
            sub_227BA10(v19, 34);
          }
          else
          {
            *(_QWORD *)(v19 + 32) = v20 + 1;
            *v20 = 34;
          }
          if ( v98[0] != v93 )
            operator delete(v98[0]);
          if ( v96[0] != &v97 )
            operator delete(v96[0]);
          v21 = *(_QWORD *)(v6 + 240);
          v22 = sub_10CCDE0(a3[1].m128i_i16[0]);
          v23 = a3->m128i_i32[0];
          if ( v22 )
          {
            v24 = a3->m128i_i32[1];
            if ( !v24 )
              v24 = a3->m128i_i32[0];
          }
          else
          {
            v24 = v23 + a3->m128i_i32[1];
          }
          sub_145C860(v21, *v106, v106[1], v29, v23, v24);
          v100 = (__int64 (__fastcall **)())&unk_2C76288;
          sub_227B7A0(v28);
          if ( ptr != p_ptr + 3 )
            free(ptr);
          goto LABEL_30;
        }
      }
      else
      {
        if ( v35 == 214 )
        {
          v18 = 2;
          goto LABEL_19;
        }
        if ( (unsigned __int16)v35 < 0xD6u )
        {
          v18 = 4;
          goto LABEL_19;
        }
        if ( v35 == 215 )
        {
          v18 = 5;
          goto LABEL_19;
        }
      }
      v18 = 0;
      goto LABEL_19;
    }
LABEL_53:
    v18 = 3;
    goto LABEL_19;
  }
  return a1;
}
