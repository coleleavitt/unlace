__int64 __fastcall sub_63D370(__int64 a1, __int64 *a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 82;
  *(_QWORD *)(a1 + 16) = a2 + 82;
  *(_QWORD *)(a1 + 24) = 0;
  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 48) = 0;
  *v2 = 0;
  *(_QWORD *)(a1 + 40) = 8;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  sub_639440(a1 + 56, (__int64)a2);
  *(_QWORD *)(a1 + 144) = 0;
  v3 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 152) = v3;
  *(_QWORD *)(a1 + 160) = 8;
  *(_DWORD *)(a1 + 168) = 0;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 176) = v4;
  *(_QWORD *)(a1 + 184) = 8;
  *(_DWORD *)(a1 + 192) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 200) = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  result = *a2;
  *(_QWORD *)(a1 + 208) = 8;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = result;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  return result;
}

