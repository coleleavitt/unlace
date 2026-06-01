__int64 __fastcall sub_1E9980(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = a1 + 136;
  *(_QWORD *)(v2 - 120) = 0;
  *(_QWORD *)(v2 - 112) = -1;
  *(_QWORD *)(v2 - 104) = 0;
  *(_QWORD *)(v2 - 64) = 0;
  *(_QWORD *)(v2 - 40) = a2;
  *(_QWORD *)(v2 - 32) = 0;
  *(_OWORD *)(v2 - 136) = 0;
  *(_OWORD *)(v2 - 96) = 0;
  *(_OWORD *)(v2 - 80) = 0;
  *(_OWORD *)(v2 - 56) = 0;
  *(_OWORD *)(v2 - 24) = 0;
  return sub_1E9910();
}
