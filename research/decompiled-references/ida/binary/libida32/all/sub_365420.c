__int64 __fastcall sub_365420(__int64 a1)
{
  void *v1; // rbp
  unsigned __int64 v2; // rbx
  __int64 i; // rax

  v1 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v2 = *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( v2 < (unsigned __int64)xmmword_2CA1588 )
    {
      qfclose(*(_QWORD *)(qword_2CA1580 + 8 * v2));
      *(_QWORD *)(qword_2CA1580 + 8 * v2) = 0;
      for ( i = xmmword_2CA1588; i; *(_QWORD *)&xmmword_2CA1588 = --i )
      {
        if ( *(_QWORD *)(qword_2CA1580 + 8 * i - 8) )
          break;
      }
    }
  }
  qmutex_unlock(v1);
  return 0;
}

