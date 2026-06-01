__int64 __fastcall sub_1029110(char a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = __tls_get_addr(&stru_2C77838);
  if ( !*(_QWORD *)(result + 264) || a1 )
  {
    v2 = sub_2296500();
    result = __tls_get_addr(&stru_2C77838);
    *(_QWORD *)(result + 264) = v2;
  }
  return result;
}
