__int64 __fastcall sub_73B9E0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  char *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = (unsigned int)sub_739E10(a1, v7);
  sub_74E2F0(qword_2CAA5C0);
  qword_2CAA5C0 -= v1;
  if ( a1 )
    v5 = sub_73ACE0(nullptr, 0, 0, v3, v4);
  else
    v5 = sub_73A680(nullptr, (char *)v7, v2, v3, v4);
  sub_74E220(2);
  qword_2CAA5C0 = (char *)v7[0];
  return v5;
}

