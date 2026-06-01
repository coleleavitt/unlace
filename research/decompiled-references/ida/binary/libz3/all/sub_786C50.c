void __fastcall sub_786C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rax
  char v23; // al
  unsigned int v24; // r12d
  unsigned int v25; // edx
  __int64 (__fastcall *v26)(); // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v29[64]; // [rsp+28h] [rbp-40h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    v11 = sub_186B270(0x130u);
    *(_QWORD *)v11 = &off_1C54720;
    *(_QWORD *)(v11 + 8) = a2;
    *(_QWORD *)(v11 + 16) = a2;
    sub_180C5A0(&v28, "pb");
    v12 = sub_15DA4C0(a2 + 560, &v28);
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 24) = v12;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 64) = 1;
    *(_QWORD *)(v11 + 88) = 0;
    *(_OWORD *)(v11 + 32) = 0;
    *(_OWORD *)(v11 + 72) = 0;
    v13 = sub_186B270(0x80u);
    *(_QWORD *)v13 = 0;
    *(_DWORD *)(v13 + 8) = -2;
    *(_QWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 24) = -2;
    *(_QWORD *)(v13 + 32) = 0;
    *(_DWORD *)(v13 + 40) = -2;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = -2;
    *(_QWORD *)(v13 + 64) = 0;
    *(_DWORD *)(v13 + 72) = -2;
    *(_QWORD *)(v13 + 80) = 0;
    *(_DWORD *)(v13 + 88) = -2;
    *(_QWORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 104) = -2;
    *(_QWORD *)(v13 + 112) = 0;
    *(_DWORD *)(v13 + 120) = -2;
    *(_QWORD *)(v11 + 96) = v13;
    *(_QWORD *)(v11 + 104) = 8;
    *(_DWORD *)(v11 + 112) = 0;
    v14 = (_QWORD *)sub_186B270(0xC0u);
    *v14 = 0;
    v14[3] = 0;
    v14[6] = 0;
    v14[9] = 0;
    v14[12] = 0;
    v14[15] = 0;
    v14[18] = 0;
    v14[21] = 0;
    *(_QWORD *)(v11 + 120) = v14;
    v15 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 128) = 8;
    *(_DWORD *)(v11 + 136) = 0;
    *(_QWORD *)(v11 + 144) = 0;
    *(_QWORD *)(v11 + 152) = v15;
    *(_QWORD *)(v11 + 160) = 0;
    v16 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v11 + 168) = v16;
    *v16 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = 0;
    v17 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 176) = 8;
    *(_QWORD *)(v11 + 240) = v17;
    *(_QWORD *)(v11 + 256) = v17;
    *(_DWORD *)(v11 + 184) = 0;
    *(_QWORD *)(v11 + 192) = a4;
    *(_QWORD *)(v11 + 200) = a5;
    *(_QWORD *)(v11 + 208) = a6;
    *(_QWORD *)(v11 + 216) = 0;
    *(_QWORD *)(v11 + 248) = 0;
    *(_QWORD *)(v11 + 264) = 0;
    *(_BYTE *)(v11 + 272) = a7;
    *(_WORD *)(v11 + 273) = 0;
    *(_QWORD *)(v11 + 280) = 0;
    sub_180C5A0(v11 + 288, "tseitin");
    *(_DWORD *)(v11 + 296) = 0;
    v28 = a3;
    sub_17F9A60(v29, "sat");
    *(_BYTE *)(v11 + 224) = sub_1859610(a3, "ite_extra", 1);
    v18 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
    v19 = v28;
    v20 = (unsigned __int64)v18 << 20;
    v21 = v18 == -1;
    v22 = -1;
    if ( !v21 )
      v22 = v20;
    *(_QWORD *)(v11 + 232) = v22;
    v23 = sub_1859630(v19, "euf", v29, 0);
    if ( !v23 )
      v23 = sub_1859630(v28, "smt", v29, 0);
    *(_BYTE *)(v11 + 273) = v23;
    v24 = 0;
    sub_18572D0(v29);
    v25 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v11;
    if ( v25 )
    {
      while ( 1 )
      {
        v26 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 80LL);
        if ( v26 == sub_7885F0 )
        {
          ++v24;
          ++*(_DWORD *)(v11 + 296);
          if ( v24 >= v25 )
            return;
        }
        else
        {
          ++v24;
          ((void (__fastcall *)(__int64))v26)(v11);
          v25 = *(_DWORD *)(a1 + 8);
          if ( v24 >= v25 )
            return;
        }
        v11 = *(_QWORD *)a1;
      }
    }
  }
}

