_QWORD *__fastcall sub_21F8CA0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r12

  v2 = sub_2220490();
  v4 = v3;
  v5 = v2;
  v6 = operator new(0x40u);
  sub_2220590(v6, a2, v5, v4);
  *a1 = v6;
  return a1;
}
