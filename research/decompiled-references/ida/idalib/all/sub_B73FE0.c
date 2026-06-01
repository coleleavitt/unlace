_QWORD *__fastcall sub_B73FE0(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_B73ED0(a1);
  if ( result )
    return (_QWORD *)(*result & 0xFFFFFFFFFFFFFFF8LL);
  return result;
}
