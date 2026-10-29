/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4633C0
// Address: 0x004633C0

//----- (004633C0) --------------------------------------------------------
unsigned __int64 __stdcall sub_4633C0(__int64 a1, __int64 a2)
{
  if ( HIDWORD(a1) | HIDWORD(a2) )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}
