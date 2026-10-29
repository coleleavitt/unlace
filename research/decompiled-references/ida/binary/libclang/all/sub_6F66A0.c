__int64 __fastcall sub_6F66A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rsi
  unsigned int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edx
  int v11; // eax
  size_t v12; // r15
  const char *v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // r8d
  _QWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // edx
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // r9
  int v23; // r14d
  _QWORD *v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // r11
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r8d
  _QWORD *v31; // r9
  _QWORD *v32; // rcx
  __int64 *v33; // rdx
  __int64 v34; // rax
  int v35; // r9d
  int v36; // r8d
  __int64 v37; // rax
  int v38; // edx
  int v39; // esi
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rdi
  int v43; // r11d
  _QWORD *v44; // r10
  int v45; // edx
  int v46; // edx
  __int64 v47; // rdi
  _QWORD *v48; // r9
  __int64 v49; // r12
  int v50; // r10d
  __int64 v51; // rsi
  unsigned int v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  _QWORD *v55; // [rsp+10h] [rbp-48h]
  _QWORD *v56; // [rsp+18h] [rbp-40h]

  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 1768);
  v5 = *(__int64 **)(*a1 + 1752);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = &v5[2 * v6];
    v8 = *v7;
    if ( *v7 == a2 )
    {
LABEL_3:
      v5 += 2 * v4;
      if ( v7 != v5 )
        return v7[1];
    }
    else
    {
      v10 = 1;
      while ( v8 != -4096 )
      {
        v35 = v10 + 1;
        v6 = (v4 - 1) & (v10 + v6);
        v7 = &v5[2 * v6];
        v8 = *v7;
        if ( *v7 == a2 )
          goto LABEL_3;
        v10 = v35;
      }
    }
  }
  v11 = *(_DWORD *)(a2 + 36);
  v12 = 8;
  v13 = "<global>";
  if ( ((v11 - 6) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v11 - 4) <= 1 )
    {
      v37 = std::string::find();
      v13 = *(const char **)a2;
      v12 = v37;
    }
    else if ( v11 == 7 )
    {
      v34 = sub_C92EB0(a2, v5);
      v13 = *(const char **)v34;
      v12 = *(_QWORD *)(v34 + 8);
    }
    else
    {
      v13 = *(const char **)a2;
      v12 = *(_QWORD *)(a2 + 8);
    }
  }
  v14 = sub_25E2710(v13, v12);
  v15 = sub_25E2870(v3 + 1728, v13, v12, v14);
  v16 = (_QWORD *)(*(_QWORD *)(v3 + 1728) + 8LL * v15);
  v17 = *v16;
  if ( *v16 )
  {
    if ( v17 != -8 )
      goto LABEL_10;
    --*(_DWORD *)(v3 + 1744);
  }
  v55 = v16;
  v52 = v15;
  v29 = sub_25CC9C0(v12 + 17, 8);
  v30 = v52;
  v31 = v55;
  v32 = (_QWORD *)v29;
  if ( v12 )
  {
    v56 = (_QWORD *)v29;
    memcpy((void *)(v29 + 16), v13, v12);
    v32 = v56;
    v31 = v55;
    v30 = v52;
  }
  *((_BYTE *)v32 + v12 + 16) = 0;
  *v32 = v12;
  v32[1] = a2;
  *v31 = v32;
  ++*(_DWORD *)(v3 + 1740);
  v33 = (__int64 *)(*(_QWORD *)(v3 + 1728) + 8LL * (unsigned int)sub_25E2C40(v3 + 1728, v30));
  v17 = *v33;
  if ( !*v33 || v17 == -8 )
  {
    do
    {
      do
      {
        v17 = v33[1];
        ++v33;
      }
      while ( v17 == -8 );
    }
    while ( !v17 );
  }
LABEL_10:
  v18 = *a1;
  result = *(_QWORD *)(v17 + 8);
  v19 = 0;
  v20 = *(_DWORD *)(*a1 + 1768);
  v21 = *a1 + 1752;
  if ( !v20 )
    goto LABEL_42;
  v22 = *(_QWORD *)(v18 + 1752);
  v23 = 1;
  v24 = nullptr;
  LODWORD(v25) = (v20 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v26 = (_QWORD *)(v22 + 16LL * (unsigned int)v25);
  v27 = *v26;
  if ( *v26 != a2 )
  {
    while ( v27 != -4096 )
    {
      if ( v27 == -8192 && !v24 )
        v24 = v26;
      v25 = (v20 - 1) & ((_DWORD)v25 + v23);
      v26 = (_QWORD *)(v22 + 16 * v25);
      v27 = *v26;
      if ( *v26 == a2 )
        goto LABEL_12;
      ++v23;
    }
    if ( !v24 )
      v24 = v26;
    v36 = *(_DWORD *)(v18 + 1760) + 1;
    v19 = 2 * v20;
    if ( 4 * v36 < 3 * v20 )
    {
      if ( v20 >> 3 < v20 - *(_DWORD *)(v18 + 1764) - v36 )
      {
LABEL_38:
        *(_DWORD *)(v18 + 1760) = v36;
        if ( *v24 != -4096 )
          --*(_DWORD *)(v18 + 1764);
        *v24 = a2;
        v28 = v24 + 1;
        v24[1] = 0;
        goto LABEL_13;
      }
      v54 = result;
      sub_6F6480(v21, v20);
      v45 = *(_DWORD *)(v18 + 1768);
      v36 = *(_DWORD *)(v18 + 1760) + 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        v47 = *(_QWORD *)(v18 + 1752);
        v48 = nullptr;
        result = v54;
        LODWORD(v49) = v46 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v50 = 1;
        v24 = (_QWORD *)(v47 + 16LL * (unsigned int)v49);
        v51 = *v24;
        if ( *v24 != a2 )
        {
          while ( v51 != -4096 )
          {
            if ( !v48 && v51 == -8192 )
              v48 = v24;
            v49 = v46 & (unsigned int)(v49 + v50);
            v24 = (_QWORD *)(v47 + 16 * v49);
            v51 = *v24;
            if ( *v24 == a2 )
              goto LABEL_38;
            ++v50;
          }
          if ( v48 )
            v24 = v48;
        }
        goto LABEL_38;
      }
LABEL_65:
      ++*(_DWORD *)(v18 + 1760);
      BUG();
    }
LABEL_42:
    v53 = result;
    sub_6F6480(v21, v19);
    v38 = *(_DWORD *)(v18 + 1768);
    v36 = *(_DWORD *)(v18 + 1760) + 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      v40 = *(_QWORD *)(v18 + 1752);
      result = v53;
      LODWORD(v41) = (v38 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v24 = (_QWORD *)(v40 + 16LL * (unsigned int)v41);
      v42 = *v24;
      if ( *v24 != a2 )
      {
        v43 = 1;
        v44 = nullptr;
        while ( v42 != -4096 )
        {
          if ( !v44 && v42 == -8192 )
            v44 = v24;
          v41 = v39 & (unsigned int)(v41 + v43);
          v24 = (_QWORD *)(v40 + 16 * v41);
          v42 = *v24;
          if ( *v24 == a2 )
            goto LABEL_38;
          ++v43;
        }
        if ( v44 )
          v24 = v44;
      }
      goto LABEL_38;
    }
    goto LABEL_65;
  }
LABEL_12:
  v28 = v26 + 1;
LABEL_13:
  *v28 = result;
  return result;
}

