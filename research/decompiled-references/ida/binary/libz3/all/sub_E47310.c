_QWORD *__fastcall sub_E47310(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_186B270(0x10u);
  *result = &off_1C5CDC8;
  result[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  return result;
}

