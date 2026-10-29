void __fastcall sub_E86440(__int64 *a1, __int64 a2, char *a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-348h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+10h] [rbp-338h] BYREF
  int v10; // [rsp+18h] [rbp-330h]
  __int64 v11; // [rsp+20h] [rbp-328h]
  __int64 v12; // [rsp+28h] [rbp-320h]
  __int64 v13; // [rsp+30h] [rbp-318h]
  char v14; // [rsp+38h] [rbp-310h]
  int v15; // [rsp+3Ch] [rbp-30Ch]
  void **p_ptr; // [rsp+40h] [rbp-308h]
  void *ptr; // [rsp+50h] [rbp-2F8h] BYREF
  size_t v18; // [rsp+58h] [rbp-2F0h]
  __int64 v19; // [rsp+60h] [rbp-2E8h]
  _BYTE v20[72]; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v21[3]; // [rsp+B0h] [rbp-298h] BYREF
  int v22; // [rsp+C8h] [rbp-280h]
  char *v23; // [rsp+D0h] [rbp-278h]
  __int64 v24; // [rsp+D8h] [rbp-270h]
  char v25; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v26; // [rsp+220h] [rbp-128h]
  __int64 v27; // [rsp+228h] [rbp-120h]
  int v28; // [rsp+230h] [rbp-118h]
  __int64 v29; // [rsp+238h] [rbp-110h]
  __int64 v30; // [rsp+240h] [rbp-108h]
  int v31; // [rsp+248h] [rbp-100h]
  __int64 v32; // [rsp+250h] [rbp-F8h]
  __int64 v33; // [rsp+258h] [rbp-F0h]
  int v34; // [rsp+260h] [rbp-E8h]
  __int128 v35; // [rsp+268h] [rbp-E0h] BYREF
  char *v36; // [rsp+278h] [rbp-D0h]
  __int64 v37; // [rsp+280h] [rbp-C8h]
  char v38; // [rsp+288h] [rbp-C0h] BYREF
  __m128i *p_si128; // [rsp+2A8h] [rbp-A0h]
  __int64 v40; // [rsp+2B0h] [rbp-98h]
  __m128i si128; // [rsp+2B8h] [rbp-90h] BYREF
  __int128 *v42; // [rsp+2C8h] [rbp-80h]
  int v43; // [rsp+2D8h] [rbp-70h] BYREF
  __int64 v44; // [rsp+2E0h] [rbp-68h]
  int *v45; // [rsp+2E8h] [rbp-60h]
  int *v46; // [rsp+2F0h] [rbp-58h]
  __int64 v47; // [rsp+2F8h] [rbp-50h]
  bool v48; // [rsp+300h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 32);
  v18 = 0;
  p_ptr = &ptr;
  v9 = &off_2BEBEE0;
  ptr = v20;
  v19 = 64;
  v10 = 2;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  sub_227B8B0(&v9, 0, 0, 0);
  v5 = *a1;
  v35 = 0;
  v23 = &v25;
  v36 = &v38;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  p_si128 = &si128;
  v21[0] = v5;
  v6 = *(_QWORD *)(v5 + 8);
  v24 = 0xA00000000LL;
  v7 = *(_QWORD *)(v6 + 17448);
  v42 = &v35;
  v37 = 0x400000000LL;
  v45 = &v43;
  v46 = &v43;
  v21[1] = (__int64)&v9;
  v21[2] = 0;
  v22 = -1;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v40 = 0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48 = *(_BYTE *)(v7 + 8) == 64;
  sub_995540((__int64)&v9, "?$");
  sub_E7C4B0((__int64)v21, "_Complex", 8u);
  sub_E845E0(v21, v4, a3, 2);
  v8[1] = 7;
  v8[0] = "__clang";
  sub_E7C970((__int64)a1, ptr, v18, (__int64)v8, 1);
  sub_E7AB30((__int64)v21);
  v9 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v9);
  if ( ptr != v20 )
    free(ptr);
}
