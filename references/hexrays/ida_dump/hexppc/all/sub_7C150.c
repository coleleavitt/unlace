unsigned __int64 __fastcall sub_7C150(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a2;
  v6[0] = __readfsqword(0x28u);
  v3 = pack_dd(&v5, v6, v2);
  sub_7BD20(a1, (__int64)&v5, v3 - (_QWORD)&v5);
  sub_7BEA0(a1, a2[1]);
  sub_7BEA0(a1, a2[2]);
  sub_7BEA0(a1, a2[3]);
  return sub_7BEA0(a1, a2[4]);
}
