__int64 __fastcall sub_47B000(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = a1 + 40;
  *(_QWORD *)(v3 - 8) = a2;
  *(_BYTE *)(v3 - 16) = 0;
  *(_DWORD *)(v3 - 40) = 0;
  *(_OWORD *)(v3 - 32) = 0;
  sub_16669D0(v3, a2);
  return sub_16744A0(a1 + 56, *(_QWORD *)(a1 + 32));
}

