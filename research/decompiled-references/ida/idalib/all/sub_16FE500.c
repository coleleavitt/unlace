_QWORD *__fastcall sub_16FE500(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !result )
    return nullptr;
  if ( (*a1 & 4) != 0 )
    return (_QWORD *)(*result | 4LL);
  return result;
}
