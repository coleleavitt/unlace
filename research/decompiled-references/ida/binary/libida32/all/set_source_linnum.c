unsigned __int64 __fastcall set_source_linnum(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  set_abits(a1, 1);
  v4 = a2 + 1;
  v2 = ea2node((unsigned int)a1);
  netnode_supset(v2, 9, &v4, 4, 65);
  return v5 - __readfsqword(0x28u);
}

