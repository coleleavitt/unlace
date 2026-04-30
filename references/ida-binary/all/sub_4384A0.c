__int64 __fastcall sub_4384A0(char *a1)
{
  __int64 (__fastcall **v2)(); // [rsp+0h] [rbp-28h] BYREF
  char v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = checkout_for_move_or_copy_action_t___vtable;
  v3 = 1;
  return sub_438030((unsigned __int8 (__fastcall ***)(_QWORD, __int64 *))&v2, a1, 1u);
}
