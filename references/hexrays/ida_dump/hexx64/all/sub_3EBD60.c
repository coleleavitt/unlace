_QWORD *__fastcall sub_3EBD60(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *result; // rax

  result = a1;
  if ( a2 < 0 )
  {
    *a1 = 0;
    copy_tinfo_t(a1, a3 + 8LL * -a2 + 200);
    return a1;
  }
  else
  {
    *a1 = (unsigned __int8)a2;
  }
  return result;
}
