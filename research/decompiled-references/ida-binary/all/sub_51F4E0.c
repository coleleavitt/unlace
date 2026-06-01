__int64 __fastcall standalone_dirtree_widget_crud_action_helper_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // eax
  __int64 (*v6)(); // rax

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == 4 )
  {
    *(_DWORD *)(a3 + 136) |= 1u;
    v6 = *(__int64 (**)())(*(_QWORD *)a2 + 1008LL);
    if ( v6 == sub_51F110 )
      return 0;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v6)(a2, a3, a4, a5);
  }
  if ( v5 > 4 )
  {
    if ( v5 != 8 )
      return 0;
    v6 = *(__int64 (**)())(*(_QWORD *)a2 + 1016LL);
    if ( v6 == sub_51F110 )
      return 0;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v6)(a2, a3, a4, a5);
  }
  if ( v5 != 1 )
  {
    if ( v5 != 2 )
      return 0;
    v6 = *(__int64 (**)())(*(_QWORD *)a2 + 1000LL);
    if ( v6 == sub_51F110 )
      return 0;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(a2, a3, a4, a5);
  }
  v6 = *(__int64 (**)())(*(_QWORD *)a2 + 992LL);
  if ( v6 != sub_51F110 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(a2, a3, a4, a5);
  return 0;
}
