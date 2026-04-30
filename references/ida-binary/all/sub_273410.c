_QWORD *__fastcall sub_273410(__int64 a1)
{
  _QWORD *result; // rax
  int v2; // edx

  result = (_QWORD *)sub_277DF0();
  if ( result )
  {
    result = (_QWORD *)result[14];
    if ( result )
    {
      v2 = *(_DWORD *)(a1 + 64);
      if ( v2 )
      {
        if ( v2 == 1 )
          return (_QWORD *)result[8];
        else
          return (_QWORD *)result[9];
      }
      else
      {
        return (_QWORD *)result[7];
      }
    }
  }
  return result;
}
