_QWORD *__fastcall sub_6A7990(_QWORD *a1, _BYTE **a2)
{
  _BYTE *v2; // rdx
  _QWORD *result; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  _BYTE *v6; // rsi
  __int64 v7; // r8
  _BYTE *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r9
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // r9

  v2 = (_BYTE *)*a1;
  result = a2;
  v4 = *a2;
  v5 = (_BYTE *)*a1;
  v6 = a2 + 2;
  if ( (_QWORD *)*a1 == a1 + 2 )
  {
    if ( v6 != v4 )
    {
      *a1 = v4;
      a1[1] = result[1];
      a1[2] = result[2];
      v8 = v6;
LABEL_8:
      *result = v8;
      result[1] = 0;
      *v8 = 0;
      return result;
    }
  }
  else if ( v6 != v4 )
  {
    *a1 = v4;
    v7 = a1[2];
    a1[1] = result[1];
    a1[2] = result[2];
    if ( v2 )
    {
      *result = v2;
      result[2] = v7;
LABEL_5:
      result[1] = 0;
      *v2 = 0;
      return result;
    }
    v8 = v6;
    goto LABEL_8;
  }
  v9 = result[1];
  v10 = v9;
  if ( a1 == result )
  {
    v2 = v4;
    goto LABEL_5;
  }
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      *v5 = *v4;
      v9 = result[1];
      v2 = (_BYTE *)*a1;
      goto LABEL_18;
    }
    if ( (unsigned int)v9 >= 8 )
    {
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(_QWORD *)&v5[(unsigned int)v9 - 8] = *(_QWORD *)&v4[(unsigned int)v9 - 8];
      v12 = (unsigned __int64)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v13 = v4 - &v5[-v12];
      if ( (((_DWORD)v10 + (_DWORD)v5 - (_DWORD)v12) & 0xFFFFFFF8) >= 8 )
      {
        v14 = (v10 + (_DWORD)v5 - v12) & 0xFFFFFFF8;
        v15 = 0;
        do
        {
          v16 = v15;
          v15 += 8;
          *(_QWORD *)(v12 + v16) = *(_QWORD *)(v13 + v16);
        }
        while ( v15 < v14 );
      }
    }
    else
    {
      if ( (v9 & 4) != 0 )
      {
        *(_DWORD *)v5 = *(_DWORD *)v4;
        *(_DWORD *)&v5[(unsigned int)v9 - 4] = *(_DWORD *)&v4[(unsigned int)v9 - 4];
        v5 = (_BYTE *)*a1;
        v10 = result[1];
        goto LABEL_17;
      }
      if ( !(_DWORD)v9 )
      {
LABEL_17:
        v9 = v10;
        v2 = v5;
        goto LABEL_18;
      }
      *v5 = *v4;
      if ( (v9 & 2) != 0 )
      {
        *(_WORD *)&v5[(unsigned int)v9 - 2] = *(_WORD *)&v4[(unsigned int)v9 - 2];
        v5 = (_BYTE *)*a1;
        v10 = result[1];
        goto LABEL_17;
      }
    }
    v5 = (_BYTE *)*a1;
    v10 = result[1];
    goto LABEL_17;
  }
LABEL_18:
  a1[1] = v9;
  v2[v9] = 0;
  v11 = (_BYTE *)*result;
  result[1] = 0;
  *v11 = 0;
  return result;
}

