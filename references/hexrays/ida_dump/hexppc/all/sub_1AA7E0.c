__int64 __fastcall sub_1AA7E0(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // eax

  result = a1[1];
  if ( result != -1 )
  {
    v2 = result & 7;
    if ( v2 > 2 )
      sub_1AA590();
    return sub_3267B0(*a1, (unsigned int)(v2 + 41));
  }
  return result;
}
