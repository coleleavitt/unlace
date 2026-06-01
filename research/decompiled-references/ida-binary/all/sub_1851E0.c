__int64 __fastcall shortcutlist_chooser_t__::vfunc_13(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdi

  v5 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(v5 + 80) <= (unsigned int)a2 )
  {
    sub_1851C0(a5, v5, a2, a3, a4);
    return sub_185240();
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 416LL))(
      v5,
      *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8LL * (int)a2));
    return -1;
  }
}
