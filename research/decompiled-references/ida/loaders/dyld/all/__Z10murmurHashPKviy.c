unsigned __int64 __fastcall murmurHash(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // x9
  int v4; // w10
  __int64 v5; // x12
  unsigned __int8 *v6; // x10
  __int64 v7; // x11
  __int64 v8; // t1
  unsigned __int64 v9; // x8

  v3 = (0xC6A4A7935BD1E995LL * a2) ^ a3;
  v4 = a2 + 7;
  if ( a2 >= 0 )
    v4 = a2;
  if ( 8LL * (v4 >> 3) )
  {
    v5 = (__int64)v4 >> 3;
    v6 = &a1[8 * (v4 >> 3)];
    v7 = 8 * v5;
    do
    {
      v8 = *(_QWORD *)a1;
      a1 += 8;
      v3 = 0xC6A4A7935BD1E995LL
         * ((0xC6A4A7935BD1E995LL * ((0xC6A4A7935BD1E995LL * v8) ^ ((0xC6A4A7935BD1E995LL * v8) >> 47))) ^ v3);
      v7 -= 8;
    }
    while ( v7 );
  }
  else
  {
    v6 = a1;
  }
  if ( (a2 & 7u) - 1 <= 6 )
  {
    switch ( a2 & 7 )
    {
      case 1:
        v3 ^= *v6;
        break;
      case 2:
        v3 ^= (unsigned __int64)v6[1] << 8;
        break;
      case 3:
        v3 ^= (unsigned __int64)v6[2] << 16;
        break;
      case 4:
        v3 ^= (unsigned __int64)v6[3] << 24;
        break;
      case 5:
        v3 ^= (unsigned __int64)v6[4] << 32;
        break;
      case 6:
        v3 ^= (unsigned __int64)v6[5] << 40;
        break;
      case 7:
        v3 ^= (unsigned __int64)v6[6] << 48;
        break;
      default:
        break;
    }
  }
  v9 = 0xC6A4A7935BD1E995LL * ((0xC6A4A7935BD1E995LL * v3) ^ ((0xC6A4A7935BD1E995LL * v3) >> 47));
  return v9 ^ (v9 >> 47);
}
