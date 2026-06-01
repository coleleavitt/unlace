unsigned __int64 __fastcall edit_argloc_dialog_t__::vfunc_3(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 result; // rax

  if ( (_DWORD)a2 == 2 )
  {
    sub_3C9AB0(a1, a2, a3, a4, a5, a6);
    callui(203, 10, (_DWORD)a1, 11, 0, (unsigned int)&callui);
    sub_3CA800(a1);
    return sub_3C9FA0((__int64)a1);
  }
  return result;
}
