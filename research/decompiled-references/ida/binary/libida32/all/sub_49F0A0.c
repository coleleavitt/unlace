__int64 __fastcall sub_49F0A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 )
    return sub_49EF70((_QWORD *)(*(_QWORD *)(a1 + 1520) + 8LL), a2);
  if ( qword_2CA1EF0 )
    qmutex_lock(qword_2CA1EF0);
  v3 = sub_49EF70(&xmmword_2CA1E40, a2);
  if ( qword_2CA1EF0 )
    qmutex_unlock(qword_2CA1EF0);
  return v3;
}

