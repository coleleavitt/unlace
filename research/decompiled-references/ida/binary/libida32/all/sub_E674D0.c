__int64 __fastcall sub_E674D0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  _BYTE *v17; // rax
  __int64 (__fastcall **v19)(); // [rsp+8h] [rbp-338h] BYREF
  int v20; // [rsp+10h] [rbp-330h]
  __int128 v21; // [rsp+18h] [rbp-328h]
  __int64 v22; // [rsp+28h] [rbp-318h]
  char v23; // [rsp+30h] [rbp-310h]
  int v24; // [rsp+34h] [rbp-30Ch]
  __int64 **v25; // [rsp+38h] [rbp-308h]
  __int64 v26; // [rsp+40h] [rbp-300h]
  __int64 *v27; // [rsp+48h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-2F0h]
  __int64 v29; // [rsp+60h] [rbp-2E0h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-298h] BYREF
  __int64 (__fastcall ***v31)(); // [rsp+B0h] [rbp-290h]
  __int64 v32; // [rsp+B8h] [rbp-288h]
  int v33; // [rsp+C0h] [rbp-280h]
  _QWORD *v34; // [rsp+C8h] [rbp-278h]
  __int64 v35; // [rsp+D0h] [rbp-270h]
  _QWORD v36[42]; // [rsp+D8h] [rbp-268h] BYREF
  int v37; // [rsp+228h] [rbp-118h]
  __int64 v38; // [rsp+230h] [rbp-110h]
  __int64 v39; // [rsp+238h] [rbp-108h]
  int v40; // [rsp+240h] [rbp-100h]
  __int64 v41; // [rsp+248h] [rbp-F8h]
  __int64 v42; // [rsp+250h] [rbp-F0h]
  int v43; // [rsp+258h] [rbp-E8h]
  __int128 v44; // [rsp+260h] [rbp-E0h] BYREF
  _QWORD *v45; // [rsp+270h] [rbp-D0h]
  __int64 v46; // [rsp+278h] [rbp-C8h]
  _QWORD v47[6]; // [rsp+280h] [rbp-C0h] BYREF
  __m128i v48; // [rsp+2B0h] [rbp-90h] BYREF
  __int128 *v49; // [rsp+2C0h] [rbp-80h]
  int v50; // [rsp+2D0h] [rbp-70h] BYREF
  __int64 v51; // [rsp+2D8h] [rbp-68h]
  int *v52; // [rsp+2E0h] [rbp-60h]
  int *v53; // [rsp+2E8h] [rbp-58h]
  __int64 v54; // [rsp+2F0h] [rbp-50h]
  bool v55; // [rsp+2F8h] [rbp-48h]

  v21 = 0;
  v19 = &off_2BC1F40;
  v25 = &v27;
  v20 = 2;
  v23 = 0;
  v24 = 1;
  v22 = 0;
  sub_2257B70(&v19, 0, 0, 0);
  v26 = a5;
  v19 = &off_2BDAF98;
  v27 = &v29;
  v34 = v36;
  v35 = 0xA00000000LL;
  v45 = v47;
  v46 = 0x400000000LL;
  v44 = 0;
  v47[4] = &v48;
  v49 = &v44;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v48 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v30 = a1;
  v52 = &v50;
  v53 = &v50;
  v31 = &v19;
  v32 = 0;
  v33 = -1;
  v36[40] = 0;
  v36[41] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v47[5] = 0;
  v50 = 0;
  v51 = 0;
  v54 = 0;
  v9 = &a3[a4];
  v55 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  sub_971800((__int64)&v19, "??_8");
  sub_E5E850(&v30, a2, 0, v10, v11, v12);
  sub_971800((__int64)v31, "7B");
  while ( v9 != a3 )
  {
    v16 = *a3;
    v5 &= 0xFFFFFFFF00000000LL;
    ++a3;
    sub_E5E850(&v30, v16, v5, v13, v14, v15);
  }
  v17 = v31[4];
  if ( v17 >= (_BYTE *)v31[3] )
  {
    sub_2257CD0(v31, 64);
  }
  else
  {
    v31[4] = (__int64 (__fastcall **)())(v17 + 1);
    *v17 = 64;
  }
  sub_E56DF0((__int64)&v30);
  return sub_E56700(&v19);
}

