__int64 __fastcall sub_620580(_QWORD *a1, int a2, int a3)
{
  int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // eax

  if ( a3 <= 999 )
  {
    v3 = 1000;
  }
  else if ( a3 > 1999 )
  {
    v4 = a3;
    v3 = 3000;
    if ( a3 > 2999 )
      return v4;
  }
  else
  {
    v3 = 2000;
  }
  v4 = a3;
  do
  {
    v5 = sub_3B90A0(a1, a2);
    if ( netnode_qsupstr(v5, 0, v4, 83) < 0 )
      break;
    ++v4;
  }
  while ( v3 > (int)v4 );
  return v4;
}

