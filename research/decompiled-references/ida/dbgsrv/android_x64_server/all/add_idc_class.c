/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x000000000006D710

//----- (000000000006D710) ----------------------------------------------------
char *__fastcall add_idc_class(const char *a1, __int64 a2)
{
  _OWORD *v3; // rax

  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
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
    qword_155820 = (__int64)v3;
    _cxa_guard_release(&byte_155828);
  }
  return sub_6D7B0(qword_155820, a1, a2);
}
// 155820: using guessed type __int64 qword_155820;
