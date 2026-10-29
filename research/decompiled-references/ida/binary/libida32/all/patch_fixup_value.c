__int64 __fastcall patch_fixup_value(unsigned int a1, unsigned __int16 *a2)
{
  __int64 v3; // r12
  __int64 fixup_handler; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, unsigned __int16 *); // rax

  v3 = *(_QWORD *)(qword_2CA1698 + 1480);
  fixup_handler = get_fixup_handler(*a2);
  if ( !fixup_handler )
    return 0;
  v5 = fixup_handler;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *))(fixup_handler + 48);
  if ( v6 )
    return v6(v5, a1, a2);
  else
    return sub_407100(*(_QWORD *)(v3 + 24), v5, a1, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5));
}

