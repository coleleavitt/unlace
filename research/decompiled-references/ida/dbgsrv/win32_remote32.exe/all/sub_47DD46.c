/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DD46
// Address: 0x0047DD46

//----- (0047DD46) --------------------------------------------------------
const unsigned __int16 *__cdecl sub_47DD46(const unsigned __int16 *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i; i += wcslen(i) + 1 )
    ;
  return i + 1;
}
