/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A629
// Address: 0x0047A629

//----- (0047A629) --------------------------------------------------------
bool __usercall sub_47A629@<al>(int a1@<ebx>, int a2@<edi>, int *a3)
{
  int v3; // eax
  bool result; // al

  result = true;
  if ( a3 != sub_46953A(2) )
  {
    if ( a3 != sub_46953A(1) )
      return false;
    v3 = sub_47631B(a1, a2, (int)a3);
    if ( !sub_47C24A(a1, a2, v3) )
      return false;
  }
  return result;
}
