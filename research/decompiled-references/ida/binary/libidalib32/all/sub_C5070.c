unsigned __int64 sub_C5070(const char *a1, ...)
{
  __int64 v1; // r9
  int v3; // ebp
  __int64 v4; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  int v6[2]; // [rsp+18h] [rbp-D0h]
  int v7; // [rsp+20h] [rbp-C8h]
  int v8[2]; // [rsp+28h] [rbp-C0h]
  __int64 v9; // [rsp+30h] [rbp-B8h]
  __int64 v10; // [rsp+38h] [rbp-B0h]
  __int64 v11; // [rsp+40h] [rbp-A8h]
  __int64 v12; // [rsp+48h] [rbp-A0h]

  va_start(va, a1);
  *(_QWORD *)v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v1 = v12;
  va_end(va);
  *(_QWORD *)v6 = __readfsqword(0x28u);
  if ( !batch )
  {
    v3 = HIDWORD(qword_251320);
    if ( !HIDWORD(qword_251320) )
      sub_C4DC0();
    v4 = sub_193680(
           "@0:1423[]\nNOMAINMENU\nNOSTATUSBAR\nThreads",
           *(__int64 *)&va[0].gp_offset,
           (int)va[0].overflow_arg_area,
           (int)va[0].reg_save_area,
           v6[0],
           v7,
           v8[0],
           v9);
    if ( v4 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 2520) + 180LL) = v3;
      sub_195F90(v4, 0, 7, 0);
    }
    mark_builtin_widgets();
    sub_F5330(0x2000700418000000LL, 0);
    if ( !(unsigned __int8)getinf_flag() && byte_251038 )
      TProgram::switch_screen(nullptr, 16);
  }
  va_start(va, a1);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 2, a1, va, &callui, v1);
  return *(_QWORD *)v6 - __readfsqword(0x28u);
}

