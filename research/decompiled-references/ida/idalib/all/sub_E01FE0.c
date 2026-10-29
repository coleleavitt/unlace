__int64 __fastcall sub_E01FE0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax

  v1 = sub_E1E550(*(_QWORD *)(a1 + 400));
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  sub_E33C80(a1, HIDWORD(v2), 2455, 0);
  return 0;
}
