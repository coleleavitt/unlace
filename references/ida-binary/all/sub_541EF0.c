__int64 __fastcall sub_541EF0()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( !QT::QCoreApplication::self || (v0 = 0, !(unsigned __int8)sub_47B650((__int64)QT::QCoreApplication::self)) )
  {
    v3[0] = _base_app_mixin_t::is_long_op_cancelled;
    v3[1] = 0;
    v4 = 0;
    v1 = sub_4797E0((__int64)v3, 0, 0);
    v3[0] = &off_86FF78;
    LOBYTE(v0) = v1 != 0;
    qsem_free(v4);
  }
  return v0;
}
