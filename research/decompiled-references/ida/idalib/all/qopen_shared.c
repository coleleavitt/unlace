__int64 __fastcall qopen_shared(__int64 a1, char a2, int a3)
{
  __int64 v3; // rdx
  char v4; // si
  int v5; // r12d
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v3 = (unsigned int)(a3 + 1);
  v4 = a2 & 0xBF;
  if ( (unsigned int)v3 > 3 )
  {
    if ( !under_debugger )
      interr(707);
    BUG();
  }
  v5 = dword_23BDD20[v3];
  v6 = __open64_2();
  v7 = v6;
  if ( v6 == -1 )
  {
    set_qerrno(1);
  }
  else
  {
    if ( !(unsigned int)sub_83E730(v6, v4, v5) )
      return v7;
    qclose(v7);
  }
  return 0xFFFFFFFFLL;
}
