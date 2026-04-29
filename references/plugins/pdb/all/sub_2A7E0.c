unsigned __int64 __fastcall sub_2A7E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // rcx

  v4 = a2 - a1;
  v6 = a3 + v4;
  if ( v4 <= 864 )
    return sub_2A000(a1, a2);
  v8 = a1;
  do
  {
    v9 = v8;
    v8 += 1008;
    sub_2A000(v9, v8);
  }
  while ( a2 - v8 > 864 );
  result = sub_2A000(v8, a2);
  if ( v4 > 1008 )
  {
    v11 = 7;
    do
    {
      sub_27200(a1, a2, a3, v11);
      v12 = 2 * v11;
      v11 *= 4;
      result = sub_27200(a3, v6, a1, v12);
    }
    while ( (__int64)(0x8E38E38E38E38E39LL * (v4 >> 4)) > v11 );
  }
  return result;
}
