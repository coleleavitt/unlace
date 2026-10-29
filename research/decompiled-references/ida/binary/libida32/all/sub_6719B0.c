__int64 __fastcall sub_6719B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = operator new(0x90u);
  *(_WORD *)(v1 + 36) = 256;
  v2 = v1;
  *(_QWORD *)v1 = a1;
  *(_QWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 32) = -1;
  *(_BYTE *)(v1 + 38) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_OWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 48) = 0;
  sub_6718C0(v1 + 64, v1);
  *(_DWORD *)(v2 + 104) = -1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_BYTE *)(v2 + 136) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  return v2;
}

