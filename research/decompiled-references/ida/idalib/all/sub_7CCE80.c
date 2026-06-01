__int64 __fastcall sub_7CCE80(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rsi

  *a1 = &off_2BFBE40;
  v1 = qword_2CD4720;
  qmutex_lock(qword_2CD4720);
  v2 = xmmword_2CD4730;
  v3 = qword_2CD4728;
  if ( *((_QWORD *)&xmmword_2CD4730 + 1) < (unsigned __int64)(xmmword_2CD4730 + 1) )
  {
    qword_2CD4728 = (void *)qvector_reserve(&qword_2CD4728, qword_2CD4728, xmmword_2CD4730 + 1, 8);
    v3 = qword_2CD4728;
    v2 = xmmword_2CD4730;
  }
  v3[v2] = a1;
  *(_QWORD *)&xmmword_2CD4730 = xmmword_2CD4730 + 1;
  return qmutex_unlock(v1);
}
