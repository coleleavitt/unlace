/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470470
// Address: 0x0000000000470470

//----- (0000000000470470) ----------------------------------------------------
__int64 __fastcall sub_470470(__int64 a1, __int64 a2)
{
  const char *v4; // x19
  size_t v5; // x25
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x24
  _BYTE *v8; // x0
  size_t v9; // x24
  _BYTE *v10; // x0
  size_t v11; // x24
  _BYTE *v12; // x0
  size_t v13; // x22
  __int64 v15; // x3
  char *v16; // x0
  unsigned __int64 v17; // x21
  unsigned __int64 v18; // x24
  unsigned __int64 v19; // x22
  unsigned __int64 v20; // x25
  unsigned __int64 v21; // x22
  unsigned __int64 v22; // x25
  __int64 v23; // x3
  char *v24; // x0
  __int64 v25; // x3
  char *v26; // x0
  __int64 v27; // x3
  char *v28; // x0
  _BYTE v29[10]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v30[14]; // [xsp+52h] [xbp-Eh] BYREF

  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = *(const char **)a2;
    if ( *(_QWORD *)a2 )
    {
LABEL_3:
      v5 = strlen(v4) + 1;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = (const char *)&qword_4B2D48;
    if ( &qword_4B2D48 )
      goto LABEL_3;
  }
  v5 = 1;
  v4 = &byte_4B31F0;
LABEL_4:
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v6 + v5;
  if ( v6 <= v6 + v5 )
  {
    if ( v6 >= v6 + v5 )
      goto LABEL_8;
  }
  else
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v6 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_8;
    }
    v7 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v16 = (char *)sub_491288(a1, *(void **)a1, v7, 1u);
    *(_QWORD *)a1 = v16;
    v15 = *(_QWORD *)(a1 + 8);
  }
  memset(&v16[v15], 0, v7 - v15);
  *(_QWORD *)(a1 + 8) = v7;
LABEL_8:
  memcpy((void *)(*(_QWORD *)a1 + v6), v4, v5);
  v8 = sub_48E4D8(v29, (unsigned __int64)v30, *(_QWORD *)(a2 + 24) + 1LL);
  v9 = v8 - v29;
  if ( v8 == v29 )
    goto LABEL_9;
  v21 = *(_QWORD *)(a1 + 8);
  v22 = v9 + v21;
  if ( v21 > v9 + v21 )
  {
    if ( v21 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v21 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_31;
    }
    v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_38:
    v23 = *(_QWORD *)(a1 + 8);
    v24 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v22 )
    {
      v24 = (char *)sub_491288(a1, *(void **)a1, v22, 1u);
      *(_QWORD *)a1 = v24;
      v23 = *(_QWORD *)(a1 + 8);
    }
    memset(&v24[v23], 0, v22 - v23);
    *(_QWORD *)(a1 + 8) = v22;
    goto LABEL_31;
  }
  if ( v21 < v9 + v21 )
    goto LABEL_38;
LABEL_31:
  memcpy((void *)(*(_QWORD *)a1 + v21), v29, v9);
LABEL_9:
  v10 = sub_48E4D8(v29, (unsigned __int64)v30, *(_QWORD *)(a2 + 32) + 1LL);
  v11 = v10 - v29;
  if ( v10 == v29 )
    goto LABEL_10;
  v19 = *(_QWORD *)(a1 + 8);
  v20 = v11 + v19;
  if ( v19 > v11 + v19 )
  {
    if ( v19 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v19 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v20 )
    {
      v26 = (char *)sub_491288(a1, *(void **)a1, v20, 1u);
      *(_QWORD *)a1 = v26;
      v25 = *(_QWORD *)(a1 + 8);
    }
    memset(&v26[v25], 0, v20 - v25);
    *(_QWORD *)(a1 + 8) = v20;
    goto LABEL_33;
  }
  if ( v19 < v11 + v19 )
    goto LABEL_42;
LABEL_33:
  memcpy((void *)(*(_QWORD *)a1 + v19), v29, v11);
LABEL_10:
  v12 = sub_48E4D8(v29, (unsigned __int64)v30, *(_QWORD *)(a2 + 40) + 1LL);
  v13 = v12 - v29;
  if ( v12 != v29 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v13 + v17;
    if ( v17 <= v13 + v17 )
    {
      if ( v17 >= v13 + v17 )
      {
LABEL_35:
        memcpy((void *)(*(_QWORD *)a1 + v17), v29, v13);
        return *(_QWORD *)&v30[6] ^ _stack_chk_guard;
      }
    }
    else
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v17 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_35;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v27 = *(_QWORD *)(a1 + 8);
    v28 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v28 = (char *)sub_491288(a1, *(void **)a1, v18, 1u);
      *(_QWORD *)a1 = v28;
      v27 = *(_QWORD *)(a1 + 8);
    }
    memset(&v28[v27], 0, v18 - v27);
    *(_QWORD *)(a1 + 8) = v18;
    goto LABEL_35;
  }
  return *(_QWORD *)&v30[6] ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
