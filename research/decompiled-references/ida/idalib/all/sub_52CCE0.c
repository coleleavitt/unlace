unsigned __int64 sub_52CCE0(unsigned int a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // r14
  _QWORD *v5; // r13
  void (__fastcall *v7)(_QWORD *, __int64, __va_list_tag *); // rax
  gcc_va_list va; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-E0h]
  __int64 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+40h] [rbp-B8h]
  __int64 v12; // [rsp+48h] [rbp-B0h]

  va_start(va, a3);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v9 = __readfsqword(0x28u);
  v4 = qword_2CCB598;
  if ( a1 > 6 )
  {
    if ( !under_debugger )
      interr(2197);
    BUG();
  }
  v5 = *(_QWORD **)(*(_QWORD *)(qword_2CCB598 + 1584) + 8LL * (int)a1 + 8);
  if ( v5
    && (!(unsigned __int8)sub_779DA0(
                            *v5,
                            a2,
                            a3,
                            v10,
                            v11,
                            v12,
                            *(_QWORD *)&va[0].gp_offset,
                            va[0].overflow_arg_area,
                            va[0].reg_save_area)
     || !*(_BYTE *)(*(_QWORD *)(v4 + 1672) + 2960LL)) )
  {
    notify_dirtree(*v5, (unsigned __int8)a2, a3);
    if ( a3 != -1 && (_BYTE)a2 )
    {
      v7 = (void (__fastcall *)(_QWORD *, __int64, __va_list_tag *))*(&off_2B2E040 + 4 * (int)a1 + 3);
      if ( v7 )
        v7(v5, a3, va);
      else
        dirtree_link_inode(*v5, a3, 1);
    }
  }
  return v9 - __readfsqword(0x28u);
}
