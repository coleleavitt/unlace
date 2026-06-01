/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470FA8
// Address: 0x0000000000470FA8

//----- (0000000000470FA8) ----------------------------------------------------
__int64 __fastcall sub_470FA8(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  size_t v5; // x24
  _BYTE *v6; // x0
  size_t v7; // x24
  _BYTE *v8; // x0
  size_t v9; // x24
  _BYTE *v10; // x0
  size_t v11; // x24
  _BYTE *v12; // x0
  size_t v13; // x24
  unsigned int v14; // w0
  bool v15; // cc
  unsigned __int64 v16; // x23
  unsigned __int64 v17; // x25
  unsigned __int64 v18; // x23
  unsigned __int64 v19; // x25
  unsigned __int64 v20; // x23
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x23
  unsigned __int64 v23; // x25
  unsigned __int64 v24; // x23
  unsigned __int64 v25; // x25
  _BYTE *v26; // x0
  size_t v27; // x24
  _BYTE *v28; // x0
  size_t v29; // x23
  unsigned __int64 v30; // x21
  unsigned __int64 v31; // x24
  const char *v36; // x19
  size_t v37; // x24
  unsigned __int64 v38; // x21
  unsigned __int64 v39; // x23
  __int64 v40; // x3
  char *v41; // x0
  __int64 v42; // x3
  char *v43; // x0
  __int64 v44; // x3
  char *v45; // x0
  __int64 v46; // x3
  char *v47; // x0
  __int64 v48; // x3
  char *v49; // x0
  _BYTE *v50; // x0
  __int64 v51; // x3
  char *v52; // x0
  __int64 v53; // x3
  char *v54; // x0
  unsigned __int64 v55; // x23
  unsigned __int64 v56; // x25
  __int64 v57; // x3
  char *v58; // x0
  _BYTE v59[5]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v60[5]; // [xsp+4Dh] [xbp-13h] BYREF
  _BYTE v61[14]; // [xsp+52h] [xbp-Eh] BYREF

  v4 = sub_48E2D8(v59, (unsigned __int64)v60, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  v5 = v4 - v59;
  if ( v4 != v59 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = v5 + v20;
    if ( v20 <= v5 + v20 )
    {
      if ( v20 >= v5 + v20 )
      {
LABEL_47:
        memcpy((void *)(*(_QWORD *)a1 + v20), v59, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v20 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v20 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_47;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = *(_QWORD *)(a1 + 8);
    v47 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v21 )
    {
      v47 = (char *)sub_491288(a1, *(void **)a1, v21, 1u);
      *(_QWORD *)a1 = v47;
      v46 = *(_QWORD *)(a1 + 8);
    }
    memset(&v47[v46], 0, v21 - v46);
    *(_QWORD *)(a1 + 8) = v21;
    goto LABEL_47;
  }
LABEL_2:
  v6 = sub_48E2D8(v59, (unsigned __int64)v60, *(_DWORD *)a2);
  v7 = v6 - v59;
  if ( v6 == v59 )
    goto LABEL_3;
  v24 = *(_QWORD *)(a1 + 8);
  v25 = v7 + v24;
  if ( v24 > v7 + v24 )
  {
    if ( v24 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v24 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v25 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_99:
    v48 = *(_QWORD *)(a1 + 8);
    v49 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v25 )
    {
      v49 = (char *)sub_491288(a1, *(void **)a1, v25, 1u);
      *(_QWORD *)a1 = v49;
      v48 = *(_QWORD *)(a1 + 8);
    }
    memset(&v49[v48], 0, v25 - v48);
    *(_QWORD *)(a1 + 8) = v25;
    goto LABEL_41;
  }
  if ( v24 < v7 + v24 )
    goto LABEL_99;
LABEL_41:
  memcpy((void *)(*(_QWORD *)a1 + v24), v59, v7);
LABEL_3:
  v8 = sub_48E2D8(v59, (unsigned __int64)v60, *(_DWORD *)(a2 + 4));
  v9 = v8 - v59;
  if ( v8 == v59 )
    goto LABEL_4;
  v22 = *(_QWORD *)(a1 + 8);
  v23 = v9 + v22;
  if ( v22 > v9 + v22 )
  {
    if ( v22 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v22 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_43;
    }
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_91:
    v44 = *(_QWORD *)(a1 + 8);
    v45 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v23 )
    {
      v45 = (char *)sub_491288(a1, *(void **)a1, v23, 1u);
      *(_QWORD *)a1 = v45;
      v44 = *(_QWORD *)(a1 + 8);
    }
    memset(&v45[v44], 0, v23 - v44);
    *(_QWORD *)(a1 + 8) = v23;
    goto LABEL_43;
  }
  if ( v22 < v9 + v22 )
    goto LABEL_91;
LABEL_43:
  memcpy((void *)(*(_QWORD *)a1 + v22), v59, v9);
LABEL_4:
  v10 = sub_48E4D8(v59, (unsigned __int64)v61, *(_QWORD *)(a2 + 8) + 1LL);
  v11 = v10 - v59;
  if ( v10 == v59 )
    goto LABEL_5;
  v18 = *(_QWORD *)(a1 + 8);
  v19 = v11 + v18;
  if ( v18 > v11 + v18 )
  {
    if ( v18 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v18 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_45;
    }
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_87:
    v42 = *(_QWORD *)(a1 + 8);
    v43 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v19 )
    {
      v43 = (char *)sub_491288(a1, *(void **)a1, v19, 1u);
      *(_QWORD *)a1 = v43;
      v42 = *(_QWORD *)(a1 + 8);
    }
    memset(&v43[v42], 0, v19 - v42);
    *(_QWORD *)(a1 + 8) = v19;
    goto LABEL_45;
  }
  if ( v18 < v11 + v18 )
    goto LABEL_87;
LABEL_45:
  memcpy((void *)(*(_QWORD *)a1 + v18), v59, v11);
LABEL_5:
  v12 = sub_48E2D8(v59, (unsigned __int64)v60, *(unsigned __int8 *)(a2 + 16));
  v13 = v12 - v59;
  if ( v12 != v59 )
    goto LABEL_20;
  v14 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  v15 = v14 > 5;
  if ( v14 == 5 )
  {
LABEL_50:
    v26 = sub_48E4D8(v59, (unsigned __int64)v61, *(_QWORD *)(a2 + 24) + 1LL);
    v27 = v26 - v59;
    if ( v26 == v59 )
      goto LABEL_51;
    v55 = *(_QWORD *)(a1 + 8);
    v56 = v27 + v55;
    if ( v55 <= v27 + v55 )
    {
      if ( v55 >= v27 + v55 )
      {
LABEL_128:
        memcpy((void *)(*(_QWORD *)a1 + v55), v59, v27);
LABEL_51:
        v28 = sub_48E4D8(v59, (unsigned __int64)v61, *(_QWORD *)(a2 + 32) + 1LL);
        v29 = v28 - v59;
        if ( v28 != v59 )
          goto LABEL_52;
        return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
      }
    }
    else
    {
      if ( v55 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v55 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_128;
      }
      v56 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v57 = *(_QWORD *)(a1 + 8);
    v58 = *(char **)a1;
    if ( v56 > *(_QWORD *)(a1 + 16) )
    {
      v58 = (char *)sub_491288(a1, *(void **)a1, v56, 1u);
      *(_QWORD *)a1 = v58;
      v57 = *(_QWORD *)(a1 + 8);
    }
    memset(&v58[v57], 0, v56 - v57);
    *(_QWORD *)(a1 + 8) = v56;
    goto LABEL_128;
  }
  while ( v15 )
  {
    if ( v14 > 0xA )
    {
      if ( v14 != 11 )
        return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
      goto LABEL_58;
    }
    if ( v14 < 9 )
    {
      if ( v14 == 7 )
      {
        sub_4708B0(a1, a2 + 24);
        return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
      }
      if ( v14 != 8 )
        return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
      goto LABEL_58;
    }
LABEL_68:
    if ( v14 - 9 <= 1 || v14 == 3 )
    {
      if ( *(_QWORD *)(a2 + 32) )
        v36 = *(const char **)(a2 + 24);
      else
        v36 = (const char *)&qword_4B2D48;
      if ( v36 )
      {
        v37 = strlen(v36) + 1;
      }
      else
      {
        v37 = 1;
        v36 = &byte_4B31F0;
      }
      v38 = *(_QWORD *)(a1 + 8);
      v39 = v38 + v37;
      if ( v38 <= v38 + v37 )
      {
        if ( v38 >= v38 + v37 )
        {
LABEL_81:
          memcpy((void *)(*(_QWORD *)a1 + v38), v36, v37);
          return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
        }
      }
      else
      {
        if ( v38 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v38 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_81;
        }
        v39 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v51 = *(_QWORD *)(a1 + 8);
      v52 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v39 )
      {
        v52 = (char *)sub_491288(a1, *(void **)a1, v39, 1u);
        *(_QWORD *)a1 = v52;
        v51 = *(_QWORD *)(a1 + 8);
      }
      memset(&v52[v51], 0, v39 - v51);
      *(_QWORD *)(a1 + 8) = v39;
      goto LABEL_81;
    }
    if ( !under_debugger )
      sub_492270(3297);
LABEL_19:
    __break(0x3E8u);
LABEL_20:
    v16 = *(_QWORD *)(a1 + 8);
    v17 = v13 + v16;
    if ( v16 <= v13 + v16 )
    {
      if ( v16 < v13 + v16 )
        goto LABEL_83;
    }
    else
    {
      if ( v16 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_83:
        v40 = *(_QWORD *)(a1 + 8);
        v41 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v17 )
        {
          v41 = (char *)sub_491288(a1, *(void **)a1, v17, 1u);
          *(_QWORD *)a1 = v41;
          v40 = *(_QWORD *)(a1 + 8);
        }
        memset(&v41[v40], 0, v17 - v40);
        *(_QWORD *)(a1 + 8) = v17;
        goto LABEL_49;
      }
      if ( (v16 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_49:
    memcpy((void *)(*(_QWORD *)a1 + v16), v59, v13);
    v14 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    v15 = v14 > 5;
    if ( v14 == 5 )
      goto LABEL_50;
  }
  if ( v14 == 2 )
    goto LABEL_17;
  if ( v14 <= 2 )
  {
    if ( v14 != 1 )
      return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
LABEL_58:
    if ( v14 == 11 || v14 == 1 || v14 == 8 )
    {
      sub_470470(a1, a2 + 24);
      return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
    }
    if ( !under_debugger )
      sub_492270(3295);
    goto LABEL_19;
  }
  if ( v14 == 3 )
    goto LABEL_68;
  if ( v14 != 4 )
    return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
LABEL_17:
  if ( ((v14 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( !under_debugger )
      sub_492270(3296);
    goto LABEL_19;
  }
  v50 = sub_48E2D8(v59, (unsigned __int64)v60, *(_DWORD *)(a2 + 24));
  v29 = v50 - v59;
  if ( v50 != v59 )
  {
LABEL_52:
    v30 = *(_QWORD *)(a1 + 8);
    v31 = v29 + v30;
    if ( v30 <= v29 + v30 )
    {
      if ( v30 >= v29 + v30 )
        goto LABEL_56;
    }
    else
    {
      if ( v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v30 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_56;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v53 = *(_QWORD *)(a1 + 8);
    v54 = *(char **)a1;
    if ( v31 > *(_QWORD *)(a1 + 16) )
    {
      v54 = (char *)sub_491288(a1, *(void **)a1, v31, 1u);
      *(_QWORD *)a1 = v54;
      v53 = *(_QWORD *)(a1 + 8);
    }
    memset(&v54[v53], 0, v31 - v53);
    *(_QWORD *)(a1 + 8) = v31;
LABEL_56:
    memcpy((void *)(*(_QWORD *)a1 + v30), v59, v29);
  }
  return *(_QWORD *)&v61[6] ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 52451C: using guessed type char under_debugger;
