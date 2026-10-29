/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54240
// Address: 0x00054240

//----- (00054240) --------------------------------------------------------
int __cdecl sub_54240(_DWORD *a1, char *s2)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  const char *v5; // eax
  bool v6; // zf
  char **v7; // eax
  int v8; // edi
  unsigned int v9; // esi
  char **v11; // [esp+4h] [ebp-18h]
  int *v12; // [esp+8h] [ebp-14h]

  if ( !s2 )
    return 0x7FFFFFFF;
  v2 = a1[1];
  v3 = v2;
  do
  {
    if ( --v3 < 0 )
      break;
    v4 = *(_DWORD *)(*a1 + 4 * v2 - 4);
    v5 = byte_EF875;
    if ( *(_DWORD *)(v4 + 4) )
      v5 = *(const char **)v4;
    v6 = strcmp(v5, s2) == 0;
    v2 = v3;
  }
  while ( !v6 );
  v12 = off_13B614;
  if ( !off_13B614 )
    return 0x7FFFFFFF;
  v7 = off_13B618;
  v8 = 0;
  v9 = 0;
  v11 = off_13B618;
  while ( strcmp(v7[v8], s2) )
  {
    ++v9;
    v8 += 6;
    v7 = v11;
    if ( v9 >= (unsigned int)v12 )
      return 0x7FFFFFFF;
  }
  if ( !&v11[v8] )
    return 0x7FFFFFFF;
  v3 = 0x7FFFFFFF;
  if ( v11[v8 + 1] )
    return v8 * 4 / -24;
  return v3;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
