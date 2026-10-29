__int64 __fastcall sub_7A9A20(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rsi

  *a1 = &off_2BD1E40;
  v1 = qword_2CAA800;
  qmutex_lock(qword_2CAA800);
  v2 = xmmword_2CAA810;
  v3 = qword_2CAA808;
  if ( *((_QWORD *)&xmmword_2CAA810 + 1) < (unsigned __int64)(xmmword_2CAA810 + 1) )
  {
    qword_2CAA808 = (void *)qvector_reserve(&qword_2CAA808, qword_2CAA808, xmmword_2CAA810 + 1, 8);
    v3 = qword_2CAA808;
    v2 = xmmword_2CAA810;
  }
  v3[v2] = a1;
  *(_QWORD *)&xmmword_2CAA810 = xmmword_2CAA810 + 1;
  return qmutex_unlock(v1);
}

