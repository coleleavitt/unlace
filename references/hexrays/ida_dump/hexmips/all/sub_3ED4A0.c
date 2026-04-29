unsigned __int64 __fastcall sub_3ED4A0(_QWORD *a1, unsigned int a2, char a3, double a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax

  v6 = a1[5];
  if ( sub_CBD70(0x58u, v6) != 1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCD9u, v6, a4);
LABEL_14:
    BUG();
  }
  if ( a1[98] != -1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCDAu, v6, a4);
    goto LABEL_14;
  }
  v7 = a1[5];
  v8 = a1[52];
  if ( v7 == v8 && v8 != -1 && !sub_CBD70(0xBC7u) )
    v7 = a1[55];
  v9 = v7;
  v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a3 != 7 )
    v11 = v10;
  return sub_3ECCE0((__int64)a1, v11, a2);
}
