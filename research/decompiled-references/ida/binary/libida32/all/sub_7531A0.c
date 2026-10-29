__int64 __fastcall sub_7531A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned int v8; // r9d
  __int64 v9; // rbp
  __int64 v10; // r11
  __int64 i; // r10
  __int64 v12; // rdx
  __int64 v13; // r12
  _DWORD *v14; // rcx
  unsigned __int8 v15; // dl
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  result = a3 - 1;
  v6 = HIDWORD(a4);
  v8 = a4;
  v9 = a3 & 1;
  v10 = (a3 - 1) / 2;
  if ( a2 < v10 )
  {
    for ( i = a2; ; i = result )
    {
      v12 = 10 * (i + 1);
      v13 = a1 + v12 - 5;
      v14 = (_DWORD *)(a1 + v12);
      v15 = *(_BYTE *)(a1 + v12 + 4);
      if ( *(_BYTE *)(v13 + 4) == v15 )
        v15 = *v14 < *(_DWORD *)v13;
      result = 2 * (i + 1) - v15;
      v16 = a1 + 5 * i;
      v17 = 4 * result;
      v18 = a1 + 5 * result;
      *(_DWORD *)v16 = *(_DWORD *)v18;
      *(_BYTE *)(v16 + 4) = *(_BYTE *)(v18 + 4);
      if ( v10 <= result )
        break;
    }
    if ( v9 || (a3 - 2) / 2 != result )
    {
LABEL_8:
      v19 = (result - 1) / 2;
      if ( result <= a2 )
        goto LABEL_16;
      while ( 1 )
      {
        v18 = a1 + 5 * v19;
        v21 = *(_BYTE *)(v18 + 4);
        if ( v21 == (_BYTE)v6 )
        {
          if ( *(_DWORD *)v18 >= v8 )
            goto LABEL_15;
        }
        else if ( !v21 )
        {
LABEL_15:
          v18 = a1 + result + v17;
          goto LABEL_16;
        }
        v20 = a1 + result + v17;
        *(_DWORD *)v20 = *(_DWORD *)v18;
        *(_BYTE *)(v20 + 4) = *(_BYTE *)(v18 + 4);
        result = v19;
        if ( a2 >= v19 )
          goto LABEL_16;
        v19 = (v19 - 1) / 2;
        v17 = 4 * result;
      }
    }
LABEL_18:
    v22 = result + 1;
    v23 = 2 * v22;
    v24 = a1 + 10 * v22;
    *(_DWORD *)v18 = *(_DWORD *)(v24 - 5);
    *(_BYTE *)(v18 + 4) = *(_BYTE *)(v24 - 1);
    result = v23 - 1;
    v17 = 4 * (v23 - 1);
    v18 = a1 + v17 + result;
    goto LABEL_8;
  }
  v18 = a1 + 5 * a2;
  if ( !v9 )
  {
    result = (a3 - 2) / 2;
    if ( a2 == result )
    {
      result = a2;
      goto LABEL_18;
    }
  }
LABEL_16:
  *(_DWORD *)v18 = v8;
  *(_BYTE *)(v18 + 4) = v6;
  return result;
}

