unsigned __int64 __fastcall sub_196C30(__int64 *a1)
{
  __int64 v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  sub_194E40(a1, &v2);
  return v4 - __readfsqword(0x28u);
}
