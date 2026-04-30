__int64 __fastcall sub_59B698(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-28h]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]

  for ( i = 0; i < sub_5986F2(a1 + 160); ++i )
  {
    v4 = **(_QWORD **)sub_59871A(a1 + 160, i);
    if ( a2 >= v4 && a2 - v4 < *(_QWORD *)(*(_QWORD *)sub_59871A(a1 + 160, i) + 8LL) )
      return *(_QWORD *)sub_59871A(a1 + 160, i);
  }
  return 0;
}
