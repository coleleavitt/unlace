_QWORD *__fastcall sub_546220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = nullptr;
  if ( a1 == *(_QWORD *)(a2 + 8) && (!a4 || a1 == *(_QWORD *)(a4 + 8)) )
  {
    if ( a1 == *(_QWORD *)(a3 + 8) )
    {
      result = (_QWORD *)sub_186B270(0x10u);
      *result = &off_1C50A98;
    }
    else
    {
      result = (_QWORD *)sub_186B270(0x10u);
      *result = &off_1C50AC0;
    }
    result[1] = 0;
  }
  return result;
}

