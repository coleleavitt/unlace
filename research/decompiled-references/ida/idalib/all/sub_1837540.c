unsigned __int64 __fastcall sub_1837540(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), a2, a3);
  return sub_191AF90(a2, v5, a3, v4, a3) & 0xFFFFFFFFFFFFFFFELL;
}
