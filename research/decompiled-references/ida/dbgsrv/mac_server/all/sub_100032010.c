/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032010
// Address: 0x0000000100032010

//----- (0000000100032010) ----------------------------------------------------
__int64 sub_100032010()
{
  _OWORD *v1; // rax

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
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
    qword_1000AE2E0 = (__int64)v1;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  return qword_1000AE2E0;
}
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
