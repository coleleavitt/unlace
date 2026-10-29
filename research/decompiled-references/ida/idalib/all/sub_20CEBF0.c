__int64 __fastcall sub_20CEBF0(__int64 a1)
{
  char *v1; // rax
  unsigned int v2; // r10d
  char *v4; // rax
  _QWORD *v5; // r9
  char *v6; // rax

  v1 = *(char **)a1;
  v2 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 )
    return 1;
  if ( *v1 == 104 )
  {
    *(_QWORD *)a1 = v1 + 1;
    if ( !sub_20CEB80((char **)a1, 1) )
      return v2;
    v6 = *(char **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v6 != 95 )
      return v2;
    goto LABEL_12;
  }
  if ( *v1 != 118 )
    return v2;
  *(_QWORD *)a1 = v1 + 1;
  if ( sub_20CEB80((char **)a1, 1) )
  {
    v4 = *(char **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v4 == 95 )
    {
      *(_QWORD *)a1 = v4 + 1;
      if ( sub_20CEB80((char **)a1, 1) )
      {
        v6 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v6 == 95 )
        {
LABEL_12:
          v2 = 0;
          *v5 = v6 + 1;
          return v2;
        }
      }
    }
  }
  return 1;
}
