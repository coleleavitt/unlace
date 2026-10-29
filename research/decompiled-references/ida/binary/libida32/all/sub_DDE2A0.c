__int64 __fastcall sub_DDE2A0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax

  v1 = sub_DFA810(*(_QWORD *)(a1 + 400));
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  sub_E0FF40(a1, HIDWORD(v2), 2455, 0);
  return 0;
}

