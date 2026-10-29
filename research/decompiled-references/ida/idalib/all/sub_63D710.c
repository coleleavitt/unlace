__int64 __fastcall sub_63D710(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r13d
  __int64 i; // rbx
  unsigned __int64 v5; // rax
  __int64 result; // rax

  if ( a3 <= 999 )
  {
    v3 = 1000;
  }
  else if ( a3 > 1999 )
  {
    result = (unsigned int)a3;
    v3 = 3000;
    if ( a3 > 2999 )
      return result;
  }
  else
  {
    v3 = 2000;
  }
  for ( i = a3; ; ++i )
  {
    v5 = sub_3BDD60(a1, a2);
    if ( netnode_qsupstr(v5, 0, i, 83) < 0 )
      return (unsigned int)i;
    if ( v3 <= (int)i + 1 )
      break;
  }
  return (unsigned int)(i + 1);
}
