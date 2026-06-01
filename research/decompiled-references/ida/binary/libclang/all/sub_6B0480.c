void __fastcall sub_6B0480(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  char *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r8
  _QWORD *v14; // rdx
  char *v15; // r9
  char *v16; // rax
  char *v17; // rdi
  __int64 v18; // r10
  unsigned int v19; // r11d
  _QWORD *v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r9
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  void **v28; // rbp
  char *v29; // r14
  unsigned __int64 v30; // rcx
  bool v31; // cf
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r9
  _QWORD *v37; // rdi
  __int64 v38; // r10
  __int64 v39; // rdi
  __int64 *v40; // rbp
  __int64 *v41; // rbx
  __int64 v42; // rbp
  __int64 v43; // r15
  size_t v44; // r12
  void *v45; // rdi
  _BYTE *v46; // r13
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 *v49; // rbp
  __int64 v50; // r15
  __int64 v51; // rbx
  _BYTE *v52; // rdi
  size_t v53; // r13
  _BYTE *v54; // r14
  __int64 v55; // rax
  char *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r8
  _BYTE *v60; // rdx
  char *v61; // rdx
  char *v62; // rdi
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // r12
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  char *v68; // rax
  __int64 v69; // rdi
  char *v70; // rcx
  __int64 v71; // rsi
  unsigned int v72; // ecx
  unsigned __int64 v73; // rsi
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  unsigned int v76; // r9d
  __int64 v77; // r11
  unsigned __int64 v78; // rdi
  unsigned int v79; // r11d
  unsigned int v80; // r10d
  __int64 v81; // r11
  unsigned __int64 v82; // rdi
  __int64 v83; // rax
  unsigned int v84; // edi
  unsigned int v85; // edi
  unsigned __int64 v86; // r10
  unsigned int v87; // edi
  unsigned int v88; // edi
  unsigned int v89; // r11d
  __int64 v90; // rbp
  unsigned __int64 v91; // r10
  unsigned int v92; // edi
  unsigned int v93; // edi
  unsigned int v94; // r11d
  __int64 v95; // rbp
  unsigned __int64 v96; // r9
  char *v97; // rdx
  _BYTE *v98; // rdi
  unsigned int v99; // edx
  unsigned int v100; // edx
  unsigned int v101; // r8d
  __int64 v102; // r10
  __int64 v103; // rax
  __int64 v104; // [rsp+8h] [rbp-80h]
  unsigned int v105; // [rsp+8h] [rbp-80h]
  __int64 v106; // [rsp+10h] [rbp-78h]
  __int64 v107; // [rsp+10h] [rbp-78h]
  char *v108; // [rsp+18h] [rbp-70h]
  __int64 *v109; // [rsp+18h] [rbp-70h]
  __int64 v110; // [rsp+18h] [rbp-70h]
  __int64 v111; // [rsp+20h] [rbp-68h]
  __int64 v112; // [rsp+20h] [rbp-68h]
  __int64 *v113; // [rsp+28h] [rbp-60h]

  if ( a3 == a4 )
    return;
  v5 = (char *)a1[1];
  v6 = a1;
  v7 = a4;
  v8 = a4 - a3;
  v9 = a3;
  v10 = a2;
  v11 = v8 >> 5;
  v12 = v8 >> 5;
  if ( a1[2] - (__int64)v5 >= (unsigned __int64)v8 )
  {
    v13 = v5 - a2;
    if ( v8 < (unsigned __int64)(v5 - a2) )
    {
      v14 = v5 + 16;
      v15 = &v5[-v8];
      v16 = &v5[-v8 + 16];
      while ( 1 )
      {
        *(v14 - 2) = v14;
        v17 = *((char **)v16 - 2);
        v18 = *((_QWORD *)v16 - 1);
        if ( v17 == v16 )
        {
          v19 = v18 + 1;
          if ( (unsigned int)(v18 + 1) >= 8 )
          {
            *v14 = *(_QWORD *)v16;
            *(_QWORD *)((char *)v14 + v19 - 8) = *(_QWORD *)&v16[v19 - 8];
            v78 = (unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v79 = ((_DWORD)v14 - v78 + v19) & 0xFFFFFFF8;
            if ( v79 >= 8 )
            {
              v80 = 0;
              v105 = v79 & 0xFFFFFFF8;
              do
              {
                v81 = v80;
                v80 += 8;
                *(_QWORD *)(v78 + v81) = *(_QWORD *)(v16 - ((char *)v14 - v78) + v81);
              }
              while ( v80 < v105 );
            }
LABEL_12:
            v18 = *((_QWORD *)v16 - 1);
            goto LABEL_6;
          }
          if ( (v19 & 4) != 0 )
          {
            *(_DWORD *)v14 = *(_DWORD *)v16;
            *(_DWORD *)((char *)v14 + v19 - 4) = *(_DWORD *)&v16[v19 - 4];
            v18 = *((_QWORD *)v16 - 1);
            goto LABEL_6;
          }
          if ( (_DWORD)v18 != -1 )
          {
            *(_BYTE *)v14 = *v16;
            if ( (v19 & 2) != 0 )
            {
              *(_WORD *)((char *)v14 + v19 - 2) = *(_WORD *)&v16[v19 - 2];
              v18 = *((_QWORD *)v16 - 1);
              goto LABEL_6;
            }
            goto LABEL_12;
          }
        }
        else
        {
          *(v14 - 2) = v17;
          *v14 = *(_QWORD *)v16;
        }
LABEL_6:
        *(v14 - 1) = v18;
        v14 += 4;
        *((_QWORD *)v16 - 2) = v16;
        v16 += 32;
        *((_QWORD *)v16 - 5) = 0;
        *(v16 - 32) = 0;
        if ( v14 == (_QWORD *)(2LL * (_QWORD)v5 + 16 - (_QWORD)&v5[-v8]) )
        {
          v6[1] += v8;
          v56 = v15 - 16;
          v57 = v15 - a2;
          v58 = (v15 - a2) >> 5;
          if ( v57 <= 0 )
          {
LABEL_73:
            if ( v8 > 0 )
            {
              do
              {
                v9 += 32;
                v10 += 32;
                std::string::_M_assign();
                --v12;
              }
              while ( v12 );
            }
            return;
          }
          while ( 2 )
          {
            v5 -= 32;
            v61 = *(char **)v5;
            v62 = *((char **)v56 - 2);
            if ( *(char **)v5 == v5 + 16 )
            {
              if ( v56 != v62 )
              {
                *(_QWORD *)v5 = v62;
                *((_QWORD *)v5 + 1) = *((_QWORD *)v56 - 1);
                *((_QWORD *)v5 + 2) = *(_QWORD *)v56;
LABEL_63:
                *((_QWORD *)v56 - 2) = v56;
                goto LABEL_59;
              }
            }
            else if ( v56 != v62 )
            {
              *(_QWORD *)v5 = v62;
              v59 = *((_QWORD *)v5 + 2);
              *((_QWORD *)v5 + 1) = *((_QWORD *)v56 - 1);
              *((_QWORD *)v5 + 2) = *(_QWORD *)v56;
              if ( !v61 )
                goto LABEL_63;
              *((_QWORD *)v56 - 2) = v61;
              *(_QWORD *)v56 = v59;
LABEL_59:
              v60 = *((_BYTE **)v56 - 2);
              *((_QWORD *)v56 - 1) = 0;
              v56 -= 32;
              *v60 = 0;
              if ( !--v58 )
                goto LABEL_73;
              continue;
            }
            break;
          }
          v63 = *((_QWORD *)v56 - 1);
          if ( v5 == v56 - 16 )
            goto LABEL_59;
          if ( v63 )
          {
            if ( v63 == 1 )
            {
              *v61 = *v62;
              v61 = *(char **)v5;
              v63 = *((_QWORD *)v56 - 1);
            }
            else if ( (unsigned int)v63 >= 8 )
            {
              *(_QWORD *)v61 = *(_QWORD *)v62;
              *(_QWORD *)&v61[(unsigned int)v63 - 8] = *(_QWORD *)&v62[(unsigned int)v63 - 8];
              v96 = (unsigned __int64)(v61 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v97 = &v61[-v96];
              v98 = (_BYTE *)(v62 - v97);
              v99 = (v63 + (_DWORD)v97) & 0xFFFFFFF8;
              if ( v99 >= 8 )
              {
                v100 = v99 & 0xFFFFFFF8;
                v101 = 0;
                do
                {
                  v102 = v101;
                  v101 += 8;
                  *(_QWORD *)(v96 + v102) = *(_QWORD *)&v98[v102];
                }
                while ( v101 < v100 );
              }
LABEL_71:
              v61 = *(char **)v5;
              v63 = *((_QWORD *)v56 - 1);
            }
            else if ( (v63 & 4) != 0 )
            {
              *(_DWORD *)v61 = *(_DWORD *)v62;
              *(_DWORD *)&v61[(unsigned int)v63 - 4] = *(_DWORD *)&v62[(unsigned int)v63 - 4];
              v61 = *(char **)v5;
              v63 = *((_QWORD *)v56 - 1);
            }
            else if ( (_DWORD)v63 )
            {
              *v61 = *v62;
              if ( (v63 & 2) == 0 )
                goto LABEL_71;
              *(_WORD *)&v61[(unsigned int)v63 - 2] = *(_WORD *)&v62[(unsigned int)v63 - 2];
              v61 = *(char **)v5;
              v63 = *((_QWORD *)v56 - 1);
            }
          }
          *((_QWORD *)v5 + 1) = v63;
          v61[v63] = 0;
          goto LABEL_59;
        }
      }
    }
    if ( v7 != a3 + v13 )
    {
      v109 = (__int64 *)a1[1];
      v112 = a3;
      v48 = a3 + v13;
      v49 = v109;
      v50 = v8 >> 5;
      v51 = v7;
      v107 = v13;
      while ( 1 )
      {
        *v49 = (__int64)(v49 + 2);
        v53 = *(_QWORD *)(v48 + 8);
        v54 = *(_BYTE **)v48;
        if ( v53 > 0xF )
          break;
        v52 = (_BYTE *)*v49;
        if ( v53 == 1 )
        {
          *v52 = *v54;
          v52 = (_BYTE *)*v49;
          goto LABEL_49;
        }
        if ( v53 )
          goto LABEL_52;
LABEL_49:
        v48 += 32;
        v49[1] = v53;
        v49 += 4;
        v52[v53] = 0;
        if ( v51 == v48 )
        {
          v6 = a1;
          v13 = v107;
          v11 = v50;
          v5 = (char *)v109;
          v9 = v112;
          v10 = a2;
          v64 = a1[1];
          goto LABEL_77;
        }
      }
      v55 = std::string::_M_create();
      *v49 = v55;
      v52 = (_BYTE *)v55;
      v49[2] = v53;
LABEL_52:
      memcpy(v52, v54, v53);
      v52 = (_BYTE *)*v49;
      goto LABEL_49;
    }
    v64 = a1[1];
LABEL_77:
    v65 = v13 >> 5;
    v66 = 32 * (v11 - (v13 >> 5)) + v64;
    v6[1] = v66;
    if ( a2 == v5 )
    {
LABEL_88:
      v6[1] = v13 + v66;
      if ( v13 > 0 )
      {
        do
        {
          v9 += 32;
          v10 += 32;
          std::string::_M_assign();
          --v65;
        }
        while ( v65 );
      }
      return;
    }
    v67 = (_QWORD *)(v66 + 16);
    v68 = a2 + 16;
    v69 = v66 + v5 - a2 + 16;
    while ( 1 )
    {
      *(v67 - 2) = v67;
      v70 = *((char **)v68 - 2);
      v71 = *((_QWORD *)v68 - 1);
      if ( v70 == v68 )
      {
        v72 = v71 + 1;
        if ( (unsigned int)(v71 + 1) >= 8 )
        {
          *v67 = *(_QWORD *)v68;
          *(_QWORD *)((char *)v67 + v72 - 8) = *(_QWORD *)&v68[v72 - 8];
          v73 = (unsigned __int64)(v67 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v74 = ((_DWORD)v67 - v73 + v72) & 0xFFFFFFF8;
          if ( v74 >= 8 )
          {
            v75 = v74 & 0xFFFFFFF8;
            v76 = 0;
            do
            {
              v77 = v76;
              v76 += 8;
              *(_QWORD *)(v73 + v77) = *(_QWORD *)(v68 - ((char *)v67 - v73) + v77);
            }
            while ( v76 < v75 );
          }
LABEL_86:
          v71 = *((_QWORD *)v68 - 1);
          goto LABEL_80;
        }
        if ( (v72 & 4) != 0 )
        {
          *(_DWORD *)v67 = *(_DWORD *)v68;
          *(_DWORD *)((char *)v67 + v72 - 4) = *(_DWORD *)&v68[v72 - 4];
          v71 = *((_QWORD *)v68 - 1);
          goto LABEL_80;
        }
        if ( (_DWORD)v71 != -1 )
        {
          *(_BYTE *)v67 = *v68;
          if ( (v72 & 2) != 0 )
          {
            *(_WORD *)((char *)v67 + v72 - 2) = *(_WORD *)&v68[v72 - 2];
            v71 = *((_QWORD *)v68 - 1);
            goto LABEL_80;
          }
          goto LABEL_86;
        }
      }
      else
      {
        *(v67 - 2) = v70;
        *v67 = *(_QWORD *)v68;
      }
LABEL_80:
      *(v67 - 1) = v71;
      v67 += 4;
      *((_QWORD *)v68 - 2) = v68;
      v68 += 32;
      *((_QWORD *)v68 - 5) = 0;
      *(v68 - 32) = 0;
      if ( v67 == (_QWORD *)v69 )
      {
        v66 = v6[1];
        goto LABEL_88;
      }
    }
  }
  v29 = (char *)*a1;
  v30 = (__int64)&v5[-*a1] >> 5;
  if ( 0x3FFFFFFFFFFFFFFLL - v30 < v11 )
    std::__throw_length_error("vector::_M_range_insert");
  if ( v11 < v30 )
    v11 = (__int64)&v5[-*a1] >> 5;
  v31 = __CFADD__(v11, v30);
  v32 = v11 + v30;
  v106 = v32;
  if ( v31 )
  {
    v106 = 0x7FFFFFFFFFFFFFE0LL;
    v82 = 0x7FFFFFFFFFFFFFE0LL;
LABEL_100:
    v110 = v7;
    v83 = operator new(v82);
    v7 = v110;
    v33 = v83;
    goto LABEL_32;
  }
  v33 = 0;
  if ( v32 )
  {
    v103 = 0x3FFFFFFFFFFFFFFLL;
    if ( v32 <= 0x3FFFFFFFFFFFFFFLL )
      v103 = v32;
    v106 = 32 * v103;
    v82 = 32 * v103;
    goto LABEL_100;
  }
LABEL_32:
  if ( a2 != v29 )
  {
    v34 = (_DWORD *)(v33 + 16);
    v35 = v29 + 16;
    v36 = (__int64)&a2[v33 - (_QWORD)v29 + 16];
    while ( 1 )
    {
      while ( 1 )
      {
        *((_QWORD *)v34 - 2) = v34;
        v37 = (_QWORD *)*(v35 - 2);
        v38 = *(v35 - 1);
        if ( v37 == v35 )
          break;
        *((_QWORD *)v34 - 2) = v37;
        v39 = *v35;
        v34 += 8;
        *((_QWORD *)v34 - 5) = v38;
        *((_QWORD *)v34 - 4) = v39;
        *(v35 - 2) = v35;
        v35 += 4;
        *(v35 - 5) = 0;
        *((_BYTE *)v35 - 32) = 0;
        if ( (_DWORD *)v36 == v34 )
          goto LABEL_36;
      }
      v84 = v38 + 1;
      if ( (unsigned int)(v38 + 1) >= 8 )
        break;
      if ( (v84 & 4) != 0 )
      {
        *v34 = *(_DWORD *)v35;
        *(_DWORD *)((char *)v34 + v84 - 4) = *(_DWORD *)((char *)v35 + v84 - 4);
        v38 = *(v35 - 1);
        goto LABEL_107;
      }
      if ( (_DWORD)v38 != -1 )
      {
        *(_BYTE *)v34 = *(_BYTE *)v35;
        if ( (v84 & 2) != 0 )
        {
          *(_WORD *)((char *)v34 + v84 - 2) = *(_WORD *)((char *)v35 + v84 - 2);
          v38 = *(v35 - 1);
          goto LABEL_107;
        }
        goto LABEL_106;
      }
LABEL_107:
      *((_QWORD *)v34 - 1) = v38;
      v34 += 8;
      *(v35 - 2) = v35;
      v35 += 4;
      *(v35 - 5) = 0;
      *((_BYTE *)v35 - 32) = 0;
      if ( v34 == (_DWORD *)v36 )
      {
LABEL_36:
        v40 = (__int64 *)(v33 + a2 - v29);
        goto LABEL_37;
      }
    }
    *(_QWORD *)v34 = *v35;
    *(_QWORD *)((char *)v34 + v84 - 8) = *(_QWORD *)((char *)v35 + v84 - 8);
    v91 = (unsigned __int64)(v34 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v92 = ((_DWORD)v34 - v91 + v84) & 0xFFFFFFF8;
    if ( v92 >= 8 )
    {
      v93 = v92 & 0xFFFFFFF8;
      v94 = 0;
      do
      {
        v95 = v94;
        v94 += 8;
        *(_QWORD *)(v91 + v95) = *(_QWORD *)((char *)v35 - ((char *)v34 - v91) + v95);
      }
      while ( v94 < v93 );
    }
LABEL_106:
    v38 = *(v35 - 1);
    goto LABEL_107;
  }
  v40 = (__int64 *)v33;
LABEL_37:
  v108 = v5;
  v41 = v40;
  v42 = a3;
  v43 = v7;
  v111 = v33;
  v113 = v6;
  while ( 1 )
  {
    v44 = *(_QWORD *)(v42 + 8);
    v45 = v41 + 2;
    v46 = *(_BYTE **)v42;
    *v41 = (__int64)(v41 + 2);
    if ( v44 > 0xF )
    {
      v47 = std::string::_M_create();
      *v41 = v47;
      v45 = (void *)v47;
      v41[2] = v44;
LABEL_44:
      memcpy(v45, v46, v44);
      v45 = (void *)*v41;
      goto LABEL_40;
    }
    if ( v44 != 1 )
    {
      if ( !v44 )
        goto LABEL_40;
      goto LABEL_44;
    }
    *((_BYTE *)v41 + 16) = *v46;
LABEL_40:
    v42 += 32;
    v41[1] = v44;
    *((_BYTE *)v45 + v44) = 0;
    if ( v43 == v42 )
      break;
    v41 += 4;
  }
  v20 = v41 + 4;
  v21 = v111;
  if ( a2 != v108 )
  {
    v22 = v41 + 6;
    v23 = a2 + 16;
    v24 = (__int64)v20 + v108 - a2 + 16;
    do
    {
      while ( 1 )
      {
        v25 = (_QWORD *)*(v23 - 2);
        v26 = *(v23 - 1);
        *(v22 - 2) = v22;
        if ( v25 == v23 )
          break;
        *(v22 - 2) = v25;
        v27 = *v23;
        v22 += 4;
        *(v23 - 2) = v23;
        v23 += 4;
        *(v22 - 4) = v27;
        *(v22 - 5) = v26;
        *(v23 - 5) = 0;
        *((_BYTE *)v23 - 32) = 0;
        if ( (_QWORD *)v24 == v22 )
          goto LABEL_17;
      }
      v85 = v26 + 1;
      if ( (unsigned int)(v26 + 1) >= 8 )
      {
        *v22 = *v23;
        *(_QWORD *)((char *)v22 + v85 - 8) = *(_QWORD *)((char *)v23 + v85 - 8);
        v86 = (unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v87 = ((_DWORD)v22 - v86 + v85) & 0xFFFFFFF8;
        if ( v87 >= 8 )
        {
          v88 = v87 & 0xFFFFFFF8;
          v89 = 0;
          do
          {
            v90 = v89;
            v89 += 8;
            *(_QWORD *)(v86 + v90) = *(_QWORD *)((char *)v23 - ((char *)v22 - v86) + v90);
          }
          while ( v89 < v88 );
        }
      }
      else if ( (v85 & 4) != 0 )
      {
        *(_DWORD *)v22 = *(_DWORD *)v23;
        *(_DWORD *)((char *)v22 + v85 - 4) = *(_DWORD *)((char *)v23 + v85 - 4);
      }
      else if ( (_DWORD)v26 != -1 )
      {
        *(_BYTE *)v22 = *(_BYTE *)v23;
        if ( (v85 & 2) != 0 )
          *(_WORD *)((char *)v22 + v85 - 2) = *(_WORD *)((char *)v23 + v85 - 2);
      }
      *(v22 - 1) = v26;
      v22 += 4;
      v23 += 4;
      *(v23 - 5) = 0;
      *((_BYTE *)v23 - 32) = 0;
    }
    while ( v22 != (_QWORD *)v24 );
LABEL_17:
    v20 = (_QWORD *)((char *)v20 + v108 - a2);
  }
  v28 = (void **)v29;
  if ( v108 != v29 )
  {
    do
    {
      if ( *v28 != v28 + 2 )
        operator delete(*v28, (unsigned __int64)v28[2] + 1);
      v28 += 4;
    }
    while ( v108 != (char *)v28 );
    v21 = v111;
  }
  if ( v29 )
  {
    v104 = v21;
    operator delete(v29, v113[2] - (_QWORD)v29);
    v21 = v104;
  }
  *v113 = v21;
  v113[1] = (__int64)v20;
  v113[2] = v106 + v21;
}

