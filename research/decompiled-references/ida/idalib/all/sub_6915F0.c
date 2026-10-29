__int64 __fastcall sub_6915F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = operator new(0x98u);
  *(_WORD *)(v1 + 40) = 256;
  v2 = v1;
  *(_QWORD *)v1 = a1;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 32) = -1;
  *(_BYTE *)(v1 + 42) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_OWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 56) = 0;
  sub_691500(v1 + 72, v1);
  *(_QWORD *)(v2 + 112) = -1;
  *(_QWORD *)(v2 + 120) = 0;
  *(_BYTE *)(v2 + 144) = 0;
  *(_OWORD *)(v2 + 128) = 0;
  return v2;
}
