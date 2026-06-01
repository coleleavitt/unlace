__int64 __fastcall sub_7371F0(__int64 a1, int a2)
{
  unsigned __int8 *v4; // rsi
  int v5; // ecx
  unsigned __int8 v6; // di
  __int64 result; // rax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // r8d
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // r8
  int v17; // eax
  int v18; // r8d

  v4 = (unsigned __int8 *)(a1 + 4LL * a2 + 4);
  if ( a2 <= 1 )
  {
    v5 = *(__int16 *)(a1 + 2);
    v6 = *v4;
    if ( a2 >= v5 - 2 )
      return v6;
    v12 = v4[5];
    if ( !(_BYTE)v12 )
      return v6;
    v13 = v4[1];
    if ( v13 != v12 + 1 || v4[9] + 2 != v13 )
      return v6;
LABEL_18:
    v14 = v4[4];
    if ( v14 == v6 )
      return v6;
    v15 = v4[8];
    if ( v15 == v6 )
      return v6;
    result = v14;
    if ( v14 == v15 )
      return result;
    if ( a2 <= 1 )
      return v6;
    goto LABEL_8;
  }
  v8 = *(v4 - 3);
  if ( (_BYTE)v8 )
  {
    v9 = *(v4 - 7);
    if ( v9 == v8 + 1 && v9 == v4[1] + 2 )
    {
      result = *(v4 - 8);
      v16 = *(v4 - 4);
      if ( (_BYTE)result == v16 )
        return result;
      v6 = *v4;
      if ( (_BYTE)result == *v4 )
        return result;
      result = v16;
      if ( v16 == v6 )
        return result;
    }
    else
    {
      v6 = *v4;
    }
    v5 = *(__int16 *)(a1 + 2);
    if ( a2 >= v5 - 2 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(__int16 *)(a1 + 2);
    v6 = *v4;
    if ( a2 >= v5 - 2 )
      goto LABEL_8;
  }
  v17 = v4[5];
  if ( (_BYTE)v17 )
  {
    v18 = v4[1];
    if ( v18 == v17 + 1 && v4[9] + 2 == v18 )
      goto LABEL_18;
  }
LABEL_8:
  if ( v5 - 1 <= a2 )
    return v6;
  v10 = v4[1];
  if ( !(_BYTE)v10 )
    return v6;
  v11 = *(v4 - 3);
  if ( v11 != v10 + 1 )
    return v6;
  if ( v11 != v4[5] + 2 )
    return v6;
  result = *(v4 - 4);
  if ( v6 != (_BYTE)result && (_BYTE)result != v4[4] )
    return v6;
  return result;
}
