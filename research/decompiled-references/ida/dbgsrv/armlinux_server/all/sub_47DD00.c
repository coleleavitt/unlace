/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DD00
// Address: 0x000000000047DD00

//----- (000000000047DD00) ----------------------------------------------------
__int64 __fastcall sub_47DD00(__int64 a1, char *s, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8, char a9)
{
  unsigned __int8 *v9; // x19
  signed __int64 v12; // x21
  unsigned __int64 v13; // x0
  unsigned __int64 v14; // x2
  unsigned __int8 *v15; // x23
  size_t v16; // x25
  __int64 v17; // x0
  __int64 v18; // x28
  size_t v19; // x26
  size_t v20; // x7
  _BYTE *v21; // x0
  unsigned int v22; // w0
  unsigned __int8 *v23; // x0
  unsigned int v25; // t1
  __int64 v26; // x2
  unsigned __int8 *v27; // [xsp+80h] [xbp-20h] BYREF
  char v28; // [xsp+88h] [xbp-18h] BYREF
  char v29; // [xsp+89h] [xbp-17h]
  __int64 v30; // [xsp+98h] [xbp-8h]

  v9 = (unsigned __int8 *)s;
  if ( a3 == -1 )
  {
    v12 = strlen(s);
    if ( v12 > a4 )
      v26 = v12;
    else
      v26 = a4;
    v14 = v26 + 16;
    if ( v14 <= *(_QWORD *)(a1 + 16) )
      goto LABEL_5;
LABEL_49:
    *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, v14, 1u);
    goto LABEL_5;
  }
  v12 = a3;
  v13 = *(_QWORD *)(a1 + 16);
  if ( a3 <= a4 )
    a3 = a4;
  v14 = a3 + 16;
  if ( v14 > v13 )
    goto LABEL_49;
LABEL_5:
  v27 = v9;
  v15 = v9;
  if ( v12 > 0 )
  {
    while ( 1 )
    {
      v22 = sub_485C28(&v27);
      if ( v22 - 1 > 0xFFFFFFFD )
      {
        v23 = v27++;
        v22 = *v23;
      }
      if ( v22 == 11 )
        break;
      if ( v22 <= 0xB )
      {
        if ( v22 == 8 )
        {
          v29 = 98;
          goto LABEL_11;
        }
        if ( v22 > 8 )
        {
          if ( v22 == 9 )
            v29 = 116;
          else
            v29 = 110;
          goto LABEL_11;
        }
        if ( v22 == 7 )
        {
          v29 = 97;
          goto LABEL_11;
        }
      }
      else
      {
        if ( v22 == 13 )
        {
          v29 = 114;
          goto LABEL_11;
        }
        if ( v22 < 0xD )
        {
          v29 = 102;
          goto LABEL_11;
        }
        if ( v22 == 34 || v22 == 92 )
        {
          v29 = v22;
          goto LABEL_11;
        }
      }
      if ( !(unsigned __int8)sub_47E2D8(v22) )
      {
        if ( v9 >= v27 )
        {
          v9 = (unsigned __int8 *)&v28;
          v16 = 0;
        }
        else
        {
          v16 = 0;
          do
          {
            v25 = *v9++;
            v16 += (int)sub_49B748(&v28 + v16, 16 - v16, "\\x%02X", v25);
          }
          while ( v27 > v9 );
          v9 = (unsigned __int8 *)&v28;
        }
LABEL_12:
        v17 = *(_QWORD *)(a1 + 8);
        if ( a4 > 0 )
          goto LABEL_13;
        goto LABEL_30;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v16 = v27 - v9;
      if ( a4 > 0 )
      {
LABEL_13:
        if ( v17 )
        {
          v18 = v17 - 1;
          v19 = v17 - 1 + v16;
          if ( v19 >= a4 )
            return v30 ^ _stack_chk_guard;
          goto LABEL_15;
        }
        if ( v16 >= a4 )
          return v30 ^ _stack_chk_guard;
LABEL_33:
        v19 = v16;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_30:
      if ( !v17 )
        goto LABEL_33;
      v18 = v17 - 1;
      v19 = v17 - 1 + v16;
LABEL_15:
      v20 = v19 + 1;
      v21 = *(_BYTE **)a1;
      if ( v19 + 1 > *(_QWORD *)(a1 + 16) )
      {
        v21 = sub_491288(a1, *(void **)a1, v19 + 1, 1u);
        v20 = v19 + 1;
        *(_QWORD *)a1 = v21;
      }
      *(_QWORD *)(a1 + 8) = v20;
      v21[v19] = 0;
      memmove((void *)(*(_QWORD *)a1 + v18), v9, v16);
      v9 = v27;
      if ( v27 - v15 >= v12 )
        return v30 ^ _stack_chk_guard;
    }
    v29 = 118;
LABEL_11:
    v16 = 2;
    v28 = 92;
    v9 = (unsigned __int8 *)&v28;
    goto LABEL_12;
  }
  return v30 ^ _stack_chk_guard;
}
// 47DD00: could not find valid save-restore pair for x26
// 47DD00: could not find valid save-restore pair for x28
// 47DDB4: conditional instruction was optimized away because w0.4==A
