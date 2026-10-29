/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DB60
// Address: 0x0003DB60

//----- (0003DB60) --------------------------------------------------------
char __cdecl sub_3DB60(int a1, int a2)
{
  int v2; // esi
  _DWORD *i; // edi
  const char *v4; // eax
  char result; // al
  int v6; // eax
  int v7; // edx
  int j; // esi
  unsigned __int8 *v9; // eax
  int v10; // [esp+0h] [ebp-1Ch]

  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20082);
    BUG();
  }
  v2 = 28 * *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  for ( i = (_DWORD *)(*(_DWORD *)(a1 + 4) + 24); ; i += 7 )
  {
    v4 = byte_EF875;
    if ( *(i - 5) )
      v4 = (const char *)*(i - 6);
    if ( !strcmp(v4, "GNU") && *i == 3 )
      break;
    v2 -= 28;
    if ( !v2 )
      return 0;
  }
  v6 = *(i - 2);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v10 = v7;
  if ( *(_DWORD *)(a2 + 8) < (unsigned int)(2 * v7) )
    *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, 2 * v7, 1u);
  result = 1;
  if ( v10 > 0 )
  {
    for ( j = 0; j < v10; ++j )
    {
      v9 = (unsigned __int8 *)dword_F3564;
      if ( j | *(i - 2) )
        v9 = (unsigned __int8 *)(j + *(i - 3));
      sub_31370(a2, "%02x", *v9);
    }
    return 1;
  }
  return result;
}
// F3564: using guessed type int dword_F3564[41];
// 13E34C: using guessed type int under_debugger;
