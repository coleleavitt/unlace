__int64 __fastcall sub_93BF00(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // r8d
  _DWORD *v21; // rbx
  unsigned int v22; // r10d
  __int64 v23; // r9
  int *v24; // r13
  int v25; // ecx
  __int64 v26; // r10
  _DWORD *v27; // rdi
  int *v28; // rax
  int *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdi
  _DWORD *v32; // r9
  _DWORD *v33; // rdi
  __int64 v35; // rax
  _DWORD *v36; // r9
  _DWORD *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  size_t v40; // r8
  char *v41; // rcx
  char *v42; // r11
  _DWORD *v43; // r13
  char *v44; // rbx
  __int64 v45; // rdx
  _DWORD *v46; // rsi
  _DWORD *v47; // rdx
  __int64 v48; // rsi
  unsigned int v49; // esi
  __int64 v50; // [rsp+0h] [rbp-78h]
  __int64 i; // [rsp+0h] [rbp-78h]
  __int64 v52; // [rsp+8h] [rbp-70h]
  size_t v53; // [rsp+10h] [rbp-68h]
  unsigned int v54; // [rsp+10h] [rbp-68h]
  int v55; // [rsp+18h] [rbp-60h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  int v57; // [rsp+20h] [rbp-58h]
  unsigned __int8 v58; // [rsp+3Bh] [rbp-3Dh]

  if ( !*(_DWORD *)(a2 + 28) && !*(_DWORD *)(a2 + 32) )
    goto LABEL_17;
  v4 = *(char **)(a2 + 16);
  v5 = 0;
  v6 = &v4[8 * *(unsigned int *)(a2 + 24)];
  v7 = *(_DWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 16);
  if ( v4 != v6 )
  {
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_8;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_8:
    if ( v7 > 0x10 && 3 * v7 < 4 * v5 )
    {
      v50 = a1;
      if ( v4 )
      {
        sub_186B220(v4);
        v9 = *(_DWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 16) = 0;
        v9 >>= 1;
        *(_DWORD *)(a2 + 24) = v9;
        v10 = v9;
        v11 = sub_186B270(8LL * v9);
        a1 = v50;
        if ( !v9 )
        {
LABEL_15:
          *(_QWORD *)(a2 + 16) = v11;
          goto LABEL_16;
        }
      }
      else
      {
        v49 = v7 >> 1;
        *(_QWORD *)(a2 + 16) = 0;
        v10 = v49;
        *(_DWORD *)(a2 + 24) = v49;
        v11 = sub_186B270(8LL * v49);
        a1 = v50;
      }
      v12 = v11 + 8 * v10;
      v13 = v11;
      if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
      {
        do
        {
          *(_DWORD *)(v13 + 4) = 0x80000000;
          v13 += 16;
          *(_DWORD *)(v13 - 4) = 0x80000000;
        }
        while ( v13 != v12 );
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  *(_QWORD *)(a2 + 28) = 0;
LABEL_17:
  v14 = *(_QWORD *)(a1 + 32);
  if ( !v14 )
    return 0;
  v15 = *(_DWORD *)(v14 - 4);
  if ( v15 <= 0 )
    return 0;
  v58 = 0;
  v16 = 0;
  v52 = (unsigned int)v15;
  for ( i = a1; ; v14 = *(_QWORD *)(i + 32) )
  {
    v17 = *(_QWORD *)(v14 + 8 * v16);
    v18 = 8 * v16;
    if ( !v17 || !(unsigned __int8)sub_966310(i, *(_QWORD *)(v14 + 8 * v16)) )
      break;
    v19 = *(unsigned int *)(a2 + 24);
    v20 = *(_DWORD *)(a2 + 32);
    if ( 3 * (int)v19 < (unsigned int)(4 * (v20 + *(_DWORD *)(a2 + 28))) )
    {
      v55 = 2 * v19;
      v53 = 8LL * (unsigned int)(2 * v19);
      v38 = sub_186B270(v53);
      v23 = v53;
      v39 = v55;
      v21 = (_DWORD *)v38;
      v40 = v38 + v53;
      if ( v55 )
      {
        if ( (v53 & 8) == 0 || (*(_DWORD *)(v38 + 4) = 0x80000000, v38 += 8, v38 != v40) )
        {
          do
          {
            *(_DWORD *)(v38 + 4) = 0x80000000;
            v38 += 16;
            *(_DWORD *)(v38 - 4) = 0x80000000;
          }
          while ( v38 != v40 );
        }
      }
      v41 = *(char **)(a2 + 16);
      v22 = v55 - 1;
      v24 = (int *)v40;
      v42 = &v41[8 * *(unsigned int *)(a2 + 24)];
      if ( v41 != v42 )
      {
        v43 = v21;
        v44 = *(char **)(a2 + 16);
        do
        {
          while ( *((_DWORD *)v44 + 1) + 0x80000000 <= 1 )
          {
            v44 += 8;
            if ( v42 == v44 )
              goto LABEL_61;
          }
          v45 = 8LL * (*(_DWORD *)v44 & v22);
          v46 = &v43[(unsigned __int64)v45 / 4];
          if ( v53 == v45 )
          {
LABEL_65:
            if ( v43 == v46 )
            {
LABEL_70:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v47 = v43;
            while ( v47[1] != 0x80000000 )
            {
              v47 += 2;
              if ( v46 == v47 )
                goto LABEL_70;
            }
          }
          else
          {
            v47 = &v43[(unsigned __int64)v45 / 4];
            while ( v47[1] != 0x80000000 )
            {
              v47 += 2;
              if ( (_DWORD *)v40 == v47 )
                goto LABEL_65;
            }
          }
          v48 = *(_QWORD *)v44;
          v44 += 8;
          *(_QWORD *)v47 = v48;
        }
        while ( v42 != v44 );
LABEL_61:
        v21 = v43;
        v24 = (int *)v40;
        v23 = v53;
        v39 = v55;
        v42 = *(char **)(a2 + 16);
        v18 = 8 * v16;
      }
      if ( v42 )
      {
        v57 = v39;
        v56 = v23;
        v54 = v22;
        sub_186B220(v42);
        v39 = v57;
        v23 = v56;
        v22 = v54;
      }
      *(_QWORD *)(a2 + 16) = v21;
      v20 = 0;
      *(_DWORD *)(a2 + 24) = v39;
      *(_DWORD *)(a2 + 32) = 0;
    }
    else
    {
      v21 = *(_DWORD **)(a2 + 16);
      v22 = v19 - 1;
      v23 = 8 * v19;
      v24 = (_DWORD *)((char *)v21 + v23);
    }
    v25 = *(_DWORD *)(v18 + *(_QWORD *)(*(_QWORD *)a2 + 288LL))
        ^ (*(_DWORD *)(v18 + *(_QWORD *)(*(_QWORD *)a2 + 288LL) + 4) + 1);
    v26 = 8LL * (v25 & v22);
    v27 = &v21[(unsigned __int64)v26 / 4];
    if ( v26 != v23 )
    {
      v28 = &v21[(unsigned __int64)v26 / 4];
      v29 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = (unsigned int)v28[1];
          if ( (unsigned int)v30 + 0x80000000 <= 1 )
            break;
          if ( v25 == *v28 )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 288LL);
            v32 = (_DWORD *)(v31 + v18);
            v33 = (_DWORD *)(v31 + 8LL * (unsigned int)v30);
            if ( *v33 == *v32 && v33[1] == v32[1] )
              goto LABEL_42;
          }
          v28 += 2;
          if ( v28 == v24 )
            goto LABEL_33;
        }
        if ( (_DWORD)v30 == 0x80000000 )
          break;
        v29 = v28;
        v28 += 2;
        if ( v28 == v24 )
        {
LABEL_33:
          v27 = &v21[(unsigned __int64)v26 / 4];
          goto LABEL_36;
        }
      }
      if ( v29 )
        *(_DWORD *)(a2 + 32) = v20 - 1;
      else
        v29 = v28;
      goto LABEL_73;
    }
    v29 = nullptr;
    while ( 1 )
    {
LABEL_36:
      if ( v27 == v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v30 = (unsigned int)v21[1];
      if ( (unsigned int)v30 + 0x80000000 <= 1 )
        break;
      if ( v25 == *v21 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 288LL);
        v36 = (_DWORD *)(v35 + v18);
        v37 = (_DWORD *)(v35 + 8LL * (unsigned int)v30);
        if ( *v37 == *v36 && v37[1] == v36[1] )
          goto LABEL_42;
      }
LABEL_35:
      v21 += 2;
    }
    if ( (_DWORD)v30 != 0x80000000 )
    {
      v29 = v21;
      goto LABEL_35;
    }
    if ( v29 )
      *(_DWORD *)(a2 + 32) = v20 - 1;
    else
      v29 = v21;
LABEL_73:
    v29[1] = v16;
    *v29 = v25;
    ++*(_DWORD *)(a2 + 28);
    v30 = (unsigned int)v29[1];
LABEL_42:
    if ( (_DWORD)v30 == (_DWORD)v16 )
      break;
    ++v16;
    v58 |= sub_966370(i, v17, *(_QWORD *)(*(_QWORD *)(i + 32) + 8 * v30));
    if ( v52 == v16 )
      return v58;
LABEL_21:
    ;
  }
  if ( v52 != ++v16 )
    goto LABEL_21;
  return v58;
}

