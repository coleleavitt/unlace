__int64 __fastcall sub_59A750(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = sub_3BDD60(a1, a2);
  if ( (unsigned __int8)sub_7BE710(a1 + 300, *a1, v2, 4176) )
    return sub_7BE710(a1 + 300, *a1, v2, 65);
  sub_3BEFF0(a1, v4, a2);
  return v4[0];
}
