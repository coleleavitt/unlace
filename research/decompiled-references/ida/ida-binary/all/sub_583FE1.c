__int64 __fastcall sub_583FE1(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *v5; // [rsp+10h] [rbp-20h]
  _DWORD *v6; // [rsp+20h] [rbp-10h]
  unsigned int v8; // [rsp+2Ch] [rbp-4h]

  v8 = 0;
  while ( a2 > 1 )
  {
    v5 = (_DWORD *)(8LL * (v8 + (a2 >> 1)) + a1);
    if ( a3 >= *v5 && a3 <= v5[1] )
      return 1;
    if ( a3 > v5[1] )
      v8 += a2 >> 1;
    a2 -= a2 >> 1;
  }
  v6 = (_DWORD *)(8LL * v8 + a1);
  return a3 >= *v6 && a3 <= v6[1];
}
