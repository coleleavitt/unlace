char __fastcall sub_9B3F0(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  v2 = sub_9AFA0(a1);
  v5[1] = v3;
  v5[0] = v2;
  return sub_98E20(v5, a2);
}
