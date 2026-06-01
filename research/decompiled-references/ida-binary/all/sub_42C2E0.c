__int64 __fastcall sub_42C2E0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-28h] BYREF
  int v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3 = files_dirtree_widget_resolve_action_helper_t___vtable;
  v4 = 5;
  return sub_522200(&v3, a1, a2);
}
