bool __fastcall sub_3FBAA0(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned int v7; // eax
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v4 = a3 & 0x600;
  v9 = __readfsqword(0x28u);
  if ( v4 == 1536 )
  {
    if ( (a3 & 0x10000000) != 0 || a2 == (unsigned int)sub_39D100(a1, a2, 30) )
      return 0;
  }
  else if ( a2 == (unsigned int)sub_39D100(a1, a2, 30) || v4 )
  {
    return 0;
  }
  v7 = ea2node(a2);
  if ( netnode_supval(v7, 1, &v8, 4, 65) > 0 && v8
    || (sub_4DC440(a1, a2) & 1) != 0
    || (get_aflags(a2) & 0x20000000) != 0 )
  {
    return 0;
  }
  return sub_3FB7E0(a1, a4, a2);
}

