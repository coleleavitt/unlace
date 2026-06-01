/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C4F0
// Address: 0x0004C4F0

//----- (0004C4F0) --------------------------------------------------------
bool __cdecl sub_4C4F0(_DWORD *a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  char *v5; // esi
  char v7[13]; // [esp+Bh] [ebp-Dh] BYREF

  *(_DWORD *)&v7[1] = __readgsdword(0x14u);
  v7[0] = 0;
  if ( a2 < 0 )
  {
    if ( (unsigned int)off_13B614 <= -a2 )
      return 0;
    v5 = off_13B618[-6 * a2 + 4];
    v4 = sub_549D0(off_13B618[-6 * a2 + 2], v7);
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || a1[1] <= (unsigned int)a2 )
      return 0;
    v3 = *(_DWORD *)(*a1 + 4 * a2);
    v4 = *(_DWORD *)(v3 + 12);
    v5 = *(char **)(v3 + 36);
  }
  if ( (int)&v5[a3] >= v4 )
    return v7[0] != 0 || v4 >= a3;
  return 0;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
