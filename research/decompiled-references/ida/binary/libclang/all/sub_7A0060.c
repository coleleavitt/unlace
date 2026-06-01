unsigned __int64 __fastcall sub_7A0060(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r11d
  _QWORD *v14; // r8
  unsigned int v15; // edi
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r9d
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // r9d
  unsigned int v30; // ecx
  __int64 *v31; // rdx
  __int64 v32; // rsi
  __int64 *v33; // rax
  int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // esi
  int v39; // eax
  __int64 v40; // rax
  int v41; // edx
  int v42; // r10d
  int v43; // eax
  int v44; // r10d
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // edx
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // r15
  __int64 v53; // rcx
  int v54; // edi
  _QWORD *v55; // rsi
  int v56; // edx
  int v57; // eax
  int v58; // r9d
  _QWORD *v59; // rdi

  v6 = sub_79A2E0((__int64)a1);
  v7 = v6;
  if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0 )
    v6 = sub_793320(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 88) + 18200LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  v9 = *((_BYTE *)a1 + 9);
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0xC) != 0 )
      v27 = sub_79FF40(a1);
    else
      v27 = *a1;
    if ( !v27 )
      return 0;
    if ( (*(_BYTE *)v27 & 1) != 0 )
    {
      v28 = v27 + 8;
      v29 = 3;
      v30 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3;
      v31 = (__int64 *)(v27
                      + 8
                      + 16LL
                      * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3));
      v32 = *v31;
      if ( a2 == *v31 )
      {
LABEL_26:
        v33 = (__int64 *)(v28 + 64);
LABEL_30:
        if ( v31 == v33 )
          return 0;
        v18 = v31[1];
        return v18 & 0xFFFFFFFFFFFFFFFCLL;
      }
    }
    else
    {
      v34 = *(_DWORD *)(v27 + 16);
      v28 = *(_QWORD *)(v27 + 8);
      if ( !v34 )
        return 0;
      v29 = v34 - 1;
      v30 = (v34 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
      v31 = (__int64 *)(v28 + 16LL * v30);
      v32 = *v31;
      if ( a2 == *v31 )
      {
LABEL_29:
        v33 = (__int64 *)(v28 + 16LL * *(unsigned int *)(v27 + 16));
        goto LABEL_30;
      }
    }
    v41 = 1;
    while ( v32 != -1 )
    {
      v42 = v41 + 1;
      v30 = v29 & (v30 + v41);
      v31 = (__int64 *)(v28 + 16LL * v30);
      v32 = *v31;
      if ( a2 == *v31 )
      {
        if ( (*(_BYTE *)v27 & 1) == 0 )
          goto LABEL_29;
        goto LABEL_26;
      }
      v41 = v42;
    }
    return 0;
  }
  if ( (v9 & 2) != 0 )
  {
    sub_79BF40(a1);
    if ( (*((_BYTE *)a1 + 9) & 0xC) != 0 )
      goto LABEL_8;
  }
  else if ( (v9 & 0xC) != 0 )
  {
LABEL_8:
    v10 = sub_79FF40(a1);
    goto LABEL_9;
  }
  v10 = *a1;
LABEL_9:
  if ( !v10 )
  {
    v40 = sub_79A2E0((__int64)a1);
    if ( (*(_BYTE *)(v40 + 28) & 0x7F) != 0 )
      v40 = sub_793320(v40);
    v10 = sub_79C6E0(a1, *(_QWORD *)(v40 + 88));
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = v10 + 8;
    v12 = 3;
  }
  else
  {
    v35 = *(_DWORD *)(v10 + 16);
    if ( !v35 )
      goto LABEL_72;
    v11 = *(_QWORD *)(v10 + 8);
    v12 = v35 - 1;
  }
  v13 = 1;
  v14 = nullptr;
  v15 = v12 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v16 = (_QWORD *)(v11 + 16LL * v15);
  v17 = *v16;
  if ( *v16 != a2 )
  {
    while ( v17 != -1 )
    {
      if ( v17 == -2 && !v14 )
        v14 = v16;
      v15 = v12 & (v15 + v13);
      v16 = (_QWORD *)(v11 + 16LL * v15);
      v17 = *v16;
      if ( *v16 == a2 )
        goto LABEL_13;
      ++v13;
    }
    if ( !v14 )
      v14 = v16;
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      v36 = 12;
      v35 = 4;
    }
    else
    {
      v35 = *(_DWORD *)(v10 + 16);
      v36 = 3 * v35;
    }
    v37 = *(_DWORD *)v10;
    v38 = (*(_DWORD *)v10 >> 1) + 1;
    if ( 4 * v38 < v36 )
    {
      if ( v35 >> 3 < v35 - *(_DWORD *)(v10 + 4) - v38 )
        goto LABEL_45;
      sub_79E7C0(v10, v35);
      if ( (*(_BYTE *)v10 & 1) != 0 )
      {
        v50 = v10 + 8;
        v51 = 3;
LABEL_78:
        LODWORD(v52) = v51 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v14 = (_QWORD *)(v50 + 16LL * (unsigned int)v52);
        v53 = *v14;
        if ( a2 != *v14 )
        {
          v54 = 1;
          v55 = nullptr;
          while ( v53 != -1 )
          {
            if ( !v55 && v53 == -2 )
              v55 = v14;
            v52 = v51 & (unsigned int)(v52 + v54);
            v14 = (_QWORD *)(v50 + 16 * v52);
            v53 = *v14;
            if ( *v14 == a2 )
              goto LABEL_75;
            ++v54;
          }
          if ( v55 )
          {
            v37 = *(_DWORD *)v10;
            v14 = v55;
            goto LABEL_45;
          }
        }
        goto LABEL_75;
      }
      v57 = *(_DWORD *)(v10 + 16);
      v50 = *(_QWORD *)(v10 + 8);
      if ( v57 )
      {
        v51 = v57 - 1;
        goto LABEL_78;
      }
LABEL_103:
      *(_DWORD *)v10 = (2 * (*(_DWORD *)v10 >> 1) + 2) | *(_DWORD *)v10 & 1;
      BUG();
    }
LABEL_72:
    sub_79E7C0(v10, 2 * v35);
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      v46 = v10 + 8;
      v47 = 3;
    }
    else
    {
      v56 = *(_DWORD *)(v10 + 16);
      v46 = *(_QWORD *)(v10 + 8);
      if ( !v56 )
        goto LABEL_103;
      v47 = v56 - 1;
    }
    v48 = v47 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v14 = (_QWORD *)(v46 + 16LL * v48);
    v49 = *v14;
    if ( a2 != *v14 )
    {
      v58 = 1;
      v59 = nullptr;
      while ( v49 != -1 )
      {
        if ( v49 == -2 && !v59 )
          v59 = v14;
        v48 = v47 & (v48 + v58);
        v14 = (_QWORD *)(v46 + 16LL * v48);
        v49 = *v14;
        if ( *v14 == a2 )
          goto LABEL_75;
        ++v58;
      }
      if ( v59 )
      {
        v37 = *(_DWORD *)v10;
        v14 = v59;
LABEL_45:
        *(_DWORD *)v10 = (2 * (v37 >> 1) + 2) | v37 & 1;
        if ( *v14 != -1 )
          --*(_DWORD *)(v10 + 4);
        *v14 = a2;
        v14[1] = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 72LL))(
                v8,
                a1,
                a2,
                a3) )
          return 0;
        goto LABEL_15;
      }
    }
LABEL_75:
    v37 = *(_DWORD *)v10;
    goto LABEL_45;
  }
LABEL_13:
  v18 = v16[1];
  if ( (v18 & 2) == 0 )
    return v18 & 0xFFFFFFFFFFFFFFFCLL;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD *))(*(_QWORD *)v8 + 72LL))(v8, a1, a2, a3, v14);
LABEL_15:
  v19 = *a1;
  if ( *a1 )
  {
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      v20 = v19 + 8;
      v21 = 3;
      v22 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3;
      v23 = (__int64 *)(v19
                      + 8
                      + 16LL
                      * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3));
      v24 = *v23;
      if ( a2 == *v23 )
      {
LABEL_18:
        v25 = (__int64 *)(v20 + 64);
        goto LABEL_19;
      }
LABEL_67:
      v43 = 1;
      while ( v24 != -1 )
      {
        v44 = v43 + 1;
        v45 = v21 & (v22 + v43);
        v22 = v45;
        v23 = (__int64 *)(v20 + 16 * v45);
        v24 = *v23;
        if ( a2 == *v23 )
        {
          if ( (*(_BYTE *)v19 & 1) == 0 )
            goto LABEL_57;
          goto LABEL_18;
        }
        v43 = v44;
      }
      return 0;
    }
    v39 = *(_DWORD *)(v19 + 16);
    v20 = *(_QWORD *)(v19 + 8);
    if ( v39 )
    {
      v21 = v39 - 1;
      v22 = (v39 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
      v23 = (__int64 *)(v20 + 16LL * v22);
      v24 = *v23;
      if ( a2 == *v23 )
      {
LABEL_57:
        v25 = (__int64 *)(v20 + 16LL * *(unsigned int *)(v19 + 16));
LABEL_19:
        if ( v23 != v25 )
          return v23[1] & 0xFFFFFFFFFFFFFFFCLL;
        return 0;
      }
      goto LABEL_67;
    }
  }
  return 0;
}

