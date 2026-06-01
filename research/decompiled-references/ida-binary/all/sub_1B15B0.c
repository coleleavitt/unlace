__int64 __fastcall complete_fwd_ah_t__::vfunc_0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  if ( *((_DWORD *)a2 + 2) != 31 )
    return 0;
  v2 = *a2;
  if ( !*a2 )
    return 0;
  v3 = *(_QWORD *)(v2 + 64);
  if ( !v3 )
    return 0;
  sub_1AFE30(v3, *(QT::QLineEdit **)(v2 + 48), 1);
  return 0;
}
