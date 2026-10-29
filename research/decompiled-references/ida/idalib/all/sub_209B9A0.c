__int64 __fastcall sub_209B9A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  int v4; // eax

  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 == a2 + 24 )
    return 0;
  v3 = 0;
  do
  {
    while ( v2 )
    {
      v4 = sub_209B410(a1, v2 - 56);
      v2 = *(_QWORD *)(v2 + 8);
      v3 |= v4;
      if ( v2 == a2 + 24 )
        return v3;
    }
    v2 = 0;
    v3 |= sub_209B410(a1, 0);
  }
  while ( a2 != -24 );
  return v3;
}
