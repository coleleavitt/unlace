_QWORD *__fastcall sub_4FF530(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)(a2 + 8) != a1 )
    return nullptr;
  result = (_QWORD *)sub_186B270(8u);
  *result = off_1C50398;
  return result;
}

