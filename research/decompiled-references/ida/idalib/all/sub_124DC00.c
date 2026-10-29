__int64 __fastcall sub_124DC00(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 i; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE *v9; // r9
  char v10; // bp
  char v11; // bl
  __int64 v12; // rdx
  char j; // r10

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v7 )
    {
      v8 = 2 * i + 2;
      v7 = 2 * i + 1;
      v9 = (_BYTE *)(a1 + v7);
      v10 = *(_BYTE *)(a1 + v8);
      v11 = *(_BYTE *)(a1 + v7);
      if ( v11 <= v10 )
      {
        *(_BYTE *)(a1 + i) = v10;
        if ( v5 <= v8 )
        {
          v9 = (_BYTE *)(a1 + v8);
          v7 = 2 * i + 2;
          if ( (a3 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
        v7 = 2 * i + 2;
      }
      else
      {
        *(_BYTE *)(a1 + i) = v11;
        if ( v5 <= v7 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_16;
          goto LABEL_9;
        }
      }
    }
  }
  v9 = (_BYTE *)(a1 + a2);
  v7 = a2;
  if ( (a3 & 1) == 0 )
  {
LABEL_16:
    if ( v7 == (a3 - 2) / 2 )
    {
      v7 = 2 * v7 + 1;
      *v9 = *(_BYTE *)(a1 + v7);
      v9 = (_BYTE *)(a1 + v7);
    }
LABEL_9:
    result = v7 - 1;
    v12 = (v7 - 1) / 2;
    if ( v7 > a2 )
    {
      for ( j = *(_BYTE *)(a1 + v12); j < a4; v12 = (v12 - 1) / 2 )
      {
        *(_BYTE *)(a1 + v7) = j;
        v9 = (_BYTE *)(a1 + v12);
        result = (v12 - 1) / 2;
        if ( a2 >= v12 )
          break;
        j = *(_BYTE *)(a1 + result);
        v7 = v12;
      }
    }
  }
  *v9 = a4;
  return result;
}
