bool __fastcall sub_1803A80(__int64 a1, __int64 a2)
{
  char v3; // bp

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 648LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 8));
  return v3 == (*(char (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 648LL))(
                 *(_QWORD *)(a1 + 16),
                 *(_QWORD *)(a2 + 16) + 16LL,
                 **(unsigned int **)(a2 + 16));
}
