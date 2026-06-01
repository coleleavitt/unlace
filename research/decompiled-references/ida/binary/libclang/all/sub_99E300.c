__int64 __fastcall sub_99E300(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // bp
  int v28; // eax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r13d
  __int64 v53; // rdi
  int v54; // r10d
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // r9
  __int64 v61; // rax
  int v62; // r12d
  __int64 v63; // rdi
  __int64 v64; // rax
  int v65; // r10d
  __int64 v68; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v69; // [rsp+10h] [rbp-C8h]
  __int64 v70; // [rsp+10h] [rbp-C8h]
  _BYTE v71[64]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v72; // [rsp+60h] [rbp-78h] BYREF
  __int128 v73; // [rsp+68h] [rbp-70h]
  __int64 v74; // [rsp+78h] [rbp-60h]
  __int64 v75; // [rsp+80h] [rbp-58h]
  char v76; // [rsp+88h] [rbp-50h]
  int v77; // [rsp+90h] [rbp-48h]

  v5 = *(_QWORD **)(a4 + 40);
  if ( (*(_BYTE *)(a4 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v5 + 2) <= 0x40u )
      v5 = (_QWORD *)*v5;
    else
      v5 = *(_QWORD **)*v5;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    v35 = *(_DWORD *)(a3 + 48);
    if ( v35 == 1 )
    {
      v36 = *(_QWORD *)(a3 + 24);
    }
    else if ( v35 )
    {
      if ( (unsigned int)(v35 - 2) <= 1 )
        BUG();
      v36 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
    }
    else
    {
      v57 = *(_QWORD *)(a3 + 24);
      v58 = *(unsigned int *)(a3 + 32);
      v36 = *(_QWORD *)(v57 + 32);
      if ( (_DWORD)v58 != *(_DWORD *)(v36 + 16) && (_DWORD)v58 )
        v36 = *(_QWORD *)(v57 + v58 + 32);
    }
    v37 = *(_QWORD *)(v36 + 32);
    v70 = v37;
    if ( v37 )
      v70 = *(_QWORD *)(v37 + 24);
    if ( !v5 )
      return 1;
    v38 = 0;
    v8 = 1;
    if ( v35 == 1 )
      goto LABEL_67;
LABEL_49:
    if ( v35 == 2 )
    {
      v64 = *(_QWORD *)(a3 + 24);
      v72 = v38;
      v77 = 2;
      v74 = v64;
      v75 = 0;
      v76 = 1;
      v73 = 0;
      sub_A1BFE0(v71, &v72);
      goto LABEL_65;
    }
    v39 = *(_DWORD *)(a3 + 32);
    if ( v39 == -1 )
    {
      if ( v35 == 3 )
LABEL_170:
        BUG();
      sub_A1C030(
        &v72,
        *(_QWORD *)(a3 + 24),
        0xFFFFFFFFLL,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL) + 12LL));
    }
    else
    {
      if ( v35 )
      {
        if ( v35 == 3 )
LABEL_171:
          BUG();
        v40 = *(_QWORD *)(a3 + 24);
        v41 = v39;
        v42 = *(_QWORD *)(v40 + 32);
        v43 = v38 * *(unsigned int *)(v42 + 8);
      }
      else
      {
        v40 = *(_QWORD *)(a3 + 24);
        if ( !v40 )
LABEL_131:
          BUG();
        v42 = *(_QWORD *)(v40 + 32);
        v41 = v39;
        if ( *(_DWORD *)(v42 + 16) != v39 && v39 )
        {
          v42 = *(_QWORD *)(v40 + v39 + 32);
          v43 = v38 * *(unsigned int *)(v42 + 8);
        }
        else
        {
          v43 = v38 * *(unsigned int *)(v42 + 8);
        }
      }
      v44 = v43 + 32;
      if ( *(_QWORD *)(v42 + 32) )
        v44 = v43 + 16;
      sub_A1C030(&v72, v40, v39, v41 + v44);
    }
    if ( v77 || !v74 )
      goto LABEL_68;
    v45 = *(_QWORD *)(v74 + 32);
    if ( (_DWORD)v75 == 0 || *(_DWORD *)(v45 + 16) == (_DWORD)v75 )
    {
      if ( *(_DWORD *)(v45 + 12) == -1 )
      {
LABEL_68:
        while ( 1 )
        {
          sub_A1BFE0(v71, &v72);
LABEL_65:
          ++v38;
          sub_A1C0C0(&v72);
          v8 &= sub_99EDC0(a1, a2, v71, v70);
          sub_A1C0C0(v71);
          if ( (_QWORD *)v38 == v5 )
            return v8;
          v35 = *(_DWORD *)(a3 + 48);
          if ( v35 != 1 )
            goto LABEL_49;
LABEL_67:
          v47 = *(_QWORD *)(a3 + 24);
          v48 = *(_QWORD *)(a3 + 32);
          v72 = v38;
          v77 = 1;
          v75 = v48;
          v74 = v47;
          v73 = 0;
        }
      }
      v46 = v72;
      if ( (_DWORD)v75 != -1 )
      {
        if ( v72 == 0xFFFFFFFF || *(unsigned int *)(v45 + 20) < v72 )
        {
LABEL_64:
          sub_A1C030(v71, v74, (unsigned int)v75, 0xFFFFFFFFLL);
          goto LABEL_65;
        }
        v61 = (unsigned int)v75;
        v62 = *(_DWORD *)(v45 + 12);
        v63 = *(_QWORD *)(v74 + 32);
        if ( (unsigned int)v75 == v72 )
        {
LABEL_125:
          if ( *(_BYTE *)(v45 + 51) && !*(_QWORD *)(v45 + 32) )
          {
            if ( v46 == v61 )
            {
              sub_A1C030(v71, v74, (unsigned int)v75, v46 + 32);
              goto LABEL_65;
            }
          }
          else
          {
            if ( v46 != v61 )
            {
              sub_A1C030(v71, v74, (unsigned int)v46, v46);
              goto LABEL_65;
            }
            if ( *(_BYTE *)(v63 + 51) )
            {
              sub_A1C030(v71, v74, (unsigned int)(v75 + 16), (unsigned int)(v75 + 16));
              goto LABEL_65;
            }
          }
          goto LABEL_68;
        }
        v63 = *(_QWORD *)(v74 + 32);
        goto LABEL_159;
      }
    }
    else
    {
      v61 = (unsigned int)v75;
      v63 = *(_QWORD *)(v74 + (unsigned int)v75 + 32);
      if ( *(_DWORD *)(v63 + 12) == -1 )
        goto LABEL_68;
      v46 = v72;
      if ( (_DWORD)v75 != -1 )
      {
        if ( v72 == 0xFFFFFFFF || *(unsigned int *)(v45 + 20) < v72 )
          goto LABEL_64;
        v62 = *(_DWORD *)(v63 + 12);
        if ( v72 == (unsigned int)v75 )
        {
          if ( (_DWORD)v72 - (_DWORD)v75 == v62 && v62 )
            goto LABEL_64;
          goto LABEL_163;
        }
LABEL_159:
        v65 = 32;
        if ( *(_QWORD *)(v63 + 32) )
          v65 = 16;
        if ( (_DWORD)v46 - (_DWORD)v75 - v65 == v62 && v62 )
          goto LABEL_64;
        if ( (_DWORD)v75 == 0 || *(_DWORD *)(v45 + 16) == (_DWORD)v75 )
          goto LABEL_125;
LABEL_163:
        v45 = *(_QWORD *)(v74 + v61 + 32);
        goto LABEL_125;
      }
    }
    if ( v46 )
      v46 = 0xFFFFFFFFLL;
    sub_A1C030(v71, v74, 16, v46);
    goto LABEL_65;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 2 <= 1 )
  {
    if ( v5 )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v7 = 0;
      v8 = 1;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a3 + 48);
        if ( v9 == 1 )
        {
          v22 = *(_QWORD *)(a3 + 24);
          v23 = *(_QWORD *)(a3 + 32);
          v72 = v7;
          v77 = 1;
          v75 = v23;
          v74 = v22;
          v73 = 0;
          goto LABEL_23;
        }
        if ( v9 == 2 )
        {
          v33 = *(_QWORD *)(a3 + 24);
          v72 = v7;
          v77 = 2;
          v74 = v33;
          v75 = 0;
          v76 = 1;
          v73 = 0;
          goto LABEL_23;
        }
        v10 = *(unsigned int *)(a3 + 32);
        if ( (_DWORD)v10 == -1 )
        {
          if ( v9 == 3 )
            goto LABEL_170;
          sub_A1C030(
            &v72,
            *(_QWORD *)(a3 + 24),
            v10,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL) + 12LL));
        }
        else
        {
          if ( v9 )
          {
            if ( v9 == 3 )
              goto LABEL_171;
            v11 = *(_QWORD *)(a3 + 24);
            v12 = (unsigned int)v10;
            v13 = *(_QWORD *)(v11 + 32);
            v14 = v7 * *(unsigned int *)(v13 + 8);
          }
          else
          {
            v11 = *(_QWORD *)(a3 + 24);
            if ( !v11 )
              goto LABEL_131;
            v13 = *(_QWORD *)(v11 + 32);
            v12 = (unsigned int)v10;
            if ( *(_DWORD *)(v13 + 16) != (_DWORD)v10 && (_DWORD)v10 )
              v13 = *(_QWORD *)(v11 + (unsigned int)v10 + 32);
            v14 = v7 * *(unsigned int *)(v13 + 8);
          }
          v59 = v14 + 32;
          if ( *(_QWORD *)(v13 + 32) )
            v59 = v14 + 16;
          sub_A1C030(&v72, v11, v10, v59 + v12);
        }
        if ( v77 || !v74 )
          goto LABEL_23;
        v49 = *(_QWORD *)(v74 + 32);
        if ( (_DWORD)v75 == 0 || *(_DWORD *)(v49 + 16) == (_DWORD)v75 )
        {
          if ( *(_DWORD *)(v49 + 12) == -1 )
            goto LABEL_23;
          v50 = v72;
          if ( (_DWORD)v75 == -1 )
            goto LABEL_98;
          if ( v72 == 0xFFFFFFFF || *(unsigned int *)(v49 + 20) < v72 )
            goto LABEL_130;
          v51 = (unsigned int)v75;
          v52 = *(_DWORD *)(v49 + 12);
          v53 = *(_QWORD *)(v74 + 32);
          if ( (unsigned int)v75 == v72 )
            goto LABEL_92;
        }
        else
        {
          v51 = (unsigned int)v75;
          v53 = *(_QWORD *)(v74 + (unsigned int)v75 + 32);
          if ( *(_DWORD *)(v53 + 12) == -1 )
            goto LABEL_23;
          v50 = v72;
          if ( (_DWORD)v75 == -1 )
          {
LABEL_98:
            if ( v50 )
              v50 = 0xFFFFFFFFLL;
            sub_A1C030(v71, v74, 16, v50);
            goto LABEL_24;
          }
          if ( v72 == 0xFFFFFFFF || *(unsigned int *)(v49 + 20) < v72 )
          {
LABEL_130:
            sub_A1C030(v71, v74, (unsigned int)v75, 0xFFFFFFFFLL);
            goto LABEL_24;
          }
          v52 = *(_DWORD *)(v53 + 12);
          if ( v72 == (unsigned int)v75 )
          {
            if ( (_DWORD)v72 - (_DWORD)v75 == v52 && v52 )
              goto LABEL_130;
LABEL_91:
            v49 = *(_QWORD *)(v74 + v51 + 32);
            goto LABEL_92;
          }
        }
        v54 = 32;
        if ( *(_QWORD *)(v53 + 32) )
          v54 = 16;
        if ( (_DWORD)v50 - (_DWORD)v75 - v54 == v52 && v52 )
          goto LABEL_130;
        if ( (_DWORD)v75 != 0 && *(_DWORD *)(v49 + 16) != (_DWORD)v75 )
          goto LABEL_91;
LABEL_92:
        if ( *(_BYTE *)(v49 + 51) && !*(_QWORD *)(v49 + 32) )
        {
          if ( v51 == v50 )
          {
            sub_A1C030(v71, v74, (unsigned int)v75, v51 + 32);
            goto LABEL_24;
          }
        }
        else
        {
          if ( v51 != v50 )
          {
            sub_A1C030(v71, v74, (unsigned int)v50, v50);
            goto LABEL_24;
          }
          if ( *(_BYTE *)(v53 + 51) )
          {
            sub_A1C030(v71, v74, (unsigned int)(v75 + 16), (unsigned int)(v75 + 16));
            goto LABEL_24;
          }
        }
LABEL_23:
        sub_A1BFE0(v71, &v72);
LABEL_24:
        ++v7;
        sub_A1C0C0(&v72);
        v8 &= sub_99E300(a1, a2, v71, v68);
        sub_A1C0C0(v71);
        if ( (_QWORD *)v7 == v5 )
          return v8;
      }
    }
    return 1;
  }
  v15 = 0;
  v8 = 1;
  if ( v5 )
  {
    v69 = 1;
    do
    {
      v16 = *(_DWORD *)(a3 + 48);
      if ( v16 == 1 )
      {
        v25 = *(_QWORD *)(a3 + 24);
        v26 = *(_QWORD *)(a3 + 32);
        v72 = v15;
        v77 = 1;
        v75 = v26;
        v74 = v25;
        v73 = 0;
      }
      else if ( v16 == 2 )
      {
        v34 = *(_QWORD *)(a3 + 24);
        v72 = v15;
        v77 = 2;
        v74 = v34;
        v75 = 0;
        v76 = 1;
        v73 = 0;
      }
      else
      {
        v17 = *(unsigned int *)(a3 + 32);
        if ( (_DWORD)v17 == -1 )
        {
          if ( v16 == 3 )
            goto LABEL_170;
          sub_A1C030(
            &v72,
            *(_QWORD *)(a3 + 24),
            v17,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL) + 12LL));
        }
        else
        {
          if ( v16 )
          {
            if ( v16 == 3 )
              goto LABEL_171;
            v18 = *(_QWORD *)(a3 + 24);
            v19 = (unsigned int)v17;
            v20 = *(_QWORD *)(v18 + 32);
            v21 = v15 * *(unsigned int *)(v20 + 8);
          }
          else
          {
            v18 = *(_QWORD *)(a3 + 24);
            if ( !v18 )
              goto LABEL_131;
            v20 = *(_QWORD *)(v18 + 32);
            v19 = (unsigned int)v17;
            if ( *(_DWORD *)(v20 + 16) != (_DWORD)v17 && (_DWORD)v17 )
              v20 = *(_QWORD *)(v18 + (unsigned int)v17 + 32);
            v21 = v15 * *(unsigned int *)(v20 + 8);
          }
          v60 = v21 + 32;
          if ( *(_QWORD *)(v20 + 32) )
            v60 = v21 + 16;
          sub_A1C030(&v72, v18, v17, v60 + v19);
        }
      }
      v27 = sub_A1C2E0(&v72);
      sub_A1C0C0(&v72);
      if ( !v27 )
      {
        v28 = *(_DWORD *)(a3 + 48);
        if ( v28 == 1 )
        {
          v29 = *(__int64 **)(a3 + 24);
        }
        else if ( v28 )
        {
          if ( (unsigned int)(v28 - 2) <= 1 )
            BUG();
          v29 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 32LL);
        }
        else
        {
          v55 = *(_QWORD *)(a3 + 24);
          v56 = *(unsigned int *)(a3 + 32);
          v29 = *(__int64 **)(v55 + 32);
          if ( (_DWORD)v56 != *((_DWORD *)v29 + 4) && (_DWORD)v56 )
            v29 = *(__int64 **)(v55 + v56 + 32);
        }
        v30 = *v29;
        v31 = 0;
        if ( (v30 & 2) == 0 )
        {
          v32 = v30 & 0xFFFFFFFFFFFFFFFCLL;
          v31 = v32;
          if ( v32 )
          {
            if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 47 >= 3 )
              v31 = 0;
          }
        }
        sub_99DE30(a1, a2, v31);
        v69 = 0;
      }
      ++v15;
    }
    while ( (_QWORD *)v15 != v5 );
    return v69;
  }
  return v8;
}

