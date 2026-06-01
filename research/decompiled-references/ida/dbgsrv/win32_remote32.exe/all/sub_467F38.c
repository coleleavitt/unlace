/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467F38
// Address: 0x00467F38

//----- (00467F38) --------------------------------------------------------
void __usercall __noreturn sub_467F38(int a1@<ebx>, int *a2@<edi>, int a3@<esi>)
{
  if ( sub_46C395() )
    sub_46C3DA(a2, 22);
  if ( (byte_4B5E60 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    sub_467D48(a1, (int)a2, a3, 3, 0x140000015LL);
  }
  sub_46BC59(3u);
  JUMPOUT(0x467F7B);
}
// 467F76: control flows out of bounds to 467F7B
// 4B5E60: using guessed type char byte_4B5E60;
