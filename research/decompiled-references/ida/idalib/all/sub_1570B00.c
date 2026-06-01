__int64 __fastcall sub_1570B00(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  unsigned __int16 v5; // r12
  _WORD *v6; // r15
  unsigned __int8 *v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  void **v10; // r12
  unsigned __int64 v11; // rax
  void **v12; // r14
  void **v13; // rbp
  void **v14; // rdi
  void **v15; // rdi
  void **v16; // rbp
  void **v17; // r14
  __int16 v19; // ax
  __int64 v20; // r14
  __int64 *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int16 v26; // ax
  unsigned __int16 v27; // r13
  __int64 v28; // rax
  unsigned __int8 *v29; // rbp
  _QWORD *v30; // rdx
  __int64 v31; // rax
  void *v32; // rdi
  void **v33; // r14
  void **v34; // rbp
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbp
  void **v38; // r14
  void *v39; // rdi
  __int16 v40; // ax
  unsigned __int64 v41; // r15
  __int64 *v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int16 v47; // ax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // r12
  void *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r15
  _QWORD *v58; // rax
  unsigned __int64 v59; // r8
  unsigned __int64 *v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r14
  __int64 v66; // r12
  void *v67; // rdi
  _WORD *v68; // [rsp+0h] [rbp-98h]
  unsigned __int64 v69; // [rsp+0h] [rbp-98h]
  unsigned __int64 v70; // [rsp+8h] [rbp-90h]
  void *v71; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+18h] [rbp-80h]
  __int64 v73; // [rsp+20h] [rbp-78h]
  void *v74; // [rsp+30h] [rbp-68h]
  _BYTE v75[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v76; // [rsp+50h] [rbp-48h]

  v5 = *(_WORD *)(a1 + 32);
  if ( v5 == 5 )
    goto LABEL_31;
  v6 = *(_WORD **)(a1 + 24);
  if ( sub_10CCDE0(v5)
    || v5 <= 0x13u && (v48 = 982656, _bittest64(&v48, v5))
    || v5 == 1
    || ((v5 - 8) & 0xFFF7) == 0
    || !v6
    || !sub_FDE0B0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
  {
    sub_1564840((__int64)&v71, a1, (int *)(a1 + 16), 14);
    v7 = (unsigned __int8 *)v71;
    if ( !v71 )
    {
      v49 = v72;
      v50 = *(_DWORD *)(v72 + 14976);
      if ( v50 )
      {
        v51 = (unsigned int)(v50 - 1);
        *(_DWORD *)(v72 + 14976) = v51;
        v7 = *(unsigned __int8 **)(v49 + 8 * v51 + 14848);
        v52 = *((unsigned int *)v7 + 134);
        *v7 = 0;
        v53 = *((_QWORD *)v7 + 66);
        *((_DWORD *)v7 + 106) = 0;
        v54 = v53 + (v52 << 6);
        while ( v53 != v54 )
        {
          while ( 1 )
          {
            v54 -= 64;
            v55 = *(void **)(v54 + 24);
            if ( v55 == (void *)(v54 + 40) )
              break;
            operator delete(v55);
            if ( v53 == v54 )
              goto LABEL_87;
          }
        }
LABEL_87:
        *((_DWORD *)v7 + 134) = 0;
      }
      else
      {
        v7 = (unsigned __int8 *)operator new(0x3A0u);
        *v7 = 0;
        *((_QWORD *)v7 + 12) = v7 + 112;
        *((_QWORD *)v7 + 16) = v7 + 144;
        *((_QWORD *)v7 + 20) = v7 + 176;
        *((_QWORD *)v7 + 24) = v7 + 208;
        *((_QWORD *)v7 + 28) = v7 + 240;
        *((_QWORD *)v7 + 32) = v7 + 272;
        *((_QWORD *)v7 + 36) = v7 + 304;
        *((_QWORD *)v7 + 40) = v7 + 336;
        *((_QWORD *)v7 + 44) = v7 + 368;
        *((_QWORD *)v7 + 48) = v7 + 400;
        *((_QWORD *)v7 + 52) = v7 + 432;
        *((_QWORD *)v7 + 13) = 0;
        v7[112] = 0;
        *((_QWORD *)v7 + 17) = 0;
        v7[144] = 0;
        *((_QWORD *)v7 + 21) = 0;
        v7[176] = 0;
        *((_QWORD *)v7 + 25) = 0;
        v7[208] = 0;
        *((_QWORD *)v7 + 29) = 0;
        v7[240] = 0;
        *((_QWORD *)v7 + 33) = 0;
        v7[272] = 0;
        *((_QWORD *)v7 + 37) = 0;
        v7[304] = 0;
        *((_QWORD *)v7 + 41) = 0;
        v7[336] = 0;
        *((_QWORD *)v7 + 45) = 0;
        v7[368] = 0;
        *((_QWORD *)v7 + 49) = 0;
        v7[400] = 0;
        *((_QWORD *)v7 + 53) = 0x800000000LL;
        *((_QWORD *)v7 + 66) = v7 + 544;
        *((_QWORD *)v7 + 67) = 0x600000000LL;
      }
      v71 = v7;
    }
    v7[*v7 + 1] = 4;
    v8 = v71;
    v9 = *(unsigned __int8 *)v71;
    *(_BYTE *)v71 = v9 + 1;
    v8[v9 + 2] = 5;
    if ( (_BYTE)v76 )
    {
      sub_FC7790(v73, (__int64 *)&v71, SHIBYTE(v76));
      v73 = 0;
      v76 = 0;
    }
    if ( v74 != v75 )
      operator delete(v74);
    v10 = (void **)v71;
    if ( !v71 )
      goto LABEL_24;
    v11 = v72;
    if ( !v72 )
      goto LABEL_24;
    if ( (unsigned __int64)v71 >= v72 && (unsigned __int64)v71 <= v72 + 14848 )
      goto LABEL_89;
    v12 = *((void ***)v71 + 66);
    v13 = &v12[8 * (unsigned __int64)*((unsigned int *)v71 + 134)];
    if ( v12 != v13 )
    {
      do
      {
        while ( 1 )
        {
          v13 -= 8;
          v14 = (void **)v13[3];
          if ( v14 == v13 + 5 )
            break;
          operator delete(v14);
          if ( v12 == v13 )
            goto LABEL_15;
        }
      }
      while ( v12 != v13 );
LABEL_15:
      v13 = (void **)v10[66];
    }
    if ( v13 != v10 + 68 )
      free(v13);
    v15 = (void **)v10[52];
    v16 = v10 + 52;
    if ( v15 != v10 + 54 )
      free(v15);
    v17 = v10 + 12;
    do
    {
      while ( 1 )
      {
        v16 -= 4;
        if ( *v16 != v16 + 2 )
          break;
        if ( v16 == v17 )
          goto LABEL_23;
      }
      operator delete(*v16);
    }
    while ( v16 != v17 );
LABEL_23:
    operator delete(v10, 0x3A0u);
    goto LABEL_24;
  }
  v19 = *(_WORD *)(a1 + 32);
  v20 = 0;
  if ( (unsigned __int16)(v19 - 7) > 0xCu && v19 != 1 )
LABEL_31:
    v20 = *(_QWORD *)(a1 + 24);
  v21 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v21, (int *)(a1 + 16));
  v22 = *(unsigned int *)(a2 + 8);
  v23 = *(unsigned int *)(a2 + 12);
  v24 = *(_DWORD *)(a1 + 40);
  if ( v22 >= v23 )
  {
    v57 = v24;
    if ( v23 < v22 + 1 )
    {
      sub_2237220(a2, a2 + 16, v22 + 1, 16);
      v22 = *(unsigned int *)(a2 + 8);
    }
    v58 = (_QWORD *)(*(_QWORD *)a2 + 16 * v22);
    *v58 = v57;
    v58[1] = v20;
    ++*(_DWORD *)(a2 + 8);
  }
  else
  {
    v25 = *(_QWORD *)a2 + 16 * v22;
    *(_DWORD *)v25 = v24;
    *(_QWORD *)(v25 + 8) = v20;
    ++*(_DWORD *)(a2 + 8);
  }
  v26 = *(_WORD *)(a1 + 32);
  if ( v26 == 451 || v26 == 23 )
    return 0;
  while ( 1 )
  {
    sub_1569A00(a1, 0x42u, 14, &byte_22F0C30, 0, a3, a4);
    v27 = *(_WORD *)(a1 + 32);
    if ( v27 != 5 )
      break;
LABEL_66:
    v41 = *(_QWORD *)(a1 + 24);
LABEL_67:
    v42 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v42, (int *)(a1 + 16));
    v43 = *(unsigned int *)(a2 + 8);
    v44 = *(unsigned int *)(a2 + 12);
    v45 = *(unsigned int *)(a1 + 40);
    if ( v43 >= v44 )
    {
      v59 = v45 | v70 & 0xFFFFFFFF00000000LL;
      v70 = v59;
      if ( v44 < v43 + 1 )
      {
        v69 = v59;
        sub_2237220(a2, a2 + 16, v43 + 1, 16);
        v43 = *(unsigned int *)(a2 + 8);
        v59 = v69;
      }
      v60 = (unsigned __int64 *)(*(_QWORD *)a2 + 16 * v43);
      *v60 = v59;
      v60[1] = v41;
      ++*(_DWORD *)(a2 + 8);
    }
    else
    {
      v46 = *(_QWORD *)a2 + 16 * v43;
      *(_DWORD *)v46 = v45;
      *(_QWORD *)(v46 + 8) = v41;
      ++*(_DWORD *)(a2 + 8);
    }
    v47 = *(_WORD *)(a1 + 32);
    if ( v47 == 23 || v47 == 451 )
      return 0;
  }
  v68 = *(_WORD **)(a1 + 24);
  if ( !sub_10CCDE0(v27) )
  {
    if ( v27 > 0x13u || (v28 = 982656, !_bittest64(&v28, v27)) )
    {
      if ( v27 != 1 && ((v27 - 8) & 0xFFF7) != 0 && v68 && sub_FDE0B0(v68, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
      {
        v40 = *(_WORD *)(a1 + 32);
        v41 = 0;
        if ( (unsigned __int16)(v40 - 7) <= 0xCu || v40 == 1 )
          goto LABEL_67;
        goto LABEL_66;
      }
    }
  }
  sub_1564840((__int64)&v71, a1, (int *)(a1 + 16), 14);
  v29 = (unsigned __int8 *)v71;
  if ( !v71 )
  {
    v61 = v72;
    v62 = *(_DWORD *)(v72 + 14976);
    if ( v62 )
    {
      v63 = (unsigned int)(v62 - 1);
      *(_DWORD *)(v72 + 14976) = v63;
      v29 = *(unsigned __int8 **)(v61 + 8 * v63 + 14848);
      v64 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v65 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v66 = v65 + (v64 << 6);
      while ( v65 != v66 )
      {
        while ( 1 )
        {
          v66 -= 64;
          v67 = *(void **)(v66 + 24);
          if ( v67 == (void *)(v66 + 40) )
            break;
          operator delete(v67);
          if ( v65 == v66 )
            goto LABEL_101;
        }
      }
LABEL_101:
      *((_DWORD *)v29 + 134) = 0;
    }
    else
    {
      v29 = (unsigned __int8 *)operator new(0x3A0u);
      *v29 = 0;
      *((_QWORD *)v29 + 12) = v29 + 112;
      *((_QWORD *)v29 + 16) = v29 + 144;
      *((_QWORD *)v29 + 20) = v29 + 176;
      *((_QWORD *)v29 + 24) = v29 + 208;
      *((_QWORD *)v29 + 28) = v29 + 240;
      *((_QWORD *)v29 + 32) = v29 + 272;
      *((_QWORD *)v29 + 36) = v29 + 304;
      *((_QWORD *)v29 + 40) = v29 + 336;
      *((_QWORD *)v29 + 44) = v29 + 368;
      *((_QWORD *)v29 + 48) = v29 + 400;
      *((_QWORD *)v29 + 52) = v29 + 432;
      *((_QWORD *)v29 + 13) = 0;
      v29[112] = 0;
      *((_QWORD *)v29 + 17) = 0;
      v29[144] = 0;
      *((_QWORD *)v29 + 21) = 0;
      v29[176] = 0;
      *((_QWORD *)v29 + 25) = 0;
      v29[208] = 0;
      *((_QWORD *)v29 + 29) = 0;
      v29[240] = 0;
      *((_QWORD *)v29 + 33) = 0;
      v29[272] = 0;
      *((_QWORD *)v29 + 37) = 0;
      v29[304] = 0;
      *((_QWORD *)v29 + 41) = 0;
      v29[336] = 0;
      *((_QWORD *)v29 + 45) = 0;
      v29[368] = 0;
      *((_QWORD *)v29 + 49) = 0;
      v29[400] = 0;
      *((_QWORD *)v29 + 53) = 0x800000000LL;
      *((_QWORD *)v29 + 66) = v29 + 544;
      *((_QWORD *)v29 + 67) = 0x600000000LL;
    }
    v71 = v29;
  }
  v29[*v29 + 1] = 4;
  v30 = v71;
  v31 = *(unsigned __int8 *)v71;
  *(_BYTE *)v71 = v31 + 1;
  v30[v31 + 2] = 5;
  if ( (_BYTE)v76 )
  {
    sub_FC7790(v73, (__int64 *)&v71, SHIBYTE(v76));
    v32 = v74;
    v73 = 0;
    v76 = 0;
    if ( v74 != v75 )
LABEL_43:
      operator delete(v32);
  }
  else
  {
    v32 = v74;
    if ( v74 != v75 )
      goto LABEL_43;
  }
  v10 = (void **)v71;
  if ( v71 )
  {
    v11 = v72;
    if ( v72 )
    {
      if ( (unsigned __int64)v71 >= v72 && (unsigned __int64)v71 <= v72 + 14848 )
      {
LABEL_89:
        v56 = *(unsigned int *)(v11 + 14976);
        *(_DWORD *)(v11 + 14976) = v56 + 1;
        *(_QWORD *)(v11 + 8 * v56 + 14848) = v10;
        goto LABEL_24;
      }
      v33 = *((void ***)v71 + 66);
      v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v71 + 134)];
      if ( v33 != v34 )
      {
        do
        {
          while ( 1 )
          {
            v34 -= 8;
            v35 = (void **)v34[3];
            if ( v35 == v34 + 5 )
              break;
            operator delete(v35);
            if ( v33 == v34 )
              goto LABEL_50;
          }
        }
        while ( v33 != v34 );
LABEL_50:
        v34 = (void **)v10[66];
      }
      if ( v34 != v10 + 68 )
        free(v34);
      v36 = (void **)v10[52];
      if ( v36 != v10 + 54 )
        free(v36);
      v37 = v10 + 48;
      v38 = v10 + 8;
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 != v37 + 2 )
          break;
LABEL_59:
        v37 -= 4;
        if ( v38 == v37 )
          goto LABEL_23;
      }
      while ( 1 )
      {
        operator delete(v39);
        v37 -= 4;
        if ( v38 == v37 )
          goto LABEL_23;
        v39 = *v37;
        if ( *v37 == v37 + 2 )
          goto LABEL_59;
      }
    }
  }
LABEL_24:
  LODWORD(v71) = 29556759;
  sub_15680D0(a1, &v71, (_WORD *)&dword_0 + 1, 2);
  return 1;
}
