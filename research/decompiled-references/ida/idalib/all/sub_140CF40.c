__int64 __fastcall sub_140CF40(__int64 a1, _BYTE *a2, __m128i a3, double a4)
{
  void **v4; // r13
  __int64 v5; // rbx
  unsigned int v6; // r12d
  int v7; // r14d
  void **v8; // r12
  unsigned __int64 v9; // rax
  void **v10; // rdx
  void **v11; // r15
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // r15
  int v16; // eax
  _BYTE *v17; // rsi
  size_t v18; // rcx
  unsigned __int8 *v19; // r15
  bool v20; // dl
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void **v26; // r15
  _BYTE *v27; // rdi
  __int64 v28; // rax
  void **v29; // rbp
  unsigned __int64 v30; // rax
  void **v31; // rdx
  void **v32; // r15
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // r15
  int v37; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  void **v41; // r12
  unsigned __int64 v42; // rax
  void **v43; // rdx
  void **v44; // r15
  void **v45; // rbx
  void **v46; // rdi
  void **v47; // rdi
  void **v48; // r15
  void **v49; // r12
  unsigned __int64 v50; // rax
  void **v51; // r14
  void **v52; // rbp
  void **v53; // rdi
  void **v54; // rdi
  void **v55; // r14
  void **v56; // rbp
  _QWORD *v57; // rax
  size_t v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rax
  bool v69; // r12
  __int64 v70; // rbp
  size_t v71; // r13
  __int64 v72; // rbx
  void *v73; // rdi
  size_t v74; // rdx
  _BYTE *v75; // rdi
  size_t n; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+8h] [rbp-E0h]
  size_t nb; // [rsp+8h] [rbp-E0h]
  size_t nc; // [rsp+8h] [rbp-E0h]
  size_t nd; // [rsp+8h] [rbp-E0h]
  size_t ne; // [rsp+8h] [rbp-E0h]
  size_t nf; // [rsp+8h] [rbp-E0h]
  size_t ng; // [rsp+8h] [rbp-E0h]
  bool nh; // [rsp+8h] [rbp-E0h]
  unsigned __int8 src; // [rsp+18h] [rbp-D0h]
  void *srca; // [rsp+18h] [rbp-D0h]
  void **v88; // [rsp+30h] [rbp-B8h]
  __int64 v89; // [rsp+38h] [rbp-B0h]
  void *v90; // [rsp+40h] [rbp-A8h] BYREF
  size_t v91; // [rsp+48h] [rbp-A0h]
  _QWORD v92[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v93; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+68h] [rbp-80h]
  __int64 v95; // [rsp+70h] [rbp-78h]
  void *v96; // [rsp+80h] [rbp-68h]
  _BYTE v97[16]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v98; // [rsp+A0h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 72) != 26 )
    return 0;
  v4 = &v90;
  v5 = a1;
  v6 = 0;
  do
  {
    v7 = sub_140C1F0((_BYTE **)v5, a3, a4);
    if ( *(_DWORD *)(v5 + 72) != 5 )
    {
      sub_FC70B0((__int64)&v93, *(_QWORD *)(v5 + 8), *(_DWORD *)(v5 + 76), 1060);
      if ( (_BYTE)v98 )
      {
        sub_FC7790(v95, (__int64 *)&v93, SHIBYTE(v98));
        v95 = 0;
        v98 = 0;
      }
      if ( v96 != v97 )
        operator delete(v96);
      v8 = (void **)v93;
      if ( v93 )
      {
        v9 = v94;
        if ( v94 )
        {
          if ( (unsigned __int64)v93 < v94 || (unsigned __int64)v93 > v94 + 14848 )
          {
            v10 = *((void ***)v93 + 66);
            v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v93 + 134)];
            if ( v10 != v11 )
            {
              n = v5;
              v12 = *((void ***)v93 + 66);
              do
              {
                while ( 1 )
                {
                  v11 -= 8;
                  v13 = (void **)v11[3];
                  if ( v13 == v11 + 5 )
                    break;
                  operator delete(v13);
                  if ( v12 == v11 )
                    goto LABEL_15;
                }
              }
              while ( v12 != v11 );
LABEL_15:
              v5 = n;
              v11 = (void **)v8[66];
            }
            if ( v11 != v8 + 68 )
              free(v11);
            v14 = (void **)v8[52];
            v15 = v8 + 52;
            if ( v14 != v8 + 54 )
              free(v14);
            na = (size_t)(v8 + 12);
            do
            {
              while ( 1 )
              {
                v15 -= 4;
                if ( *v15 == v15 + 2 )
                  break;
                operator delete(*v15);
                if ( v15 == (void **)na )
                  goto LABEL_23;
              }
            }
            while ( v15 != (void **)na );
LABEL_23:
            operator delete(v8, 0x3A0u);
          }
          else
          {
            v62 = *(unsigned int *)(v94 + 14976);
            *(_DWORD *)(v94 + 14976) = v62 + 1;
            *(_QWORD *)(v9 + 8 * v62 + 14848) = v8;
          }
        }
      }
      sub_140CDD0(v5, 27, a3, a4);
      v16 = *(_DWORD *)(v5 + 72);
      if ( v16 == 27 )
      {
        sub_140C1F0((_BYTE **)v5, a3, a4);
        v16 = *(_DWORD *)(v5 + 72);
      }
      v6 = 1;
      if ( v16 == 22 )
        goto LABEL_27;
    }
    v39 = *(unsigned int *)(v5 + 80);
    v40 = *(_QWORD *)(v5 + 88);
    if ( v39 == 10 )
    {
      if ( *(_QWORD *)v40 == 0x6974737561687865LL && *(_WORD *)(v40 + 8) == 25974 )
      {
        *a2 |= 4u;
        goto LABEL_59;
      }
      goto LABEL_27;
    }
    if ( v39 != 8 )
    {
      if ( v39 == 22 )
      {
        if ( !(*(_QWORD *)v40 ^ 0x6365646E755F6F6ELL | *(_QWORD *)(v40 + 8) ^ 0x6E695F646572616CLL)
          && *(_DWORD *)(v40 + 16) == 1685417059
          && *(_WORD *)(v40 + 20) == 29541 )
        {
          *a2 |= 8u;
          goto LABEL_59;
        }
      }
      else if ( v39 == 6 && *(_DWORD *)v40 == 1953724787 && *(_WORD *)(v40 + 4) == 28005 )
      {
        *a2 |= 1u;
        goto LABEL_59;
      }
LABEL_27:
      sub_FC70B0((__int64)&v93, *(_QWORD *)(v5 + 8), *(_DWORD *)(v5 + 76), 1365);
      if ( *(_DWORD *)(v5 + 72) == 22 )
      {
        v17 = v93;
        if ( v93 )
        {
          v18 = 0;
          *((_BYTE *)v93 + *(unsigned __int8 *)v93 + 1) = 0;
          v21 = v92;
          v90 = v92;
          goto LABEL_33;
        }
        v20 = 0;
        v18 = 0;
      }
      else
      {
        v17 = *(_BYTE **)(v5 + 88);
        v18 = *(unsigned int *)(v5 + 80);
        v19 = (unsigned __int8 *)v93;
        v20 = v17 == nullptr && &v17[v18] != nullptr;
        if ( v93 )
          goto LABEL_29;
      }
      v63 = v94;
      v64 = *(_DWORD *)(v94 + 14976);
      if ( v64 )
      {
        v65 = (unsigned int)(v64 - 1);
        *(_DWORD *)(v94 + 14976) = v65;
        v19 = *(unsigned __int8 **)(v63 + 8 * v65 + 14848);
        v66 = *((unsigned int *)v19 + 134);
        *v19 = 0;
        v67 = *((_QWORD *)v19 + 66);
        *((_DWORD *)v19 + 106) = 0;
        v68 = v67 + (v66 << 6);
        if ( v67 != v68 )
        {
          src = v6;
          v69 = v20;
          v70 = v67;
          v88 = v4;
          v71 = v18;
          v89 = v5;
          v72 = v68;
          do
          {
            while ( 1 )
            {
              v72 -= 64;
              v73 = *(void **)(v72 + 24);
              if ( v73 == (void *)(v72 + 40) )
                break;
              operator delete(v73);
              if ( v70 == v72 )
                goto LABEL_158;
            }
          }
          while ( v70 != v72 );
LABEL_158:
          v20 = v69;
          v18 = v71;
          v6 = src;
          v4 = v88;
          v5 = v89;
        }
        *((_DWORD *)v19 + 134) = 0;
      }
      else
      {
        srca = (void *)v18;
        nh = v20;
        v19 = (unsigned __int8 *)operator new(0x3A0u);
        *v19 = 0;
        *((_QWORD *)v19 + 12) = v19 + 112;
        *((_QWORD *)v19 + 16) = v19 + 144;
        *((_QWORD *)v19 + 20) = v19 + 176;
        *((_QWORD *)v19 + 24) = v19 + 208;
        *((_QWORD *)v19 + 28) = v19 + 240;
        *((_QWORD *)v19 + 32) = v19 + 272;
        *((_QWORD *)v19 + 36) = v19 + 304;
        *((_QWORD *)v19 + 40) = v19 + 336;
        *((_QWORD *)v19 + 44) = v19 + 368;
        *((_QWORD *)v19 + 48) = v19 + 400;
        *((_QWORD *)v19 + 52) = v19 + 432;
        *((_QWORD *)v19 + 13) = 0;
        v19[112] = 0;
        *((_QWORD *)v19 + 17) = 0;
        v19[144] = 0;
        *((_QWORD *)v19 + 21) = 0;
        v19[176] = 0;
        *((_QWORD *)v19 + 25) = 0;
        v19[208] = 0;
        *((_QWORD *)v19 + 29) = 0;
        v19[240] = 0;
        *((_QWORD *)v19 + 33) = 0;
        v19[272] = 0;
        *((_QWORD *)v19 + 37) = 0;
        v19[304] = 0;
        *((_QWORD *)v19 + 41) = 0;
        v19[336] = 0;
        *((_QWORD *)v19 + 45) = 0;
        v19[368] = 0;
        *((_QWORD *)v19 + 49) = 0;
        v19[400] = 0;
        *((_QWORD *)v19 + 53) = 0x800000000LL;
        v20 = nh;
        *((_QWORD *)v19 + 66) = v19 + 544;
        v18 = (size_t)srca;
        *((_QWORD *)v19 + 67) = 0x600000000LL;
      }
      v93 = v19;
LABEL_29:
      v19[*v19 + 1] = 0;
      v21 = v92;
      v90 = v92;
      if ( v20 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( v18 > 0xF )
      {
        nf = v18;
        v57 = (_QWORD *)operator new(v18 + 1);
        v18 = nf;
        v90 = v57;
        v92[0] = nf;
      }
      else
      {
        if ( v18 == 1 )
        {
          LOBYTE(v92[0]) = *v17;
          v21 = v92;
          goto LABEL_33;
        }
        if ( !v18 )
          goto LABEL_33;
        v57 = v92;
      }
      ng = v18;
      memcpy(v57, v17, v18);
      v21 = v90;
      v18 = ng;
LABEL_33:
      v91 = v18;
      *((_BYTE *)v21 + v18) = 0;
      v22 = v93;
      v23 = *(unsigned __int8 *)v93;
      *(_BYTE *)v93 = v23 + 1;
      v24 = (unsigned __int8)v23;
      v25 = 4 * (v23 + 3);
      v26 = (void **)&v22[v25];
      v27 = (_BYTE *)v22[v25];
      if ( v90 != v4 + 2 )
      {
        if ( v27 == (_BYTE *)&v22[v25 + 2] )
        {
          *v26 = v90;
          v26[1] = (void *)v91;
          v26[2] = (void *)v92[0];
        }
        else
        {
          v28 = v22[4 * v24 + 14];
          *v26 = v90;
          v26[1] = (void *)v91;
          v26[2] = (void *)v92[0];
          if ( v27 )
          {
            v90 = v27;
            v92[0] = v28;
            goto LABEL_37;
          }
        }
        v27 = v4 + 2;
        v90 = v4 + 2;
LABEL_37:
        v91 = 0;
        *v27 = 0;
        if ( v90 != v4 + 2 )
          operator delete(v90);
        if ( (_BYTE)v98 )
        {
          sub_FC7790(v95, (__int64 *)&v93, SHIBYTE(v98));
          v95 = 0;
          v98 = 0;
        }
        if ( v96 != v97 )
          operator delete(v96);
        v29 = (void **)v93;
        if ( v93 )
        {
          v30 = v94;
          if ( v94 )
          {
            if ( (unsigned __int64)v93 < v94 || (unsigned __int64)v93 > v94 + 14848 )
            {
              v31 = *((void ***)v93 + 66);
              v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v93 + 134)];
              if ( v31 != v32 )
              {
                nb = v5;
                v33 = *((void ***)v93 + 66);
                do
                {
                  while ( 1 )
                  {
                    v32 -= 8;
                    v34 = (void **)v32[3];
                    if ( v34 == v32 + 5 )
                      break;
                    operator delete(v34);
                    if ( v33 == v32 )
                      goto LABEL_50;
                  }
                }
                while ( v33 != v32 );
LABEL_50:
                v5 = nb;
                v32 = (void **)v29[66];
              }
              if ( v32 != v29 + 68 )
                free(v32);
              v35 = (void **)v29[52];
              v36 = v29 + 52;
              if ( v35 != v29 + 54 )
                free(v35);
              nc = (size_t)(v29 + 12);
              do
              {
                while ( 1 )
                {
                  v36 -= 4;
                  if ( *v36 == v36 + 2 )
                    break;
                  operator delete(*v36);
                  if ( v36 == (void **)nc )
                    goto LABEL_58;
                }
              }
              while ( v36 != (void **)nc );
LABEL_58:
              operator delete(v29, 0x3A0u);
            }
            else
            {
              v59 = *(unsigned int *)(v94 + 14976);
              *(_DWORD *)(v94 + 14976) = v59 + 1;
              *(_QWORD *)(v30 + 8 * v59 + 14848) = v29;
            }
          }
        }
LABEL_59:
        sub_140C1F0((_BYTE **)v5, a3, a4);
        if ( *(_DWORD *)(v5 + 72) == 27 )
          goto LABEL_60;
        goto LABEL_71;
      }
      v58 = v91;
      if ( v91 )
      {
        if ( v91 == 1 )
        {
          *v27 = v92[0];
          v74 = v91;
          v75 = *v26;
          v26[1] = (void *)v91;
          v75[v74] = 0;
          v27 = v90;
          goto LABEL_37;
        }
        memcpy(v27, v90, v91);
        v58 = v91;
        v27 = *v26;
      }
      v26[1] = (void *)v58;
      v27[v58] = 0;
      v27 = v90;
      goto LABEL_37;
    }
    if ( *(_QWORD *)v40 != 0x635F6E7265747865LL )
      goto LABEL_27;
    *a2 |= 2u;
    sub_140C1F0((_BYTE **)v5, a3, a4);
    if ( *(_DWORD *)(v5 + 72) == 27 )
      goto LABEL_60;
LABEL_71:
    sub_FC70B0((__int64)&v93, *(_QWORD *)(v5 + 8), *(_DWORD *)(v5 + 76), 1077);
    if ( (_BYTE)v98 )
    {
      sub_FC7790(v95, (__int64 *)&v93, SHIBYTE(v98));
      v95 = 0;
      v98 = 0;
    }
    if ( v96 != v97 )
      operator delete(v96);
    v41 = (void **)v93;
    if ( v93 )
    {
      v42 = v94;
      if ( v94 )
      {
        if ( (unsigned __int64)v93 < v94 || (unsigned __int64)v93 > v94 + 14848 )
        {
          v43 = *((void ***)v93 + 66);
          v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v93 + 134)];
          if ( v43 != v44 )
          {
            nd = v5;
            v45 = *((void ***)v93 + 66);
            do
            {
              while ( 1 )
              {
                v44 -= 8;
                v46 = (void **)v44[3];
                if ( v46 == v44 + 5 )
                  break;
                operator delete(v46);
                if ( v45 == v44 )
                  goto LABEL_82;
              }
            }
            while ( v45 != v44 );
LABEL_82:
            v5 = nd;
            v44 = (void **)v41[66];
          }
          if ( v44 != v41 + 68 )
            free(v44);
          v47 = (void **)v41[52];
          v48 = v41 + 52;
          if ( v47 != v41 + 54 )
            free(v47);
          ne = (size_t)(v41 + 12);
          do
          {
            while ( 1 )
            {
              v48 -= 4;
              if ( *v48 == v48 + 2 )
                break;
              operator delete(*v48);
              if ( v48 == (void **)ne )
                goto LABEL_90;
            }
          }
          while ( v48 != (void **)ne );
LABEL_90:
          operator delete(v41, 0x3A0u);
        }
        else
        {
          v61 = *(unsigned int *)(v94 + 14976);
          *(_DWORD *)(v94 + 14976) = v61 + 1;
          *(_QWORD *)(v42 + 8 * v61 + 14848) = v41;
        }
      }
    }
    sub_FC70B0((__int64)&v93, *(_QWORD *)(v5 + 8), v7, 1270);
    if ( (_BYTE)v98 )
    {
      sub_FC7790(v95, (__int64 *)&v93, SHIBYTE(v98));
      v95 = 0;
      v98 = 0;
    }
    if ( v96 != v97 )
      operator delete(v96);
    v49 = (void **)v93;
    if ( v93 )
    {
      v50 = v94;
      if ( v94 )
      {
        if ( (unsigned __int64)v93 < v94 || (unsigned __int64)v93 > v94 + 14848 )
        {
          v51 = *((void ***)v93 + 66);
          v52 = &v51[8 * (unsigned __int64)*((unsigned int *)v93 + 134)];
          if ( v51 != v52 )
          {
            do
            {
              while ( 1 )
              {
                v52 -= 8;
                v53 = (void **)v52[3];
                if ( v53 == v52 + 5 )
                  break;
                operator delete(v53);
                if ( v51 == v52 )
                  goto LABEL_101;
              }
            }
            while ( v51 != v52 );
LABEL_101:
            v52 = (void **)v49[66];
          }
          if ( v52 != v49 + 68 )
            free(v52);
          v54 = (void **)v49[52];
          v55 = v49 + 52;
          if ( v54 != v49 + 54 )
            free(v54);
          v56 = v49 + 12;
          do
          {
            while ( 1 )
            {
              v55 -= 4;
              if ( *v55 == v55 + 2 )
                break;
              operator delete(*v55);
              if ( v56 == v55 )
                goto LABEL_109;
            }
          }
          while ( v56 != v55 );
LABEL_109:
          operator delete(v49, 0x3A0u);
        }
        else
        {
          v60 = *(unsigned int *)(v94 + 14976);
          *(_DWORD *)(v94 + 14976) = v60 + 1;
          *(_QWORD *)(v50 + 8 * v60 + 14848) = v49;
        }
      }
    }
    v6 = 1;
    sub_140CDD0(v5, 27, a3, a4);
    v37 = *(_DWORD *)(v5 + 72);
    if ( v37 == 27 )
    {
LABEL_60:
      sub_140C1F0((_BYTE **)v5, a3, a4);
      v37 = *(_DWORD *)(v5 + 72);
    }
  }
  while ( v37 == 26 );
  if ( (_BYTE)v6 )
    *(_BYTE *)(v5 + 64) = 1;
  return v6;
}
