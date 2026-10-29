/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BF10
// Address: 0x0004BF10

//----- (0004BF10) --------------------------------------------------------
int __fastcall sub_4BF10(int a1, char *s)
{
  char *v3; // r0
  int v4; // r6
  char *v5; // r5
  int result; // r0

  v3 = strchr(s, 40);
  if ( !v3 )
    return -1;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = v3;
  *(_DWORD *)(a1 + 4) = v3 + 1;
  *(_BYTE *)(a1 + 608) = 40;
  result = sub_4BD20(a1);
  if ( result >= 0 )
    *v5 = 0;
  *(_DWORD *)(a1 + 4) = v4;
  return result;
}
