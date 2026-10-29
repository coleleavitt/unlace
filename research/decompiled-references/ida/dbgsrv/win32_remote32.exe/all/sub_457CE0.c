/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457CE0
// Address: 0x00457CE0

//----- (00457CE0) --------------------------------------------------------
int *__cdecl sub_457CE0(int a1)
{
  int v1; // ebp
  int *v2; // ecx
  unsigned int i; // eax
  int v4; // eax
  int v6; // ebx
  int *v7; // ebx
  char *v8; // esi
  unsigned int v9; // eax

  v1 = dword_4B74E0;
  v2 = dword_4B7360;
  ++dword_4B74E0;
  for ( i = 0; i < 6; ++i )
  {
    if ( *v2 == a1 )
    {
      v9 = i << 6;
      *(int *)((char *)dword_4B7364 + v9) = v1;
      return (int *)((char *)dword_4B7368 + v9);
    }
    v2 += 16;
  }
  v4 = dword_4B5CF0;
  if ( dword_4B5CF0 < 0 )
  {
    v4 = 0;
    if ( dword_4B50B0[0] != 37 )
    {
      do
        ++v4;
      while ( dword_4B50B0[2 * v4] != 37 );
    }
    dword_4B5CF0 = v4;
  }
  if ( !(&off_4B50B4)[2 * v4] )
    return nullptr;
  while ( dword_4B50B0[2 * v4] != a1 )
  {
    ++v4;
    if ( !(&off_4B50B4)[2 * v4] )
      return nullptr;
  }
  v6 = (unsigned int)dword_4B73A4 < dword_4B7364[0];
  if ( dword_4B73E4 < (unsigned int)dword_4B7364[16 * v6] )
    v6 = 2;
  if ( dword_4B7424 < (unsigned int)dword_4B7364[16 * v6] )
    v6 = 3;
  if ( dword_4B7464 < (unsigned int)dword_4B7364[16 * v6] )
    v6 = 4;
  if ( dword_4B74A4 < (unsigned int)dword_4B7364[16 * v6] )
    v6 = 5;
  v7 = &dword_4B7360[16 * v6];
  *v7 = a1;
  v8 = (&off_4B50B4)[2 * v4];
  sub_45ACB0((unsigned int)(v7 + 2), v8, 28);
  sub_45ACB0((unsigned int)(v7 + 9), v8, 28);
  v7[1] = v1;
  return v7 + 2;
}
// 4B50B0: using guessed type int dword_4B50B0[];
// 4B50B4: using guessed type char *off_4B50B4;
// 4B5CF0: using guessed type int dword_4B5CF0;
// 4B7360: using guessed type int dword_4B7360[];
// 4B7364: using guessed type int dword_4B7364[];
// 4B7368: using guessed type int dword_4B7368[7];
// 4B73A4: using guessed type int dword_4B73A4;
// 4B73E4: using guessed type int dword_4B73E4;
// 4B7424: using guessed type int dword_4B7424;
// 4B7464: using guessed type int dword_4B7464;
// 4B74A4: using guessed type int dword_4B74A4;
// 4B74E0: using guessed type int dword_4B74E0;
