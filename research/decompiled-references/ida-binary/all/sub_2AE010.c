__int64 __fastcall sub_2AE010(int a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, QT::QColor *a6)
{
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v12; // [rsp-10h] [rbp-38h]

  v9 = QT::QColor::rgb(a6);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 408) + 8LL);
  sub_2BB440(a1, v10, 15, v10, *a4, a5, __ROR4__(_byteswap_ulong(v9), 8) & 0xFFFFFF, a2);
  return v12;
}
