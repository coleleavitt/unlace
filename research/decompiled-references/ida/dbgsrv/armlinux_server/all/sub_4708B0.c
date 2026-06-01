/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4708B0
// Address: 0x00000000004708B0

//----- (00000000004708B0) ----------------------------------------------------
__int64 __fastcall sub_4708B0(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  size_t v5; // x24
  _BYTE *v6; // x0
  size_t v7; // x24
  _BYTE *v8; // x0
  size_t v9; // x24
  const char *v10; // x19
  size_t v11; // x24
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x23
  __int64 v15; // x3
  char *v16; // x0
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x25
  unsigned __int64 v19; // x23
  unsigned __int64 v20; // x25
  unsigned __int64 v21; // x23
  unsigned __int64 v22; // x25
  __int64 v23; // x3
  char *v24; // x0
  __int64 v25; // x3
  char *v26; // x0
  __int64 v27; // x3
  char *v28; // x0
  _BYTE v29[5]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v30[5]; // [xsp+4Dh] [xbp-13h] BYREF
  _BYTE v31[14]; // [xsp+52h] [xbp-Eh] BYREF

  v4 = sub_48E2D8(v29, (unsigned __int64)v30, *(_DWORD *)a2);
  v5 = v4 - v29;
  if ( v4 != v29 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    v22 = v5 + v21;
    if ( v21 <= v5 + v21 )
    {
      if ( v21 >= v5 + v21 )
      {
LABEL_31:
        memcpy((void *)(*(_QWORD *)a1 + v21), v29, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v21 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v21 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_31;
      }
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
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
LABEL_2:
  v6 = sub_48E2D8(v29, (unsigned __int64)v30, *(unsigned __int8 *)(a2 + 4));
  v7 = v6 - v29;
  if ( v6 == v29 )
    goto LABEL_3;
  v19 = *(_QWORD *)(a1 + 8);
  v20 = v7 + v19;
  if ( v19 > v7 + v19 )
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
  if ( v19 < v7 + v19 )
    goto LABEL_42;
LABEL_33:
  memcpy((void *)(*(_QWORD *)a1 + v19), v29, v7);
LABEL_3:
  v8 = sub_48E4D8(v29, (unsigned __int64)v31, *(_QWORD *)(a2 + 8) + 1LL);
  v9 = v8 - v29;
  if ( v8 == v29 )
    goto LABEL_4;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = v9 + v17;
  if ( v17 > v9 + v17 )
  {
    if ( v17 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v17 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_35;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_46:
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
  if ( v17 < v9 + v17 )
    goto LABEL_46;
LABEL_35:
  memcpy((void *)(*(_QWORD *)a1 + v17), v29, v9);
LABEL_4:
  if ( *(_QWORD *)(a2 + 24) )
  {
    v10 = *(const char **)(a2 + 16);
    if ( v10 )
    {
LABEL_6:
      v11 = strlen(v10) + 1;
      goto LABEL_7;
    }
  }
  else
  {
    v10 = (const char *)&qword_4B2D48;
    if ( &qword_4B2D48 )
      goto LABEL_6;
  }
  v11 = 1;
  v10 = &byte_4B31F0;
LABEL_7:
  v12 = *(_QWORD *)(a1 + 8);
  v13 = v12 + v11;
  if ( v12 <= v12 + v11 )
  {
    if ( v12 >= v12 + v11 )
      goto LABEL_11;
  }
  else
  {
    if ( v12 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v12 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_11;
    }
    v13 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v13 )
  {
    v16 = (char *)sub_491288(a1, *(void **)a1, v13, 1u);
    *(_QWORD *)a1 = v16;
    v15 = *(_QWORD *)(a1 + 8);
  }
  memset(&v16[v15], 0, v13 - v15);
  *(_QWORD *)(a1 + 8) = v13;
LABEL_11:
  memcpy((void *)(*(_QWORD *)a1 + v12), v10, v11);
  return *(_QWORD *)&v31[6] ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
