__int64 __fastcall sub_787FA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v12; // r15
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rax
  char v25; // al
  unsigned int v26; // r13d
  __int64 (__fastcall *v27)(); // rax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v33[64]; // [rsp+28h] [rbp-40h] BYREF

  v8 = *(_QWORD *)a1;
  v9 = a7;
  if ( !*(_QWORD *)a1 )
  {
    v12 = *a2;
    v8 = sub_186B270(0x130u);
    *(_QWORD *)v8 = &off_1C54720;
    *(_QWORD *)(v8 + 8) = v12;
    *(_QWORD *)(v8 + 16) = v12;
    sub_180C5A0(&v32, "pb");
    v14 = sub_15DA4C0(v12 + 560, &v32);
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 24) = v14;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 1;
    *(_QWORD *)(v8 + 88) = 0;
    *(_OWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    v15 = sub_186B270(0x80u);
    *(_QWORD *)v15 = 0;
    *(_DWORD *)(v15 + 8) = -2;
    *(_QWORD *)(v15 + 16) = 0;
    *(_DWORD *)(v15 + 24) = -2;
    *(_QWORD *)(v15 + 32) = 0;
    *(_DWORD *)(v15 + 40) = -2;
    *(_QWORD *)(v15 + 48) = 0;
    *(_DWORD *)(v15 + 56) = -2;
    *(_QWORD *)(v15 + 64) = 0;
    *(_DWORD *)(v15 + 72) = -2;
    *(_QWORD *)(v15 + 80) = 0;
    *(_DWORD *)(v15 + 88) = -2;
    *(_QWORD *)(v15 + 96) = 0;
    *(_DWORD *)(v15 + 104) = -2;
    *(_QWORD *)(v15 + 112) = 0;
    *(_DWORD *)(v15 + 120) = -2;
    *(_QWORD *)(v8 + 96) = v15;
    *(_QWORD *)(v8 + 104) = 8;
    *(_DWORD *)(v8 + 112) = 0;
    v16 = (_QWORD *)sub_186B270(0xC0u);
    *v16 = 0;
    v16[3] = 0;
    v16[6] = 0;
    v16[9] = 0;
    v16[12] = 0;
    v16[15] = 0;
    v16[18] = 0;
    v16[21] = 0;
    *(_QWORD *)(v8 + 120) = v16;
    v17 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 128) = 8;
    *(_DWORD *)(v8 + 136) = 0;
    *(_QWORD *)(v8 + 144) = 0;
    *(_QWORD *)(v8 + 152) = v17;
    *(_QWORD *)(v8 + 160) = 0;
    v18 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v8 + 168) = v18;
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    v18[3] = 0;
    v19 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 176) = 8;
    *(_QWORD *)(v8 + 240) = v19;
    *(_QWORD *)(v8 + 256) = v19;
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
    v32 = a3;
    sub_17F9A60(v33, "sat");
    *(_BYTE *)(v8 + 224) = sub_1859610(a3, "ite_extra", 1);
    v20 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
    v21 = v32;
    v22 = (unsigned __int64)v20 << 20;
    v23 = v20 == -1;
    v24 = -1;
    if ( !v23 )
      v24 = v22;
    *(_QWORD *)(v8 + 232) = v24;
    v25 = sub_1859630(v21, "euf", v33, 0);
    if ( !v25 )
      v25 = sub_1859630(v32, "smt", v33, 0);
    *(_BYTE *)(v8 + 273) = v25;
    v26 = 0;
    sub_18572D0(v33);
    v9 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    if ( (_DWORD)v9 )
    {
      while ( 1 )
      {
        v27 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 80LL);
        if ( v27 == sub_7885F0 )
          break;
        ++v26;
        ((void (__fastcall *)(__int64))v27)(v8);
        v9 = *(unsigned int *)(a1 + 8);
        v8 = *(_QWORD *)a1;
        if ( v26 >= (unsigned int)v9 )
          return sub_791180(v8, a2, v9);
      }
      ++*(_DWORD *)(v8 + 296);
      if ( v26 + 1 < (unsigned int)v9 )
      {
        v28 = v26 + 1;
        v29 = v26 + 2;
        if ( v26 + 2 < (unsigned int)v9 )
        {
          if ( (((_BYTE)v9 + ~((_BYTE)v26 + 1)) & 1) == 0 || (v28 = v26 + 2, v29 = v26 + 3, v26 + 3 < (unsigned int)v9) )
          {
            do
            {
              v28 = v29 + 1;
              v29 += 2;
            }
            while ( v29 < (unsigned int)v9 );
          }
        }
        *(_DWORD *)(v8 + 296) = v28 + *(_DWORD *)(v8 + 296) - v26;
      }
    }
  }
  return sub_791180(v8, a2, v9);
}

