/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B33A
// Address: 0x0047B33A

//----- (0047B33A) --------------------------------------------------------
void __usercall sub_47B33A(int a1@<edi>)
{
  if ( !dword_4B7EC4 )
  {
    sub_47A78B(6);
    if ( !dword_4B7EC4 )
    {
      sub_47B213(a1);
      _InterlockedIncrement(&dword_4B7EC4);
    }
    sub_47A7D3(6);
  }
}
// 4B7EC4: using guessed type int dword_4B7EC4;
