void __fastcall tos_dialog_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v2 = sub_3B8C20(*(_QWORD *)(a1 + 256));
    callui(203, 10, a1, 2, v2 != -1, (_DWORD)callui);
  }
}
