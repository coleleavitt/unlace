__int64 __fastcall sub_2F7020(__int64 a1, char a2)
{
  const char *v2; // rbx

  v2 = "LoadDialog_preferences_for_known_loaders";
  if ( a2 )
    v2 = "LoadDialog_preferences_for_binaries";
  reg_int_op(
    "width",
    1,
    (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(a1 + 32) + 20LL)),
    v2);
  return reg_int_op(
           "height",
           1,
           (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL)),
           v2);
}
