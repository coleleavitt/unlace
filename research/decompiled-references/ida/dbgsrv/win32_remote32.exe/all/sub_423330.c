/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423330
// Address: 0x00423330

//----- (00423330) --------------------------------------------------------
int __thiscall sub_423330(_QWORD *this, int a2)
{
  int result; // eax
  __int128 v3; // xmm1
  __int64 v4; // xmm2_8

  if ( !this || (result = a2) == 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2657);
  }
  v3 = *(_OWORD *)this;
  v4 = *(this + 2);
  *(_OWORD *)this = *(_OWORD *)a2;
  *(this + 2) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a2 = v3;
  *(_QWORD *)(a2 + 16) = v4;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
