/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452650
// Address: 0x00452650

//----- (00452650) --------------------------------------------------------
int __thiscall sub_452650(int this, int a2)
{
  if ( *(_BYTE *)(this + 124) )
  {
    sub_452400(this);
    DeleteSecurityContext((PCtxtHandle)(this + 60));
    *(_BYTE *)(this + 124) = 0;
  }
  return sub_44D810((_DWORD *)(this + 16), a2);
}
