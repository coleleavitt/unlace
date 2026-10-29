__int64 __fastcall sub_4B40E0(unsigned int a1, int a2, __int64 a3, char a4)
{
  unsigned int v6; // ebx

  if ( qword_2CCBDF0 )
    qmutex_lock(qword_2CCBDF0);
  v6 = sub_4B3E80(&xmmword_2CCBD40, a1, a2, a3, a4);
  if ( qword_2CCBDF0 )
    qmutex_unlock(qword_2CCBDF0);
  return v6;
}
