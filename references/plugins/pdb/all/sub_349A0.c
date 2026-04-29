_QWORD *sub_349A0()
{
  _QWORD *v0; // rbx
  __int64 (__fastcall *v2)(_QWORD *); // rax
  char v3; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v0 = (_QWORD *)qalloc_or_throw(544);
  sub_34810((__int64)v0);
  sub_34560((__int64)v0, &v3);
  if ( v3 )
  {
    if ( v0 )
    {
      v2 = *(__int64 (__fastcall **)(_QWORD *))(*v0 + 16LL);
      if ( v2 != sub_34200 )
      {
        v2(v0);
        return nullptr;
      }
      sub_34080(v0);
      qfree(v0);
    }
    return nullptr;
  }
  else
  {
    callui(1097);
    set_module_data(&dword_B3730, v0);
  }
  return v0;
}
