void __fastcall sub_E63B00(__int64 *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-350h]
  void *v10; // [rsp+10h] [rbp-348h] BYREF
  __int64 v11; // [rsp+18h] [rbp-340h]
  __int64 (__fastcall **v12)(); // [rsp+20h] [rbp-338h] BYREF
  int v13; // [rsp+28h] [rbp-330h]
  __int64 v14; // [rsp+30h] [rbp-328h]
  __int64 v15; // [rsp+38h] [rbp-320h]
  __int64 v16; // [rsp+40h] [rbp-318h]
  char v17; // [rsp+48h] [rbp-310h]
  int v18; // [rsp+4Ch] [rbp-30Ch]
  void **p_ptr; // [rsp+50h] [rbp-308h]
  void *ptr; // [rsp+60h] [rbp-2F8h] BYREF
  size_t v21; // [rsp+68h] [rbp-2F0h]
  __int64 v22; // [rsp+70h] [rbp-2E8h]
  _BYTE v23[72]; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v24[3]; // [rsp+C0h] [rbp-298h] BYREF
  int v25; // [rsp+D8h] [rbp-280h]
  _QWORD *v26; // [rsp+E0h] [rbp-278h]
  __int64 v27; // [rsp+E8h] [rbp-270h]
  _QWORD v28[42]; // [rsp+F0h] [rbp-268h] BYREF
  int v29; // [rsp+240h] [rbp-118h]
  __int64 v30; // [rsp+248h] [rbp-110h]
  __int64 v31; // [rsp+250h] [rbp-108h]
  int v32; // [rsp+258h] [rbp-100h]
  __int64 v33; // [rsp+260h] [rbp-F8h]
  __int64 v34; // [rsp+268h] [rbp-F0h]
  int v35; // [rsp+270h] [rbp-E8h]
  __int128 v36; // [rsp+278h] [rbp-E0h] BYREF
  _QWORD *v37; // [rsp+288h] [rbp-D0h]
  __int64 v38; // [rsp+290h] [rbp-C8h]
  _QWORD v39[6]; // [rsp+298h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+2C8h] [rbp-90h] BYREF
  __int128 *v41; // [rsp+2D8h] [rbp-80h]
  int v42; // [rsp+2E8h] [rbp-70h] BYREF
  __int64 v43; // [rsp+2F0h] [rbp-68h]
  int *v44; // [rsp+2F8h] [rbp-60h]
  int *v45; // [rsp+300h] [rbp-58h]
  __int64 v46; // [rsp+308h] [rbp-50h]
  bool v47; // [rsp+310h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 32);
  v21 = 0;
  v9 = v4;
  ptr = v23;
  v22 = 64;
  v13 = 2;
  v12 = &off_2BC1F40;
  v17 = 0;
  v18 = 1;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v12, 0, 0, 0);
  v26 = v28;
  v5 = *a1;
  v36 = 0;
  v37 = v39;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v39[4] = &si128;
  v24[0] = v5;
  v6 = *(_QWORD *)(v5 + 8);
  v27 = 0xA00000000LL;
  v7 = *(_QWORD *)(v6 + 17448);
  v41 = &v36;
  v38 = 0x400000000LL;
  v44 = &v42;
  v45 = &v42;
  v24[1] = (__int64)&v12;
  v24[2] = 0;
  v25 = -1;
  v28[40] = 0;
  v28[41] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v39[5] = 0;
  v42 = 0;
  v43 = 0;
  v46 = 0;
  v47 = *(_BYTE *)(v7 + 8) == 64;
  sub_971800((__int64)&v12, "?$");
  sub_E58770((__int64)v24, "ocl_pipe", 8u);
  sub_E608A0(v24, v9, a3, 2);
  v8 = (void *)*(unsigned __int8 *)(a2 + 40);
  BYTE4(v11) = 0;
  LODWORD(v11) = 64;
  v10 = v8;
  sub_E61AE0(v24, (__int64)&v10, 0, 0);
  if ( (unsigned int)v11 > 0x40 && v10 )
    operator delete[](v10);
  v11 = 7;
  v10 = "__clang";
  sub_E58C30((__int64)a1, ptr, v21, (__int64)&v10, 1);
  sub_E56DF0((__int64)v24);
  v12 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v12);
  if ( ptr != v23 )
    free(ptr);
}

