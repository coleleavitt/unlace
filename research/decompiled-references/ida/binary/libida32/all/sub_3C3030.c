void __fastcall sub_3C3030(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebp

  if ( (a3 & 8) == 0 )
  {
    v3 = a2;
    if ( a2 != -1 )
      v3 = sub_614FB0(*a1, 29) + a2;
    netnode_supdel(v3, dword_2389800[a3 & 0xF], 83);
  }
}

