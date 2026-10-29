__int64 __fastcall sub_3C2F90(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax

  v3 = a3 & 0xF;
  if ( (a3 & 8) != 0 )
    return -1;
  v4 = ea2node(a2);
  return netnode_qsupstr(v4, a1, dword_2389800[v3], 83);
}

