unsigned __int64 __fastcall sub_5077D0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v1 = *a1;
  v4 = __readfsqword(0x28u);
  sub_506F90(a1[6], a1);
  v3 = v1;
  netnode_kill((int)&v3);
  return v4 - __readfsqword(0x28u);
}
