/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_enum_macros
// Address: 0x0004F15C

//----- (0004F15C) --------------------------------------------------------
int __fastcall lex_enum_macros(int a1, int (__fastcall *a2)(int *, char *, _DWORD, _DWORD, int), int a3)
{
  int *v3; // r7
  int result; // r0
  int *v5; // r0
  char *v6; // r1

  v3 = *(int **)(*(_DWORD *)(a1 + 464) + 8);
  result = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *((unsigned __int8 *)v3 + 8) << 31 ? (int *)v3[4] : (int *)((char *)v3 + 9);
      v6 = &byte_B3CBE;
      if ( v3[6] )
        v6 = (char *)v3[5];
      result = a2(v5, v6, *((unsigned __int8 *)v3 + 32), *((unsigned __int8 *)v3 + 33), a3);
      if ( result )
        break;
      v3 = (int *)*v3;
      if ( !v3 )
        return 0;
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
