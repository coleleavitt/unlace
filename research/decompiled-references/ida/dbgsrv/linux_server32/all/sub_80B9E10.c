/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9E10
// Address: 0x080B9E10

//----- (080B9E10) --------------------------------------------------------
int __cdecl sub_80B9E10(int *a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int v7; // edx
  int v8; // edi
  char v9; // cl
  int v10; // eax
  __int64 *v11; // eax

  v4 = 0;
  while ( 1 )
  {
    v5 = a1[v4 + 114];
    if ( a3 != v5 )
    {
      if ( v5 == -1 )
        break;
      goto LABEL_4;
    }
    if ( a2 == a1[v4 + 118] )
      return 0;
    if ( v5 == -1 )
      break;
LABEL_4:
    if ( ++v4 == 4 )
      return 0;
  }
  a1[v4 + 114] = a3;
  v7 = 0;
  a1[v4 + 118] = a2;
  if ( a2 != 8 )
    v7 = a2 << (4 * v4 + 16);
  v8 = 0;
  if ( (unsigned int)(a4 - 2) <= 6 )
    v8 = *((_DWORD *)&qword_811CFF4 + a4 - 62202) << (4 * v4 + 18);
  v9 = 2 * v4;
  v10 = *a1;
  a1[123] |= v8 | v7 | (1 << v9);
  v11 = *(__int64 **)(v10 + 308);
  if ( v11 == (__int64 *)((char *)&qword_811CFF4 - 826356) )
    return 0;
  return ((int (__cdecl *)(int *))v11)(a1);
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
