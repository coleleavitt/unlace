__int64 __fastcall sub_598958(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1 == a2 )
      break;
    v4 = sub_598C65(a1);
    sub_598C73(a3, v4);
    ++a1;
  }
  return result;
}
