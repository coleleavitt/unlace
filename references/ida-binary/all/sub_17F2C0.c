__int64 __fastcall sub_17F2C0(__int64 a1)
{
  __int64 (__fastcall **v2)(); // [rsp+0h] [rbp-28h] BYREF
  __int64 v3; // [rsp+8h] [rbp-20h]
  __int64 v4; // [rsp+10h] [rbp-18h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = a1;
  v3 = 0;
  v2 = find_action_by_shortcut;
  sub_5313B0(&v2);
  return v3;
}
