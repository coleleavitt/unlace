unsigned __int64 __fastcall sub_7F8E0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = __readfsqword(0x28u);
  v2 = pack_dd(&v4, v5, a2);
  sub_7F760(a1, (__int64)&v4, v2 - (_QWORD)&v4);
  return v5[0] - __readfsqword(0x28u);
}
