unsigned __int64 __fastcall sub_665C50(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int *v4; // rax
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  int v7; // r13d
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = sub_4EE820(a1 + 1552, a2);
  if ( v4 )
  {
    v5 = v4;
    v6 = ea2node(*v4);
    if ( netnode_supval(v6, 10, &v11, 4, 65) > 0 )
    {
      v7 = v11;
      if ( v11 )
      {
        v8 = ea2node(*v5);
        netnode_supdel(v8, 10, 65);
        v11 = v7;
        v9 = ea2node(a3);
        netnode_supset(v9, 10, &v11, 4, 65);
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

