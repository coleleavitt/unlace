/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473710
// Address: 0x0000000000473710

//----- (0000000000473710) ----------------------------------------------------
__int64 __fastcall sub_473710(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  size_t v5; // x24
  const char *v6; // x20
  size_t v7; // x24
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x23
  __int64 v11; // x3
  char *v12; // x0
  unsigned __int64 v13; // x23
  unsigned __int64 v14; // x25
  __int64 v15; // x3
  char *v16; // x0
  _BYTE v17[5]; // [xsp+40h] [xbp-10h] BYREF
  _BYTE v18[11]; // [xsp+45h] [xbp-Bh] BYREF

  v4 = sub_48E2D8(v17, (unsigned __int64)v18, *(_DWORD *)(a2 + 4));
  v5 = v4 - v17;
  if ( v4 != v17 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v5 + v13;
    if ( v13 <= v5 + v13 )
    {
      if ( v13 >= v5 + v13 )
      {
LABEL_21:
        memcpy((void *)(*(_QWORD *)a1 + v13), v17, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v13 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v13 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v14 )
    {
      v16 = (char *)sub_491288(a1, *(void **)a1, v14, 1u);
      *(_QWORD *)a1 = v16;
      v15 = *(_QWORD *)(a1 + 8);
    }
    memset(&v16[v15], 0, v14 - v15);
    *(_QWORD *)(a1 + 8) = v14;
    goto LABEL_21;
  }
LABEL_2:
  if ( *(_QWORD *)(a2 + 16) )
  {
    v6 = *(const char **)(a2 + 8);
    if ( v6 )
    {
LABEL_4:
      v7 = strlen(v6) + 1;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = (const char *)&qword_4B2D48;
    if ( &qword_4B2D48 )
      goto LABEL_4;
  }
  v7 = 1;
  v6 = &byte_4B31F0;
LABEL_5:
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v8 + v7;
  if ( v8 <= v8 + v7 )
  {
    if ( v8 >= v8 + v7 )
      goto LABEL_9;
  }
  else
  {
    if ( v8 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v8 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_9;
    }
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v9 )
  {
    v12 = (char *)sub_491288(a1, *(void **)a1, v9, 1u);
    *(_QWORD *)a1 = v12;
    v11 = *(_QWORD *)(a1 + 8);
  }
  memset(&v12[v11], 0, v9 - v11);
  *(_QWORD *)(a1 + 8) = v9;
LABEL_9:
  memcpy((void *)(*(_QWORD *)a1 + v8), v6, v7);
  return *(_QWORD *)&v18[3] ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
