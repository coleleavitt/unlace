_QWORD *__fastcall sub_B87600(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax

  v1 = 0;
  sub_B85DB0(a1);
  for ( result = (_QWORD *)a1; ; result[15] = v2 )
  {
    if ( (result[11] & 3) != 0 )
    {
      if ( v1 )
        return result;
      v1 = 1;
    }
    result = sub_A557A0(result + 11, (__int64)result, v2, v3, v4, v5);
    if ( (_QWORD *)a1 == result || !result )
      break;
    v2 = *(_QWORD *)(a1 + 120);
  }
  return result;
}

