const char *__fastcall sub_3A9640(__int64 a1, int a2)
{
  const char *result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdx

  result = &byte_22F0C30;
  if ( a2 > 0 )
  {
    v3 = *(_QWORD *)(qword_2CCB598 + 1576);
    if ( (unsigned __int64)a2 < *(_QWORD *)(v3 + 224) )
    {
      v4 = (_QWORD *)(*(_QWORD *)(v3 + 216) + 24LL * a2);
      result = haystack;
      if ( v4[1] )
        return (const char *)*v4;
    }
  }
  return result;
}
