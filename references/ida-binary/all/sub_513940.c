__int64 __fastcall sub_513940(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // al

  v1 = qword_8D2358;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8D2358 + 16LL))(qword_8D2358);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, v2 ^ 1u);
  return sub_513840(a1 + 40, 1);
}
