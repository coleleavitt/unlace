__int64 __fastcall sub_4B45E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 )
    return sub_4B44B0((_QWORD *)(*(_QWORD *)(a1 + 1712) + 8LL), a2);
  if ( qword_2CCBDF0 )
    qmutex_lock(qword_2CCBDF0);
  v3 = sub_4B44B0(&xmmword_2CCBD40, a2);
  if ( qword_2CCBDF0 )
    qmutex_unlock(qword_2CCBDF0);
  return v3;
}
