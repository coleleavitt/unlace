/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463600
// Address: 0x00463600

//----- (00463600) --------------------------------------------------------
unsigned __int64 __usercall sub_463600@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}
