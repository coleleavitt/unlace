__int64 __fastcall sub_3B9FA0(_QWORD *a1, unsigned int a2)
{
  int v2; // r12d
  unsigned __int8 v3; // bl
  unsigned __int8 v5; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_3B9CB0((__int64)a1, &v5, a2);
  v2 = v5;
  sub_3B9CB0((__int64)a1, &v5, a2 + 1);
  v3 = v5;
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
    return (v2 << 8) | (unsigned int)v3;
  else
    return v2 | (v3 << 8);
}

