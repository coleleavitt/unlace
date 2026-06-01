_QWORD *new_tlm_dumper()
{
  _QWORD *result; // rax

  result = (_QWORD *)operator new(8u);
  *result = off_2B12238;
  return result;
}

