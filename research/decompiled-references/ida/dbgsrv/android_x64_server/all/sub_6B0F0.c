/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B0F0
// Address: 0x000000000006B0F0

//----- (000000000006B0F0) ----------------------------------------------------
__int64 sub_6B0F0()
{
  _OWORD *v1; // rax

  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v1 = operator new(0x80u);
    *(_OWORD *)((char *)v1 + 109) = 0;
    v1[6] = 0;
    v1[5] = 0;
    v1[4] = 0;
    v1[3] = 0;
    v1[2] = 0;
    v1[1] = 0;
    *v1 = 0;
    qword_155820 = (__int64)v1;
    _cxa_guard_release(&byte_155828);
  }
  return qword_155820;
}
// 155820: using guessed type __int64 qword_155820;
