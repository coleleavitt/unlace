void __fastcall sub_13C4990(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, char a5)
{
  char *v5; // r10
  __int64 v7; // rdx
  __int64 *v10; // r15
  unsigned int v11; // r12d
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  char *v17; // r9
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 *v25; // r14
  __int64 v26; // r13
  size_t v27; // rdx
  __int64 v28; // rcx
  bool v29; // sf
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  void *v34; // r8
  char *v35; // r13
  __int64 v36; // r9
  __int64 *v37; // rdi
  __int64 *v38; // r11
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // esi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // r14
  __int64 v46; // r10
  int v47; // r13d
  __int64 v48; // rax
  size_t v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v60; // [rsp+0h] [rbp-68h]
  char *v61; // [rsp+0h] [rbp-68h]
  __int64 v62; // [rsp+0h] [rbp-68h]
  char *v64; // [rsp+8h] [rbp-60h]
  char *v65; // [rsp+8h] [rbp-60h]
  __int64 v66; // [rsp+10h] [rbp-58h]
  unsigned __int64 v67; // [rsp+10h] [rbp-58h]
  void *v68; // [rsp+18h] [rbp-50h]

  if ( !a4 )
    return;
  v5 = *(char **)(a1 + 16);
  v7 = *(unsigned int *)(a1 + 24);
  v10 = a2;
  v11 = a3;
  v12 = *(_DWORD *)(a1 + 24);
  v13 = v7 + 8LL * (_QWORD)&v5[-*(_QWORD *)a1];
  v14 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  v15 = v13 - *(unsigned int *)(a1 + 8);
  if ( 8 * v14 - v13 >= a4 )
  {
    v16 = a4 + v7 + 63;
    if ( (__int64)(a4 + v7) >= 0 )
      v16 = a4 + v7;
    v66 = (__int64)&v5[8 * (v16 >> 6)];
    v17 = (char *)v66;
    v18 = (__int64)(a4 + v7) % 64;
    v19 = v18;
    if ( v18 < 0 )
    {
      v19 = v18 + 64;
      v17 = &v5[8 * (v16 >> 6) - 8];
    }
    v20 = v7 + 8 * (v5 - (char *)a2) - a3;
    if ( v20 > 0 )
    {
      do
      {
        if ( v12 )
        {
LABEL_9:
          v21 = 1LL << --v12;
          if ( !v19 )
            goto LABEL_71;
LABEL_10:
          v22 = 1LL << --v19;
          goto LABEL_11;
        }
        while ( 1 )
        {
          v5 -= 8;
          v21 = 0x8000000000000000LL;
          v12 = 63;
          if ( v19 )
            goto LABEL_10;
LABEL_71:
          v17 -= 8;
          v22 = 0x8000000000000000LL;
          v19 = 63;
LABEL_11:
          v23 = *(_QWORD *)v17;
          if ( (v21 & *(_QWORD *)v5) != 0 )
            break;
          *(_QWORD *)v17 = v23 & ~v22;
          if ( !--v20 )
            goto LABEL_13;
          if ( v12 )
            goto LABEL_9;
        }
        *(_QWORD *)v17 = v23 | v22;
        --v20;
      }
      while ( v20 );
    }
LABEL_13:
    v24 = a4 + a3 + 63;
    if ( (__int64)(a4 + a3) >= 0 )
      v24 = a4 + a3;
    v25 = (unsigned __int64 *)&a2[v24 >> 6];
    v26 = (__int64)(a4 + a3) % 64;
    if ( v26 < 0 )
    {
      v26 += 64;
      --v25;
    }
    if ( v25 == (unsigned __int64 *)a2 )
    {
      if ( (_DWORD)v26 != a3 )
      {
        v55 = *v25 | (-1LL << a3) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v26));
        if ( !a5 )
          v55 = *v25 & ~((-1LL << a3) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v26)));
        *v25 = v55;
      }
      goto LABEL_25;
    }
    if ( a3 )
    {
      v53 = -1LL << a3;
      v27 = (char *)v25 - (char *)(a2 + 1);
      v54 = *a2;
      if ( a5 )
      {
        v10 = a2 + 1;
        *a2 = v54 | v53;
LABEL_20:
        memset(v10, -1, v27);
        if ( v26 )
          *v25 |= 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v26);
LABEL_22:
        v28 = *(unsigned int *)(a1 + 24);
        v29 = (__int64)(a4 + v28) < 0;
        v30 = a4 + v28;
        v31 = v30 + 63;
        if ( !v29 )
          v31 = v30;
        v66 = *(_QWORD *)(a1 + 16) + 8 * (v31 >> 6);
        v18 = v30 % 64;
LABEL_25:
        if ( v18 < 0 )
        {
          LODWORD(v18) = v18 + 64;
          *(_QWORD *)(a1 + 16) = v66 - 8;
        }
        else
        {
          *(_QWORD *)(a1 + 16) = v66;
        }
        *(_DWORD *)(a1 + 24) = v18;
        return;
      }
      v10 = a2 + 1;
      *a2 = v54 & ~v53;
    }
    else
    {
      v27 = (char *)v25 - (char *)a2;
      if ( a5 )
        goto LABEL_20;
    }
    memset(v10, 0, v27);
    if ( v26 )
      *v25 &= ~(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v26));
    goto LABEL_22;
  }
  if ( a4 > 0x7FFFFFFFFFFFFFC0LL - v15 )
    std::__throw_length_error("vector<bool>::_M_fill_insert");
  v32 = a4;
  if ( a4 < v15 )
    v32 = v15;
  if ( v32 + v15 > 0x7FFFFFFFFFFFFFC0LL || __CFADD__(v32, v15) )
  {
    v67 = 0xFFFFFFFFFFFFFF8LL;
    v33 = 0xFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v67 = 8 * ((v32 + v15 + 63) >> 6);
    v33 = v67;
  }
  v34 = (void *)operator new(v33);
  v68 = *(void **)a1;
  v35 = (char *)a2 - *(_QWORD *)a1;
  if ( *(__int64 **)a1 != a2 )
    v34 = memmove(v34, *(const void **)a1, (size_t)a2 - *(_QWORD *)a1);
  v36 = a3;
  v37 = (__int64 *)&v35[(_QWORD)v34];
  if ( a3 )
  {
    v38 = a2;
    v39 = a3;
    LODWORD(v40) = 0;
    do
    {
      while ( 1 )
      {
        v41 = *v37 & ~(1LL << v40);
        if ( ((1LL << v40) & *v38) != 0 )
          v41 = (1LL << v40) | *v37;
        *v37 = v41;
        if ( (_DWORD)v40 == 63 )
          break;
        LODWORD(v40) = v40 + 1;
        if ( !--v39 )
          goto LABEL_44;
      }
      ++v38;
      ++v37;
      LODWORD(v40) = 0;
      --v39;
    }
    while ( v39 );
LABEL_44:
    v40 = (unsigned int)v40;
    v42 = v40;
  }
  else
  {
    v40 = 0;
    v42 = 0;
  }
  v29 = (__int64)(a4 + v40) < 0;
  v43 = a4 + v40;
  v44 = v43 + 63;
  if ( !v29 )
    v44 = v43;
  v45 = &v37[v44 >> 6];
  v46 = v43 % 64;
  if ( v43 % 64 < 0 )
  {
    v46 += 64;
    --v45;
  }
  v47 = v46;
  if ( v45 != v37 )
  {
    if ( v42 )
    {
      v48 = -1LL << v42;
      v49 = (char *)v45 - (char *)(v37 + 1);
      v50 = *v37;
      if ( a5 )
      {
        *v37++ = v50 | v48;
        goto LABEL_53;
      }
      *v37++ = v50 & ~v48;
    }
    else
    {
      v49 = (char *)v45 - (char *)v37;
      if ( a5 )
      {
LABEL_53:
        v64 = (char *)v34;
        v60 = v46;
        memset(v37, -1, v49);
        v34 = v64;
        v36 = a3;
        if ( v60 )
          *v45 |= 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v47);
LABEL_55:
        v68 = *(void **)a1;
        goto LABEL_56;
      }
    }
    v65 = (char *)v34;
    v62 = v46;
    memset(v37, 0, v49);
    v34 = v65;
    v36 = a3;
    if ( v62 )
      *v45 &= ~(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v47));
    goto LABEL_55;
  }
  if ( (_DWORD)v46 != v42 )
  {
    v56 = (-1LL << v42) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v46));
    v57 = *v45 | v56;
    v58 = *v45 & ~v56;
    if ( !a5 )
      v57 = v58;
    *v45 = v57;
  }
LABEL_56:
  v51 = *(unsigned int *)(a1 + 24) + 8LL * (*(_QWORD *)(a1 + 16) - (_QWORD)a2) - v36;
  if ( v51 > 0 )
  {
    while ( 1 )
    {
      v52 = *v45 & ~(1LL << v47);
      if ( ((1LL << v11) & *v10) != 0 )
        v52 = (1LL << v47) | *v45;
      *v45 = v52;
      if ( v11 == 63 )
      {
        ++v10;
        v11 = 0;
        if ( v47 == 63 )
          goto LABEL_64;
LABEL_59:
        ++v47;
        if ( !--v51 )
          break;
      }
      else
      {
        ++v11;
        if ( v47 != 63 )
          goto LABEL_59;
LABEL_64:
        ++v45;
        v47 = 0;
        if ( !--v51 )
          break;
      }
    }
  }
  if ( v68 )
  {
    v61 = (char *)v34;
    operator delete(v68);
    *(_DWORD *)(a1 + 24) = 0;
    v34 = v61;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_QWORD *)a1 = v34;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = v45;
  *(_QWORD *)(a1 + 32) = (char *)v34 + v67;
  *(_DWORD *)(a1 + 24) = v47;
}
