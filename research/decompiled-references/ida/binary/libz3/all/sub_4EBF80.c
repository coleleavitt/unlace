_QWORD *__fastcall sub_4EBF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = nullptr;
  if ( a1 == *(_QWORD *)(a2 + 8) && a1 == *(_QWORD *)(a3 + 8) && (!a4 || a1 == *(_QWORD *)(a4 + 8)) )
  {
    result = (_QWORD *)sub_186B270(8u);
    *result = off_1C4FE60;
  }
  return result;
}

