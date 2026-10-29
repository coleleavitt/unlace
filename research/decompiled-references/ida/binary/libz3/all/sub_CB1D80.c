__int64 __fastcall sub_CB1D80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi

  v4 = a1 + 16;
  *(_QWORD *)(v4 - 16) = a2;
  *(_QWORD *)(v4 - 8) = a3;
  sub_16744A0(v4, a2);
  return sub_16669D0(a1 + 40, a2);
}

