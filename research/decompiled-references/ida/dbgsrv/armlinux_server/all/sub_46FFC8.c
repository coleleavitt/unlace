/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FFC8
// Address: 0x000000000046FFC8

//----- (000000000046FFC8) ----------------------------------------------------
__int64 __fastcall sub_46FFC8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x23
  _BYTE *v5; // x0
  size_t v6; // x22
  __int64 i; // x22
  __int64 v8; // x20
  _BYTE *v9; // x0
  size_t v10; // x27
  const char *v11; // x28
  size_t v12; // x6
  unsigned __int64 v13; // x20
  unsigned __int64 v14; // x27
  __int64 v16; // x3
  char *v17; // x0
  unsigned __int64 v18; // x28
  unsigned __int64 v19; // x6
  __int64 v20; // x3
  char *v21; // x0
  unsigned __int64 v22; // x20
  unsigned __int64 v23; // x24
  char *v24; // x0
  __int64 v25; // x3
  __int64 v26; // x3
  char *v27; // x0
  size_t v28; // [xsp+60h] [xbp-20h]
  size_t v29; // [xsp+60h] [xbp-20h]
  unsigned __int64 v30; // [xsp+60h] [xbp-20h]
  unsigned __int64 v31; // [xsp+60h] [xbp-20h]
  _BYTE v32[5]; // [xsp+70h] [xbp-10h] BYREF
  _BYTE v33[11]; // [xsp+75h] [xbp-Bh] BYREF

  v4 = a2[1];
  v5 = sub_48E2D8(v32, (unsigned __int64)v33, v4);
  v6 = v5 - v32;
  if ( v5 != v32 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v23 = v6 + v22;
    if ( v22 <= v6 + v22 )
    {
      if ( v22 >= v6 + v22 )
      {
LABEL_38:
        memcpy((void *)(*(_QWORD *)a1 + v22), v32, v6);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v22 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_38;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v23 )
    {
      v27 = (char *)sub_491288(a1, *(void **)a1, v23, 1u);
      *(_QWORD *)a1 = v27;
      v26 = *(_QWORD *)(a1 + 8);
    }
    memset(&v27[v26], 0, v23 - v26);
    *(_QWORD *)(a1 + 8) = v23;
    goto LABEL_38;
  }
LABEL_2:
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = *a2 + 32 * i;
      v9 = sub_48E2D8(v32, (unsigned __int64)v33, *(_DWORD *)v8);
      v10 = v9 - v32;
      if ( v9 == v32 )
        goto LABEL_5;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v10 + v18;
      if ( v18 <= v10 + v18 )
      {
        if ( v18 >= v10 + v18 )
          goto LABEL_28;
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v19 )
        {
LABEL_34:
          v31 = v19;
          v24 = (char *)sub_491288(a1, v21, v19, 1u);
          v25 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v24;
          memset(&v24[v25], 0, v31 - v25);
          *(_QWORD *)(a1 + 8) = v31;
          goto LABEL_28;
        }
      }
      else
      {
        if ( v18 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v18 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_28;
        }
        v19 = 0x7FFFFFFFFFFFFFFFLL;
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
          goto LABEL_34;
      }
      v30 = v19;
      memset(&v21[v20], 0, v19 - v20);
      *(_QWORD *)(a1 + 8) = v30;
LABEL_28:
      memcpy((void *)(*(_QWORD *)a1 + v18), v32, v10);
LABEL_5:
      v11 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v8 + 16) )
        v11 = *(const char **)(v8 + 8);
      if ( v11 )
      {
        v12 = strlen(v11) + 1;
      }
      else
      {
        v12 = 1;
        v11 = &byte_4B31F0;
      }
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v13 + v12;
      if ( v13 <= v13 + v12 )
      {
        if ( v13 < v13 + v12 )
          goto LABEL_16;
      }
      else
      {
        if ( v13 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
          v16 = *(_QWORD *)(a1 + 8);
          v17 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v14 )
          {
            v28 = v12;
            v17 = (char *)sub_491288(a1, *(void **)a1, v14, 1u);
            v16 = *(_QWORD *)(a1 + 8);
            v12 = v28;
            *(_QWORD *)a1 = v17;
          }
          v29 = v12;
          memset(&v17[v16], 0, v14 - v16);
          *(_QWORD *)(a1 + 8) = v14;
          v12 = v29;
          goto LABEL_13;
        }
        if ( (v13 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_13:
      memcpy((void *)(*(_QWORD *)a1 + v13), v11, v12);
    }
  }
  return *(_QWORD *)&v33[3] ^ _stack_chk_guard;
}
// 46FFC8: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
