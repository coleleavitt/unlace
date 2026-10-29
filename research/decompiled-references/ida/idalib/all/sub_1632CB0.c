void __fastcall sub_1632CB0(_WORD *a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // bp
  __int64 v8; // rbx
  char v9; // al
  unsigned __int64 *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  char v14; // r13
  unsigned __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r12
  unsigned __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 *v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbp
  unsigned int v42; // eax
  int v43; // eax
  char *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rbp
  _QWORD *v47; // rax
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  char *v51; // rdi
  __int64 v52; // rbp
  __int64 v53; // r13
  _QWORD *v54; // rax
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  void *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  void *v73; // rax
  _QWORD *v74; // rax
  __int64 *v75; // [rsp+8h] [rbp-160h]
  __int64 v76; // [rsp+8h] [rbp-160h]
  __int64 v77; // [rsp+8h] [rbp-160h]
  __int64 v78; // [rsp+8h] [rbp-160h]
  __int64 v79; // [rsp+8h] [rbp-160h]
  unsigned __int64 v80; // [rsp+8h] [rbp-160h]
  unsigned __int64 v81; // [rsp+8h] [rbp-160h]
  __int64 v82; // [rsp+8h] [rbp-160h]
  __int64 v83; // [rsp+8h] [rbp-160h]
  __int64 *v84; // [rsp+10h] [rbp-158h]
  unsigned __int64 v85; // [rsp+10h] [rbp-158h]
  unsigned __int64 v86; // [rsp+10h] [rbp-158h]
  unsigned __int64 v87; // [rsp+10h] [rbp-158h]
  unsigned __int64 v88; // [rsp+10h] [rbp-158h]
  unsigned __int64 v89; // [rsp+18h] [rbp-150h]
  unsigned __int64 v90; // [rsp+18h] [rbp-150h]
  unsigned __int64 v91; // [rsp+18h] [rbp-150h]
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __m128i si128; // [rsp+28h] [rbp-140h]
  __m128 v94; // [rsp+A0h] [rbp-C8h] BYREF
  void *v95; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v96[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v97; // [rsp+118h] [rbp-50h]
  unsigned int v98; // [rsp+120h] [rbp-48h]
  char v99; // [rsp+124h] [rbp-44h]

  v8 = (__int64)a2;
  v9 = *((_BYTE *)a2 + 29);
  if ( (v9 & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_68;
  }
  v10 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
  a3 = *v10;
  v12 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( a3 >= v12 )
  {
    if ( a3 == v12 )
    {
LABEL_6:
      if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      {
        v6 = 0;
        LOBYTE(v13) = 0;
        v14 = 0;
        goto LABEL_70;
      }
      v13 = 0;
      goto LABEL_82;
    }
    while ( 1 )
    {
      a4 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 137 )
        break;
      v12 += 8LL;
      if ( a3 == v12 )
        goto LABEL_6;
    }
  }
  else
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(_WORD **)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 137 )
        break;
      a4 += 8LL;
      if ( v12 == a4 )
        goto LABEL_6;
    }
    if ( v12 == a4 )
      goto LABEL_6;
  }
  v13 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 137 )
  {
    a3 += 8LL;
    do
    {
      v13 = *(_QWORD *)a3;
      a3 += 8LL;
    }
    while ( *(_WORD *)(v13 + 36) != 137 );
  }
  v6 = 0;
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
  {
LABEL_16:
    v15 = *(unsigned __int64 **)(v13 + 48);
    v16 = 16LL * *(unsigned int *)(v13 + 40);
    a4 = (unsigned __int64)&v15[(unsigned __int64)v16 / 8];
    a5 = v16 >> 4;
    v17 = v16 >> 6;
    a3 = v17;
    if ( v17 )
    {
      v18 = *(_QWORD **)(v13 + 48);
      v19 = &v15[8 * v17];
      while ( 1 )
      {
        if ( v18[1] == 2 )
        {
          a2 = (_WORD *)*v18;
          if ( *(_WORD *)*v18 == 24954 )
            goto LABEL_156;
        }
        if ( v18[3] == 2 )
        {
          a2 = (_WORD *)v18[2];
          if ( *a2 == 24954 )
          {
            v14 = a4 != (_QWORD)(v18 + 2);
            goto LABEL_31;
          }
        }
        if ( v18[5] == 2 )
        {
          a2 = (_WORD *)v18[4];
          if ( *a2 == 24954 )
          {
            v14 = a4 != (_QWORD)(v18 + 4);
            goto LABEL_31;
          }
        }
        if ( v18[7] == 2 )
        {
          a2 = (_WORD *)v18[6];
          if ( *a2 == 24954 )
          {
            v14 = a4 != (_QWORD)(v18 + 6);
            goto LABEL_31;
          }
        }
        v18 += 8;
        if ( v19 == v18 )
        {
          v20 = (__int64)(a4 - (_QWORD)v18) >> 4;
          goto LABEL_28;
        }
      }
    }
    v20 = a5;
    v18 = *(_QWORD **)(v13 + 48);
LABEL_28:
    if ( v20 != 2 )
    {
      if ( v20 != 3 )
      {
        v14 = 0;
        if ( v20 != 1 )
          goto LABEL_31;
        goto LABEL_149;
      }
      a2 = v18;
      v89 = a3;
      v86 = a4;
      v77 = a5;
      v55 = sub_1628490("za", (__int64)v18);
      a5 = v77;
      a4 = v86;
      a3 = v89;
      if ( v55 )
      {
LABEL_156:
        v14 = v18 != (_QWORD *)a4;
LABEL_31:
        v21 = &v15[8 * a3];
        if ( a3 )
        {
          while ( 1 )
          {
            if ( v15[1] == 3 )
            {
              a3 = *v15;
              if ( *(_WORD *)*v15 == 29818 && *(_BYTE *)(a3 + 2) == 48 )
                break;
            }
            if ( v15[3] == 3 )
            {
              a3 = v15[2];
              if ( *(_WORD *)a3 == 29818 && *(_BYTE *)(a3 + 2) == 48 )
              {
                LOBYTE(v13) = 1;
                if ( (unsigned __int64 *)a4 != v15 + 2 )
                  goto LABEL_44;
                goto LABEL_125;
              }
            }
            if ( v15[5] == 3 )
            {
              a3 = v15[4];
              if ( *(_WORD *)a3 == 29818 && *(_BYTE *)(a3 + 2) == 48 )
              {
                v15 += 4;
                break;
              }
            }
            if ( v15[7] == 3 )
            {
              a3 = v15[6];
              if ( *(_WORD *)a3 == 29818 && *(_BYTE *)(a3 + 2) == 48 )
              {
                v15 += 6;
                break;
              }
            }
            v15 += 8;
            if ( v21 == v15 )
            {
              a5 = (__int64)(a4 - (_QWORD)v15) >> 4;
              goto LABEL_138;
            }
          }
LABEL_43:
          LOBYTE(v13) = 1;
          if ( (unsigned __int64 *)a4 != v15 )
            goto LABEL_44;
          goto LABEL_125;
        }
LABEL_138:
        if ( a5 != 2 )
        {
          if ( a5 != 3 )
          {
            if ( a5 != 1 )
              goto LABEL_125;
            goto LABEL_141;
          }
          a2 = v15;
          v80 = a4;
          v58 = sub_1628490("zt0", (__int64)v15);
          a4 = v80;
          if ( v58 )
            goto LABEL_43;
          v15 += 2;
        }
        a2 = v15;
        v81 = a4;
        v59 = sub_1628490("zt0", (__int64)v15);
        a4 = v81;
        if ( v59 )
          goto LABEL_43;
        v15 += 2;
LABEL_141:
        if ( v15[1] == 3 && *(_WORD *)*v15 == 29818 && *(_BYTE *)(*v15 + 2) == 48 )
          goto LABEL_43;
LABEL_125:
        LOBYTE(v13) = 0;
        if ( v14 )
        {
LABEL_44:
          v22 = *(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          a2 = *(_WORD **)v22;
          if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 26
            || *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
            && (a2 = (_WORD *)sub_F63050(a2, a2, a3, a4)) != nullptr )
          {
            sub_A5E110((__m128 *)&ptr, (__int64)a2);
            if ( (BYTE3(ptr) & 8) != 0 )
            {
              a2 = a1;
              sub_168B9F0(&v94, a1, *(unsigned int *)(v8 + 24), 4997, 0);
              sub_15F7200(&v94);
            }
          }
          if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
            goto LABEL_70;
          goto LABEL_48;
        }
        v9 = *(_BYTE *)(v8 + 29);
LABEL_68:
        v36 = v9 & 1;
        LOBYTE(v13) = 0;
        v14 = 0;
        goto LABEL_69;
      }
      v18 += 2;
    }
    a2 = v18;
    v90 = a3;
    v87 = a4;
    v78 = a5;
    v56 = sub_1628490("za", (__int64)v18);
    a5 = v78;
    a4 = v87;
    a3 = v90;
    if ( v56 )
    {
LABEL_150:
      v14 = a4 != (_QWORD)v18;
      goto LABEL_31;
    }
    v18 += 2;
LABEL_149:
    a2 = v18;
    v91 = a3;
    v88 = a4;
    v79 = a5;
    v57 = sub_1628490("za", (__int64)v18);
    a5 = v79;
    a4 = v88;
    v14 = v57;
    a3 = v91;
    if ( !v57 )
      goto LABEL_31;
    goto LABEL_150;
  }
LABEL_82:
  v39 = sub_B8C3D0(v8, (__int64)a2, a3, a4, v11, a6);
  a4 = *v39;
  v40 = *v39 + 8LL * *((unsigned int *)v39 + 2);
  if ( a4 >= v40 )
  {
    if ( a4 == v40 )
    {
LABEL_86:
      v6 = 0;
      goto LABEL_87;
    }
    while ( 1 )
    {
      a3 = *(_QWORD *)v40;
      if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) == 136 )
        break;
      v40 += 8LL;
      if ( a4 == v40 )
        goto LABEL_86;
    }
  }
  else
  {
    a3 = a4;
    while ( 1 )
    {
      a2 = *(_WORD **)a3;
      a4 = a3;
      if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) == 136 )
        break;
      a3 += 8LL;
      if ( v40 == a3 )
        goto LABEL_86;
    }
  }
  LOBYTE(v6) = a4 != v40;
LABEL_87:
  if ( v13 )
    goto LABEL_16;
  v14 = 0;
  v36 = *(_BYTE *)(v8 + 29) & 1;
LABEL_69:
  if ( !v36 )
    goto LABEL_70;
LABEL_48:
  v23 = sub_B8C3D0(v8, (__int64)a2, a3, a4, a5, a6);
  a3 = *v23;
  a4 = *v23 + 8LL * *((unsigned int *)v23 + 2);
  if ( *v23 >= a4 )
  {
    if ( a3 == a4 )
      goto LABEL_70;
    while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 136 )
    {
      a4 += 8LL;
      if ( a3 == a4 )
        goto LABEL_70;
    }
LABEL_53:
    v25 = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v26 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25;
    if ( (unsigned int)v26 > 1 )
      v25 = sub_F63050(v25, a2, v26, a4);
    if ( sub_F582D0(*(_QWORD *)(*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      a2 = a1;
      sub_168B9F0(&v94, a1, *(unsigned int *)(v8 + 24), 7374, 0);
      if ( v97 )
      {
        a2 = nullptr;
        sub_AE9DF0(v96, 0, 2u);
      }
      else if ( v99 )
      {
        v69 = sub_168B9E0(&v94);
        v73 = v95;
        if ( v95 )
        {
          v83 = v69;
          v73 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v95 + 32LL))(v95);
          v69 = v83;
        }
        ptr = v73;
        v74 = sub_1587BC0(v69, (__int64 *)&ptr, v69, v70, v71, v72);
        a2 = nullptr;
        sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v98 + 8), 0, 2u);
      }
      sub_15F7200(&v94);
    }
    v29 = *(__int64 **)(v8 + 120);
    v30 = 8LL * (unsigned int)sub_B76070(v8, (__int64)a2, v27, v28);
    v84 = &v29[(unsigned __int64)v30 / 8];
    v31 = v30 >> 3;
    a3 = v30 >> 5;
    if ( a3 )
    {
      v75 = &v29[4 * a3];
      while ( 1 )
      {
        v35 = sub_B74600(*v29);
        if ( sub_F582D0(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL)) )
          goto LABEL_63;
        v32 = sub_B74600(v29[1]);
        if ( sub_F582D0(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          ++v29;
          goto LABEL_63;
        }
        v33 = sub_B74600(v29[2]);
        if ( sub_F582D0(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v29 += 2;
          goto LABEL_63;
        }
        v34 = sub_B74600(v29[3]);
        if ( sub_F582D0(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v29 += 3;
          goto LABEL_63;
        }
        v29 += 4;
        if ( v75 == v29 )
        {
          v31 = v84 - v29;
          break;
        }
      }
    }
    if ( v31 != 2 )
    {
      if ( v31 != 3 )
      {
        if ( v31 != 1 )
          goto LABEL_70;
        goto LABEL_167;
      }
      v67 = sub_B74600(*v29);
      if ( sub_F582D0(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
LABEL_63:
        if ( v84 != v29 )
        {
          sub_168B9F0(&v94, a1, *(unsigned int *)(v8 + 24), 7374, 0);
          if ( v97 )
          {
            sub_AE9DF0(v96, 1, 2u);
          }
          else if ( v99 )
          {
            v61 = sub_168B9E0(&v94);
            v65 = v95;
            if ( v95 )
            {
              v82 = v61;
              v65 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v95 + 32LL))(v95);
              v61 = v82;
            }
            ptr = v65;
            v66 = sub_1587BC0(v61, (__int64 *)&ptr, v61, v62, v63, v64);
            sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * v98 + 8), 1, 2u);
          }
          sub_15F7200(&v94);
        }
        goto LABEL_70;
      }
      ++v29;
    }
    v68 = sub_B74600(*v29);
    if ( !sub_F582D0(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      ++v29;
LABEL_167:
      v60 = sub_B74600(*v29);
      if ( !sub_F582D0(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_70;
      goto LABEL_63;
    }
    goto LABEL_63;
  }
  v24 = (unsigned __int64 *)*v23;
  while ( 1 )
  {
    a3 = *v24;
    if ( *(_WORD *)(*v24 + 36) == 136 )
      break;
    if ( (unsigned __int64 *)a4 == ++v24 )
      goto LABEL_70;
  }
  if ( (unsigned __int64 *)a4 != v24 )
    goto LABEL_53;
LABEL_70:
  v37 = *(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v38 = *(_QWORD *)v37;
  if ( *(_BYTE *)(*(_QWORD *)v37 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && (v38 = sub_F63050(v38, v38, a3, a4)) != 0 )
  {
    sub_A5E110(&v94, v38);
    v6 |= ((unsigned __int16)v94.m128_i16[1] >> 3) & 1;
    v14 |= (((unsigned __int16)v94.m128_i16[1] >> 3) & 0x1C) != 0;
    LOBYTE(v13) = ((((unsigned __int16)v94.m128_i16[1] >> 3) & 0xE0) != 0) | v13;
  }
  v76 = sub_168B6C0(a1);
  if ( (_BYTE)v6 || v14 )
  {
    ptr = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    sub_A83E70(v76, (char **)&ptr, v8);
    sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + si128.m128i_u32[0], 1);
    v85 = v94.m128_u64[0];
    v48 = sub_2244B30("sme", 3);
    v49 = sub_2244E60(&ptr, "sme", 3, v48);
    if ( v49 == -1 )
      sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + si128.m128i_u32[0], 1);
    else
      sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + v49, 1);
    if ( v94.m128_u64[0] == v85 )
    {
      v50 = 4992;
      if ( !(_BYTE)v6 )
        v50 = 4993;
      sub_168B9F0(&v94, a1, *(unsigned int *)(v8 + 24), v50, 0);
      sub_15F7200(&v94);
    }
    v51 = (char *)ptr;
    if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
    {
      v52 = 0;
      v53 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      do
      {
        v54 = *(_QWORD **)&v51[v52];
        if ( v54 != (_QWORD *)-8LL && v54 )
        {
          operator delete(*(_QWORD *)&v51[v52], *v54 + 17LL, 8);
          v51 = (char *)ptr;
        }
        v52 += 8;
      }
      while ( v52 != v53 );
    }
    free(v51);
  }
  if ( (_BYTE)v13 )
  {
    ptr = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    sub_A83E70(v76, (char **)&ptr, v8);
    sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + si128.m128i_u32[0], 1);
    v41 = v94.m128_u64[0];
    v42 = sub_2244B30("sme2", 4);
    v43 = sub_2244E60(&ptr, "sme2", 4, v42);
    if ( v43 == -1 )
    {
      sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + si128.m128i_u32[0], 1);
      if ( v41 != v94.m128_u64[0] )
        goto LABEL_91;
    }
    else
    {
      sub_EC0F90((__int64 **)&v94, (__int64 *)ptr + v43, 1);
      if ( v41 != v94.m128_u64[0] )
        goto LABEL_91;
    }
    sub_168B9F0(&v94, a1, *(unsigned int *)(v8 + 24), 4994, 0);
    sub_15F7200(&v94);
LABEL_91:
    v44 = (char *)ptr;
    if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
    {
      v45 = 0;
      v46 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      do
      {
        v47 = *(_QWORD **)&v44[v45];
        if ( v47 )
        {
          if ( v47 != (_QWORD *)-8LL )
          {
            operator delete(*(_QWORD *)&v44[v45], *v47 + 17LL, 8);
            v44 = (char *)ptr;
          }
        }
        v45 += 8;
      }
      while ( v46 != v45 );
    }
    free(v44);
  }
}
