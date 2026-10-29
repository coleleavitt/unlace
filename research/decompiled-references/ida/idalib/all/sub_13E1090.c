void __fastcall sub_13E1090(__int64 a1, int a2)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // r8
  char v6; // al
  __int64 v7; // rdx
  unsigned __int8 *v8; // rsi
  _BYTE *v9; // rax
  unsigned __int8 *v10; // rdx
  bool v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // rdi
  unsigned __int8 *v15; // rsi
  unsigned __int8 *v16; // rdx
  unsigned __int8 v17; // r8
  unsigned __int8 *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // ecx
  _BYTE *v23; // rsi
  char v24; // al
  _BYTE *v25; // rax
  bool v26; // r13
  _BYTE *v27; // rax
  int v28; // ecx
  void **v29; // r14
  unsigned __int64 v30; // rax
  void **v31; // r15
  void **v32; // r13
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // r13
  void **v36; // r15
  __int64 v37; // rax
  char *v38; // rcx
  char *v39; // r8
  char v40; // al
  __int64 v41; // rax
  int v42; // esi
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rsi
  unsigned __int8 v46; // dl
  __int64 v47; // r13
  int v48; // eax
  unsigned __int8 *v49; // rbp
  _BOOL8 v50; // r13
  _QWORD *v51; // rdx
  __int64 v52; // rax
  unsigned __int8 *v53; // rbp
  _QWORD *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r13
  int v57; // eax
  unsigned __int8 *v58; // rbp
  _BOOL8 v59; // r13
  _QWORD *v60; // rdx
  __int64 v61; // rax
  unsigned __int8 *v62; // rbp
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int8 *v66; // rax
  __int64 v67; // rdi
  _BYTE *v68; // rax
  int v69; // ecx
  char v70; // dl
  __int64 v71; // rax
  char *v72; // rdx
  char v73; // al
  int v74; // esi
  __int64 v75; // r9
  __int64 v76; // r13
  int v77; // eax
  __int64 v78; // r12
  int v79; // eax
  unsigned __int64 v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // r15
  __int64 v92; // r14
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // r13
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 v102; // r13
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // r14
  void *v108; // rdi
  void *v109; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v110; // [rsp+8h] [rbp-80h]
  __int64 v111; // [rsp+10h] [rbp-78h]
  void *v112; // [rsp+20h] [rbp-68h]
  __int64 v113; // [rsp+30h] [rbp-58h] BYREF
  __int16 v114; // [rsp+40h] [rbp-48h]

  v4 = *(_BYTE **)(a1 + 56);
  v5 = v4 + 1;
  *(_QWORD *)(a1 + 56) = v4 + 1;
  v6 = v4[1] & 0xDF;
  if ( v6 != 88 )
  {
    if ( v6 == 66 )
    {
      if ( (unsigned __int8)(v4[2] - 48) > 1u )
        goto LABEL_30;
      v68 = *(_BYTE **)(a1 + 8);
      v69 = 1326;
      v70 = v68[1];
      if ( (v70 & 0x20) == 0 )
      {
        v69 = 1314;
        if ( (*v68 & 8) == 0 )
          v69 = ((v70 & 8) != 0) + 1205;
      }
      sub_FC70B0((__int64)&v109, *(_QWORD *)(a1 + 16), a2, v69);
      sub_AEA040((__int64)&v109);
      v71 = *(_QWORD *)(a1 + 56);
      v72 = *(char **)(a1 + 32);
      *(_DWORD *)(a1 + 64) = 2;
      v39 = (char *)(v71 + 1);
      *(_QWORD *)(a1 + 56) = v71 + 1;
      *(_QWORD *)(a1 + 40) = v71 + 1;
      if ( (char *)(v71 + 1) != v72 )
      {
        v73 = *(_BYTE *)(v71 + 1);
        if ( (unsigned __int8)(v73 - 48) > 1u )
          goto LABEL_121;
        while ( v72 != ++v39 )
        {
          v73 = *v39;
          if ( (unsigned __int8)(*v39 - 48) > 1u )
          {
LABEL_121:
            if ( v73 != 39 )
            {
              *(_QWORD *)(a1 + 56) = v39;
              if ( (byte_2411740[2 * (unsigned __int8)*v39] & 0x18) != 0 )
              {
                v74 = (int)v39;
                if ( !sub_13E0580(*(_QWORD *)(a1 + 8), v39, v72 - v39) )
                {
                  v76 = *(_QWORD *)(a1 + 16);
                  v77 = sub_13D1C70(a2, v74 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, v75);
                  sub_FC70B0((__int64)&v109, v76, a2 + v77, 1049);
                  sub_AEC220((unsigned __int8 **)&v109, *(_BYTE **)(a1 + 56), 1);
                  v45 = 2;
                  goto LABEL_72;
                }
              }
              return;
            }
          }
        }
      }
    }
    else
    {
      if ( v6 != 79 || (unsigned __int8)(v4[2] - 48) > 7u )
      {
LABEL_30:
        v23 = *(_BYTE **)(a1 + 32);
        *(_DWORD *)(a1 + 64) = 8;
        if ( v5 == v23 )
        {
          v25 = v23;
        }
        else
        {
          v24 = v4[1];
          if ( (unsigned __int8)(v24 - 48) <= 7u || v24 == 39 )
          {
            v25 = v4 + 1;
            do
            {
              if ( v23 == ++v25 )
              {
                *(_QWORD *)(a1 + 56) = v23;
                goto LABEL_74;
              }
            }
            while ( (unsigned __int8)(*v25 - 48) <= 7u || *v25 == 39 );
            *(_QWORD *)(a1 + 56) = v25;
            if ( v5 == v25 )
              goto LABEL_38;
LABEL_74:
            *(_QWORD *)(a1 + 40) = v5;
            v26 = 0;
LABEL_75:
            if ( v23 != v25 )
            {
              if ( (byte_2411740[2 * (unsigned __int8)*v25] & 8) == 0 )
                goto LABEL_77;
              do
                v46 = *++v25;
              while ( v23 != v25 && ((byte_2411740[2 * v46] & 8) != 0 || v46 == 39) );
              if ( (v46 & 0xDF) == 0x45 || v46 == 46 )
              {
                *(_QWORD *)(a1 + 56) = v25;
                *(_DWORD *)(a1 + 64) = 10;
                sub_13E0A80(a1, a2);
                if ( *(_DWORD *)(a1 + 64) != 8 )
                  return;
              }
              else
              {
LABEL_77:
                sub_13E0A80(a1, a2);
                if ( *(_DWORD *)(a1 + 64) != 8 )
                  return;
              }
            }
            if ( (**(_BYTE **)(a1 + 8) & 0x10) != 0 && (*(_BYTE *)(a1 + 128) & 1) == 0 && !v26 )
            {
              v21 = *(_QWORD *)(a1 + 16);
              v22 = 1423;
              goto LABEL_27;
            }
            return;
          }
          v25 = v4 + 1;
        }
        *(_QWORD *)(a1 + 56) = v25;
LABEL_38:
        v26 = v25 == (_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL);
        goto LABEL_75;
      }
      v27 = *(_BYTE **)(a1 + 8);
      v28 = 1310;
      if ( (*v27 & 0x10) == 0 )
        v28 = (v27[1] & 8) == 0 ? 1231 : 1212;
      sub_FC70B0((__int64)&v109, *(_QWORD *)(a1 + 16), a2, v28);
      if ( (_BYTE)v114 )
      {
        sub_FC7790(v111, (__int64 *)&v109, SHIBYTE(v114));
        v111 = 0;
        v114 = 0;
      }
      if ( v112 != &v113 )
        operator delete(v112);
      v29 = (void **)v109;
      if ( v109 )
      {
        v30 = v110;
        if ( v110 )
        {
          if ( (unsigned __int64)v109 >= v110 && (unsigned __int64)v109 <= v110 + 14848 )
          {
            v84 = *(unsigned int *)(v110 + 14976);
            *(_DWORD *)(v110 + 14976) = v84 + 1;
            *(_QWORD *)(v30 + 8 * v84 + 14848) = v29;
          }
          else
          {
            v31 = *((void ***)v109 + 66);
            v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v109 + 134)];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 8;
                  v33 = (void **)v32[3];
                  if ( v33 == v32 + 5 )
                    break;
                  operator delete(v33);
                  if ( v31 == v32 )
                    goto LABEL_54;
                }
              }
              while ( v31 != v32 );
LABEL_54:
              v32 = (void **)v29[66];
            }
            if ( v32 != v29 + 68 )
              free(v32);
            v34 = (void **)v29[52];
            v35 = v29 + 52;
            if ( v34 != v29 + 54 )
              free(v34);
            v36 = v29 + 12;
            do
            {
              while ( 1 )
              {
                v35 -= 4;
                if ( *v35 == v35 + 2 )
                  break;
                operator delete(*v35);
                if ( v36 == v35 )
                  goto LABEL_62;
              }
            }
            while ( v36 != v35 );
LABEL_62:
            operator delete(v29, 0x3A0u);
          }
        }
      }
      v37 = *(_QWORD *)(a1 + 56);
      v38 = *(char **)(a1 + 32);
      *(_DWORD *)(a1 + 64) = 8;
      v39 = (char *)(v37 + 1);
      *(_QWORD *)(a1 + 56) = v37 + 1;
      *(_QWORD *)(a1 + 40) = v37 + 1;
      if ( (char *)(v37 + 1) != v38 )
      {
        v40 = *(_BYTE *)(v37 + 1);
        if ( (unsigned __int8)(v40 - 48) > 7u )
          goto LABEL_67;
        while ( v38 != ++v39 )
        {
          v40 = *v39;
          if ( (unsigned __int8)(*v39 - 48) > 7u )
          {
LABEL_67:
            if ( v40 != 39 )
            {
              *(_QWORD *)(a1 + 56) = v39;
              v41 = (unsigned __int8)*v39;
              if ( (_BYTE)v41 != 46 && (*v39 & 0xDF) != 69 && (byte_2411740[2 * v41] & 0x18) != 0 )
              {
                v42 = (int)v39;
                if ( !sub_13E0580(*(_QWORD *)(a1 + 8), v39, v38 - v39) )
                {
                  v44 = sub_13D1C70(a2, v42 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, v43);
                  sub_FC70B0((__int64)&v109, *(_QWORD *)(a1 + 16), a2 + v44, 1049);
                  sub_AEC220((unsigned __int8 **)&v109, *(_BYTE **)(a1 + 56), 1);
                  v45 = 1;
LABEL_72:
                  sub_AE9DF0((unsigned __int8 **)&v109, v45, 2u);
                  sub_AEA040((__int64)&v109);
                  *(_BYTE *)(a1 + 128) |= 1u;
                }
              }
              return;
            }
          }
        }
      }
    }
    *(_QWORD *)(a1 + 56) = v39;
    return;
  }
  v7 = (unsigned __int8)v4[2];
  if ( (byte_2411740[2 * v7] & 0x18) == 0 && (_BYTE)v7 != 46 )
    goto LABEL_30;
  v8 = *(unsigned __int8 **)(a1 + 32);
  *(_DWORD *)(a1 + 64) = 16;
  *(_QWORD *)(a1 + 56) = v4 + 2;
  *(_QWORD *)(a1 + 40) = v4 + 2;
  if ( v4 + 2 == v8 )
  {
LABEL_91:
    v47 = *(_QWORD *)(a1 + 16);
    v48 = sub_13D1C70(a2, (int)v8 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_FC70B0((__int64)&v109, v47, a2 + v48, 1044);
    v49 = (unsigned __int8 *)v109;
    v50 = (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) & 8) != 0;
    if ( !v109 )
    {
      v80 = v110;
      v81 = *(_DWORD *)(v110 + 14976);
      if ( v81 )
      {
        v89 = (unsigned int)(v81 - 1);
        *(_DWORD *)(v110 + 14976) = v89;
        v49 = *(unsigned __int8 **)(v80 + 8 * v89 + 14848);
        v90 = *((unsigned int *)v49 + 134);
        *v49 = 0;
        v91 = *((_QWORD *)v49 + 66);
        *((_DWORD *)v49 + 106) = 0;
        v92 = v91 + (v90 << 6);
        while ( v91 != v92 )
        {
          while ( 1 )
          {
            v92 -= 64;
            v93 = *(void **)(v92 + 24);
            if ( v93 == (void *)(v92 + 40) )
              break;
            operator delete(v93);
            if ( v91 == v92 )
              goto LABEL_164;
          }
        }
LABEL_164:
        *((_DWORD *)v49 + 134) = 0;
      }
      else
      {
        v49 = (unsigned __int8 *)operator new(0x3A0u);
        *v49 = 0;
        *((_QWORD *)v49 + 12) = v49 + 112;
        *((_QWORD *)v49 + 16) = v49 + 144;
        *((_QWORD *)v49 + 20) = v49 + 176;
        *((_QWORD *)v49 + 24) = v49 + 208;
        *((_QWORD *)v49 + 28) = v49 + 240;
        *((_QWORD *)v49 + 32) = v49 + 272;
        *((_QWORD *)v49 + 36) = v49 + 304;
        *((_QWORD *)v49 + 40) = v49 + 336;
        *((_QWORD *)v49 + 44) = v49 + 368;
        *((_QWORD *)v49 + 48) = v49 + 400;
        *((_QWORD *)v49 + 52) = v49 + 432;
        *((_QWORD *)v49 + 13) = 0;
        v49[112] = 0;
        *((_QWORD *)v49 + 17) = 0;
        v49[144] = 0;
        *((_QWORD *)v49 + 21) = 0;
        v49[176] = 0;
        *((_QWORD *)v49 + 25) = 0;
        v49[208] = 0;
        *((_QWORD *)v49 + 29) = 0;
        v49[240] = 0;
        *((_QWORD *)v49 + 33) = 0;
        v49[272] = 0;
        *((_QWORD *)v49 + 37) = 0;
        v49[304] = 0;
        *((_QWORD *)v49 + 41) = 0;
        v49[336] = 0;
        *((_QWORD *)v49 + 45) = 0;
        v49[368] = 0;
        *((_QWORD *)v49 + 49) = 0;
        v49[400] = 0;
        *((_QWORD *)v49 + 53) = 0x800000000LL;
        *((_QWORD *)v49 + 66) = v49 + 544;
        *((_QWORD *)v49 + 67) = 0x600000000LL;
      }
      v109 = v49;
    }
    v49[*v49 + 1] = 3;
    v51 = v109;
    v52 = *(unsigned __int8 *)v109;
    *(_BYTE *)v109 = v52 + 1;
    v51[v52 + 2] = v50;
    v53 = (unsigned __int8 *)v109;
    if ( !v109 )
    {
      v82 = v110;
      v83 = *(_DWORD *)(v110 + 14976);
      if ( v83 )
      {
        v94 = (unsigned int)(v83 - 1);
        *(_DWORD *)(v110 + 14976) = v94;
        v53 = *(unsigned __int8 **)(v82 + 8 * v94 + 14848);
        v95 = *((unsigned int *)v53 + 134);
        *v53 = 0;
        v96 = *((_QWORD *)v53 + 66);
        *((_DWORD *)v53 + 106) = 0;
        v97 = v96 + (v95 << 6);
        while ( v96 != v97 )
        {
          while ( 1 )
          {
            v97 -= 64;
            v98 = *(void **)(v97 + 24);
            if ( v98 == (void *)(v97 + 40) )
              break;
            operator delete(v98);
            if ( v96 == v97 )
              goto LABEL_169;
          }
        }
LABEL_169:
        *((_DWORD *)v53 + 134) = 0;
      }
      else
      {
        v53 = (unsigned __int8 *)operator new(0x3A0u);
        *v53 = 0;
        *((_QWORD *)v53 + 12) = v53 + 112;
        *((_QWORD *)v53 + 16) = v53 + 144;
        *((_QWORD *)v53 + 20) = v53 + 176;
        *((_QWORD *)v53 + 24) = v53 + 208;
        *((_QWORD *)v53 + 28) = v53 + 240;
        *((_QWORD *)v53 + 32) = v53 + 272;
        *((_QWORD *)v53 + 36) = v53 + 304;
        *((_QWORD *)v53 + 40) = v53 + 336;
        *((_QWORD *)v53 + 44) = v53 + 368;
        *((_QWORD *)v53 + 48) = v53 + 400;
        *((_QWORD *)v53 + 52) = v53 + 432;
        *((_QWORD *)v53 + 13) = 0;
        v53[112] = 0;
        *((_QWORD *)v53 + 17) = 0;
        v53[144] = 0;
        *((_QWORD *)v53 + 21) = 0;
        v53[176] = 0;
        *((_QWORD *)v53 + 25) = 0;
        v53[208] = 0;
        *((_QWORD *)v53 + 29) = 0;
        v53[240] = 0;
        *((_QWORD *)v53 + 33) = 0;
        v53[272] = 0;
        *((_QWORD *)v53 + 37) = 0;
        v53[304] = 0;
        *((_QWORD *)v53 + 41) = 0;
        v53[336] = 0;
        *((_QWORD *)v53 + 45) = 0;
        v53[368] = 0;
        *((_QWORD *)v53 + 49) = 0;
        v53[400] = 0;
        *((_QWORD *)v53 + 53) = 0x800000000LL;
        *((_QWORD *)v53 + 66) = v53 + 544;
        *((_QWORD *)v53 + 67) = 0x600000000LL;
      }
      v109 = v53;
    }
    v53[*v53 + 1] = 2;
    v54 = v109;
    v55 = *(unsigned __int8 *)v109;
    *(_BYTE *)v109 = v55 + 1;
    v54[v55 + 2] = 1;
    sub_AEA040((__int64)&v109);
    *(_BYTE *)(a1 + 128) |= 1u;
    return;
  }
  v9 = v4 + 2;
  v10 = v4 + 2;
  v11 = v4[2] == 39 || (byte_2411740[2 * (unsigned __int8)v4[2]] & 0x18) != 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( v8 == v9 + 1 )
      {
        *(_QWORD *)(a1 + 56) = v10;
        if ( v10 != v4 + 3 || v4[2] != 39 )
        {
          v13 = v9[1];
          goto LABEL_13;
        }
LABEL_90:
        if ( v8 != v10 )
          goto LABEL_101;
        goto LABEL_91;
      }
      v12 = (unsigned __int8)v9[1];
      if ( (byte_2411740[2 * v12] & 0x18) == 0 && (_BYTE)v12 != 39 )
        break;
      ++v9;
    }
    *(_QWORD *)(a1 + 56) = v10;
    if ( v4 + 2 == v10 )
      goto LABEL_101;
    if ( v10 == v4 + 3 && v4[2] == 39 )
      goto LABEL_90;
    v13 = *v10;
    if ( *v10 != 46 )
      goto LABEL_13;
  }
  else
  {
LABEL_101:
    v11 = 0;
    if ( *v10 != 46 )
    {
      LODWORD(v8) = (_DWORD)v10;
      goto LABEL_91;
    }
  }
  *(_BYTE *)(a1 + 69) = 1;
  *(_QWORD *)(a1 + 56) = v10 + 1;
  if ( v10 + 1 == v8 )
    goto LABEL_106;
  v65 = v10[1];
  if ( (byte_2411740[2 * v65] & 0x18) == 0 && (_BYTE)v65 != 39 )
  {
    v8 = v10 + 1;
LABEL_106:
    *(_QWORD *)(a1 + 56) = v8;
    LODWORD(v66) = (_DWORD)v8;
    goto LABEL_107;
  }
  v66 = v10 + 1;
  while ( v8 != ++v66 )
  {
    v67 = *v66;
    if ( (byte_2411740[2 * v67] & 0x18) == 0 && (_BYTE)v67 != 39 )
      break;
  }
  *(_QWORD *)(a1 + 56) = v66;
  if ( v10 + 1 == v66 || v66 == v10 + 2 && v10[1] == 39 )
  {
LABEL_107:
    if ( !v11 )
    {
      LODWORD(v8) = (_DWORD)v66;
      goto LABEL_91;
    }
  }
  sub_13E0640(a1, a2, v10 + 1, 0);
  v10 = *(unsigned __int8 **)(a1 + 56);
  v13 = *v10;
LABEL_13:
  if ( (v13 & 0xDF) == 0x50 )
  {
    sub_13E0640(a1, a2, v10, 1);
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(unsigned __int8 **)(a1 + 32);
    *(_BYTE *)(a1 + 68) = 1;
    v16 = (unsigned __int8 *)(v14 + 1);
    *(_QWORD *)(a1 + 56) = v14 + 1;
    if ( (unsigned __int8 *)(v14 + 1) != v15 )
    {
      v17 = *(_BYTE *)(v14 + 1);
      if ( ((v17 - 43) & 0xFD) != 0 )
      {
LABEL_16:
        if ( (byte_2411740[2 * v17] & 8) == 0 && v17 != 39 )
          goto LABEL_136;
        v18 = v16;
        while ( v15 != ++v18 )
        {
          v19 = *v18;
          if ( (byte_2411740[2 * v19] & 8) == 0 && (_BYTE)v19 != 39 )
            break;
        }
        if ( v18 == v16 || v18 == v16 + 1 && v17 == 39 )
          goto LABEL_136;
        sub_13E0640(a1, a2, v16, 0);
        v20 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 56) = v18;
        if ( (*(_BYTE *)(v20 + 12) & 4) != 0 )
        {
          if ( (*(_BYTE *)(v20 + 1) & 0x40) == 0 )
            return;
          v21 = *(_QWORD *)(a1 + 16);
          v22 = 1334;
        }
        else
        {
          v21 = *(_QWORD *)(a1 + 16);
          v22 = ((*(_BYTE *)(v20 + 1) & 8) != 0) + 1222;
        }
LABEL_27:
        sub_FC70B0((__int64)&v109, v21, a2, v22);
        sub_AEA040((__int64)&v109);
        return;
      }
      v16 = (unsigned __int8 *)(v14 + 2);
      *(_QWORD *)(a1 + 56) = v14 + 2;
      if ( v15 != (unsigned __int8 *)(v14 + 2) )
      {
        v17 = *(_BYTE *)(v14 + 2);
        goto LABEL_16;
      }
    }
LABEL_136:
    if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
    {
      v78 = *(_QWORD *)(a1 + 16);
      v79 = sub_13D1C70(a2, (int)v14 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
      sub_FC70B0((__int64)&v109, v78, a2 + v79, 1040);
      sub_AEA040((__int64)&v109);
      *(_BYTE *)(a1 + 128) |= 1u;
    }
    return;
  }
  if ( *(_BYTE *)(a1 + 69) )
  {
    v56 = *(_QWORD *)(a1 + 16);
    v57 = sub_13D1C70(a2, (int)v10 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_FC70B0((__int64)&v109, v56, a2 + v57, 1044);
    v58 = (unsigned __int8 *)v109;
    v59 = (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) & 8) != 0;
    if ( !v109 )
    {
      v87 = v110;
      v88 = *(_DWORD *)(v110 + 14976);
      if ( v88 )
      {
        v104 = (unsigned int)(v88 - 1);
        *(_DWORD *)(v110 + 14976) = v104;
        v58 = *(unsigned __int8 **)(v87 + 8 * v104 + 14848);
        v105 = *((unsigned int *)v58 + 134);
        *v58 = 0;
        v106 = *((_QWORD *)v58 + 66);
        *((_DWORD *)v58 + 106) = 0;
        v107 = v106 + (v105 << 6);
        while ( v106 != v107 )
        {
          while ( 1 )
          {
            v107 -= 64;
            v108 = *(void **)(v107 + 24);
            if ( v108 == (void *)(v107 + 40) )
              break;
            operator delete(v108);
            if ( v106 == v107 )
              goto LABEL_179;
          }
        }
LABEL_179:
        *((_DWORD *)v58 + 134) = 0;
      }
      else
      {
        v58 = (unsigned __int8 *)operator new(0x3A0u);
        *v58 = 0;
        *((_QWORD *)v58 + 12) = v58 + 112;
        *((_QWORD *)v58 + 16) = v58 + 144;
        *((_QWORD *)v58 + 20) = v58 + 176;
        *((_QWORD *)v58 + 24) = v58 + 208;
        *((_QWORD *)v58 + 28) = v58 + 240;
        *((_QWORD *)v58 + 32) = v58 + 272;
        *((_QWORD *)v58 + 36) = v58 + 304;
        *((_QWORD *)v58 + 40) = v58 + 336;
        *((_QWORD *)v58 + 44) = v58 + 368;
        *((_QWORD *)v58 + 48) = v58 + 400;
        *((_QWORD *)v58 + 52) = v58 + 432;
        *((_QWORD *)v58 + 13) = 0;
        v58[112] = 0;
        *((_QWORD *)v58 + 17) = 0;
        v58[144] = 0;
        *((_QWORD *)v58 + 21) = 0;
        v58[176] = 0;
        *((_QWORD *)v58 + 25) = 0;
        v58[208] = 0;
        *((_QWORD *)v58 + 29) = 0;
        v58[240] = 0;
        *((_QWORD *)v58 + 33) = 0;
        v58[272] = 0;
        *((_QWORD *)v58 + 37) = 0;
        v58[304] = 0;
        *((_QWORD *)v58 + 41) = 0;
        v58[336] = 0;
        *((_QWORD *)v58 + 45) = 0;
        v58[368] = 0;
        *((_QWORD *)v58 + 49) = 0;
        v58[400] = 0;
        *((_QWORD *)v58 + 53) = 0x800000000LL;
        *((_QWORD *)v58 + 66) = v58 + 544;
        *((_QWORD *)v58 + 67) = 0x600000000LL;
      }
      v109 = v58;
    }
    v58[*v58 + 1] = 3;
    v60 = v109;
    v61 = *(unsigned __int8 *)v109;
    *(_BYTE *)v109 = v61 + 1;
    v60[v61 + 2] = v59;
    v62 = (unsigned __int8 *)v109;
    if ( !v109 )
    {
      v85 = v110;
      v86 = *(_DWORD *)(v110 + 14976);
      if ( v86 )
      {
        v99 = (unsigned int)(v86 - 1);
        *(_DWORD *)(v110 + 14976) = v99;
        v62 = *(unsigned __int8 **)(v85 + 8 * v99 + 14848);
        v100 = *((unsigned int *)v62 + 134);
        *v62 = 0;
        v101 = *((_QWORD *)v62 + 66);
        *((_DWORD *)v62 + 106) = 0;
        v102 = v101 + (v100 << 6);
        while ( v101 != v102 )
        {
          while ( 1 )
          {
            v102 -= 64;
            v103 = *(void **)(v102 + 24);
            if ( v103 == (void *)(v102 + 40) )
              break;
            operator delete(v103);
            if ( v101 == v102 )
              goto LABEL_174;
          }
        }
LABEL_174:
        *((_DWORD *)v62 + 134) = 0;
      }
      else
      {
        v62 = (unsigned __int8 *)operator new(0x3A0u);
        *v62 = 0;
        *((_QWORD *)v62 + 12) = v62 + 112;
        *((_QWORD *)v62 + 16) = v62 + 144;
        *((_QWORD *)v62 + 20) = v62 + 176;
        *((_QWORD *)v62 + 24) = v62 + 208;
        *((_QWORD *)v62 + 28) = v62 + 240;
        *((_QWORD *)v62 + 32) = v62 + 272;
        *((_QWORD *)v62 + 36) = v62 + 304;
        *((_QWORD *)v62 + 40) = v62 + 336;
        *((_QWORD *)v62 + 44) = v62 + 368;
        *((_QWORD *)v62 + 48) = v62 + 400;
        *((_QWORD *)v62 + 52) = v62 + 432;
        *((_QWORD *)v62 + 13) = 0;
        v62[112] = 0;
        *((_QWORD *)v62 + 17) = 0;
        v62[144] = 0;
        *((_QWORD *)v62 + 21) = 0;
        v62[176] = 0;
        *((_QWORD *)v62 + 25) = 0;
        v62[208] = 0;
        *((_QWORD *)v62 + 29) = 0;
        v62[240] = 0;
        *((_QWORD *)v62 + 33) = 0;
        v62[272] = 0;
        *((_QWORD *)v62 + 37) = 0;
        v62[304] = 0;
        *((_QWORD *)v62 + 41) = 0;
        v62[336] = 0;
        *((_QWORD *)v62 + 45) = 0;
        v62[368] = 0;
        *((_QWORD *)v62 + 49) = 0;
        v62[400] = 0;
        *((_QWORD *)v62 + 53) = 0x800000000LL;
        *((_QWORD *)v62 + 66) = v62 + 544;
        *((_QWORD *)v62 + 67) = 0x600000000LL;
      }
      v109 = v62;
    }
    v62[*v62 + 1] = 2;
    v63 = v109;
    v64 = *(unsigned __int8 *)v109;
    *(_BYTE *)v109 = v64 + 1;
    v63[v64 + 2] = 0;
    sub_AEA040((__int64)&v109);
    *(_BYTE *)(a1 + 128) |= 1u;
  }
}
