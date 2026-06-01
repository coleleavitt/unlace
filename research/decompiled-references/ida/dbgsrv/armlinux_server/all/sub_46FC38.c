/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FC38
// Address: 0x000000000046FC38

//----- (000000000046FC38) ----------------------------------------------------
__int64 __fastcall sub_46FC38(__int64 a1, _QWORD *a2)
{
  _BYTE *v4; // x0
  size_t v5; // x24
  _BYTE *v6; // x0
  size_t v7; // x24
  const char *v8; // x19
  size_t v9; // x24
  unsigned __int64 v10; // x21
  unsigned __int64 v11; // x23
  __int64 v13; // x3
  char *v14; // x0
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x25
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x25
  __int64 v19; // x3
  char *v20; // x0
  __int64 v21; // x3
  char *v22; // x0
  _BYTE v23[10]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v24[14]; // [xsp+52h] [xbp-Eh] BYREF

  v4 = sub_48E4D8(v23, (unsigned __int64)v24, *a2 + 1LL);
  v5 = v4 - v23;
  if ( v4 != v23 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v5 + v17;
    if ( v17 <= v5 + v17 )
    {
      if ( v17 >= v5 + v17 )
      {
LABEL_26:
        memcpy((void *)(*(_QWORD *)a1 + v17), v23, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v17 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_26;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v20 = (char *)sub_491288(a1, *(void **)a1, v18, 1u);
      *(_QWORD *)a1 = v20;
      v19 = *(_QWORD *)(a1 + 8);
    }
    memset(&v20[v19], 0, v18 - v19);
    *(_QWORD *)(a1 + 8) = v18;
    goto LABEL_26;
  }
LABEL_2:
  v6 = sub_48E4D8(v23, (unsigned __int64)v24, a2[1] + 1LL);
  v7 = v6 - v23;
  if ( v6 == v23 )
    goto LABEL_3;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v7 + v15;
  if ( v15 > v7 + v15 )
  {
    if ( v15 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v15 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_28;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_35:
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 )
    {
      v22 = (char *)sub_491288(a1, *(void **)a1, v16, 1u);
      *(_QWORD *)a1 = v22;
      v21 = *(_QWORD *)(a1 + 8);
    }
    memset(&v22[v21], 0, v16 - v21);
    *(_QWORD *)(a1 + 8) = v16;
    goto LABEL_28;
  }
  if ( v15 < v7 + v15 )
    goto LABEL_35;
LABEL_28:
  memcpy((void *)(*(_QWORD *)a1 + v15), v23, v7);
LABEL_3:
  if ( a2[3] )
  {
    v8 = (const char *)a2[2];
    if ( v8 )
    {
LABEL_5:
      v9 = strlen(v8) + 1;
      goto LABEL_6;
    }
  }
  else
  {
    v8 = (const char *)&qword_4B2D48;
    if ( &qword_4B2D48 )
      goto LABEL_5;
  }
  v9 = 1;
  v8 = &byte_4B31F0;
LABEL_6:
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v9 + v10;
  if ( v10 <= v9 + v10 )
  {
    if ( v10 >= v9 + v10 )
      goto LABEL_10;
  }
  else
  {
    if ( v10 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v10 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_10;
    }
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v11 )
  {
    v14 = (char *)sub_491288(a1, *(void **)a1, v11, 1u);
    *(_QWORD *)a1 = v14;
    v13 = *(_QWORD *)(a1 + 8);
  }
  memset(&v14[v13], 0, v11 - v13);
  *(_QWORD *)(a1 + 8) = v11;
LABEL_10:
  memcpy((void *)(*(_QWORD *)a1 + v10), v8, v9);
  return *(_QWORD *)&v24[6] ^ _stack_chk_guard;
}
// 46FC38: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
