__int64 __fastcall sub_E8D160(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  const char *v8; // rsi
  void *v9; // rsi
  const char *v11; // rsi
  __int64 v12; // rdi
  size_t v13; // rax
  __int64 v14; // r9
  unsigned int v15; // [rsp+4h] [rbp-32Ch] BYREF
  __int64 (__fastcall **v16)(); // [rsp+8h] [rbp-328h] BYREF
  int v17; // [rsp+10h] [rbp-320h]
  __int128 v18; // [rsp+18h] [rbp-318h]
  __int64 v19; // [rsp+28h] [rbp-308h]
  char v20; // [rsp+30h] [rbp-300h]
  int v21; // [rsp+34h] [rbp-2FCh]
  __int64 **v22; // [rsp+38h] [rbp-2F8h]
  __int64 v23; // [rsp+40h] [rbp-2F0h]
  __int64 *v24; // [rsp+48h] [rbp-2E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-2E0h]
  __int64 v26; // [rsp+60h] [rbp-2D0h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-288h] BYREF
  __int64 (__fastcall ***v28)(); // [rsp+B0h] [rbp-280h]
  __int64 v29; // [rsp+B8h] [rbp-278h]
  int v30; // [rsp+C0h] [rbp-270h]
  _QWORD *v31; // [rsp+C8h] [rbp-268h]
  __int64 v32; // [rsp+D0h] [rbp-260h]
  _QWORD v33[42]; // [rsp+D8h] [rbp-258h] BYREF
  int v34; // [rsp+228h] [rbp-108h]
  __int64 v35; // [rsp+230h] [rbp-100h]
  __int64 v36; // [rsp+238h] [rbp-F8h]
  int v37; // [rsp+240h] [rbp-F0h]
  __int64 v38; // [rsp+248h] [rbp-E8h]
  __int64 v39; // [rsp+250h] [rbp-E0h]
  int v40; // [rsp+258h] [rbp-D8h]
  __int128 v41; // [rsp+260h] [rbp-D0h] BYREF
  _QWORD *v42; // [rsp+270h] [rbp-C0h]
  __int64 v43; // [rsp+278h] [rbp-B8h]
  _QWORD v44[6]; // [rsp+280h] [rbp-B0h] BYREF
  __m128i v45; // [rsp+2B0h] [rbp-80h] BYREF
  __int128 *v46; // [rsp+2C0h] [rbp-70h]
  int v47; // [rsp+2D0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+2D8h] [rbp-58h]
  int *v49; // [rsp+2E0h] [rbp-50h]
  int *v50; // [rsp+2E8h] [rbp-48h]
  __int64 v51; // [rsp+2F0h] [rbp-40h]
  bool v52; // [rsp+2F8h] [rbp-38h]

  v18 = 0;
  v17 = 2;
  v16 = &off_2BEBEE0;
  v22 = &v24;
  v20 = 0;
  v21 = 1;
  v19 = 0;
  sub_227B8B0(&v16, 0, 0, 0);
  v23 = a3;
  v16 = &off_2C04F98;
  v24 = &v26;
  v31 = v33;
  v32 = 0xA00000000LL;
  v42 = v44;
  v43 = 0x400000000LL;
  v41 = 0;
  v44[4] = &v45;
  v46 = &v41;
  v49 = &v47;
  v50 = &v47;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v27 = a1;
  v28 = &v16;
  v29 = 0;
  v30 = -1;
  v33[40] = 0;
  v33[41] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v44[5] = 0;
  v45 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v47 = 0;
  v48 = 0;
  v51 = 0;
  v52 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  v6 = sub_B81B70(a2);
  if ( !v6 )
    goto LABEL_13;
  if ( v6 <= 3u )
  {
    sub_995540((__int64)v28, "?$S1@");
    v15 = 0;
    sub_E81AE0((__int64)&v27, a2);
    v7 = (__int64)v28;
    v8 = "@4IA";
    goto LABEL_4;
  }
  if ( v6 > 6u )
LABEL_13:
    BUG();
  v11 = "??__J";
  v12 = (__int64)v28;
  if ( !(unsigned int)sub_B73370(a2) )
    v11 = "??_B";
  sub_995540(v12, v11);
  v15 = 0;
  if ( (unsigned __int8)sub_E7F0E0(a1, a2, (int *)&v15) )
  {
    sub_E81AE0((__int64)&v27, a2);
    sub_995540((__int64)v28, "@5");
    v9 = (void *)v15;
    if ( !v15 )
      goto LABEL_5;
LABEL_11:
    sub_E79E60((__int64)&v27, v9);
    goto LABEL_5;
  }
  v13 = j__strlen(&byte_22F0C30);
  sub_E89720(&v27, a2, 0, &byte_22F0C30, v13, v14);
  v7 = (__int64)v28;
  v8 = "@5";
LABEL_4:
  sub_995540(v7, v8);
  v9 = (void *)v15;
  if ( v15 )
    goto LABEL_11;
LABEL_5:
  sub_E7AB30((__int64)&v27);
  return sub_E7A440(&v16);
}
