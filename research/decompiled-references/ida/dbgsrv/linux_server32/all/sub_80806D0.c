/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80806D0
// Address: 0x080806D0

//----- (080806D0) --------------------------------------------------------
int __cdecl sub_80806D0(int *a1, char *s2)
{
  int v2; // edi
  int v3; // ebp
  int v5; // ecx
  const char *v6; // eax

  if ( !s2 )
    return -1;
  v2 = a1[1] - 1;
  if ( v2 < 0 )
    return -1;
  v3 = *a1;
  do
  {
    v5 = *(_DWORD *)(v3 + 4 * v2);
    v6 = (const char *)&dword_80DDFD8;
    if ( *(_DWORD *)(v5 + 4) )
      v6 = *(const char **)v5;
    if ( !strcmp(v6, s2) )
      break;
  }
  while ( v2-- != 0 );
  return v2;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
