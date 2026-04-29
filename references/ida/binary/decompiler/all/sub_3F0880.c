void __fastcall sub_3F0880(int a1, int a2)
{
  int v2; // ebp
  __int64 i; // rbx
  int dtype_size; // eax

  v2 = 1;
  for ( i = 0; i != 5; ++i )
  {
    if ( (v2 & a2) != 0 )
    {
      dtype_size = get_dtype_size();
      sub_1D3790(a1, 3, dtype_size, 0, 346938453, i, 0);
    }
    v2 *= 2;
  }
}
