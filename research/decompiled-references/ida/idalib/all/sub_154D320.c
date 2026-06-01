__int64 __fastcall sub_154D320(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD **)a1;
  sub_1564E40(**(_QWORD **)a1, 128);
  v2 = *(_QWORD *)(a1 + 8);
  ++*((_DWORD *)v1 + 2);
  return *(_QWORD *)(*(_QWORD *)(v2 + 96) + 608LL);
}
