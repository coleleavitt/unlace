void __fastcall sub_E61BD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // eax
  void *v6; // [rsp+0h] [rbp-338h] BYREF
  __int64 v7; // [rsp+8h] [rbp-330h]
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-328h] BYREF
  int v9; // [rsp+18h] [rbp-320h]
  __int128 v10; // [rsp+20h] [rbp-318h]
  __int64 v11; // [rsp+30h] [rbp-308h]
  char v12; // [rsp+38h] [rbp-300h]
  int v13; // [rsp+3Ch] [rbp-2FCh]
  void **p_ptr; // [rsp+40h] [rbp-2F8h]
  void *ptr; // [rsp+50h] [rbp-2E8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-2E0h]
  _BYTE v17[72]; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v18[3]; // [rsp+B0h] [rbp-288h] BYREF
  int v19; // [rsp+C8h] [rbp-270h]
  _QWORD *v20; // [rsp+D0h] [rbp-268h]
  __int64 v21; // [rsp+D8h] [rbp-260h]
  _QWORD v22[42]; // [rsp+E0h] [rbp-258h] BYREF
  int v23; // [rsp+230h] [rbp-108h]
  __int64 v24; // [rsp+238h] [rbp-100h]
  __int64 v25; // [rsp+240h] [rbp-F8h]
  int v26; // [rsp+248h] [rbp-F0h]
  __int64 v27; // [rsp+250h] [rbp-E8h]
  __int64 v28; // [rsp+258h] [rbp-E0h]
  int v29; // [rsp+260h] [rbp-D8h]
  __int128 v30; // [rsp+268h] [rbp-D0h] BYREF
  _QWORD *v31; // [rsp+278h] [rbp-C0h]
  __int64 v32; // [rsp+280h] [rbp-B8h]
  _QWORD v33[6]; // [rsp+288h] [rbp-B0h] BYREF
  __m128i v34; // [rsp+2B8h] [rbp-80h] BYREF
  __int128 *v35; // [rsp+2C8h] [rbp-70h]
  int v36; // [rsp+2D8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+2E0h] [rbp-58h]
  int *v38; // [rsp+2E8h] [rbp-50h]
  int *v39; // [rsp+2F0h] [rbp-48h]
  __int64 v40; // [rsp+2F8h] [rbp-40h]
  bool v41; // [rsp+300h] [rbp-38h]

  v9 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  ptr = v17;
  v10 = 0;
  v12 = 0;
  v8 = &off_2BC1F40;
  v13 = 1;
  v11 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v8, 0, 0, 0);
  v20 = v22;
  v2 = *a1;
  v30 = 0;
  v31 = v33;
  v33[4] = &v34;
  v34 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v18[0] = v2;
  v3 = *(_QWORD *)(v2 + 8);
  v21 = 0xA00000000LL;
  v4 = *(_QWORD *)(v3 + 17448);
  v35 = &v30;
  v18[1] = (__int64)&v8;
  v18[2] = 0;
  v19 = -1;
  v22[40] = 0;
  v22[41] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v32 = 0x400000000LL;
  v33[5] = 0;
  v36 = 0;
  v37 = 0;
  v38 = &v36;
  v39 = &v36;
  v40 = 0;
  v41 = *(_BYTE *)(v4 + 8) == 64;
  sub_971800((__int64)&v8, "?$");
  if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
    sub_E58770((__int64)v18, "_UBitInt", 8u);
  else
    sub_E58770((__int64)v18, "_BitInt", 7u);
  v5 = *(_DWORD *)(a2 + 32);
  BYTE4(v7) = 1;
  LODWORD(v7) = 64;
  v6 = (void *)((v5 >> 1) & 0xFFFFFF);
  sub_E61AE0(v18, (__int64)&v6, 0, 0);
  if ( (unsigned int)v7 > 0x40 && v6 )
    operator delete[](v6);
  v7 = 7;
  v6 = "__clang";
  sub_E58C30((__int64)a1, ptr, si128.m128i_u64[0], (__int64)&v6, 1);
  sub_E56DF0((__int64)v18);
  v8 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v8);
  if ( ptr != v17 )
    free(ptr);
}

