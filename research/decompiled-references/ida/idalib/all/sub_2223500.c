__int64 __fastcall sub_2223500(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 48);
  return v1[4] - v1[2] + (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 80LL))(v1);
}
