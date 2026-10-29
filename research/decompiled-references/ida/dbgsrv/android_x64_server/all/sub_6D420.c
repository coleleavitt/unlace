/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D420
// Address: 0x000000000006D420

//----- (000000000006D420) ----------------------------------------------------
__int64 __fastcall sub_6D420(unsigned __int64 a1)
{
  _OWORD *v2; // rax

  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v2 = operator new(0x80u);
    *(_OWORD *)((char *)v2 + 109) = 0;
    v2[6] = 0;
    v2[5] = 0;
    v2[4] = 0;
    v2[3] = 0;
    v2[2] = 0;
    v2[1] = 0;
    *v2 = 0;
    qword_155820 = (__int64)v2;
    _cxa_guard_release(&byte_155828);
  }
  return sub_6D4B0(qword_155820, a1);
}
// 155820: using guessed type __int64 qword_155820;
