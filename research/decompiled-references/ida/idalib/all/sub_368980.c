__int64 __fastcall sub_368980(__int64 a1)
{
  void *v1; // rbp
  unsigned __int64 v2; // rbx
  __int64 i; // rax

  v1 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 < (unsigned __int64)xmmword_2CCB488 )
    {
      qfclose(*(_QWORD *)(qword_2CCB480 + 8 * v2));
      *(_QWORD *)(qword_2CCB480 + 8 * v2) = 0;
      for ( i = xmmword_2CCB488; i; *(_QWORD *)&xmmword_2CCB488 = --i )
      {
        if ( *(_QWORD *)(qword_2CCB480 + 8 * i - 8) )
          break;
      }
    }
  }
  qmutex_unlock(v1);
  return 0;
}
