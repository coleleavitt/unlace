/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F750
// Address: 0x0040F750

//----- (0040F750) --------------------------------------------------------
void __userpurge sub_40F750(__m128i a1@<xmm0>, _DWORD *a2)
{
  unsigned int i; // edi

  if ( !a2[50] && (a2[84] & 0x80000) != 0 && !sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  sub_40CD70((int)a2, a1);
  for ( i = 0; i < a2[182]; ++i )
    sub_401690(*(void **)(a2[181] + 4 * i));
  sub_4188A0(a2);
}
// 4B70F0: using guessed type char byte_4B70F0;
