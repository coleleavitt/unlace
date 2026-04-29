__int64 __fastcall sub_1A9520(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // eax

  result = a1[1];
  if ( result != -1 )
  {
    v2 = result & 7;
    if ( v2 > 2 )
      sub_1A92D0();
    return sub_325070(*a1, (unsigned int)(v2 + 41));
  }
  return result;
}
