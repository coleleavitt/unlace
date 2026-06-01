__int64 __fastcall sub_4FAE20(const char *a1, unsigned __int8 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r13

  v2 = (__int64 *)qword_8D2310;
  v3 = (__int64 *)(qword_8D2310 + 8 * xmmword_8D2318);
  if ( v3 == (__int64 *)qword_8D2310 )
    return 0;
  while ( !(unsigned __int8)sub_4FACD0(*v2, a1, a2) )
  {
    if ( v3 == ++v2 )
      return 0;
  }
  return *v2;
}
