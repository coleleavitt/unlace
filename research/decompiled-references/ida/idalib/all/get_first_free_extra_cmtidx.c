__int64 __fastcall get_first_free_extra_cmtidx(__int64 a1, int a2)
{
  _QWORD *v2; // r12
  int v3; // r13d
  __int64 i; // rbx
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( a2 <= 999 )
  {
    v3 = 1000;
  }
  else if ( a2 > 1999 )
  {
    result = (unsigned int)a2;
    v3 = 3000;
    if ( a2 > 2999 )
      return result;
  }
  else
  {
    v3 = 2000;
  }
  for ( i = a2; ; ++i )
  {
    v5 = sub_3BDD60(v2, a1);
    if ( netnode_qsupstr(v5, 0, i, 83) < 0 )
      return (unsigned int)i;
    if ( v3 <= (int)i + 1 )
      break;
  }
  return (unsigned int)(i + 1);
}
