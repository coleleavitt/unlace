__int64 __fastcall qopen_shared(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // eax
  unsigned int v7; // ebx

  v3 = (unsigned int)(a3 + 1);
  v4 = a2 & 0xFFFFFDBF;
  if ( (unsigned int)v3 > 3 )
  {
    if ( !under_debugger )
      interr(707);
    BUG();
  }
  v5 = dword_2399BC0[v3];
  v6 = __open64_2();
  v7 = v6;
  if ( v6 == -1 )
  {
    set_qerrno(1, v4);
  }
  else
  {
    if ( !(unsigned int)sub_81B370(v6, v4, v5) )
      return v7;
    qclose(v7);
  }
  return 0xFFFFFFFFLL;
}

