__int64 __fastcall sub_4B4C30(unsigned int a1, __int64 a2, char a3)
{
  if ( qword_2CCBDF0 )
    qmutex_lock(qword_2CCBDF0);
  sub_4B4B80((__int64)&xmmword_2CCBD40, a1, a2, a3);
  if ( qword_2CCBDF0 )
    qmutex_unlock(qword_2CCBDF0);
  return 1;
}
