__int64 __fastcall sub_309FF0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx

  v2 = operator new(0xA0u);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)v2 = off_4CFEF8;
  *(_QWORD *)(v2 + 24) = off_4CFF30;
  *(_QWORD *)(v2 + 16) = &off_4CFF70;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = -1;
  *(_DWORD *)(v2 + 64) = -1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 88) = off_4CFF50;
  *(_DWORD *)(v2 + 120) = -1;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 96) = 0;
  *(_OWORD *)(v2 + 128) = 0;
  *(_OWORD *)(v2 + 144) = 0;
  sub_14DC90(v3, v2 + 16);
  return v4;
}
