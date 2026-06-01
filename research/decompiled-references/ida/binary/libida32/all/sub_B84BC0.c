__int64 __fastcall sub_B84BC0(__int64 a1)
{
  __int64 v1; // rax

  *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) &= ~1u;
  v1 = sub_B685F0(a1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 18360) + 168LL))(*(_QWORD *)(v1 + 18360), a1);
}

