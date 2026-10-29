_QWORD *__fastcall sub_5BCCC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // r10
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // kr00_8
  size_t v16; // rbp
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // ebp
  _QWORD *v21; // r13
  _QWORD *v22; // rbx
  int v23; // esi
  __int64 v24; // rbp
  _QWORD *v25; // rdi
  _QWORD *v26; // rbp
  _QWORD *v27; // r12
  __int64 v28; // rax
  void *v29; // rdi
  size_t v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *k; // rdx
  _QWORD *v34; // rax
  __int64 *j; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  char *v43; // r11
  __int64 v44; // rax
  char *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  _QWORD *v49; // rdx
  const void *v50; // rsi
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // rax
  char *v54; // rbx
  void *v55; // rdi
  void *v56; // rdi
  size_t v57; // r12
  __int64 v58; // rax
  void *v59; // rdi
  size_t v60; // rbp
  __int64 v61; // rax
  void *v62; // [rsp+8h] [rbp-80h]
  size_t v63; // [rsp+10h] [rbp-78h]
  char *v64; // [rsp+10h] [rbp-78h]
  __int64 v65; // [rsp+18h] [rbp-70h]
  int v66; // [rsp+28h] [rbp-60h]
  _QWORD *v67; // [rsp+30h] [rbp-58h]
  _QWORD *v68; // [rsp+30h] [rbp-58h]
  char *v69; // [rsp+30h] [rbp-58h]
  _QWORD *v70; // [rsp+30h] [rbp-58h]
  unsigned int *v71; // [rsp+38h] [rbp-50h]
  char *v72; // [rsp+38h] [rbp-50h]
  __int64 v73; // [rsp+40h] [rbp-48h] BYREF
  void *src; // [rsp+48h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 120);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(__int64 **)(a1 + 112);
  v7 = v5 & (unsigned int)(v4 - 1);
  v8 = 24 * v4;
  v9 = &v6[3 * v4];
  v10 = 24 * v7;
  v11 = &v6[3 * v7];
  if ( 24 * v7 != 24 * v4 )
  {
    for ( i = &v6[3 * v7]; v9 != i; i += 3 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v5 && a2 == v13 )
          goto LABEL_32;
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v11 )
  {
    for ( j = v6; v11 != j; j += 3 )
    {
      v37 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v37 + 12) == v5 && a2 == v37 )
          goto LABEL_32;
      }
      else if ( !v37 )
      {
        break;
      }
    }
  }
LABEL_8:
  v14 = *(unsigned int *)(a2 + 32);
  v73 = 0;
  src = nullptr;
  sub_186B510(&v73, v14, 1);
  v15 = v73;
  v62 = src;
  if ( src )
  {
    v16 = 4LL * HIDWORD(v73);
    v62 = (void *)sub_186B270(v16);
    memcpy(v62, src, v16);
  }
  v17 = *(unsigned int *)(a1 + 120);
  v18 = *(_DWORD *)(a1 + 128);
  v19 = 2 * v17;
  v66 = 2 * v17;
  if ( 3 * (int)v17 < (unsigned int)(4 * (v18 + *(_DWORD *)(a1 + 124))) )
  {
    v39 = v19;
    v63 = 24LL * v19;
    v65 = v63;
    v40 = (_QWORD *)sub_186B270(v63);
    v21 = v40;
    if ( (_DWORD)v39 )
    {
      v41 = &v40[3 * v39];
      do
      {
        *v40 = 0;
        v40 += 3;
        *(v40 - 2) = 0;
      }
      while ( v41 != v40 );
      v42 = v21;
      if ( (((_BYTE)v41 - (_BYTE)v21) & 8) == 0 || (v42 = v21 + 3, v21[2] = 0, v21 + 3 != v41) )
      {
        do
        {
          v42[2] = 0;
          v42 += 6;
          *(v42 - 1) = 0;
        }
        while ( v42 != v41 );
      }
    }
    v43 = *(char **)(a1 + 112);
    v44 = *(unsigned int *)(a1 + 120);
    v20 = v66 - 1;
    v45 = &v43[24 * v44];
    v22 = &v21[v63 / 8];
    if ( v43 != v45 )
    {
      do
      {
        v46 = *(_QWORD *)v43;
        if ( *(_QWORD *)v43 > 1u )
        {
          v47 = 24LL * (*(_DWORD *)(v46 + 12) & v20);
          v48 = &v21[(unsigned __int64)v47 / 8];
          if ( v63 == v47 )
          {
LABEL_87:
            if ( v21 == v48 )
            {
LABEL_104:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v21;
            while ( *v49 )
            {
              v49 += 3;
              if ( v48 == v49 )
                goto LABEL_104;
            }
          }
          else
          {
            v49 = &v21[(unsigned __int64)v47 / 8];
            while ( *v49 )
            {
              v49 += 3;
              if ( v22 == v49 )
                goto LABEL_87;
            }
          }
          *v49 = v46;
          v50 = *((const void **)v43 + 2);
          *((_DWORD *)v49 + 2) = *((_DWORD *)v43 + 2);
          if ( v50 )
          {
            v51 = *((unsigned int *)v43 + 3);
            v52 = (void *)v49[2];
            if ( *((_DWORD *)v49 + 3) < (unsigned int)v51 )
            {
              if ( v52 )
              {
                v71 = (unsigned int *)v43;
                v67 = v49;
                sub_186B220(v52);
                v43 = (char *)v71;
                v49 = v67;
                v51 = v71[3];
              }
              v72 = v43;
              v68 = v49;
              v53 = sub_186B270(4 * v51);
              v43 = v72;
              v52 = (void *)v53;
              v68[2] = v53;
              v51 = *((unsigned int *)v72 + 3);
              v50 = *((const void **)v72 + 2);
              *((_DWORD *)v68 + 3) = v51;
            }
            v69 = v43;
            memcpy(v52, v50, 4 * v51);
            v43 = v69;
          }
        }
        v43 += 24;
      }
      while ( v45 != v43 );
      v44 = *(unsigned int *)(a1 + 120);
      v45 = *(char **)(a1 + 112);
    }
    if ( v45 )
    {
      if ( (_DWORD)v44 )
      {
        v70 = &v21[v63 / 8];
        v54 = v45;
        v64 = &v45[24 * v44];
        do
        {
          while ( 1 )
          {
            v55 = *((void **)v54 + 2);
            if ( !v55 )
              break;
            sub_186B220(v55);
            v54 += 24;
            if ( v64 == v54 )
              goto LABEL_98;
          }
          v54 += 24;
        }
        while ( v54 != v64 );
LABEL_98:
        v22 = v70;
      }
      sub_186B220(v45);
    }
    *(_QWORD *)(a1 + 112) = v21;
    v18 = 0;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 120) = v66;
  }
  else
  {
    v20 = v17 - 1;
    v21 = *(_QWORD **)(a1 + 112);
    v65 = 24 * v17;
    v22 = &v21[3 * v17];
  }
  v23 = *(_DWORD *)(a2 + 12);
  v24 = v23 & v20;
  v25 = &v21[3 * v24];
  if ( 24 * v24 != v65 )
  {
    v26 = &v21[3 * v24];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = *v26;
      if ( *v26 > 1u )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a2 == v28 )
        {
          *v26 = a2;
          *((_DWORD *)v26 + 2) = v15;
          if ( !v62 )
            goto LABEL_29;
          v56 = (void *)v26[2];
          v57 = 4LL * HIDWORD(v15);
          if ( *((_DWORD *)v26 + 3) < HIDWORD(v15) )
          {
            if ( v56 )
              sub_186B220(v56);
            v57 = 4LL * HIDWORD(v15);
            v58 = sub_186B270(v57);
            v26[2] = v58;
            v56 = (void *)v58;
            *((_DWORD *)v26 + 3) = HIDWORD(v15);
          }
          memcpy(v56, v62, v57);
LABEL_28:
          sub_186B220(v62);
          goto LABEL_29;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_21;
          v27 = v26;
          goto LABEL_22;
        }
        v27 = v26;
      }
      v26 += 3;
      if ( v26 == v22 )
        goto LABEL_60;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_60:
    if ( v25 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v38 = *v21;
    if ( *v21 > 1u )
      break;
    if ( !v38 )
    {
      if ( v27 )
LABEL_21:
        *(_DWORD *)(a1 + 128) = v18 - 1;
      else
        v27 = v21;
LABEL_22:
      *v27 = a2;
      *((_DWORD *)v27 + 2) = v15;
      if ( v62 )
      {
        v29 = (void *)v27[2];
        v30 = 4LL * HIDWORD(v15);
        if ( *((_DWORD *)v27 + 3) < HIDWORD(v15) )
        {
          if ( v29 )
            sub_186B220(v29);
          v30 = 4LL * HIDWORD(v15);
          v31 = sub_186B270(v30);
          v27[2] = v31;
          v29 = (void *)v31;
          *((_DWORD *)v27 + 3) = HIDWORD(v15);
        }
        memcpy(v29, v62, v30);
        ++*(_DWORD *)(a1 + 124);
        goto LABEL_28;
      }
      ++*(_DWORD *)(a1 + 124);
      goto LABEL_29;
    }
    v27 = v21;
LABEL_59:
    v21 += 3;
  }
  if ( *(_DWORD *)(v38 + 12) != v23 || a2 != v38 )
    goto LABEL_59;
  *v21 = a2;
  *((_DWORD *)v21 + 2) = v15;
  if ( v62 )
  {
    v59 = (void *)v21[2];
    v60 = 4LL * HIDWORD(v15);
    if ( *((_DWORD *)v21 + 3) < HIDWORD(v15) )
    {
      if ( v59 )
        sub_186B220(v59);
      v60 = 4LL * HIDWORD(v15);
      v61 = sub_186B270(v60);
      v21[2] = v61;
      v59 = (void *)v61;
      *((_DWORD *)v21 + 3) = HIDWORD(v15);
    }
    memcpy(v59, v62, v60);
    goto LABEL_28;
  }
LABEL_29:
  if ( src )
    sub_186B220(src);
  v32 = *(unsigned int *)(a1 + 120);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(__int64 **)(a1 + 112);
  v8 = 24 * v32;
  v9 = &v6[3 * v32];
  v10 = 24LL * (v5 & (unsigned int)(v32 - 1));
  v11 = &v6[(unsigned __int64)v10 / 8];
LABEL_32:
  if ( v10 != v8 )
  {
    for ( k = v11; k != v9; k += 3 )
    {
      v34 = (_QWORD *)*k;
      if ( (unsigned __int64)*k > 1 )
      {
        if ( *((_DWORD *)v34 + 3) == v5 && (_QWORD *)a2 == v34 )
        {
          v34 = k;
          return v34 + 1;
        }
      }
      else if ( !v34 )
      {
        return v34 + 1;
      }
    }
  }
  if ( v6 == v11 )
  {
LABEL_48:
    v34 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = (_QWORD *)*v6;
        if ( (unsigned __int64)*v6 > 1 )
          break;
        if ( !v34 )
          return v34 + 1;
        v6 += 3;
        if ( v6 == v11 )
          goto LABEL_48;
      }
      if ( *((_DWORD *)v34 + 3) == v5 && (_QWORD *)a2 == v34 )
        break;
      v6 += 3;
      if ( v6 == v11 )
        goto LABEL_48;
    }
    v34 = v6;
  }
  return v34 + 1;
}

