__int64 __fastcall sub_73BD0(_QWORD *a1)
{
  __int64 v2; // rbp
  char *v3; // rdi
  char *v4; // rdx

  *a1 = &off_164AB8;
  v2 = qword_165A20;
  sub_98400(qword_165A20);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 8 * xmmword_165A30;
  if ( ptr != v4 )
  {
    while ( a1 != *(_QWORD **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        return sub_98450(v2);
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 8, v4 - v3 - 8);
      *(_QWORD *)&xmmword_165A30 = xmmword_165A30 - 1;
    }
  }
  return sub_98450(v2);
}

