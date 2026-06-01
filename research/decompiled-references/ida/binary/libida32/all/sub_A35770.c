__int64 __fastcall sub_A35770(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  __int64 **v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  unsigned int v12; // ebx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rcx
  char v18; // si
  bool v19; // zf
  __int64 *v20; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 *v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 *v41; // rax
  char v42; // bl
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 *v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 *v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rax
  char v60; // al
  unsigned int v61; // eax
  __int64 *v63; // [rsp+28h] [rbp-160h]
  void *v64; // [rsp+30h] [rbp-158h] BYREF
  __int64 v65; // [rsp+38h] [rbp-150h]
  _BYTE v66[128]; // [rsp+40h] [rbp-148h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-C0h]
  _BYTE v69[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v64 = v66;
  v65 = 0x2000000000LL;
  ptr = v69;
  v68 = 0x2000000000LL;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v3 = sub_B68690(a1);
    v4 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v5 = *(__int64 **)sub_B68690(a1);
    else
      v5 = nullptr;
  }
  else
  {
    v4 = 0;
    v5 = nullptr;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v63 = v5;
    v6 = sub_B68690(a2);
    v5 = v63;
    v7 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v8 = (__int64 **)sub_B68690(a2);
      v5 = v63;
      v9 = *v8;
    }
    else
    {
      v9 = nullptr;
    }
  }
  else
  {
    v7 = 0;
    v9 = nullptr;
  }
  while ( (unsigned __int64)v5 < v4 )
  {
    v10 = v5;
    while ( *(_WORD *)(*v10 + 36) != 206 )
    {
      if ( (__int64 *)v4 == ++v10 )
        goto LABEL_11;
    }
    if ( (__int64 *)v4 == v10 )
      goto LABEL_11;
LABEL_26:
    if ( (unsigned __int64)v9 < v7 )
      goto LABEL_71;
    if ( v9 == (__int64 *)v7 )
      goto LABEL_33;
    v15 = *(_QWORD *)v7;
LABEL_29:
    if ( *(_WORD *)(v15 + 36) == 206 )
      goto LABEL_44;
    v16 = (__int64 *)(v7 + 8);
    while ( v9 != v16 )
    {
      v17 = *v16++;
      if ( *(_WORD *)(v17 + 36) == 206 )
        goto LABEL_44;
    }
LABEL_33:
    v18 = 0;
    v19 = v5 == (__int64 *)v4;
    if ( (unsigned __int64)v5 >= v4 )
      goto LABEL_48;
LABEL_34:
    v20 = v5;
    while ( *(_WORD *)(*v20 + 36) != 206 )
    {
      if ( (__int64 *)v4 == ++v20 )
        goto LABEL_37;
    }
    if ( (__int64 *)v4 == v20 )
      goto LABEL_37;
LABEL_55:
    v25 = *v5;
    if ( *(_WORD *)(*v5 + 36) == 206 )
    {
      v27 = v5;
    }
    else
    {
      v26 = v5 + 1;
      do
      {
        v25 = *v26;
        v27 = v26++;
      }
      while ( *(_WORD *)(v25 + 36) != 206 );
    }
    if ( !v18 )
      goto LABEL_37;
    LODWORD(v65) = 0;
    LODWORD(v68) = 0;
    v28 = sub_B685F0(a1);
    sub_EF6750(*(_QWORD *)(v25 + 40), &v64, v28, 1, 0);
    v29 = sub_B685F0(a2);
    sub_EF6750(*(_QWORD *)(v2 + 40), &ptr, v29, 1, 0);
    if ( !(unsigned __int8)sub_21FF190(&v64, &ptr) )
      goto LABEL_37;
    if ( (unsigned __int64)v9 >= v7 )
    {
      if ( v9 == (__int64 *)v7 )
        goto LABEL_65;
      if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 206 )
        goto LABEL_90;
      v34 = (__int64 *)(v7 + 8);
      while ( v34 != v9 )
      {
        v35 = *v34++;
        if ( *(_WORD *)(v35 + 36) == 206 )
          goto LABEL_90;
      }
    }
    else
    {
      v30 = v9;
      while ( *(_WORD *)(*v30 + 36) != 206 )
      {
        if ( (__int64 *)v7 == ++v30 )
          goto LABEL_64;
      }
      if ( (__int64 *)v7 != v30 )
      {
LABEL_90:
        ++v9;
        goto LABEL_65;
      }
    }
LABEL_64:
    v9 = (__int64 *)v7;
LABEL_65:
    if ( (unsigned __int64)v27 >= v4 )
    {
      if ( v27 != (__int64 *)v4 )
      {
        if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 206 )
          goto LABEL_82;
        v32 = (__int64 *)(v4 + 8);
        while ( v32 != v27 )
        {
          v33 = *v32++;
          if ( *(_WORD *)(v33 + 36) == 206 )
            goto LABEL_82;
        }
      }
LABEL_69:
      v5 = (__int64 *)v4;
    }
    else
    {
      v5 = v27;
      while ( *(_WORD *)(*v5 + 36) != 206 )
      {
        if ( (__int64 *)v4 == ++v5 )
          goto LABEL_69;
      }
      if ( (__int64 *)v4 != v5 )
LABEL_82:
        v5 = v27 + 1;
    }
  }
  if ( v5 == (__int64 *)v4 )
    goto LABEL_11;
  if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 206 )
    goto LABEL_26;
  v13 = (__int64 *)(v4 + 8);
  while ( v5 != v13 )
  {
    v14 = *v13++;
    if ( *(_WORD *)(v14 + 36) == 206 )
      goto LABEL_26;
  }
LABEL_11:
  if ( (unsigned __int64)v9 < v7 )
  {
    v11 = v9;
    while ( *(_WORD *)(*v11 + 36) != 206 )
    {
      if ( (__int64 *)v7 == ++v11 )
        goto LABEL_15;
    }
    if ( (__int64 *)v7 == v11 )
      goto LABEL_15;
LABEL_71:
    v31 = v9;
    while ( *(_WORD *)(*v31 + 36) != 206 )
    {
      if ( (__int64 *)v7 == ++v31 )
        goto LABEL_33;
    }
    if ( (__int64 *)v7 == v31 )
      goto LABEL_33;
LABEL_44:
    v2 = *v9;
    if ( *(_WORD *)(*v9 + 36) != 206 )
    {
      v22 = v9 + 1;
      do
      {
        v2 = *v22;
        v9 = v22++;
      }
      while ( *(_WORD *)(v2 + 36) != 206 );
    }
    v18 = 1;
    v19 = v5 == (__int64 *)v4;
    if ( (unsigned __int64)v5 < v4 )
      goto LABEL_34;
LABEL_48:
    if ( v19 )
      goto LABEL_37;
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 206 )
      goto LABEL_55;
    v23 = (__int64 *)(v4 + 8);
    while ( v5 != v23 )
    {
      v24 = *v23++;
      if ( *(_WORD *)(v24 + 36) == 206 )
        goto LABEL_55;
    }
LABEL_37:
    v12 = 0;
    goto LABEL_38;
  }
  if ( v9 == (__int64 *)v7 )
    goto LABEL_15;
  v15 = *(_QWORD *)v7;
  if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 206 )
    goto LABEL_29;
  v36 = (__int64 *)(v7 + 8);
  while ( v9 != v36 )
  {
    v37 = *v36++;
    if ( *(_WORD *)(v37 + 36) == 206 )
      goto LABEL_29;
  }
LABEL_15:
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 60LL) & 0x10) == 0 )
  {
LABEL_18:
    v12 = 1;
    goto LABEL_38;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v38 = sub_B68690(a1);
    v39 = *(__int64 **)v38;
    v40 = *(_QWORD *)v38 + 8LL * *(unsigned int *)(v38 + 8);
    if ( *(_QWORD *)v38 >= v40 )
    {
      if ( v39 != (__int64 *)v40 )
      {
        if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) == 160 )
          goto LABEL_130;
        v52 = (__int64 *)(v40 + 8);
        while ( v52 != v39 )
        {
          v53 = *v52++;
          if ( *(_WORD *)(v53 + 36) == 160 )
            goto LABEL_130;
        }
      }
    }
    else
    {
      v41 = *(__int64 **)v38;
      while ( *(_WORD *)(*v41 + 36) != 160 )
      {
        if ( (__int64 *)v40 == ++v41 )
          goto LABEL_104;
      }
      if ( (__int64 *)v40 != v41 )
      {
LABEL_130:
        if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        {
          v42 = 1;
          goto LABEL_106;
        }
        goto LABEL_37;
      }
    }
LABEL_104:
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      goto LABEL_105;
    goto LABEL_112;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_18;
LABEL_105:
  v42 = 0;
LABEL_106:
  v43 = sub_B68690(a2);
  v44 = *(_QWORD *)v43;
  v45 = *(_QWORD *)v43 + 8LL * *(unsigned int *)(v43 + 8);
  if ( v44 < v45 )
  {
    v46 = v44;
    while ( 1 )
    {
      v44 = v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 160 )
        goto LABEL_128;
      v46 += 8LL;
      if ( v45 == v46 )
        goto LABEL_110;
    }
  }
  if ( v44 == v45 )
  {
LABEL_110:
    v47 = 0;
  }
  else
  {
    while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 160 )
    {
      v45 += 8LL;
      if ( v44 == v45 )
        goto LABEL_110;
    }
LABEL_128:
    v47 = v44 != v45;
  }
  if ( v47 != v42 )
    goto LABEL_37;
LABEL_112:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_18;
  v48 = sub_B68690(a1);
  v49 = *(_QWORD *)v48;
  v50 = *(_QWORD *)v48 + 8LL * *(unsigned int *)(v48 + 8);
  if ( *(_QWORD *)v48 >= v50 )
  {
    if ( v49 == v50 )
      goto LABEL_18;
    while ( *(_WORD *)(*(_QWORD *)v50 + 36LL) != 160 )
    {
      v50 += 8LL;
      if ( v49 == v50 )
        goto LABEL_18;
    }
  }
  else
  {
    v51 = *(_QWORD *)v48;
    while ( *(_WORD *)(*(_QWORD *)v51 + 36LL) != 160 )
    {
      v51 += 8;
      if ( v50 == v51 )
        goto LABEL_18;
    }
    if ( v50 == v51 )
      goto LABEL_18;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_18;
  v54 = sub_B68690(a2);
  v55 = *(__int64 **)v54;
  v56 = *(_QWORD *)v54 + 8LL * *(unsigned int *)(v54 + 8);
  if ( *(_QWORD *)v54 >= v56 )
  {
    if ( v55 == (__int64 *)v56 )
      goto LABEL_18;
    if ( *(_WORD *)(*(_QWORD *)v56 + 36LL) != 160 )
    {
      v58 = (__int64 *)(v56 + 8);
      while ( v55 != v58 )
      {
        v59 = *v58++;
        if ( *(_WORD *)(v59 + 36) == 160 )
          goto LABEL_151;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v57 = *(__int64 **)v54;
    while ( *(_WORD *)(*v57 + 36) != 160 )
    {
      if ( (__int64 *)v56 == ++v57 )
        goto LABEL_18;
    }
    if ( (__int64 *)v56 == v57 )
      goto LABEL_18;
  }
LABEL_151:
  v12 = 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    LOBYTE(v61) = sub_A32F70(a1);
    v12 = v61;
  }
  v60 = 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v60 = sub_A32F70(a2);
  LOBYTE(v12) = v60 == (char)v12;
LABEL_38:
  if ( ptr != v69 )
    free(ptr);
  if ( v64 != v66 )
    free(v64);
  return v12;
}

