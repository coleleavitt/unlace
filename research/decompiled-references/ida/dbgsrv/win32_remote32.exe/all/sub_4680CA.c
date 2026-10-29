/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4680CA
// Address: 0x004680CA

//----- (004680CA) --------------------------------------------------------
int __usercall sub_4680CA@<eax>(__m128i a1@<xmm0>, WCHAR SrcStr, int a3)
{
  int result; // eax

  LOBYTE(result) = SrcStr;
  if ( SrcStr >= 0x100u )
    return sub_478518(a1);
  if ( (byte_4A72BA[2 * (unsigned __int8)SrcStr] & 1) != 0 )
    LOBYTE(result) = *(_BYTE *)((unsigned __int8)SrcStr + *(_DWORD *)(*(_DWORD *)a3 + 148));
  return (unsigned __int8)result;
}
