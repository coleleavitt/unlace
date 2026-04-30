unsigned __int64 sub_541E70()
{
  _QWORD v1[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v2; // [rsp+10h] [rbp-18h]
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v1[1] = 0;
  v2 = 0;
  v1[0] = _base_app_mixin_t::clear_long_op_cancellation;
  sub_4797E0((__int64)v1, 0, 0);
  v1[0] = &off_86FF78;
  qsem_free(v2);
  return v3 - __readfsqword(0x28u);
}
