/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x0000000100034200

//----- (0000000100034200) ----------------------------------------------------
char *__fastcall add_idc_class(const char *a1, __int64 a2)
{
  _OWORD *v3; // rax

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v3 = operator new(0x80u);
    *(_OWORD *)((char *)v3 + 109) = 0;
    v3[6] = 0;
    v3[5] = 0;
    v3[4] = 0;
    v3[3] = 0;
    v3[2] = 0;
    v3[1] = 0;
    *v3 = 0;
    qword_1000AE2E0 = (__int64)v3;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  return sub_1000342A0((_QWORD *)qword_1000AE2E0, a1, a2);
}
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
