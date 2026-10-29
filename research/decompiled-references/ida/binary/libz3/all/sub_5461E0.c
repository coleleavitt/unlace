_QWORD *__fastcall sub_5461E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = nullptr;
  if ( a1 == *(_QWORD *)(a2 + 8) && a1 == *(_QWORD *)(a3 + 8) )
  {
    result = (_QWORD *)sub_186B270(8u);
    *result = off_1C50B20;
  }
  return result;
}

