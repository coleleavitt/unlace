/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92630
// Address: 0x00092630

//----- (00092630) --------------------------------------------------------
int __cdecl sub_92630(_DWORD *a1, int a2, int a3)
{
  int v3; // edi
  int result; // eax
  int v5; // edi
  int v6; // edi
  int v7; // edi

  if ( a2 == 4 )
    return 0;
  v3 = a1[98];
  if ( v3 == a3 )
  {
    result = 6;
    if ( a1[102] == a2 )
      return result;
  }
  if ( v3 == -1 )
    return 0;
  v5 = a1[99];
  if ( v5 == a3 )
  {
    result = 6;
    if ( a1[103] == a2 )
      return result;
  }
  if ( v5 == -1 )
    return 0;
  v6 = a1[100];
  if ( v6 == a3 )
  {
    result = 6;
    if ( a1[104] == a2 )
      return result;
  }
  if ( v6 == -1 )
    return 0;
  v7 = a1[101];
  if ( v7 != a3 )
  {
    result = 6;
    if ( v7 != -1 )
      return result;
    return 0;
  }
  result = 6;
  if ( a3 == -1 && a1[105] != a2 )
    return 0;
  return result;
}
