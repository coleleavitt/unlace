__int64 __fastcall sub_4B4410(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rdi
  unsigned int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v2 = 0;
  v4 = *a1;
  v15 = __readfsqword(0x28u);
  v6 = 35;
  if ( (unsigned __int8)sub_614FB0(v4, 35) == 10 )
  {
    if ( a2 == -1 || (v4 = *((unsigned int *)a1 + 583), v6 = a2, v8 = netnode_altval(v4, a2, 321), (v2 = v8) == 0) )
    {
      v2 = a1[292] + 1;
      a1[292] = v2;
      if ( (unsigned __int8)must_journal(v4, v6, v7) )
        add_undo_record(140, 0, 0);
      v9 = sub_3B90A0(a1, a2);
      v10 = *((unsigned int *)a1 + 583);
      v11 = v9;
      v14 = v2;
      netnode_supset(v10, v9, &v14, 4, 65);
      v12 = *((unsigned int *)a1 + 582);
      v14 = v11 + 1;
      netnode_supset(v12, (unsigned int)v2, &v14, 4, 65);
    }
  }
  return v2;
}

