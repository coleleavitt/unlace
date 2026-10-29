__int64 __fastcall sub_580C60(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = sub_3B90A0(a1, a2);
  if ( (unsigned __int8)sub_79B3A0(a1 + 289, *a1, v2, 4176) )
    return (unsigned int)sub_79B3A0(a1 + 289, *a1, v2, 65);
  sub_3BA160(a1, v4, a2);
  return v4[0];
}

