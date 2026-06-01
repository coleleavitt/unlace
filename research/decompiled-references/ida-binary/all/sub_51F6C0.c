char __fastcall standalone_dirtree_widget_crud_action_helper_t__::vfunc_1(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  bool (__fastcall *v7)(__int64, __int64, int); // rax
  char result; // al

  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 984LL);
  if ( v7 != sub_51F0E0 )
    return v7((__int64)a2, a3, v6);
  result = 0;
  if ( (_DWORD)v6 == ((unsigned int)v6 & a2[552]) )
  {
    result = 1;
    if ( (_DWORD)v6 != 2 )
      return *(_QWORD *)(a3 + 8) != 0;
  }
  return result;
}
