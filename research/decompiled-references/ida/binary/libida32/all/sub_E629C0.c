void __fastcall sub_E629C0(__int64 *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-350h]
  void *v11; // [rsp+10h] [rbp-348h] BYREF
  __int64 v12; // [rsp+18h] [rbp-340h]
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-338h] BYREF
  int v14; // [rsp+28h] [rbp-330h]
  __int64 v15; // [rsp+30h] [rbp-328h]
  __int64 v16; // [rsp+38h] [rbp-320h]
  __int64 v17; // [rsp+40h] [rbp-318h]
  char v18; // [rsp+48h] [rbp-310h]
  int v19; // [rsp+4Ch] [rbp-30Ch]
  void **p_ptr; // [rsp+50h] [rbp-308h]
  void *ptr; // [rsp+60h] [rbp-2F8h] BYREF
  size_t v22; // [rsp+68h] [rbp-2F0h]
  __int64 v23; // [rsp+70h] [rbp-2E8h]
  _BYTE v24[72]; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v25[3]; // [rsp+C0h] [rbp-298h] BYREF
  int v26; // [rsp+D8h] [rbp-280h]
  _QWORD *v27; // [rsp+E0h] [rbp-278h]
  __int64 v28; // [rsp+E8h] [rbp-270h]
  _QWORD v29[42]; // [rsp+F0h] [rbp-268h] BYREF
  int v30; // [rsp+240h] [rbp-118h]
  __int64 v31; // [rsp+248h] [rbp-110h]
  __int64 v32; // [rsp+250h] [rbp-108h]
  int v33; // [rsp+258h] [rbp-100h]
  __int64 v34; // [rsp+260h] [rbp-F8h]
  __int64 v35; // [rsp+268h] [rbp-F0h]
  int v36; // [rsp+270h] [rbp-E8h]
  __int128 v37; // [rsp+278h] [rbp-E0h] BYREF
  _QWORD *v38; // [rsp+288h] [rbp-D0h]
  __int64 v39; // [rsp+290h] [rbp-C8h]
  _QWORD v40[6]; // [rsp+298h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+2C8h] [rbp-90h] BYREF
  __int128 *v42; // [rsp+2D8h] [rbp-80h]
  int v43; // [rsp+2E8h] [rbp-70h] BYREF
  __int64 v44; // [rsp+2F0h] [rbp-68h]
  int *v45; // [rsp+2F8h] [rbp-60h]
  int *v46; // [rsp+300h] [rbp-58h]
  __int64 v47; // [rsp+308h] [rbp-50h]
  bool v48; // [rsp+310h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 32);
  v22 = 0;
  v10 = v4;
  ptr = v24;
  v23 = 64;
  v14 = 2;
  v13 = &off_2BC1F40;
  v18 = 0;
  v19 = 1;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v13, 0, 0, 0);
  v5 = *a1;
  v27 = v29;
  v37 = 0;
  v38 = v40;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v40[4] = &si128;
  v25[0] = v5;
  v6 = *(_QWORD *)(v5 + 8);
  v28 = 0xA00000000LL;
  v7 = *(_QWORD *)(v6 + 17448);
  v42 = &v37;
  v39 = 0x400000000LL;
  v45 = &v43;
  v46 = &v43;
  v25[1] = (__int64)&v13;
  v25[2] = 0;
  v26 = -1;
  v29[40] = 0;
  v29[41] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v40[5] = 0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48 = *(_BYTE *)(v7 + 8) == 64;
  sub_971800((__int64)&v13, "?$");
  sub_E58770((__int64)v25, "__matrix", 8u);
  sub_E608A0(v25, v10, a3, 2);
  v8 = (void *)*(unsigned int *)(a2 + 40);
  BYTE4(v12) = 1;
  LODWORD(v12) = 64;
  v11 = v8;
  sub_E61AE0(v25, (__int64)&v11, 0, 0);
  if ( (unsigned int)v12 > 0x40 && v11 )
    operator delete[](v11);
  v9 = (void *)*(unsigned int *)(a2 + 44);
  LODWORD(v12) = 64;
  v11 = v9;
  BYTE4(v12) = 1;
  sub_E61AE0(v25, (__int64)&v11, 0, 0);
  if ( (unsigned int)v12 > 0x40 && v11 )
    operator delete[](v11);
  v12 = 7;
  v11 = "__clang";
  sub_E58C30((__int64)a1, ptr, v22, (__int64)&v11, 1);
  sub_E56DF0((__int64)v25);
  v13 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v13);
  if ( ptr != v24 )
    free(ptr);
}

