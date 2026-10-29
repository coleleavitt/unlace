unsigned __int64 __fastcall sub_541CC0(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h]
  __int64 v4; // [rsp+18h] [rbp-20h]
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = a1;
  v2[1] = 0;
  v3 = 0;
  v2[0] = _base_app_mixin_t::hide_wait_dialog;
  sub_4797E0((__int64)v2, 0, 0);
  v2[0] = &off_86FF78;
  qsem_free(v3);
  return v5 - __readfsqword(0x28u);
}
