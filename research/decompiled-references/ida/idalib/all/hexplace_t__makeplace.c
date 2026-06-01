__int64 __fastcall hexplace_t__makeplace(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rbx

  v6 = qalloc_or_throw(32);
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = off_2B28210;
  *(_QWORD *)(v6 + 16) = a3;
  *(_QWORD *)(v6 + 24) = -1;
  sub_425060(v6, a3, a2);
  *(_DWORD *)(v6 + 8) = a4;
  return v6;
}
