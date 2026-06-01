unsigned __int64 sub_5226A0()
{
  __int64 *v0; // rbx
  unsigned __int64 result; // rax
  __int64 *v2; // rbp
  __int64 v3; // rax

  v0 = (__int64 *)qword_8D2500;
  result = xmmword_8D2508;
  v2 = (__int64 *)(qword_8D2500 + 8 * xmmword_8D2508);
  if ( v2 != (__int64 *)qword_8D2500 )
  {
    do
    {
      v3 = *v0++;
      result = sub_4E4640((_DWORD *)(v3 + 304), 7u, 0);
    }
    while ( v2 != v0 );
  }
  return result;
}
