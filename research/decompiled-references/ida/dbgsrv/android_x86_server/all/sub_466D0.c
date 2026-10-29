/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466D0
// Address: 0x000466D0

//----- (000466D0) --------------------------------------------------------
unsigned int __cdecl sub_466D0(_DWORD *a1, char *s2)
{
  unsigned int result; // eax
  _DWORD *v3; // esi
  unsigned int v4; // edi
  const char *v5; // eax
  unsigned int v6; // [esp+8h] [ebp-14h]

  result = -1;
  v6 = a1[1];
  if ( v6 )
  {
    v3 = (_DWORD *)(*a1 + 4);
    v4 = 0;
    while ( 1 )
    {
      v5 = byte_EF875;
      if ( *v3 )
        v5 = (const char *)*(v3 - 1);
      if ( !strcmp(v5, s2) )
        break;
      ++v4;
      v3 += 3;
      if ( v4 >= v6 )
        return -1;
    }
    return v4;
  }
  return result;
}
