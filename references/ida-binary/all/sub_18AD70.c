unsigned __int64 __fastcall sub_18AD70(__int64 a1, int a2, double a3, __m128 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  byte_8D1CD0 = a2 == 2;
  reg_int_op("Use90ShortcutSet", 1, a2 == 2, 0);
  v7 = ActionsInspector::toggle_new_shortcuts_state_changed;
  sub_5313B0(&v7);
  sub_18A9E0(a1, **(unsigned __int8 **)(a1 + 64), *(unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 1LL), v4, v5, a3, a4);
  sub_4A4600(*(_QWORD *)(a1 + 128), 0, 7, 0);
  sub_186C80(a1, 0xFFFFFFFF);
  return v8 - __readfsqword(0x28u);
}
