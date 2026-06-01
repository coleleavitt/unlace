__int64 __fastcall standalone_dirtree_widget_t::handle_enter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (*v5)(); // rax

  v5 = *(__int64 (**)())(*(_QWORD *)a2 + 1016LL);
  if ( v5 == sub_51F110 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v5)(a2, a3, a4, a5);
}
