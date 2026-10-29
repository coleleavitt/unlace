_QWORD *__fastcall sub_791EB0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *result; // rax

  v2 = *a1;
  v3 = *a1 & 7;
  if ( (_DWORD)v3 == 7 )
  {
    result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
    result[3] = a2;
  }
  else
  {
    result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (_DWORD)v3 == 6 )
      result[1] = a2;
    else
      result[2] = a2;
  }
  return result;
}

