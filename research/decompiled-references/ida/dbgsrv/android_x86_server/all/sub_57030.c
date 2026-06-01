/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57030
// Address: 0x00057030

//----- (00057030) --------------------------------------------------------
char *__cdecl sub_57030(int a1, int a2, char *a3, char a4)
{
  unsigned int v4; // edi
  int utf8_char; // eax
  int v6; // eax
  int v9; // [esp+4h] [ebp-18h]

  v4 = (unsigned int)a3;
  v9 = a4;
  while ( 1 )
  {
    utf8_char = get_utf8_char(&a3);
    if ( utf8_char == -1 )
      utf8_char = *a3++;
    if ( !utf8_char )
      break;
    if ( utf8_char == *(char *)(a1 + 104) )
    {
      v4 = (unsigned int)a3;
      v6 = get_utf8_char(&a3);
      if ( v6 == -1 )
      {
        if ( !*a3++ )
          break;
      }
      else if ( !v6 )
      {
        break;
      }
    }
    else if ( utf8_char == v9 )
    {
      sub_56E70(a1, a2, (unsigned int)a3, *(_DWORD *)(a1 + 68));
      return a3;
    }
    v4 = (unsigned int)a3;
  }
  sub_56E70(a1, a2, v4, *(_DWORD *)(a1 + 96));
  return nullptr;
}
