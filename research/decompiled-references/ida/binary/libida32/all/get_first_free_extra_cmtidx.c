__int64 __fastcall get_first_free_extra_cmtidx(int a1, int a2)
{
  _QWORD *v2; // r12
  int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a2 <= 999 )
  {
    v3 = 1000;
  }
  else if ( a2 > 1999 )
  {
    v4 = a2;
    v3 = 3000;
    if ( a2 > 2999 )
      return v4;
  }
  else
  {
    v3 = 2000;
  }
  v4 = a2;
  do
  {
    v5 = sub_3B90A0(v2, a1);
    if ( netnode_qsupstr(v5, 0, v4, 83) < 0 )
      break;
    ++v4;
  }
  while ( v3 > (int)v4 );
  return v4;
}

