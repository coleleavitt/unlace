__int64 __fastcall sub_208B6A0(__int64 a1, __int64 a2)
{
  void (__fastcall *v2)(__int64, _QWORD); // rcx

  v2 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 24);
  if ( !v2 )
    return 0;
  v2(a2, *(_QWORD *)(a1 + 8));
  return 1;
}
