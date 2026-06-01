__int64 __fastcall sub_14E1510(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rbp
  int v6; // eax

  v4 = *(_QWORD **)(a2 + 80);
  v5 = v4[6];
  v6 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v4[11], v4[7], v4[8], nullptr, nullptr);
  sub_FC70B0(a1, v5, v6, a3);
  return a1;
}
