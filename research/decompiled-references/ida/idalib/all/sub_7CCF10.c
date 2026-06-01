__int64 __fastcall sub_7CCF10(_QWORD *a1)
{
  __int64 v2; // rbp
  char *v3; // rdi
  char *v4; // rdx

  *a1 = &off_2BFBE40;
  v2 = qword_2CD4720;
  qmutex_lock(qword_2CD4720);
  v3 = (char *)qword_2CD4728;
  v4 = (char *)qword_2CD4728 + 8 * xmmword_2CD4730;
  if ( qword_2CD4728 != v4 )
  {
    while ( a1 != *(_QWORD **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        return qmutex_unlock(v2);
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 8, v4 - v3 - 8);
      *(_QWORD *)&xmmword_2CD4730 = xmmword_2CD4730 - 1;
    }
  }
  return qmutex_unlock(v2);
}
