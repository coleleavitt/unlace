__int64 __fastcall sub_674F40(
        char **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        const char *a5,
        const char *a6)
{
  __int64 v6; // r15
  __int64 v12; // rax
  __int64 v13; // r14

  if ( !a2 || *(char *)(a2 + 17) < 0 || a3 >= a4 && a3 != -1 )
    return 0;
  sub_674A10(a1, a2);
  v12 = *(int *)(a2 + 80);
  v6 = *(_QWORD *)(a2 + 88);
  if ( (int)v12 <= 0 )
    return 0;
  v13 = v6 + 40 * v12;
LABEL_9:
  if ( a3 != -1 )
  {
    do
    {
LABEL_10:
      if ( *(_QWORD *)v6 >= a4 )
        break;
      if ( a3 < *(_QWORD *)(v6 + 8) )
        goto LABEL_12;
      v6 += 40;
    }
    while ( v6 != v13 );
    return 0;
  }
LABEL_12:
  if ( (unsigned __int64)a6 | (unsigned __int64)a5 )
  {
    while ( !a5 || strcasecmp(*(const char **)(v6 + 16), a5) )
    {
      if ( !a6 )
      {
        v6 += 40;
        if ( v6 != v13 )
          goto LABEL_9;
        return 0;
      }
      if ( !strcasecmp(*(const char **)(v6 + 24), a6) )
        return v6;
      v6 += 40;
      if ( v6 == v13 )
        return 0;
      if ( a3 != -1 )
        goto LABEL_10;
    }
  }
  else
  {
    while ( *(_QWORD *)v6 < a3 )
    {
      v6 += 40;
      if ( v13 == v6 )
        return 0;
      if ( a3 != -1 )
        goto LABEL_10;
    }
  }
  return v6;
}
