unsigned __int64 sub_34F480()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  v1 = 1;
  sub_1E73C0(8u, 0, 0, 0, &v1, 1);
  return v2 - __readfsqword(0x28u);
}
