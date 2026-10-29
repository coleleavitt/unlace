__int64 __fastcall sub_26B080(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  std::istream *v6; // rdi

  v3 = sub_186B270(0xB8u);
  *(_QWORD *)v3 = a1;
  v4 = v3;
  *(_QWORD *)(v3 + 8) = a2;
  *(_OWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 16) = 0x100000000LL;
  v5 = (_QWORD *)sub_186B270(0xC0u);
  *v5 = 0;
  v6 = *(std::istream **)(v4 + 8);
  v5[3] = 0;
  v5[6] = 0;
  v5[9] = 0;
  v5[12] = 0;
  v5[15] = 0;
  v5[18] = 0;
  v5[21] = 0;
  *(_QWORD *)(v4 + 80) = v5;
  *(_QWORD *)(v4 + 88) = 8;
  *(_DWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_OWORD *)(v4 + 104) = 0;
  *(_OWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 152) = 0;
  *(_OWORD *)(v4 + 168) = 0;
  *(_DWORD *)(v4 + 16) = std::istream::get(v6);
  *a1 = v4;
  return sub_2CA9F0(a1);
}

