void __fastcall sub_3C8250(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rax
  __int64 v10; // r9

  if ( (a2 & 8) == 0 )
  {
    v9 = ea2node(a1);
    netnode_supset(v9, qword_23AD820[a2 & 0xF], a3, 0, 83, v10, a7, a8);
  }
}
