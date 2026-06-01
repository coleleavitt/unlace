void __fastcall sub_3C82A0(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rdi

  if ( (a3 & 8) == 0 )
  {
    v5 = a2;
    if ( a2 != -1 )
      v5 = sub_3B9DC0(a1, a2);
    netnode_supdel(v5, qword_23AD820[a3 & 0xF], 83);
  }
}
