bool __fastcall sub_40EC30(_QWORD *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v7; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3 & 0x600;
  v8[1] = __readfsqword(0x28u);
  if ( v4 == 1536 )
  {
    if ( (a3 & 0x10000000) != 0 || a2 == sub_3A1F40((__int64)a1, a2, 30) )
      return 0;
  }
  else if ( a2 == sub_3A1F40((__int64)a1, a2, 30) || v4 )
  {
    return 0;
  }
  v7 = ea2node(a2);
  if ( netnode_supval(v7, 1, v8, 8, 65) > 0 && v8[0]
    || (sub_4F37A0(a1, a2) & 1) != 0
    || (get_aflags(a2) & 0x20000000) != 0 )
  {
    return 0;
  }
  return sub_40E950(a1, a4, a2);
}
