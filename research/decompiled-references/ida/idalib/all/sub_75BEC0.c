__int64 __fastcall sub_75BEC0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  char *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = (unsigned int)sub_75A2F0(a1, v7);
  sub_76E7B0(qword_2CD44C0);
  qword_2CD44C0 -= v1;
  if ( a1 )
    v5 = sub_75B1C0(nullptr, 0, 0, v3, v4);
  else
    v5 = sub_75AB60(nullptr, (char *)v7, v2, v3, v4);
  sub_76E6E0(2);
  qword_2CD44C0 = (char *)v7[0];
  return v5;
}
