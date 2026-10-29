__int64 __fastcall sub_10EAA90(__int64 a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  signed __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp

  v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 6);
  v7 = a1;
  if ( v6 >> 2 > 0 )
  {
    v8 = a1 + 768 * (v6 >> 2);
    while ( !a3(a4, v7) )
    {
      v9 = v7 + 192;
      if ( a3(a4, v7 + 192) )
        return v9;
      v9 = v7 + 384;
      if ( a3(a4, v7 + 384) )
        return v9;
      v9 = v7 + 576;
      if ( a3(a4, v7 + 576) )
        return v9;
      v7 += 768;
      if ( v7 == v8 )
      {
        v6 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v7) >> 6);
        goto LABEL_11;
      }
    }
    return v7;
  }
LABEL_11:
  switch ( v6 )
  {
    case 2LL:
LABEL_17:
      if ( a3(a4, v7) )
        return v7;
      v7 += 192;
      goto LABEL_19;
    case 3LL:
      if ( a3(a4, v7) )
        return v7;
      v7 += 192;
      goto LABEL_17;
    case 1LL:
LABEL_19:
      if ( !a3(a4, v7) )
        return a2;
      return v7;
  }
  return a2;
}

