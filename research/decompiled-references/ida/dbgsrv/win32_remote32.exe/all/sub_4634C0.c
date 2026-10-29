/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4634C0
// Address: 0x004634C0

//----- (004634C0) --------------------------------------------------------
int __usercall sub_4634C0@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  __int64 v2; // rax

  if ( a2 >= 0x40u )
  {
    LODWORD(v2) = 0;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(v2) = 0;
  }
  else
  {
    return a1 << (a2 & 0x1F);
  }
  return v2;
}
