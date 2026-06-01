__int64 __fastcall sub_7868E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v8; // rbx
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rax
  char v24; // al
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v27[64]; // [rsp+28h] [rbp-40h] BYREF

  v8 = *a1;
  if ( !*a1 )
  {
    v8 = sub_186B270(0x130u);
    *(_QWORD *)v8 = &off_1C54720;
    *(_QWORD *)(v8 + 8) = a2;
    *(_QWORD *)(v8 + 16) = a2;
    sub_180C5A0(&v26, "pb");
    v13 = sub_15DA4C0(a2 + 560, &v26);
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 24) = v13;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 1;
    *(_QWORD *)(v8 + 88) = 0;
    *(_OWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    v14 = sub_186B270(0x80u);
    *(_QWORD *)v14 = 0;
    *(_DWORD *)(v14 + 8) = -2;
    *(_QWORD *)(v14 + 16) = 0;
    *(_DWORD *)(v14 + 24) = -2;
    *(_QWORD *)(v14 + 32) = 0;
    *(_DWORD *)(v14 + 40) = -2;
    *(_QWORD *)(v14 + 48) = 0;
    *(_DWORD *)(v14 + 56) = -2;
    *(_QWORD *)(v14 + 64) = 0;
    *(_DWORD *)(v14 + 72) = -2;
    *(_QWORD *)(v14 + 80) = 0;
    *(_DWORD *)(v14 + 88) = -2;
    *(_QWORD *)(v14 + 96) = 0;
    *(_DWORD *)(v14 + 104) = -2;
    *(_QWORD *)(v14 + 112) = 0;
    *(_DWORD *)(v14 + 120) = -2;
    *(_QWORD *)(v8 + 96) = v14;
    *(_QWORD *)(v8 + 104) = 8;
    *(_DWORD *)(v8 + 112) = 0;
    v15 = (_QWORD *)sub_186B270(0xC0u);
    *v15 = 0;
    v15[3] = 0;
    v15[6] = 0;
    v15[9] = 0;
    v15[12] = 0;
    v15[15] = 0;
    v15[18] = 0;
    v15[21] = 0;
    *(_QWORD *)(v8 + 120) = v15;
    v16 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 128) = 8;
    *(_DWORD *)(v8 + 136) = 0;
    *(_QWORD *)(v8 + 144) = 0;
    *(_QWORD *)(v8 + 152) = v16;
    *(_QWORD *)(v8 + 160) = 0;
    v17 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v8 + 168) = v17;
    *v17 = 0;
    v17[1] = 0;
    v17[2] = 0;
    v17[3] = 0;
    v18 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 176) = 8;
    *(_QWORD *)(v8 + 240) = v18;
    *(_QWORD *)(v8 + 256) = v18;
    *(_DWORD *)(v8 + 184) = 0;
    *(_QWORD *)(v8 + 192) = a4;
    *(_QWORD *)(v8 + 200) = a5;
    *(_QWORD *)(v8 + 208) = a6;
    *(_QWORD *)(v8 + 216) = 0;
    *(_QWORD *)(v8 + 248) = 0;
    *(_QWORD *)(v8 + 264) = 0;
    *(_BYTE *)(v8 + 272) = a7;
    *(_WORD *)(v8 + 273) = 0;
    *(_QWORD *)(v8 + 280) = 0;
    sub_180C5A0(v8 + 288, "tseitin");
    *(_DWORD *)(v8 + 296) = 0;
    v26 = a3;
    sub_17F9A60(v27, "sat");
    *(_BYTE *)(v8 + 224) = sub_1859610(a3, "ite_extra", 1);
    v19 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
    v20 = v26;
    v21 = (unsigned __int64)v19 << 20;
    v22 = v19 == -1;
    v23 = -1;
    if ( !v22 )
      v23 = v21;
    *(_QWORD *)(v8 + 232) = v23;
    v24 = sub_1859630(v20, "euf", v27, 0);
    if ( !v24 )
      v24 = sub_1859630(v26, "smt", v27, 0);
    *(_BYTE *)(v8 + 273) = v24;
    sub_18572D0(v27);
    *a1 = v8;
  }
  return v8;
}

