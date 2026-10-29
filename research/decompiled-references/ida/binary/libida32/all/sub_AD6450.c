bool __fastcall sub_AD6450(int *a1, int a2)
{
  int v2; // edx
  bool result; // al

  v2 = *a1;
  if ( !*a1 || !a2 )
    return 0;
  if ( a2 == v2 )
    return 1;
  do
  {
    a2 = *((_DWORD *)&unk_2B1B020 + 4 * a2);
    result = v2 == a2;
  }
  while ( a2 && v2 != a2 );
  return result;
}

