__int64 __fastcall sub_CCDBE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax

  v2 = sub_186B270(0x48u);
  *(_QWORD *)(v2 + 16) = a2;
  *(_QWORD *)v2 = &off_1C59598;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 24) = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *(_QWORD *)(v2 + 32) = 8;
  *(_QWORD *)(v2 + 48) = a2;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  return v2;
}

