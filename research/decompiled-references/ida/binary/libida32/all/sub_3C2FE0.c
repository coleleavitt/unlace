void __fastcall sub_3C2FE0(__int64 a1, char a2, __int64 a3)
{
  unsigned int v4; // eax

  if ( (a2 & 8) == 0 )
  {
    v4 = ea2node(a1);
    netnode_supset(v4, dword_2389800[a2 & 0xF], a3, 0, 83);
  }
}

