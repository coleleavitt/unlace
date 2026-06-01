__int64 __fastcall sub_49EBA0(unsigned int a1, int a2, __int64 a3, char a4)
{
  unsigned int v6; // ebx

  if ( qword_2CA1EF0 )
    qmutex_lock(qword_2CA1EF0);
  v6 = sub_49E940(&xmmword_2CA1E40, a1, a2, a3, a4);
  if ( qword_2CA1EF0 )
    qmutex_unlock(qword_2CA1EF0);
  return v6;
}

