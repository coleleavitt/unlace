/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4772B3
// Address: 0x004772B3

//----- (004772B3) --------------------------------------------------------
int __cdecl sub_4772B3(uintptr_t *a1)
{
  uintptr_t v2; // eax

  if ( !a1 )
    return -1;
  if ( *a1 == a1[2] )
  {
    v2 = __security_cookie;
    *a1 = __security_cookie;
    a1[1] = v2;
    a1[2] = v2;
  }
  return 0;
}
