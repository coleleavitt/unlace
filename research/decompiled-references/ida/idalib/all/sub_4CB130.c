__int64 __fastcall sub_4CB130(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  v4 = *a1;
  v15[1] = __readfsqword(0x28u);
  v6 = 35;
  if ( (unsigned __int8)sub_631AD0(v4, 35) == 10 )
  {
    if ( a2 == -1 || (v4 = a1[303], v6 = a2, (v2 = netnode_altval(v4, a2, 321)) == 0) )
    {
      v2 = a1[304] + 1;
      a1[304] = v2;
      if ( (unsigned __int8)must_journal(v4, v6, v7) )
        add_undo_record(140, 0, 0);
      v8 = sub_3BDD60(a1, a2);
      v9 = a1[303];
      v10 = v8;
      v15[0] = v2;
      netnode_supset(v9, v8, v15, 8, 65, v11);
      v12 = a1[302];
      v15[0] = v10 + 1;
      netnode_supset(v12, v2, v15, 8, 65, v13);
    }
  }
  return v2;
}
