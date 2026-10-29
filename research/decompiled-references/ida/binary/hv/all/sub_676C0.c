__int64 __fastcall sub_676C0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = operator new(0xB8u);
  sub_73B40(v1);
  *(_QWORD *)(v1 + 8) = a1;
  *(_QWORD *)v1 = off_163440;
  *(_QWORD *)(v1 + 40) = v1 + 24;
  *(_QWORD *)(v1 + 48) = v1 + 24;
  *(_QWORD *)(v1 + 88) = v1 + 72;
  *(_QWORD *)(v1 + 96) = v1 + 72;
  *(_DWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 136) = v1 + 120;
  *(_QWORD *)(v1 + 144) = v1 + 120;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(a1 + 8) = v1;
  *(_OWORD *)(v1 + 168) = 0;
  return v1 + 120;
}

