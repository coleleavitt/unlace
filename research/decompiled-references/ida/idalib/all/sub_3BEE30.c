__int64 __fastcall sub_3BEE30(_QWORD *a1, unsigned __int64 a2)
{
  int v2; // r12d
  unsigned __int8 v3; // bl
  unsigned __int8 v5; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_3BEB30(a1, &v5, a2);
  v2 = v5;
  sub_3BEB30(a1, &v5, *(_QWORD *)(a1[3] + 16LL) & (a2 + 1));
  v3 = v5;
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
    return (v2 << 8) | (unsigned int)v3;
  else
    return v2 | (v3 << 8);
}
