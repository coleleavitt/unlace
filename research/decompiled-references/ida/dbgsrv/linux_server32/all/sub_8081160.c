/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081160
// Address: 0x08081160

//----- (08081160) --------------------------------------------------------
int __cdecl sub_8081160(char *s, _BYTE *a2)
{
  __int64 i; // rax

  for ( i = strlen(s); (_DWORD)i; LODWORD(i) = i - 1 )
  {
    if ( s[(_DWORD)i - 1] != 4 )
      break;
    BYTE4(i) = 1;
  }
  if ( a2 )
    *a2 = BYTE4(i);
  return i;
}
