/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033F10
// Address: 0x0000000100033F10

//----- (0000000100033F10) ----------------------------------------------------
__int64 __fastcall sub_100033F10(unsigned __int64 a1)
{
  _OWORD *v2; // rax

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
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
    qword_1000AE2E0 = (__int64)v2;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  return sub_100033FB0(qword_1000AE2E0, a1);
}
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
