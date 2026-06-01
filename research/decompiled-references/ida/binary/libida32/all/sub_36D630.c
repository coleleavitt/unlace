__int64 __fastcall sub_36D630(_QWORD *a1, __int64 a2)
{
  void *v4; // r12
  const char *v5; // rsi
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rsi

  v4 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v5 = haystack;
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v6 = haystack;
  if ( a1[2] )
    v6 = (const char *)a1[1];
  v7 = qfopen(v6, v5);
  if ( v7 )
  {
    v8 = xmmword_2CA1588;
    if ( !(_QWORD)xmmword_2CA1588 )
    {
      v12 = qword_2CA1580;
      if ( !*((_QWORD *)&xmmword_2CA1588 + 1) )
      {
        qword_2CA1580 = qvector_reserve(&qword_2CA1580, qword_2CA1580, 1, 8);
        v8 = xmmword_2CA1588;
        v12 = qword_2CA1580;
      }
      *(_QWORD *)(v12 + 8 * v8) = 0;
      LODWORD(v8) = xmmword_2CA1588 + 1;
      *(_QWORD *)&xmmword_2CA1588 = xmmword_2CA1588 + 1;
    }
    *(_DWORD *)(a2 + 8) = v8;
    v9 = xmmword_2CA1588;
    v10 = qword_2CA1580;
    if ( *((_QWORD *)&xmmword_2CA1588 + 1) < (unsigned __int64)(xmmword_2CA1588 + 1) )
    {
      qword_2CA1580 = qvector_reserve(&qword_2CA1580, qword_2CA1580, xmmword_2CA1588 + 1, 8);
      v10 = qword_2CA1580;
      v9 = xmmword_2CA1588;
    }
    *(_QWORD *)(v10 + 8 * v9) = v7;
    *(_QWORD *)&xmmword_2CA1588 = xmmword_2CA1588 + 1;
  }
  qmutex_unlock(v4);
  return 0;
}

