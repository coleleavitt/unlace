__int64 __fastcall sub_10053D0(char a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = __tls_get_addr();
  if ( !*(_QWORD *)(result + 264) || a1 )
  {
    v2 = sub_22727C0(&stru_2C4D838);
    result = __tls_get_addr();
    *(_QWORD *)(result + 264) = v2;
  }
  return result;
}

