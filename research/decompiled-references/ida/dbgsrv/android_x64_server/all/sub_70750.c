/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70750
// Address: 0x0000000000070750

//----- (0000000000070750) ----------------------------------------------------
char *__fastcall sub_70750(__int64 a1, __int64 a2, char *a3, int a4)
{
  char *v5; // rbp
  int utf8_char; // eax
  int v7; // eax
  char *v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a3;
  v10[1] = (char *)__readfsqword(0x28u);
  for ( v10[0] = a3; ; v5 = v10[0] )
  {
    utf8_char = get_utf8_char(v10);
    if ( utf8_char == -1 )
      utf8_char = *v10[0]++;
    if ( !utf8_char )
      break;
    if ( utf8_char == *(char *)(a1 + 184) )
    {
      v5 = v10[0];
      v7 = get_utf8_char(v10);
      if ( v7 == -1 )
      {
        if ( !*v10[0]++ )
          break;
      }
      else if ( !v7 )
      {
        break;
      }
    }
    else if ( utf8_char == a4 )
    {
      sub_70580(a1, a2, (unsigned __int64)v10[0], *(_DWORD *)(a1 + 124));
      return v10[0];
    }
  }
  sub_70580(a1, a2, (unsigned __int64)v5, *(_DWORD *)(a1 + 176));
  return nullptr;
}
