__int64 __fastcall sub_BE4A80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = a1 + 16;
  *(_QWORD *)(v3 - 8) = a2;
  *(_QWORD *)(v3 - 16) = 0;
  sub_16669D0(v3, a2);
  return sub_16744A0(a1 + 32, a2);
}

