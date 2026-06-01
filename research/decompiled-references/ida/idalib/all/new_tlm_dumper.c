_QWORD *new_tlm_dumper()
{
  _QWORD *result; // rax

  result = (_QWORD *)operator new(8u);
  *result = off_2B3C1D8;
  return result;
}
