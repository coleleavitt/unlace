__int64 __fastcall sub_454F80(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // r8
  bool v6; // cl
  bool v7; // r9
  __int64 result; // rax

  v4 = &a1[a2];
  v5 = &a3[a4];
  v6 = v4 != a1;
  v7 = v5 != a3;
  if ( v5 == a3 || v4 == a1 )
  {
LABEL_7:
    if ( v4 != a1 )
      return v6 & (unsigned __int8)(v5 == a3);
    result = 0xFFFFFFFFLL;
    if ( !v7 )
      return v6 & (unsigned __int8)(v5 == a3);
  }
  else
  {
    while ( 1 )
    {
      if ( *a1 < *a3 )
        return 0xFFFFFFFFLL;
      if ( *a3 < *a1 )
        return 1;
      ++a1;
      ++a3;
      v6 = v4 != a1;
      v7 = v5 != a3;
      if ( v4 == a1 || v5 == a3 )
        goto LABEL_7;
    }
  }
  return result;
}

