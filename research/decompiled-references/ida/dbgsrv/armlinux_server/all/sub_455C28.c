/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455C28
// Address: 0x0000000000455C28

//----- (0000000000455C28) ----------------------------------------------------
__int64 __fastcall sub_455C28(__int64 a1)
{
  int v2; // w0
  char *v3; // x1
  int v4; // w2
  bool v5; // zf
  int v6; // w2
  __int64 result; // x0
  int v8; // w0
  int v9; // w0
  int v10; // w0
  int v11; // w3
  int v12; // w1
  int v13; // w0
  unsigned int v14; // [xsp+34h] [xbp-Ch] BYREF

  v2 = *(unsigned __int8 *)(a1 + 144);
  v3 = *(char **)(a1 + 8);
LABEL_2:
  if ( v2 )
  {
LABEL_19:
    v9 = (unsigned __int8)*v3;
    if ( v9 == 42 )
    {
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8) = v3 + 1;
        v10 = (unsigned __int8)v3[1];
        if ( v10 != 47 )
          break;
        if ( (*(_DWORD *)(a1 + 764) & 1) != 0 )
          goto LABEL_27;
        v3 = *(char **)(a1 + 8);
LABEL_23:
        v9 = (unsigned __int8)*v3;
        if ( v9 != 42 )
          goto LABEL_20;
      }
      if ( v10 == 41 && (*(_DWORD *)(a1 + 764) & 2) != 0 )
      {
LABEL_27:
        v3 += 2;
        *(_QWORD *)(a1 + 8) = v3;
        *(_BYTE *)(a1 + 144) = 0;
        goto LABEL_5;
      }
    }
    else
    {
LABEL_20:
      if ( !v9 )
        goto LABEL_14;
      *(_QWORD *)(a1 + 8) = v3 + 1;
    }
    v3 = *(char **)(a1 + 8);
    goto LABEL_23;
  }
  while ( 1 )
  {
LABEL_5:
    while ( 1 )
    {
      v4 = (unsigned __int8)*v3;
      v5 = v4 == 32 || v4 == 9;
      if ( !v5 && !sub_450428(*v3) )
        break;
      *(_QWORD *)(a1 + 8) = ++v3;
    }
    switch ( v6 )
    {
      case ';':
        v12 = *(_DWORD *)(a1 + 764);
        result = v12 & 8;
        if ( (v12 & 8) == 0 )
          return result;
        goto LABEL_14;
      case '/':
        v11 = *(_DWORD *)(a1 + 764);
        result = v11 & 1;
        if ( (v11 & 1) == 0 )
          return result;
        break;
      case '(':
        v11 = *(_DWORD *)(a1 + 764);
        result = v11 & 2;
        if ( (v11 & 2) == 0 )
          return result;
        break;
      default:
        goto LABEL_13;
    }
    v13 = (unsigned __int8)v3[1];
    if ( v13 == 42 )
    {
      *(_BYTE *)(a1 + 144) = 1;
      goto LABEL_19;
    }
    if ( v13 != 47 || (v11 & 4) == 0 )
      break;
LABEL_14:
    if ( *(_QWORD *)(a1 + 64) )
    {
      sub_450E98(a1);
      v2 = *(unsigned __int8 *)(a1 + 144);
      v3 = *(char **)(a1 + 8);
      goto LABEL_2;
    }
    *(_BYTE *)(a1 + 336) = 0;
    v3 = (char *)sub_455218(a1, (int *)&v14);
    result = v14;
    if ( v14 == -1 )
      return 34;
    if ( v14 == 34 )
      return result;
    if ( v14 )
      return sub_4869C8(v14);
    v8 = *(unsigned __int8 *)(a1 + 144);
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 16) = v3;
    *(_BYTE *)(a1 + 336) = 1;
    if ( v8 )
      goto LABEL_19;
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_14;
  return 0;
}
// 455C64: variable 'v3' is possibly undefined
// 455C90: variable 'v6' is possibly undefined
