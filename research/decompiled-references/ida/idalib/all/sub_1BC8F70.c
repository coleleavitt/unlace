__int64 __fastcall sub_1BC8F70(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 *v16; // rax
  unsigned int v17; // ebx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // r12
  __int64 *v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r13
  __int64 *v32; // rbp
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdx
  bool v40; // dl
  bool v41; // zf
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rdx
  bool v55; // [rsp+1Fh] [rbp-159h]
  void *v56; // [rsp+20h] [rbp-158h] BYREF
  __int64 v57; // [rsp+28h] [rbp-150h]
  _BYTE v58[128]; // [rsp+30h] [rbp-148h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-C0h]
  _BYTE v61[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v8 = a3;
  v9 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_2:
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      return 0;
    v55 = 0;
    goto LABEL_4;
  }
  v18 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  a4 = *v18;
  a3 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 >= a3 )
  {
    if ( a4 != a3 )
    {
      if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) == 206 )
      {
LABEL_18:
        v55 = a4 != a3;
        if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
          return 1;
        goto LABEL_4;
      }
      v19 = (__int64 *)(a3 + 8);
      while ( 1 )
      {
        a3 = (unsigned __int64)v19;
        if ( (__int64 *)a4 == v19 )
          break;
        a2 = *v19++;
        if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) == 206 )
          goto LABEL_18;
      }
    }
    goto LABEL_2;
  }
  v21 = (__int64 *)*v18;
  while ( 1 )
  {
    a4 = *v21;
    if ( *(_WORD *)(*v21 + 36) == 206 )
      break;
    if ( (__int64 *)a3 == ++v21 )
      goto LABEL_2;
  }
  v55 = a3 != (_QWORD)v21;
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
    return v55;
LABEL_4:
  v10 = sub_B8C3D0(v8, a2, a3, a4, a5, a6);
  v14 = *v10;
  v15 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( *v10 >= v15 )
  {
    if ( v14 == v15 )
      return v55;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 206 )
    {
      v16 = (__int64 *)(v15 + 8);
      while ( (__int64 *)v14 != v16 )
      {
        v11 = *v16++;
        if ( *(_WORD *)(v11 + 36) == 206 )
          goto LABEL_32;
      }
      return v55;
    }
    goto LABEL_32;
  }
  v22 = (__int64 *)*v10;
  while ( 1 )
  {
    v11 = *v22;
    if ( *(_WORD *)(*v22 + 36) == 206 )
      break;
    if ( (__int64 *)v15 == ++v22 )
      return v55;
  }
  if ( (__int64 *)v15 == v22 )
    return v55;
LABEL_32:
  if ( !v55 )
    return 2;
  if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
  {
    v23 = sub_B8C3D0(v9, a2, v11, v14, v12, v13);
    v11 = *((unsigned int *)v23 + 2);
    v24 = *v23 + 8 * v11;
    if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
      v25 = (__int64 *)*sub_B8C3D0(v9, a2, v11, v14, v12, v13);
    else
      v25 = nullptr;
  }
  else
  {
    v24 = 0;
    v25 = nullptr;
  }
  if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v26 = sub_B8C3D0(v8, a2, v11, v14, v12, v13);
    v30 = *((unsigned int *)v26 + 2);
    v31 = *v26 + 8 * v30;
    if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      v32 = (__int64 *)*sub_B8C3D0(v8, a2, v30, v27, v28, v29);
    else
      v32 = nullptr;
  }
  else
  {
    v31 = 0;
    v32 = nullptr;
  }
  v56 = v58;
  v57 = 0x2000000000LL;
  ptr = v61;
  v60 = 0x2000000000LL;
  while ( (unsigned __int64)v25 < v24 )
  {
    v33 = v25;
    while ( *(_WORD *)(*v33 + 36) != 206 )
    {
      if ( (__int64 *)v24 == ++v33 )
        goto LABEL_44;
    }
    if ( (__int64 *)v24 == v33 )
      goto LABEL_44;
LABEL_60:
    if ( (unsigned __int64)v32 < v31 )
      goto LABEL_84;
    if ( v32 == (__int64 *)v31 )
      goto LABEL_67;
    v37 = *(_QWORD *)v31;
LABEL_63:
    if ( *(_WORD *)(v37 + 36) == 206 )
      goto LABEL_73;
    v38 = (__int64 *)(v31 + 8);
    while ( v38 != v32 )
    {
      v39 = *v38++;
      if ( *(_WORD *)(v39 + 36) == 206 )
        goto LABEL_73;
    }
LABEL_67:
    v40 = 0;
    v41 = v25 == (__int64 *)v24;
    if ( (unsigned __int64)v25 >= v24 )
      goto LABEL_77;
LABEL_68:
    v42 = v25;
    while ( *(_WORD *)(*v42 + 36) != 206 )
    {
      if ( (__int64 *)v24 == ++v42 )
        goto LABEL_71;
    }
    if ( (__int64 *)v24 == v42 )
    {
LABEL_71:
      v17 = 2;
      goto LABEL_49;
    }
LABEL_89:
    while ( *(_WORD *)(*v25 + 36) != 206 )
      ++v25;
    if ( !v40 )
    {
      v17 = 1;
      goto LABEL_49;
    }
    v47 = *(_QWORD *)(*v25 + 40);
    v48 = *(_QWORD *)(a1 + 248);
    LODWORD(v57) = 0;
    LODWORD(v60) = 0;
    sub_F1A490(v47, (__int64)&v56, v48, 1, 0);
    sub_F1A490(*(_QWORD *)(v6 + 40), (__int64)&ptr, *(_QWORD *)(a1 + 248), 1, 0);
    if ( !(unsigned __int8)sub_2222ED0(&v56, &ptr) )
      goto LABEL_71;
    if ( (unsigned __int64)v32 >= v31 )
    {
      if ( v32 == (__int64 *)v31 )
        goto LABEL_97;
      v52 = v31;
      if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 206 )
        goto LABEL_117;
      while ( 1 )
      {
        v52 += 8LL;
        if ( (__int64 *)v52 == v32 )
          break;
        if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) == 206 )
          goto LABEL_117;
      }
    }
    else
    {
      v49 = v32;
      while ( *(_WORD *)(*v49 + 36) != 206 )
      {
        if ( (__int64 *)v31 == ++v49 )
          goto LABEL_96;
      }
      if ( (__int64 *)v31 != v49 )
      {
LABEL_117:
        ++v32;
        goto LABEL_97;
      }
    }
LABEL_96:
    v32 = (__int64 *)v31;
LABEL_97:
    if ( (unsigned __int64)v25 >= v24 )
    {
      if ( v25 != (__int64 *)v24 )
      {
        v51 = v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 206 )
          goto LABEL_109;
        while ( 1 )
        {
          v51 += 8LL;
          if ( (__int64 *)v51 == v25 )
            break;
          if ( *(_WORD *)(*(_QWORD *)v51 + 36LL) == 206 )
            goto LABEL_109;
        }
LABEL_101:
        v25 = (__int64 *)v24;
      }
    }
    else
    {
      v50 = v25;
      while ( *(_WORD *)(*v50 + 36) != 206 )
      {
        if ( (__int64 *)v24 == ++v50 )
          goto LABEL_101;
      }
      if ( (__int64 *)v24 == v50 )
        goto LABEL_101;
LABEL_109:
      ++v25;
    }
  }
  if ( v25 == (__int64 *)v24 )
    goto LABEL_44;
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 206 )
    goto LABEL_60;
  v35 = (__int64 *)(v24 + 8);
  while ( v25 != v35 )
  {
    v36 = *v35++;
    if ( *(_WORD *)(v36 + 36) == 206 )
      goto LABEL_60;
  }
LABEL_44:
  if ( (unsigned __int64)v32 >= v31 )
  {
    if ( v32 == (__int64 *)v31 )
      goto LABEL_48;
    v37 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 206 )
    {
      v53 = (__int64 *)(v31 + 8);
      while ( v32 != v53 )
      {
        v54 = *v53++;
        if ( *(_WORD *)(v54 + 36) == 206 )
          goto LABEL_63;
      }
LABEL_48:
      v17 = 0;
      goto LABEL_49;
    }
    goto LABEL_63;
  }
  v34 = v32;
  while ( *(_WORD *)(*v34 + 36) != 206 )
  {
    if ( (__int64 *)v31 == ++v34 )
      goto LABEL_48;
  }
  if ( (__int64 *)v31 == v34 )
    goto LABEL_48;
LABEL_84:
  v46 = v32;
  while ( *(_WORD *)(*v46 + 36) != 206 )
  {
    if ( (__int64 *)v31 == ++v46 )
      goto LABEL_67;
  }
  if ( (__int64 *)v31 == v46 )
    goto LABEL_67;
LABEL_73:
  v6 = *v32;
  if ( *(_WORD *)(*v32 + 36) != 206 )
  {
    v43 = v32 + 1;
    do
    {
      v6 = *v43;
      v32 = v43++;
    }
    while ( *(_WORD *)(v6 + 36) != 206 );
  }
  v40 = v55;
  v41 = v25 == (__int64 *)v24;
  if ( (unsigned __int64)v25 < v24 )
    goto LABEL_68;
LABEL_77:
  if ( v41 )
    goto LABEL_71;
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 206 )
    goto LABEL_89;
  v44 = (__int64 *)(v24 + 8);
  while ( v25 != v44 )
  {
    v45 = *v44++;
    if ( *(_WORD *)(v45 + 36) == 206 )
      goto LABEL_89;
  }
  v17 = 2;
LABEL_49:
  if ( ptr != v61 )
    free(ptr);
  if ( v56 != v58 )
    free(v56);
  return v17;
}
