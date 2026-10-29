void __fastcall edit_func_dialog_t__::vfunc_3(__int64 a1, int a2, double a3)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx

  if ( a2 == 2 )
  {
    v3 = netnode_altval(*(_QWORD *)(a1 + 360), 10, 65);
    v7 = 1;
    if ( v3 )
      v7 = v3;
    sub_3B96F0(a1, v7, 1, a3, v4, v5, v6);
  }
}
