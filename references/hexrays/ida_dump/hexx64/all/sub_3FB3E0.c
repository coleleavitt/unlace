void __fastcall sub_3FB3E0(__int64 a1, int a2)
{
  int v2; // ebp
  __int64 i; // rbx
  int dtype_size; // eax

  v2 = 1;
  for ( i = 0; i != 5; ++i )
  {
    if ( (v2 & a2) != 0 )
    {
      dtype_size = get_dtype_size(0);
      sub_1D6310(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, i, 0);
    }
    v2 *= 2;
  }
}
