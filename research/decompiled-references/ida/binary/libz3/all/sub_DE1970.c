__int64 __fastcall sub_DE1970(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _OWORD *v4; // rax

  v2 = sub_17E9C90(*(_QWORD *)(a1 + 8), 40);
  *(_DWORD *)v2 = a2;
  v3 = v2;
  *(_QWORD *)(v2 + 8) = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)(v3 + 24) = 8;
  *(_DWORD *)(v3 + 32) = 0;
  return v3;
}

