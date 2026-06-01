__int64 __fastcall sub_300750(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = qword_1C64158;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 120) = 1;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  v7 = *a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  (*(void (__fastcall **)(__int64 *, __int64))(v7 + 72))(a2, a1 + 136);
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 48))(a2);
  return sub_1863170(a1 + 152, v8);
}

