__int64 __fastcall sub_7A9AB0(_QWORD *a1)
{
  __int64 v2; // rbp
  char *v3; // rdi
  char *v4; // rdx

  *a1 = &off_2BD1E40;
  v2 = qword_2CAA800;
  qmutex_lock(qword_2CAA800);
  v3 = (char *)qword_2CAA808;
  v4 = (char *)qword_2CAA808 + 8 * xmmword_2CAA810;
  if ( qword_2CAA808 != v4 )
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
      *(_QWORD *)&xmmword_2CAA810 = xmmword_2CAA810 - 1;
    }
  }
  return qmutex_unlock(v2);
}

