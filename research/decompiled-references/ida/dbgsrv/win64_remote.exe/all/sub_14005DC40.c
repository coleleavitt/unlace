/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DC40
// Address: 0x000000014005DC40

//----- (000000014005DC40) ----------------------------------------------------
bool __fastcall sub_14005DC40(unsigned __int8 *a1)
{
  _BYTE *v1; // rbx

  v1 = a1;
  if ( a1[1] == 58 && (unsigned int)(tolower(*a1) - 97) <= 0x19 )
    v1 += 2;
  return *v1 == 47 || *v1 == 92;
}
