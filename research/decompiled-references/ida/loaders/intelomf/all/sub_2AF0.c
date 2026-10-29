__int64 __fastcall sub_2AF0(__int64 *a1, __int64 *a2, __int64 a3)
{
  bool v4; // dl
  __int64 result; // rax
  void *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = sub_2A50(a3);
  result = 0;
  if ( v4 )
  {
    v6 = (void *)*a1;
    if ( (unsigned __int64)a1[2] <= 0xC )
    {
      v9 = qvector_reserve(a1, v6, 13, 1);
      *a1 = v9;
      v6 = (void *)v9;
    }
    a1[1] = 13;
    qmemcpy(v6, "Intel OMF386", 12);
    *(_BYTE *)(*a1 + 12) = 0;
    v7 = *a2;
    if ( (unsigned __int64)a2[2] <= 6 )
    {
      v8 = qvector_reserve(a2, v7, 7, 1);
      *a2 = v8;
      v7 = v8;
    }
    a2[1] = 7;
    *(_DWORD *)v7 = 1635018093;
    *(_WORD *)(v7 + 4) = 25456;
    *(_BYTE *)(*a2 + 6) = 0;
    return 1;
  }
  return result;
}

