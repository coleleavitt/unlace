__int64 __fastcall sub_3C8200(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax

  v3 = a3 & 0xF;
  if ( (a3 & 8) != 0 )
    return -1;
  v4 = ea2node(a2);
  return netnode_qsupstr(v4, a1, qword_23AD820[v3], 83);
}
