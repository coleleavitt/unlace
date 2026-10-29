__m128i *__fastcall sub_14E9E40(__m128i *a1, __int64 a2)
{
  __int8 v2; // r15
  __int64 v3; // r13
  __int8 v4; // r12
  __int32 v6; // r15d
  __int64 v7; // rax
  __m128i *result; // rax
  __int64 v9; // rax
  __m128i si128; // xmm3
  __m128i v11; // xmm4
  __int32 v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r12
  int v17; // eax
  void **v18; // rbp
  unsigned __int64 v19; // rax
  void **v20; // r12
  void **v21; // rbx
  void **v22; // rdi
  void **v23; // rdi
  void **v24; // rbx
  void **v25; // r12
  _QWORD *v26; // rax
  __int64 v27; // r12
  int v28; // eax
  void **v29; // r12
  void **v30; // rbx
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // rbx
  void **v34; // r12
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // r12
  int v38; // eax
  __int64 v39; // r12
  __int64 v40; // rbx
  void *v41; // rdi
  void **v42; // rdi
  void **v43; // rdi
  void **v44; // rbx
  void **v45; // r12
  __int64 v46; // rdi
  unsigned int v47; // esi
  _QWORD *v48; // rax
  __int64 v49; // r12
  int v50; // eax
  unsigned __int8 *v51; // rbx
  _QWORD *v52; // rdx
  __int64 v53; // rax
  void **v54; // rbx
  unsigned __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rbp
  void *v58; // rdi
  void **v59; // rdi
  void **v60; // rdi
  void **v61; // rbp
  void **v62; // r12
  _QWORD *v63; // rax
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // r12
  __int64 v67; // rbp
  void *v68; // rdi
  void **v69; // rdi
  void **v70; // rdi
  void **v71; // rbp
  void **v72; // r12
  __int64 v73; // rdx
  unsigned __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // r13
  __int64 v79; // r12
  void *v80; // rdi
  __int32 v81; // [rsp+4h] [rbp-ECh]
  __int32 v83; // [rsp+10h] [rbp-E0h]
  __int8 v84; // [rsp+16h] [rbp-DAh]
  __int8 v85; // [rsp+17h] [rbp-D9h]
  __m128i v86; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+28h] [rbp-C8h]
  __m128i v88[3]; // [rsp+38h] [rbp-B8h] BYREF
  void *v89; // [rsp+68h] [rbp-88h] BYREF
  unsigned __int64 v90; // [rsp+70h] [rbp-80h]
  __int64 v91; // [rsp+78h] [rbp-78h]
  void *v92; // [rsp+88h] [rbp-68h]
  _BYTE v93[16]; // [rsp+98h] [rbp-58h] BYREF
  __int16 v94; // [rsp+A8h] [rbp-48h]

  v2 = 0;
  v3 = a2 + 24;
  v4 = 0;
  v83 = 0;
  v81 = 0;
  v85 = 0;
  v84 = 0;
  memset(v88, 0, 36);
  while ( 1 )
  {
    LODWORD(v89) = 9;
    if ( sub_14E3360(a2, &v89, 1) )
      break;
    LODWORD(v89) = 20;
    if ( sub_14E3360(a2, &v89, 1) )
    {
      sub_13DF9D0(&v86, v3);
      *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v86);
      *(_QWORD *)(a2 + 104) = v87;
      if ( v4 )
      {
        v15 = *(_QWORD **)(a2 + 80);
        v16 = v15[6];
        v17 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v15[11], v15[7], v15[8], nullptr, nullptr);
        sub_FC70B0((__int64)&v89, v16, v17, 1694);
        sub_14DC730(&v89, *(unsigned int *)(a2 + 88));
        if ( (_BYTE)v94 )
        {
          sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
          v91 = 0;
          v94 = 0;
        }
        if ( v92 != v93 )
          operator delete(v92);
        v18 = (void **)v89;
        if ( !v89 )
          goto LABEL_7;
        v19 = v90;
        if ( !v90 )
          goto LABEL_7;
        if ( (unsigned __int64)v89 >= v90 && (unsigned __int64)v89 <= v90 + 14848 )
        {
LABEL_75:
          v35 = *(unsigned int *)(v19 + 14976);
          *(_DWORD *)(v19 + 14976) = v35 + 1;
          *(_QWORD *)(v19 + 8 * v35 + 14848) = v18;
          goto LABEL_7;
        }
        v20 = *((void ***)v89 + 66);
        v21 = &v20[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
        if ( v20 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v21 -= 8;
              v22 = (void **)v21[3];
              if ( v22 == v21 + 5 )
                break;
              operator delete(v22);
              if ( v20 == v21 )
                goto LABEL_38;
            }
          }
          while ( v20 != v21 );
LABEL_38:
          v21 = (void **)v18[66];
        }
        if ( v21 != v18 + 68 )
          free(v21);
        v23 = (void **)v18[52];
        if ( v23 != v18 + 54 )
          free(v23);
        v24 = v18 + 48;
        v25 = v18 + 8;
        do
        {
          while ( *v24 != v24 + 2 )
          {
            operator delete(*v24);
            v24 -= 4;
            if ( v24 == v25 )
              goto LABEL_46;
          }
          v24 -= 4;
        }
        while ( v24 != v25 );
LABEL_46:
        operator delete(v18, 0x3A0u);
        goto LABEL_7;
      }
      if ( (unsigned __int8)sub_14E12E0(a2) )
        goto LABEL_7;
      v9 = sub_14E34C0(a2);
      v4 = BYTE4(v9);
      if ( !BYTE4(v9) )
        goto LABEL_7;
      *(__int64 *)((char *)&v88[0].m128i_i64[1] + 4) = v9;
    }
    else
    {
      LODWORD(v89) = 4;
      if ( (unsigned __int8)sub_14E53D0(a2, &v89, 1) )
      {
        if ( v2 )
        {
          v26 = *(_QWORD **)(a2 + 80);
          v27 = v26[6];
          v28 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v26[11], v26[7], v26[8], nullptr, nullptr);
          sub_FC70B0((__int64)&v89, v27, v28, 1694);
          sub_14DC730(&v89, *(unsigned int *)(a2 + 88));
          if ( (_BYTE)v94 )
          {
            sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
            v94 = 0;
            v91 = 0;
          }
          if ( v92 != v93 )
            operator delete(v92);
          v18 = (void **)v89;
          if ( !v89 )
            goto LABEL_7;
          v19 = v90;
          if ( !v90 )
            goto LABEL_7;
          if ( (unsigned __int64)v89 >= v90 && (unsigned __int64)v89 <= v90 + 14848 )
            goto LABEL_75;
          v29 = *((void ***)v89 + 66);
          v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
          if ( v29 != v30 )
          {
            do
            {
              while ( 1 )
              {
                v30 -= 8;
                v31 = (void **)v30[3];
                if ( v31 == v30 + 5 )
                  break;
                operator delete(v31);
                if ( v29 == v30 )
                  goto LABEL_61;
              }
            }
            while ( v29 != v30 );
LABEL_61:
            v30 = (void **)v18[66];
          }
          if ( v30 != v18 + 68 )
            free(v30);
          v32 = (void **)v18[52];
          if ( v32 != v18 + 54 )
            free(v32);
          v33 = v18 + 48;
          v34 = v18 + 8;
          do
          {
            while ( *v33 != v33 + 2 )
            {
              operator delete(*v33);
              v33 -= 4;
              if ( v34 == v33 )
                goto LABEL_46;
            }
            v33 -= 4;
          }
          while ( v34 != v33 );
          goto LABEL_46;
        }
        v6 = dword_26188A0[*(_DWORD *)(a2 + 88) - 4];
        v81 = v6;
        v7 = sub_14E15D0(a2);
        if ( !BYTE4(v7) )
          goto LABEL_7;
        v88[0].m128i_i64[0] = __PAIR64__(v7, v6);
        v2 = 1;
        v83 = v7;
        v88[0].m128i_i8[8] = 1;
      }
      else
      {
        LODWORD(v89) = 25;
        if ( (unsigned __int8)sub_14E53D0(a2, &v89, 1) )
        {
          if ( v84 )
          {
            v36 = *(_QWORD **)(a2 + 80);
            v37 = v36[6];
            v38 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v36[11], v36[7], v36[8], nullptr, nullptr);
            sub_FC70B0((__int64)&v89, v37, v38, 1694);
            sub_14DC730(&v89, *(unsigned int *)(a2 + 88));
            if ( (_BYTE)v94 )
            {
              sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
              v91 = 0;
              v94 = 0;
            }
            if ( v92 != v93 )
              operator delete(v92);
            v18 = (void **)v89;
            if ( !v89 )
              goto LABEL_7;
            v19 = v90;
            if ( !v90 )
              goto LABEL_7;
            if ( (unsigned __int64)v89 >= v90 && (unsigned __int64)v89 <= v90 + 14848 )
              goto LABEL_75;
            v39 = *((_QWORD *)v89 + 66);
            v40 = v39 + ((unsigned __int64)*((unsigned int *)v89 + 134) << 6);
            while ( v39 != v40 )
            {
              while ( 1 )
              {
                v40 -= 64;
                v41 = *(void **)(v40 + 24);
                if ( v41 == (void *)(v40 + 40) )
                  break;
                operator delete(v41);
                if ( v39 == v40 )
                  goto LABEL_87;
              }
            }
LABEL_87:
            v42 = (void **)v18[66];
            if ( v42 != v18 + 68 )
              free(v42);
            v43 = (void **)v18[52];
            if ( v43 != v18 + 54 )
              free(v43);
            v44 = v18 + 48;
            v45 = v18 + 8;
            do
            {
              while ( *v44 != v44 + 2 )
              {
                operator delete(*v44);
                v44 -= 4;
                if ( v44 == v45 )
                  goto LABEL_46;
              }
              v44 -= 4;
            }
            while ( v44 != v45 );
            goto LABEL_46;
          }
          if ( (unsigned __int8)sub_14E12E0(a2) )
            goto LABEL_7;
          v13 = sub_14E34C0(a2);
          v84 = BYTE4(v13);
          if ( !BYTE4(v13) )
            goto LABEL_7;
          *(__int64 *)((char *)v88[1].m128i_i64 + 4) = v13;
        }
        else
        {
          LODWORD(v89) = 26;
          if ( !(unsigned __int8)sub_14E53D0(a2, &v89, 1) )
          {
            sub_13DF9D0(&v86, a2 + 24);
            v46 = *(_QWORD *)(a2 + 16);
            *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v86);
            v47 = *(_DWORD *)(a2 + 92);
            *(_QWORD *)(a2 + 104) = v87;
            v48 = *(_QWORD **)(a2 + 80);
            v49 = v48[6];
            v50 = sub_C07A10(v46, v47, v48[11], v48[7], v48[8], nullptr, nullptr);
            sub_FC70B0((__int64)&v89, v49, v50, 1688);
            v51 = (unsigned __int8 *)v89;
            if ( !v89 )
            {
              v74 = v90;
              v75 = *(_DWORD *)(v90 + 14976);
              if ( v75 )
              {
                v76 = (unsigned int)(v75 - 1);
                *(_DWORD *)(v90 + 14976) = v76;
                v51 = *(unsigned __int8 **)(v74 + 8 * v76 + 14848);
                v77 = *((unsigned int *)v51 + 134);
                *v51 = 0;
                v78 = *((_QWORD *)v51 + 66);
                *((_DWORD *)v51 + 106) = 0;
                v79 = v78 + (v77 << 6);
                while ( v78 != v79 )
                {
                  while ( 1 )
                  {
                    v79 -= 64;
                    v80 = *(void **)(v79 + 24);
                    if ( v80 == (void *)(v79 + 40) )
                      break;
                    operator delete(v80);
                    if ( v78 == v79 )
                      goto LABEL_153;
                  }
                }
LABEL_153:
                *((_DWORD *)v51 + 134) = 0;
              }
              else
              {
                v51 = (unsigned __int8 *)operator new(0x3A0u);
                *v51 = 0;
                *((_QWORD *)v51 + 12) = v51 + 112;
                *((_QWORD *)v51 + 16) = v51 + 144;
                *((_QWORD *)v51 + 20) = v51 + 176;
                *((_QWORD *)v51 + 24) = v51 + 208;
                *((_QWORD *)v51 + 28) = v51 + 240;
                *((_QWORD *)v51 + 32) = v51 + 272;
                *((_QWORD *)v51 + 36) = v51 + 304;
                *((_QWORD *)v51 + 40) = v51 + 336;
                *((_QWORD *)v51 + 44) = v51 + 368;
                *((_QWORD *)v51 + 48) = v51 + 400;
                *((_QWORD *)v51 + 52) = v51 + 432;
                v51[112] = 0;
                *((_QWORD *)v51 + 13) = 0;
                *((_QWORD *)v51 + 17) = 0;
                v51[144] = 0;
                *((_QWORD *)v51 + 21) = 0;
                v51[176] = 0;
                *((_QWORD *)v51 + 25) = 0;
                v51[208] = 0;
                *((_QWORD *)v51 + 29) = 0;
                v51[240] = 0;
                *((_QWORD *)v51 + 33) = 0;
                v51[272] = 0;
                *((_QWORD *)v51 + 37) = 0;
                v51[304] = 0;
                *((_QWORD *)v51 + 41) = 0;
                v51[336] = 0;
                *((_QWORD *)v51 + 45) = 0;
                v51[368] = 0;
                *((_QWORD *)v51 + 49) = 0;
                v51[400] = 0;
                *((_QWORD *)v51 + 53) = 0x800000000LL;
                *((_QWORD *)v51 + 66) = v51 + 544;
                *((_QWORD *)v51 + 67) = 0x600000000LL;
              }
              v89 = v51;
            }
            v51[*v51 + 1] = 2;
            v52 = v89;
            v53 = *(unsigned __int8 *)v89;
            *(_BYTE *)v89 = v53 + 1;
            v52[v53 + 2] = 0;
            sub_14DC730(&v89, 18);
            if ( (_BYTE)v94 )
            {
              sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
              v91 = 0;
              v94 = 0;
            }
            if ( v92 != v93 )
              operator delete(v92);
            v54 = (void **)v89;
            if ( v89 )
            {
              v55 = v90;
              if ( v90 )
              {
                if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
                {
                  v56 = *((_QWORD *)v89 + 66);
                  v57 = v56 + ((unsigned __int64)*((unsigned int *)v89 + 134) << 6);
                  while ( v56 != v57 )
                  {
                    while ( 1 )
                    {
                      v57 -= 64;
                      v58 = *(void **)(v57 + 24);
                      if ( v58 == (void *)(v57 + 40) )
                        break;
                      operator delete(v58);
                      if ( v56 == v57 )
                        goto LABEL_111;
                    }
                  }
LABEL_111:
                  v59 = (void **)v54[66];
                  if ( v59 != v54 + 68 )
                    free(v59);
                  v60 = (void **)v54[52];
                  if ( v60 != v54 + 54 )
                    free(v60);
                  v61 = v54 + 48;
                  v62 = v54 + 8;
                  do
                  {
                    while ( *v61 != v61 + 2 )
                    {
                      operator delete(*v61);
                      v61 -= 4;
                      if ( v61 == v62 )
                        goto LABEL_118;
                    }
                    v61 -= 4;
                  }
                  while ( v61 != v62 );
                  goto LABEL_118;
                }
LABEL_143:
                v73 = *(unsigned int *)(v55 + 14976);
                *(_DWORD *)(v55 + 14976) = v73 + 1;
                *(_QWORD *)(v55 + 8 * v73 + 14848) = v54;
              }
            }
LABEL_7:
            result = a1;
            a1[2].m128i_i8[4] = 0;
            return result;
          }
          if ( v85 )
          {
            v63 = *(_QWORD **)(a2 + 80);
            v64 = v63[6];
            v65 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v63[11], v63[7], v63[8], nullptr, nullptr);
            sub_FC70B0((__int64)&v89, v64, v65, 1694);
            sub_14DC730(&v89, *(unsigned int *)(a2 + 88));
            if ( (_BYTE)v94 )
            {
              sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
              v91 = 0;
              v94 = 0;
            }
            if ( v92 != v93 )
              operator delete(v92);
            v54 = (void **)v89;
            if ( v89 )
            {
              v55 = v90;
              if ( v90 )
              {
                if ( (unsigned __int64)v89 >= v90 && (unsigned __int64)v89 <= v90 + 14848 )
                  goto LABEL_143;
                v66 = *((_QWORD *)v89 + 66);
                v67 = v66 + ((unsigned __int64)*((unsigned int *)v89 + 134) << 6);
                while ( v66 != v67 )
                {
                  while ( 1 )
                  {
                    v67 -= 64;
                    v68 = *(void **)(v67 + 24);
                    if ( v68 == (void *)(v67 + 40) )
                      break;
                    operator delete(v68);
                    if ( v66 == v67 )
                      goto LABEL_132;
                  }
                }
LABEL_132:
                v69 = (void **)v54[66];
                if ( v69 != v54 + 68 )
                  free(v69);
                v70 = (void **)v54[52];
                if ( v70 != v54 + 54 )
                  free(v70);
                v71 = v54 + 48;
                v72 = v54 + 8;
                do
                {
                  while ( *v71 != v71 + 2 )
                  {
                    operator delete(*v71);
                    v71 -= 4;
                    if ( v71 == v72 )
                      goto LABEL_118;
                  }
                  v71 -= 4;
                }
                while ( v71 != v72 );
LABEL_118:
                operator delete(v54, 0x3A0u);
              }
            }
            goto LABEL_7;
          }
          if ( (unsigned __int8)sub_14E12E0(a2) )
            goto LABEL_7;
          v14 = sub_14E61D0(a2, 0x1Au);
          v85 = BYTE4(v14);
          if ( !BYTE4(v14) )
            goto LABEL_7;
          *(__int64 *)((char *)&v88[1].m128i_i64[1] + 4) = v14;
        }
      }
    }
    LODWORD(v89) = 10;
    if ( !sub_14E3360(a2, &v89, 1) )
      break;
    sub_13DF9D0(&v86, v3);
    *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v86);
    *(_QWORD *)(a2 + 104) = v87;
  }
  v88[0].m128i_i8[8] = v2;
  v88[1].m128i_i8[0] = v4;
  v88[0].m128i_i32[0] = v81;
  a1[2].m128i_i8[4] = 1;
  v88[0].m128i_i32[1] = v83;
  si128 = _mm_load_si128(v88);
  v88[1].m128i_i8[8] = v84;
  v11 = _mm_load_si128(&v88[1]);
  *a1 = si128;
  v88[2].m128i_i8[0] = v85;
  v12 = v88[2].m128i_i32[0];
  a1[1] = v11;
  a1[2].m128i_i32[0] = v12;
  return a1;
}
