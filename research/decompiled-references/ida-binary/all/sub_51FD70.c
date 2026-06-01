__int64 __fastcall standalone_dirtree_widget_action_helper_t::activate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64); // r9
  unsigned int v7; // eax
  __int64 (*v8)(); // rax

  v5 = *(_QWORD *)(a1 + 8);
  v6 = **(__int64 (__fastcall ***)(__int64, __int64, __int64, __int64, __int64))v5;
  if ( v6 != standalone_dirtree_widget_crud_action_helper_t__::vfunc_0 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))v6)(v5, a2, a3);
  v7 = *(_DWORD *)(v5 + 8);
  if ( v7 != 4 )
  {
    if ( v7 > 4 )
    {
      if ( v7 != 8 )
        return 0;
      v8 = *(__int64 (**)())(*(_QWORD *)a2 + 1016LL);
      if ( v8 == sub_51F110 )
        return 0;
    }
    else
    {
      if ( v7 != 1 )
      {
        if ( v7 != 2 )
          return 0;
        v8 = *(__int64 (**)())(*(_QWORD *)a2 + 1000LL);
        if ( v8 == sub_51F110 )
          return 0;
        return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v8)(a2, a3, a4, a5);
      }
      v8 = *(__int64 (**)())(*(_QWORD *)a2 + 992LL);
      if ( v8 == sub_51F110 )
        return 0;
    }
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v8)(a2, a3, a4, a5);
  }
  *(_DWORD *)(a3 + 136) |= 1u;
  v8 = *(__int64 (**)())(*(_QWORD *)a2 + 1008LL);
  if ( v8 != sub_51F110 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v8)(a2, a3, a4, a5);
  return 0;
}
