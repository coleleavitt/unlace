unsigned __int64 __fastcall sub_1837720(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned __int64 v6; // rax

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  return sub_160A600(a2, v6, *(_QWORD *)(a1 + 16), 8u, v5, v4, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
}
