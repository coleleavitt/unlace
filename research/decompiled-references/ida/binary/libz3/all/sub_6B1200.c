__int64 __fastcall sub_6B1200(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 *i; // r13
  void *v4; // r12
  char *v5; // rdi
  int v6; // ecx
  char *v7; // rdx
  unsigned int v8; // esi
  char *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // r12
  void *v12; // rcx
  _QWORD *v13; // rdi
  int v14; // ecx
  _QWORD *v15; // rdx
  unsigned int v16; // esi
  _QWORD *v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // r12
  void *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdi
  char *v28; // r14
  int v29; // ecx
  unsigned int v30; // esi
  char *v31; // rax
  char *v32; // rdx
  _QWORD *v33; // rbp
  _QWORD *v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rbp
  _QWORD *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  void *v41; // r12
  int v42; // eax
  __int64 result; // rax
  char *v44; // rbp
  void *v45; // r13
  char *v46; // rsi
  unsigned int v47; // ebp
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // esi

  v2 = *(__int64 **)(a1 + 144);
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = (void *)*v2;
      if ( *v2 )
      {
        sub_6B1000(*v2);
        sub_186B220(v4);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 188) || *(_DWORD *)(a1 + 192) )
  {
    v5 = *(char **)(a1 + 176);
    v6 = 0;
    v7 = &v5[8 * *(unsigned int *)(a1 + 184)];
    v8 = *(_DWORD *)(a1 + 184);
    v9 = *(char **)(a1 + 176);
    if ( v5 == v7 )
      goto LABEL_19;
    do
    {
      while ( *(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = 0;
        v9 += 8;
        if ( v7 == v9 )
          goto LABEL_13;
      }
      v9 += 8;
      ++v6;
    }
    while ( v7 != v9 );
LABEL_13:
    if ( v8 <= 0x10 || 3 * v8 >= 4 * v6 )
      goto LABEL_19;
    if ( v5 )
    {
      sub_186B220(v5);
      v10 = *(_DWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 176) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 184) = v10;
      v11 = v10;
      v12 = (void *)sub_186B270(8LL * v10);
      if ( !v10 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 176) = v12;
LABEL_19:
        *(_QWORD *)(a1 + 188) = 0;
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0;
      v54 = v8 >> 1;
      v11 = v54;
      *(_DWORD *)(a1 + 184) = v54;
      v12 = (void *)sub_186B270(8LL * v54);
    }
    v12 = memset(v12, 0, 8 * v11);
    goto LABEL_18;
  }
LABEL_20:
  if ( !*(_DWORD *)(a1 + 212) && !*(_DWORD *)(a1 + 216) )
    goto LABEL_34;
  v13 = *(_QWORD **)(a1 + 200);
  v14 = 0;
  v15 = &v13[*(unsigned int *)(a1 + 208)];
  v16 = *(_DWORD *)(a1 + 208);
  v17 = v13;
  if ( v13 != v15 )
  {
    do
    {
      while ( *v17 )
      {
        *v17++ = 0;
        if ( v15 == v17 )
          goto LABEL_27;
      }
      ++v17;
      ++v14;
    }
    while ( v15 != v17 );
LABEL_27:
    if ( v16 > 0x10 && 3 * v16 < 4 * v14 )
    {
      if ( v13 )
      {
        sub_186B220(v13);
        v18 = *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = 0;
        v18 >>= 1;
        *(_DWORD *)(a1 + 208) = v18;
        v19 = v18;
        v20 = (void *)sub_186B270(8LL * v18);
        if ( !v18 )
        {
LABEL_32:
          *(_QWORD *)(a1 + 200) = v20;
          goto LABEL_33;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 200) = 0;
        v55 = v16 >> 1;
        v19 = v55;
        *(_DWORD *)(a1 + 208) = v55;
        v20 = (void *)sub_186B270(8LL * v55);
      }
      v20 = memset(v20, 0, 8 * v19);
      goto LABEL_32;
    }
  }
LABEL_33:
  *(_QWORD *)(a1 + 212) = 0;
LABEL_34:
  v21 = *(_QWORD *)(a1 + 144);
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v22 = *(_QWORD **)(a1 + 16);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 8);
          v26 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_43;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_43:
    v22 = *(_QWORD **)(a1 + 16);
    if ( v22 )
LABEL_44:
      *((_DWORD *)v22 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 168) )
  {
    v27 = *(unsigned int *)(a1 + 160);
    v28 = *(char **)(a1 + 152);
    v29 = 0;
    v30 = *(_DWORD *)(a1 + 160);
    v31 = v28;
    v32 = &v28[48 * v27];
    if ( v28 == v32 )
      goto LABEL_53;
    do
    {
      while ( *((_DWORD *)v31 + 1) )
      {
        *((_DWORD *)v31 + 1) = 0;
        v31 += 48;
        if ( v32 == v31 )
          goto LABEL_52;
      }
      v31 += 48;
      ++v29;
    }
    while ( v32 != v31 );
LABEL_52:
    if ( v30 <= 0x10 || 3 * v30 >= 4 * v29 )
      goto LABEL_53;
    if ( v28 )
    {
      v44 = v28;
      do
      {
        v45 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v44 + 8);
        v46 = v44 + 24;
        v44 += 48;
        sub_182CBA0(v45, v46);
      }
      while ( v44 != &v28[48 * v27] );
      sub_186B220(v28);
      v47 = *(_DWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 152) = 0;
      v47 >>= 1;
      v48 = v47;
      *(_DWORD *)(a1 + 160) = v47;
      v49 = sub_186B270(48LL * v47);
      if ( !v47 )
      {
LABEL_90:
        *(_QWORD *)(a1 + 152) = v49;
LABEL_53:
        *(_QWORD *)(a1 + 164) = 0;
        goto LABEL_54;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 152) = 0;
      v56 = v30 >> 1;
      v48 = v56;
      *(_DWORD *)(a1 + 160) = v56;
      v49 = sub_186B270(48LL * v56);
    }
    v50 = v49;
    v51 = v49 + 48 * v48;
    do
    {
      *(_BYTE *)(v50 + 12) &= 0xFCu;
      *(_BYTE *)(v50 + 28) &= 0xFCu;
      v50 += 48;
      *(_QWORD *)(v50 - 48) = 0;
      *(_QWORD *)(v50 - 32) = 0;
      *(_QWORD *)(v50 - 16) = 0;
    }
    while ( v51 != v50 );
    v52 = v49;
    if ( ((48 * (_BYTE)v48) & 0x10) == 0 || (v52 = v49 + 48, *(_DWORD *)(v49 + 8) = 0, v49 + 48 != v51) )
    {
      do
      {
        *(_DWORD *)(v52 + 8) = 0;
        v52 += 96;
        *(_DWORD *)(v52 - 40) = 0;
      }
      while ( v52 != v51 );
    }
    v53 = v49;
    if ( ((48 * (_BYTE)v48) & 0x10) == 0 || (v53 = v49 + 48, *(_DWORD *)(v49 + 24) = 1, v49 + 48 != v51) )
    {
      do
      {
        *(_DWORD *)(v53 + 24) = 1;
        v53 += 96;
        *(_DWORD *)(v53 - 24) = 1;
      }
      while ( v53 != v51 );
    }
    goto LABEL_90;
  }
LABEL_54:
  sub_6A99A0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  v33 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_62;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = *(_QWORD *)(a1 + 40);
          v26 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_61;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_61:
    v33 = *(_QWORD **)(a1 + 48);
    if ( v33 )
LABEL_62:
      *((_DWORD *)v33 - 1) = 0;
  }
  v37 = *(_QWORD **)(a1 + 64);
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_71;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *(_QWORD *)(a1 + 56);
          v26 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_70;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_70:
    v37 = *(_QWORD **)(a1 + 64);
    if ( v37 )
LABEL_71:
      *((_DWORD *)v37 - 1) = 0;
  }
  v41 = qword_1C7F2C0;
  if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 112, &qword_1C7F2A0);
  }
  else
  {
    v42 = qword_1C7F2A0;
    *(_BYTE *)(a1 + 116) &= ~1u;
    *(_DWORD *)(a1 + 112) = v42;
  }
  if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
  {
    result = sub_182C690(v41, a1 + 128, &qword_1C7F2B0);
  }
  else
  {
    result = (unsigned int)qword_1C7F2B0;
    *(_BYTE *)(a1 + 132) &= ~1u;
    *(_DWORD *)(a1 + 128) = result;
  }
  *(_BYTE *)(a1 + 224) = 1;
  return result;
}

