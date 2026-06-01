__int64 __fastcall sub_59B77E(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0; i < sub_5986F2(a1 + 160); ++i )
  {
    if ( a2 >= *(_QWORD *)(*(_QWORD *)sub_59871A(a1 + 160, i) + 16LL)
      && a2 < *(_QWORD *)(*(_QWORD *)sub_59871A(a1 + 160, i) + 24LL) )
    {
      return *(_QWORD *)sub_59871A(a1 + 160, i);
    }
  }
  return 0;
}
