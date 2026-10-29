/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F568
// Address: 0x000000000046F568

//----- (000000000046F568) ----------------------------------------------------
__int64 __fastcall sub_46F568(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  size_t v5; // x24
  _BYTE *v6; // x0
  size_t v7; // x24
  _BYTE *v8; // x0
  size_t v9; // x24
  _BYTE *v10; // x0
  size_t v11; // x24
  const char *v12; // x19
  size_t v13; // x0
  unsigned __int64 v14; // x23
  size_t v15; // x25
  unsigned __int64 v16; // x24
  bool v17; // cf
  const char *v18; // x19
  size_t v19; // x0
  unsigned __int64 v20; // x21
  size_t v21; // x24
  unsigned __int64 v22; // x23
  bool v23; // cf
  unsigned __int64 v25; // x3
  char *v26; // x0
  char *v27; // x0
  unsigned __int64 v28; // x3
  char *v29; // x0
  unsigned __int64 v30; // x23
  unsigned __int64 v31; // x25
  unsigned __int64 v32; // x23
  unsigned __int64 v33; // x25
  unsigned __int64 v34; // x23
  unsigned __int64 v35; // x25
  unsigned __int64 v36; // x23
  unsigned __int64 v37; // x25
  __int64 v38; // x3
  char *v39; // x0
  __int64 v40; // x3
  char *v41; // x0
  __int64 v42; // x3
  char *v43; // x0
  __int64 v44; // x3
  char *v45; // x0
  _BYTE v46[5]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v47[3]; // [xsp+4Dh] [xbp-13h] BYREF
  _BYTE v48[14]; // [xsp+52h] [xbp-Eh] BYREF

  v4 = sub_48E4D8(v46, (unsigned __int64)v48, *(_QWORD *)(a2 + 64) + 1LL);
  v5 = v4 - v46;
  if ( v4 != v46 )
  {
    v36 = *(_QWORD *)(a1 + 8);
    v37 = v5 + v36;
    if ( v36 <= v5 + v36 )
    {
      if ( v36 >= v5 + v36 )
      {
LABEL_49:
        memcpy((void *)(*(_QWORD *)a1 + v36), v46, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v36 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_49;
      }
      v37 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v44 = *(_QWORD *)(a1 + 8);
    v45 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v37 )
    {
      v45 = (char *)sub_491288(a1, *(void **)a1, v37, 1u);
      *(_QWORD *)a1 = v45;
      v44 = *(_QWORD *)(a1 + 8);
    }
    memset(&v45[v44], 0, v37 - v44);
    *(_QWORD *)(a1 + 8) = v37;
    goto LABEL_49;
  }
LABEL_2:
  v6 = sub_48E4D8(v46, (unsigned __int64)v48, *(_QWORD *)a2 + 1LL - 16LL * *(_QWORD *)(a2 + 64));
  v7 = v6 - v46;
  if ( v6 == v46 )
    goto LABEL_3;
  v34 = *(_QWORD *)(a1 + 8);
  v35 = v7 + v34;
  if ( v34 > v7 + v34 )
  {
    if ( v34 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v34 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_51;
    }
    v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
    v42 = *(_QWORD *)(a1 + 8);
    v43 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v35 )
    {
      v43 = (char *)sub_491288(a1, *(void **)a1, v35, 1u);
      *(_QWORD *)a1 = v43;
      v42 = *(_QWORD *)(a1 + 8);
    }
    memset(&v43[v42], 0, v35 - v42);
    *(_QWORD *)(a1 + 8) = v35;
    goto LABEL_51;
  }
  if ( v34 < v7 + v34 )
    goto LABEL_63;
LABEL_51:
  memcpy((void *)(*(_QWORD *)a1 + v34), v46, v7);
LABEL_3:
  v8 = sub_48E4D8(v46, (unsigned __int64)v48, *(_QWORD *)(a2 + 8) + 1LL - *(_QWORD *)a2);
  v9 = v8 - v46;
  if ( v8 == v46 )
    goto LABEL_4;
  v32 = *(_QWORD *)(a1 + 8);
  v33 = v9 + v32;
  if ( v32 > v9 + v32 )
  {
    if ( v32 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v32 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_39;
    }
    v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v33 )
    {
      v41 = (char *)sub_491288(a1, *(void **)a1, v33, 1u);
      *(_QWORD *)a1 = v41;
      v40 = *(_QWORD *)(a1 + 8);
    }
    memset(&v41[v40], 0, v33 - v40);
    *(_QWORD *)(a1 + 8) = v33;
    goto LABEL_39;
  }
  if ( v32 < v9 + v32 )
    goto LABEL_57;
LABEL_39:
  memcpy((void *)(*(_QWORD *)a1 + v32), v46, v9);
LABEL_4:
  v10 = sub_48E2D8(
          v46,
          (unsigned __int64)v47,
          *(unsigned __int8 *)(a2 + 73) | (16 * (unsigned int)*(unsigned __int8 *)(a2 + 72)));
  v11 = v10 - v46;
  if ( v10 == v46 )
    goto LABEL_5;
  v30 = *(_QWORD *)(a1 + 8);
  v31 = v11 + v30;
  if ( v30 > v11 + v30 )
  {
    if ( v30 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v30 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_34;
    }
    v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_53:
    v38 = *(_QWORD *)(a1 + 8);
    v39 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v31 )
    {
      v39 = (char *)sub_491288(a1, *(void **)a1, v31, 1u);
      *(_QWORD *)a1 = v39;
      v38 = *(_QWORD *)(a1 + 8);
    }
    memset(&v39[v38], 0, v31 - v38);
    *(_QWORD *)(a1 + 8) = v31;
    goto LABEL_34;
  }
  if ( v30 < v11 + v30 )
    goto LABEL_53;
LABEL_34:
  memcpy((void *)(*(_QWORD *)a1 + v30), v46, v11);
LABEL_5:
  if ( *(_QWORD *)(a2 + 24) )
  {
    v12 = *(const char **)(a2 + 16);
    if ( v12 )
      goto LABEL_7;
LABEL_19:
    v14 = *(_QWORD *)(a1 + 8);
    v15 = 1;
    v12 = &byte_4B31F0;
    v16 = v14 + 1;
    v17 = v14 >= v14 + 1;
    if ( v14 >= v14 + 1 )
      goto LABEL_8;
LABEL_20:
    if ( v17 )
      goto LABEL_11;
    goto LABEL_21;
  }
  v12 = (const char *)&qword_4B2D48;
  if ( !&qword_4B2D48 )
    goto LABEL_19;
LABEL_7:
  v13 = strlen(v12);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v13 + 1;
  v16 = v14 + v13 + 1;
  v17 = v14 >= v16;
  if ( v14 <= v16 )
    goto LABEL_20;
LABEL_8:
  if ( v14 > 0x7FFFFFFFFFFFFFFELL )
  {
    if ( (v14 & 0x8000000000000000LL) != 0 )
      *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
    memcpy((void *)(*(_QWORD *)a1 + v14), v12, v15);
    if ( *(_QWORD *)(a2 + 48) )
      goto LABEL_12;
    goto LABEL_24;
  }
  v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
  v25 = v14;
  v26 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v16 )
  {
    v26 = (char *)sub_491288(a1, *(void **)a1, v16, 1u);
    *(_QWORD *)a1 = v26;
    v25 = *(_QWORD *)(a1 + 8);
  }
  memset(&v26[v25], 0, v16 - v25);
  v27 = *(char **)a1;
  *(_QWORD *)(a1 + 8) = v16;
  memcpy(&v27[v14], v12, v15);
  if ( *(_QWORD *)(a2 + 48) )
  {
LABEL_12:
    v18 = *(const char **)(a2 + 40);
    if ( v18 )
      goto LABEL_13;
LABEL_25:
    v20 = *(_QWORD *)(a1 + 8);
    v21 = 1;
    v18 = &byte_4B31F0;
    v22 = v20 + 1;
    v23 = v20 >= v20 + 1;
    if ( v20 >= v20 + 1 )
      goto LABEL_14;
LABEL_26:
    if ( v23 )
      goto LABEL_17;
    goto LABEL_27;
  }
LABEL_24:
  v18 = (const char *)&qword_4B2D48;
  if ( !&qword_4B2D48 )
    goto LABEL_25;
LABEL_13:
  v19 = strlen(v18);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = v19 + 1;
  v22 = v20 + v19 + 1;
  v23 = v20 >= v22;
  if ( v20 <= v22 )
    goto LABEL_26;
LABEL_14:
  if ( v20 > 0x7FFFFFFFFFFFFFFELL )
  {
    if ( (v20 & 0x8000000000000000LL) != 0 )
      *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_17;
  }
  v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
  v28 = v20;
  v29 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v22 )
  {
    v29 = (char *)sub_491288(a1, *(void **)a1, v22, 1u);
    *(_QWORD *)a1 = v29;
    v28 = *(_QWORD *)(a1 + 8);
  }
  memset(&v29[v28], 0, v22 - v28);
  *(_QWORD *)(a1 + 8) = v22;
LABEL_17:
  memcpy((void *)(*(_QWORD *)a1 + v20), v18, v21);
  return *(_QWORD *)&v48[6] ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
