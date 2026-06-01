/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EB8
// Address: 0x00042EB8

//----- (00042EB8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_42EB8(int a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v5; // r7
  int utf8_char; // r0
  int v8; // r0
  unsigned __int8 *i; // [sp+10h] [bp-8h] BYREF

  v5 = a3;
  for ( i = a3; ; v5 = i )
  {
    utf8_char = get_utf8_char(&i);
    if ( utf8_char == -1 )
      utf8_char = *i++;
    if ( !utf8_char )
      break;
    if ( utf8_char == *(unsigned __int8 *)(a1 + 104) )
    {
      v5 = i;
      v8 = get_utf8_char(&i);
      if ( v8 == -1 )
      {
        if ( !*i++ )
          break;
      }
      else if ( !v8 )
      {
        break;
      }
    }
    else if ( utf8_char == a4 )
    {
      sub_42DA4(a1, a2, (unsigned int)i, *(_DWORD *)(a1 + 68));
      return i;
    }
  }
  sub_42DA4(a1, a2, (unsigned int)v5, *(_DWORD *)(a1 + 96));
  return nullptr;
}
