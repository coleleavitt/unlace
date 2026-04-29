int *__fastcall sub_B230(int *a1, int a2)
{
  int v2; // edx

  v2 = *a1;
  if ( a2 >= *a1 )
  {
    while ( v2 != -1 )
    {
      if ( a2 == v2 )
        return a1;
      v2 = a1[6];
      a1 += 6;
      if ( v2 > a2 )
        return nullptr;
    }
  }
  return nullptr;
}
