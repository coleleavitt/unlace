void __fastcall sub_E49EE0(__int64 a1, __int64 a2)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_E5E9C0(a1, a2);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 88LL))(*(_QWORD *)(a1 + 104), a2);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 88LL))(*(_QWORD *)(a1 + 112), a2);
  sub_17F9A60(v2, "combined_solver");
  *(_DWORD *)(a1 + 128) = sub_1859980(a2, "solver2_timeout", v2, 0xFFFFFFFFLL);
  *(_BYTE *)(a1 + 120) = sub_1859630(a2, "ignore_solver1", v2, 0);
  *(_DWORD *)(a1 + 124) = sub_1859980(a2, "solver2_unknown", v2, 1);
  sub_18572D0(v2);
}

