__int64 __fastcall revert_action_t__::vfunc_0(__int64 a1, __int64 *a2)
{
  const char *v3; // rdx
  const char *v4; // rsi
  unsigned int v5; // ebp
  __int64 *v7; // [rsp+8h] [rbp-40h] BYREF
  const char *v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v7 = a2;
  sub_43C060((__int64)&v8, (__int64)&v7);
  v3 = &s1;
  if ( v9 )
    v3 = v8;
  v4 = "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to revert these files?\n%s";
  v5 = 0;
  if ( (unsigned int)sub_1698A0(
                       1,
                       (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to revert these files?\n%s",
                       v3) == 1 )
  {
    v4 = nullptr;
    v5 = sub_43A860(a2, nullptr);
  }
  if ( v8 )
  {
    v9 = 0;
    qfree(v8, v4);
  }
  return v5;
}
