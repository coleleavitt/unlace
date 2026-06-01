__int64 __fastcall sub_5A8A7F(__int64 a1, int a2, _WORD *a3)
{
  _WORD *v4; // [rsp+28h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v7; // [rsp+40h] [rbp-10h]
  unsigned __int64 v8; // [rsp+48h] [rbp-8h]

  v5 = a1;
  v8 = a1 + 1;
  v4 = a3;
  v7 = a3 + 2;
  a3[1] = 0;
  *a3 = a3[1];
  do
  {
    if ( !(unsigned int)sub_5AF94F(&v5, v8, &v4, v7, 0) )
      return v5 - a1;
    v5 = a1;
    ++v8;
  }
  while ( v8 <= a2 + a1 );
  return 0;
}
