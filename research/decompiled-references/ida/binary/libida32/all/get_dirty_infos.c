__int64 get_dirty_infos()
{
  _QWORD v1[5]; // [rsp+0h] [rbp-28h] BYREF

  v1[3] = __readfsqword(0x28u);
  get_builtin_widgets_state(v1);
  return v1[0];
}

