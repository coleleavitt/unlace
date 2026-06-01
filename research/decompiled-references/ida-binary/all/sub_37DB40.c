__int64 __fastcall sel_chooser_t__::vfunc_10(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = -1;
  v10[0] = -1;
  result = sub_507F10(1154, (unsigned int)v10, (unsigned int)&v9, a4, a5, a6);
  if ( (_DWORD)result )
  {
    set_selector(v10[0], v9);
    v7 = getinf(20);
    v8 = getinf(19);
    auto_mark_range(v8, v7, 40);
    return 1;
  }
  return result;
}
