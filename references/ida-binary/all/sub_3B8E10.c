void __fastcall tos_dialog_t__::vfunc_3(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 == 2 )
  {
    v2 = sub_3B8C20(*(_QWORD *)(a1 + 256));
    callui(203, 10, a1, 2, v2 != -1, (_DWORD)callui);
  }
}
