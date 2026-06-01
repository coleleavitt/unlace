__int64 __fastcall sub_14190C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
  return v4
       | (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 56LL))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3);
}
