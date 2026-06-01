__int64 sub_19480(__int64 a1, __int64 a2, ...)
{
  __int64 (__fastcall *v2)(__int64, int, int, __int64, int, int); // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+30h] [rbp-A8h]
  __int64 v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h]
  __int64 v9; // [rsp+48h] [rbp-90h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64, int, int, __int64, int, int))(*(_QWORD *)a1 + 16LL);
  if ( v2 == sub_16330 )
    return off_165640(
             23,
             a2,
             (unsigned int)va,
             (unsigned int)&off_165640,
             v8,
             v9,
             *(_QWORD *)&va[0].gp_offset,
             va[0].overflow_arg_area,
             va[0].reg_save_area,
             v5);
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __va_list_tag *, __int64, __int64, __int64, _QWORD, void *, void *, unsigned __int64))v2)(
             a1,
             a2,
             va,
             v7,
             v8,
             v9,
             *(_QWORD *)&va[0].gp_offset,
             va[0].overflow_arg_area,
             va[0].reg_save_area,
             v5);
}

