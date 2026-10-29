__int64 __fastcall sub_5A7E50(__int64 a1, unsigned int *a2, int a3, __int64 a4)
{
  int v5; // eax
  _WORD v9[2]; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-Ch]
  unsigned int v12; // [rsp+38h] [rbp-8h]
  unsigned __int8 v13; // [rsp+3Fh] [rbp-1h]

  v13 = 1;
  v12 = 0;
  while ( a3 && v13 == 1 )
  {
    sub_5A8C5A(*a2, v9);
    if ( !v9[0] )
      return 0;
    --a3;
    ++a2;
    if ( v9[1] )
      v5 = 2;
    else
      v5 = 1;
    v11 = v5;
    v10 = 2LL * v5;
    v13 = sub_5A84B6(a4, v12, v9, v10);
    v12 += v11;
  }
  return v13;
}
