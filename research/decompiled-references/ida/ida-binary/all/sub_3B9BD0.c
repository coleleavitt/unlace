__int64 __fastcall edit_func_dialog_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  double v7; // xmm0_8
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d

  result = 0;
  if ( *(_DWORD *)(a2 + 12) == 2 )
  {
    v7 = callui(203, 7, a1, 0, (unsigned int)&callui, a6);
    sub_3B96F0(a1, v8 + 1, 0, v7, v9, v10, v11);
    return 1;
  }
  return result;
}
