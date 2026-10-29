void __fastcall sub_E62D00(__int64 *a1, __int64 a2, unsigned __int64 a3, char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  _QWORD v13[2]; // [rsp+10h] [rbp-348h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-338h] BYREF
  int v15; // [rsp+28h] [rbp-330h]
  __int128 v16; // [rsp+30h] [rbp-328h]
  __int64 v17; // [rsp+40h] [rbp-318h]
  char v18; // [rsp+48h] [rbp-310h]
  int v19; // [rsp+4Ch] [rbp-30Ch]
  void **p_ptr; // [rsp+50h] [rbp-308h]
  void *ptr; // [rsp+60h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-2F0h]
  _BYTE v23[72]; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v25)(); // [rsp+C8h] [rbp-290h]
  __int64 v26; // [rsp+D0h] [rbp-288h]
  int v27; // [rsp+D8h] [rbp-280h]
  _QWORD *v28; // [rsp+E0h] [rbp-278h]
  __int64 v29; // [rsp+E8h] [rbp-270h]
  _QWORD v30[42]; // [rsp+F0h] [rbp-268h] BYREF
  int v31; // [rsp+240h] [rbp-118h]
  __int64 v32; // [rsp+248h] [rbp-110h]
  __int64 v33; // [rsp+250h] [rbp-108h]
  int v34; // [rsp+258h] [rbp-100h]
  __int64 v35; // [rsp+260h] [rbp-F8h]
  __int64 v36; // [rsp+268h] [rbp-F0h]
  int v37; // [rsp+270h] [rbp-E8h]
  __int128 v38; // [rsp+278h] [rbp-E0h] BYREF
  _QWORD *v39; // [rsp+288h] [rbp-D0h]
  __int64 v40; // [rsp+290h] [rbp-C8h]
  _QWORD v41[6]; // [rsp+298h] [rbp-C0h] BYREF
  __m128i v42; // [rsp+2C8h] [rbp-90h] BYREF
  __int128 *v43; // [rsp+2D8h] [rbp-80h]
  int v44; // [rsp+2E8h] [rbp-70h] BYREF
  __int64 v45; // [rsp+2F0h] [rbp-68h]
  int *v46; // [rsp+2F8h] [rbp-60h]
  int *v47; // [rsp+300h] [rbp-58h]
  __int64 v48; // [rsp+308h] [rbp-50h]
  bool v49; // [rsp+310h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  ptr = v23;
  v16 = 0;
  v15 = 2;
  v14 = &off_2BC1F40;
  v18 = 0;
  v19 = 1;
  v17 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v14, 0, 0, 0);
  v5 = *a1;
  v28 = v30;
  v38 = 0;
  v39 = v41;
  v41[4] = &v42;
  v42 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v24 = v5;
  v6 = *(_QWORD *)(v5 + 8);
  v43 = &v38;
  v7 = *(_QWORD *)(v6 + 17448);
  v29 = 0xA00000000LL;
  v40 = 0x400000000LL;
  v46 = &v44;
  v47 = &v44;
  v25 = &v14;
  v26 = 0;
  v27 = -1;
  v30[40] = 0;
  v30[41] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v41[5] = 0;
  v44 = 0;
  v45 = 0;
  v48 = 0;
  v49 = *(_BYTE *)(v7 + 8) == 64;
  sub_971800((__int64)&v14, "?$");
  v8 = (a3 >> 6) & 7;
  switch ( (_DWORD)v8 )
  {
    case 3:
      v9 = j__strlen("Weak");
      sub_E58770((__int64)&v24, "Weak", v9);
      break;
    case 4:
      v11 = j__strlen("Autoreleasing");
      sub_E58770((__int64)&v24, "Autoreleasing", v11);
      break;
    case 2:
      v10 = j__strlen("Strong");
      sub_E58770((__int64)&v24, "Strong", v10);
      break;
  }
  sub_E547F0((__int64)v25, a3);
  sub_E54680((__int64)&v24, a3, a2);
  sub_E608A0(&v24, a2, a4, 1);
  v13[1] = 6;
  v13[0] = "__ObjC";
  sub_E58C30((__int64)a1, ptr, si128.m128i_u64[0], (__int64)v13, 1);
  sub_E56DF0((__int64)&v24);
  v14 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v14);
  if ( ptr != v23 )
    free(ptr);
}

