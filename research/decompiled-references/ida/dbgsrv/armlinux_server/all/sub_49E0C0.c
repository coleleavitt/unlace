/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E0C0
// Address: 0x000000000049E0C0

//----- (000000000049E0C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_49E0C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // x5
  unsigned __int64 i; // x2
  __int64 v5; // t1
  __int64 v6; // x1
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1

  v3 = (__int64 *)((char *)a1 + (int)(a2 & 0xFFFFFFF8));
  for ( i = (0xC6A4A7935BD1E995LL * a2) ^ a3;
        v3 != a1;
        i = 0xC6A4A7935BD1E995LL
          * ((0xC6A4A7935BD1E995LL * ((0xC6A4A7935BD1E995LL * v5) ^ ((0xC6A4A7935BD1E995LL * v5) >> 47))) ^ i) )
  {
    v5 = *a1++;
  }
  v6 = a2 & 7;
  if ( v6 )
  {
    v7 = 0;
    v8 = (int)v6 - 1;
    do
    {
      v9 = *((unsigned __int8 *)v3 + v8--);
      v7 = v9 + (v7 << 8);
    }
    while ( (v8 & 0x80000000) == 0 );
    i = 0xC6A4A7935BD1E995LL * (v7 ^ i);
  }
  return (0xC6A4A7935BD1E995LL * (i ^ (i >> 47))) ^ ((0xC6A4A7935BD1E995LL * (i ^ (i >> 47))) >> 47);
}
