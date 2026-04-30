__int64 __fastcall sub_23D430(__int64 a1, double a2)
{
  if ( !qword_8CC600 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)qthread_same(*((_QWORD *)qword_8CC600 + 8)) )
    return (unsigned __int8)sub_23D2D0((__int64)qword_8CC600, a1, a2);
  return 0xFFFFFFFFLL;
}
