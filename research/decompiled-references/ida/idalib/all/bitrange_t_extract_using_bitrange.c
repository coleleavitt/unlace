__int64 __fastcall bitrange_t_extract_using_bitrange(
        unsigned __int16 *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v8; // r13
  unsigned __int64 v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // r12
  char v13; // cl
  unsigned int v14; // r8d
  unsigned __int64 v15; // rbp
  unsigned int v16; // edi
  __int16 v17; // cx
  unsigned int v18; // r8d
  int v19; // r11d
  char v20; // r9
  bool v21; // r15
  char v22; // r14
  char v23; // cl
  _BYTE *v24; // rax
  unsigned __int8 *v25; // rdx
  int v26; // eax
  int v27; // r13d
  int v29; // edx
  char v30; // cl
  unsigned int v31; // r8d

  v8 = a1[1];
  if ( (_WORD)v8 )
  {
    v10 = *a1;
    v29 = a5 - 1;
    v19 = 1;
    v12 = 8 * (a5 - 1);
    v30 = *a1;
    v31 = *a1;
    v15 = v8 + v10;
    v16 = v31;
    v17 = v30 & 7;
    v18 = v31 >> 3;
    if ( a6 )
    {
      a2 = &a2[a3 - 1];
      v19 = -1;
      v18 = v29 - v18;
    }
  }
  else
  {
    v10 = *a1;
    v8 = 8 * a5;
    v11 = a5 - 1;
    v12 = 8 * (a5 - 1);
    v13 = *a1;
    v14 = *a1;
    v15 = v10 + v8;
    v16 = v14;
    v17 = v13 & 7;
    v18 = v14 >> 3;
    if ( a6 )
    {
      a2 = &a2[a3 - 1];
      v18 = v11 - v18;
      if ( v10 >= v15 )
        return 1;
      v19 = -1;
    }
    else
    {
      v19 = 1;
      if ( v10 >= v15 )
        return 1;
    }
  }
  v20 = v17;
  v21 = v17 != 0;
  v22 = 8 - v17;
  while ( 1 )
  {
    v25 = (unsigned __int8 *)(a4 + v18);
    v26 = (int)*v25 >> v20;
    v23 = v26;
    if ( v12 >= v10 )
      break;
    *a2 = v26;
    v24 = a2;
    v19 = 0;
    v16 += 8;
    v10 = v16;
    if ( v16 >= v15 )
      goto LABEL_13;
LABEL_10:
    a2 = v24;
  }
  if ( v19 && v21 )
    v23 = v26 | (v25[v19] << v22);
  v18 += v19;
  v24 = &a2[v19];
  *a2 = v23;
  v16 += 8;
  v10 = v16;
  if ( v16 < v15 )
    goto LABEL_10;
LABEL_13:
  v27 = v8 & 7;
  if ( v27 )
    v24[-v19] &= (1 << v27) - 1;
  return 1;
}
