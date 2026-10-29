void __fastcall sub_106F140(__int64 a1, const __m128i *a2, __int64 a3, int a4)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  char v16; // al
  __int16 v17; // ax
  char v18; // dl
  char v19; // al
  char v20; // al
  char v21; // al
  _DWORD *v22; // rdi
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  void *v25; // rax
  __int64 v26; // rdi
  void *v27[2]; // [rsp+10h] [rbp-D8h] BYREF
  _BYTE v28[16]; // [rsp+20h] [rbp-C8h] BYREF
  void *v29; // [rsp+30h] [rbp-B8h] BYREF
  _DWORD v30[12]; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v32[104]; // [rsp+80h] [rbp-68h] BYREF

  sub_10094E0(a1, a2, a3);
  v7 = *(_QWORD *)(a3 + 240);
  v8 = *(_QWORD *)(a3 + 232);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)a1 = &off_2C06120;
  for ( *(_DWORD *)(a1 + 516) = 32; v7 != v8; v8 += 32 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_DWORD **)v8;
    if ( v9 > 3
      && *v10 == 2020896811
      && !(unsigned __int8)sub_2223D10(v10 + 1, v9 - 4, 10, &v31)
      && v31.m128i_i32[0] == v31.m128i_i64[0] )
    {
      *(_DWORD *)(a1 + 516) = v31.m128i_i32[0];
    }
  }
  *(_BYTE *)(a1 + 508) = 1;
  *(_QWORD *)(a1 + 352) = &unk_256CD40;
  *(_WORD *)(a1 + 18) = 4112;
  v11 = sub_21D5350();
  *(_BYTE *)(a1 + 279) = 1;
  *(_QWORD *)(a1 + 88) = v11;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 273) = (_DWORD)sub_1010000;
  if ( a4 == 32 )
  {
    sub_1009A40(
      (_QWORD *)a1,
      "e-p:32:32-p6:32:32-p7:32:32-i64:64-i128:128-v16:16-v32:32-n16:32:64",
      67,
      (__int64)&byte_22CD811);
  }
  else if ( *(_BYTE *)(a3 + 353) )
  {
    sub_1009A40(
      (_QWORD *)a1,
      "e-p3:32:32-p4:32:32-p5:32:32-p6:32:32-p7:32:32-i64:64-i128:128-v16:16-v32:32-n16:32:64",
      86,
      (__int64)&byte_22CD811);
  }
  else
  {
    sub_1009A40((_QWORD *)a1, "e-p6:32:32-i64:64-i128:128-v16:16-v32:32-n16:32:64", 50, (__int64)&byte_22CD811);
  }
  v12 = *(_BYTE **)(a3 + 32);
  v13 = *(_QWORD *)(a3 + 40);
  v31.m128i_i64[0] = (__int64)v32;
  sub_106E200(&v31, v12, (__int64)&v12[v13]);
  sub_2296190(&v29, &v31);
  if ( (_BYTE *)v31.m128i_i64[0] != v32 )
    operator delete((void *)v31.m128i_i64[0]);
  if ( (unsigned int)(v30[4] - 41) <= 1 )
    goto LABEL_14;
  v23 = *(_BYTE **)(a3 + 32);
  v24 = (__int64)&v23[*(_QWORD *)(a3 + 40)];
  v27[0] = v28;
  sub_106E200(v27, v23, v24);
  sub_2296190(&v31, v27);
  if ( v27[0] != v28 )
    operator delete(v27[0]);
  sub_1031DF0((__int64 *)v27, &v31, a3);
  v25 = v27[0];
  v26 = *(_QWORD *)(a1 + 520);
  v27[0] = nullptr;
  *(_QWORD *)(a1 + 520) = v25;
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    if ( v27[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v27[0] + 8LL))(v27[0]);
  }
  if ( (_BYTE *)v31.m128i_i64[0] == v32 )
  {
LABEL_14:
    v14 = *(_QWORD *)(a1 + 520);
    if ( !v14 )
      goto LABEL_31;
LABEL_15:
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v14 + 8);
    *(_BYTE *)(a1 + 9) = *(_BYTE *)(v14 + 9);
    *(_BYTE *)(a1 + 10) = *(_BYTE *)(v14 + 10);
    *(_BYTE *)(a1 + 11) = *(_BYTE *)(v14 + 11);
    *(_BYTE *)(a1 + 14) = *(_BYTE *)(v14 + 14);
    *(_BYTE *)(a1 + 15) = *(_BYTE *)(v14 + 15);
    *(_BYTE *)(a1 + 16) = *(_BYTE *)(v14 + 16);
    *(_BYTE *)(a1 + 17) = *(_BYTE *)(v14 + 17);
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(v14 + 20);
    *(_BYTE *)(a1 + 21) = *(_BYTE *)(v14 + 21);
    *(_BYTE *)(a1 + 22) = *(_BYTE *)(v14 + 22);
    *(_BYTE *)(a1 + 23) = *(_BYTE *)(v14 + 23);
    *(_BYTE *)(a1 + 30) = *(_BYTE *)(v14 + 30);
    *(_BYTE *)(a1 + 31) = *(_BYTE *)(v14 + 31);
    *(_BYTE *)(a1 + 32) = *(_BYTE *)(v14 + 32);
    *(_BYTE *)(a1 + 33) = *(_BYTE *)(v14 + 33);
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 160LL);
    if ( v15 == sub_A32150 )
    {
      v16 = *(_BYTE *)(v14 + 61);
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v15)(v14, 0, 1);
      v14 = *(_QWORD *)(a1 + 520);
    }
    *(_BYTE *)(a1 + 61) = v16;
    v17 = *(_WORD *)(v14 + 64);
    if ( !v17 )
    {
      v17 = *(unsigned __int8 *)(v14 + 25);
      if ( (unsigned __int8)v17 < *(_BYTE *)(v14 + 33) )
        v17 = *(unsigned __int8 *)(v14 + 33);
    }
    *(_WORD *)(a1 + 64) = v17;
    *(_BYTE *)(a1 + 60) = *(_BYTE *)(v14 + 60);
    v18 = *(_BYTE *)(v14 + 184);
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(v14 + 136);
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(v14 + 140);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(v14 + 144);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(v14 + 148);
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(v14 + 152);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(v14 + 156);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v14 + 160);
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(v14 + 164);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(v14 + 168);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(v14 + 176);
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(v14 + 180);
    v19 = v18 & 2 | *(_BYTE *)(a1 + 184) & 0xFD;
    *(_BYTE *)(a1 + 184) = v19;
    v20 = *(_BYTE *)(v14 + 184) & 4 | v19 & 0xFB;
    *(_BYTE *)(a1 + 184) = v20;
    *(_BYTE *)(a1 + 184) = *(_BYTE *)(v14 + 184) & 0x10 | v20 & 0xEF;
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(v14 + 188);
    v21 = *(_BYTE *)(v14 + 287);
    v22 = v29;
    *(_BYTE *)(a1 + 287) = v21;
    if ( v22 == v30 )
      return;
LABEL_21:
    operator delete(v22);
    return;
  }
  operator delete((void *)v31.m128i_i64[0]);
  v14 = *(_QWORD *)(a1 + 520);
  if ( v14 )
    goto LABEL_15;
LABEL_31:
  *(_BYTE *)(a1 + 31) = a4;
  *(_BYTE *)(a1 + 30) = a4;
  *(_BYTE *)(a1 + 9) = a4;
  *(_BYTE *)(a1 + 8) = a4;
  if ( a4 == 32 )
  {
    *(_DWORD *)(a1 + 136) = 6;
    *(_QWORD *)(a1 + 144) = 0x500000005LL;
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 8;
    *(_QWORD *)(a1 + 144) = 0x700000007LL;
  }
  v22 = v29;
  *(_BYTE *)(a1 + 287) = a4;
  if ( v22 != v30 )
    goto LABEL_21;
}

