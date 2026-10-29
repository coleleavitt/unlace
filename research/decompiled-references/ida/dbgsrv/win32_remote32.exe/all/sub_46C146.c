/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C146
// Address: 0x0046C146

//----- (0046C146) --------------------------------------------------------
int __usercall sub_46C146@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  int v4; // eax

  if ( !a3 )
    return sub_46C03C(0);
  if ( sub_46C0E1(a1, a3) )
    return -1;
  if ( (a3[3] & 0x800) != 0 )
  {
    v4 = sub_47631B(a1, a2, (int)a3);
    if ( sub_47A923(a1, a2, v4) )
      return -1;
  }
  return 0;
}
