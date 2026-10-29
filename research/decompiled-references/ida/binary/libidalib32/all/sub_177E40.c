__int64 __fastcall sub_177E40(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = THistory::currentIndex(*(THistory **)(v1 + 4424));
  sub_177CD0((_QWORD *)(v1 + 4312), v2, (__int64 *)(v1 + 4440));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1);
}

