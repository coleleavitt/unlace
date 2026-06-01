__int64 __fastcall sub_541D50(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL);
  if ( v2 )
  {
    v5[1] = 0;
    v6 = 0;
    v5[0] = _base_app_mixin_t::is_wait_dialog_visible;
    v7 = v2;
    v3 = sub_4797E0((__int64)v5, 0, 0);
    v5[0] = &off_86FF78;
    LOBYTE(v1) = v3 != 0;
    qsem_free(v6);
  }
  else
  {
    return 0;
  }
  return v1;
}
