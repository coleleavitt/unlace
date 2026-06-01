__int64 __fastcall sub_368BC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax
  void *v6; // r12
  int v7; // eax
  __int64 v8; // rax

  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v4 == sub_303CC0 )
    v5 = a2[111];
  else
    v5 = v4((__int64)a2);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  v6 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (qword_1C7F260 & 0x100000000LL) != 0 )
  {
    sub_182C690(v6, a1 + 32, &qword_1C7F260);
    if ( (qword_1C7F270 & 0x100000000LL) == 0 )
      goto LABEL_5;
LABEL_8:
    sub_182C690(v6, a1 + 48, &qword_1C7F270);
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 32) = qword_1C7F260;
  if ( (qword_1C7F270 & 0x100000000LL) != 0 )
    goto LABEL_8;
LABEL_5:
  v7 = qword_1C7F270;
  *(_BYTE *)(a1 + 52) &= ~1u;
  *(_DWORD *)(a1 + 48) = v7;
LABEL_6:
  *(_QWORD *)(a1 + 64) = 0;
  v8 = sub_186B270(0x140u);
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 224) = 1;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 1;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 1;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 1;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 144) = 1;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v8 + 168) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 1;
  *(_QWORD *)(v8 + 192) = 0;
  *(_QWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 216) = 0;
  *(_BYTE *)(v8 + 228) = 0;
  *(_QWORD *)(v8 + 248) = 0;
  *(_OWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 256) = 0;
  *(_QWORD *)(v8 + 264) = 1;
  *(_QWORD *)(v8 + 272) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 296) = 0;
  *(_QWORD *)(v8 + 304) = 1;
  *(_QWORD *)(v8 + 312) = 0;
  *(_QWORD *)(a1 + 72) = v8;
  *(_QWORD *)(a1 + 80) = 8;
  *(_QWORD *)(a1 + 96) = 0x3E8000001F4LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 104) = 1;
  *(_QWORD *)(a1 + 108) = 0x4FFFFFFFFLL;
  *(_BYTE *)(a1 + 116) = 0;
  return 0x4FFFFFFFFLL;
}

