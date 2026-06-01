_QWORD *__fastcall sub_B502A0(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_B50190(a1);
  if ( result )
    return (_QWORD *)(*result & 0xFFFFFFFFFFFFFFF8LL);
  return result;
}

