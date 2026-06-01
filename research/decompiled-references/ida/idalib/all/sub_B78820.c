_QWORD *__fastcall sub_B78820(__int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 144);
  if ( result )
    return (_QWORD *)(*result & 0xFFFFFFFFFFFFFFF8LL);
  return result;
}
