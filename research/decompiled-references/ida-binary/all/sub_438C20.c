__int64 __fastcall sub_438C20(__int64 a1, char *a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3 = checkout_for_move_or_copy_action_t___vtable;
  v4 = 0;
  return sub_438700((__int64)&v3, a1, a2, 0x412u);
}
