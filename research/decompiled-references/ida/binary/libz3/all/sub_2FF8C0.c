void __fastcall sub_2FF8C0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _QWORD v3[4]; // [rsp+8h] [rbp-20h] BYREF

  v3[0] = 0;
  sub_1862300(v3, "minimize_core", a2);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 88LL))(v2, v3);
  sub_18572D0(v3);
}

