__int64 __fastcall sub_5A56BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1 == a2 )
      break;
    v4 = sub_5A645D(a1);
    sub_5A646B(a3, v4);
    a1 += 16;
  }
  return result;
}
