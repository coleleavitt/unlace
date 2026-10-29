__int64 __fastcall sub_E8CD40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v7; // rcx
  char v8; // al
  char *v9; // rcx
  _QWORD *v10; // rdx
  __m128i *v11; // rax
  char *v13; // rsi
  char *v14; // r14
  _QWORD *v15; // rax
  char *v16; // [rsp+0h] [rbp-388h]
  void *v17[2]; // [rsp+10h] [rbp-378h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-368h] BYREF
  void *v19; // [rsp+30h] [rbp-358h]
  size_t v20; // [rsp+38h] [rbp-350h]
  __m128i v21; // [rsp+40h] [rbp-348h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+50h] [rbp-338h] BYREF
  int v23; // [rsp+58h] [rbp-330h]
  __int128 v24; // [rsp+60h] [rbp-328h]
  __int64 v25; // [rsp+70h] [rbp-318h]
  char v26; // [rsp+78h] [rbp-310h]
  int v27; // [rsp+7Ch] [rbp-30Ch]
  __int64 **v28; // [rsp+80h] [rbp-308h]
  __int64 v29; // [rsp+88h] [rbp-300h]
  __int64 *v30; // [rsp+90h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-2F0h]
  __int64 v32; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v34)(); // [rsp+F8h] [rbp-290h]
  __int64 v35; // [rsp+100h] [rbp-288h]
  int v36; // [rsp+108h] [rbp-280h]
  _QWORD *v37; // [rsp+110h] [rbp-278h]
  __int64 v38; // [rsp+118h] [rbp-270h]
  _QWORD v39[42]; // [rsp+120h] [rbp-268h] BYREF
  int v40; // [rsp+270h] [rbp-118h]
  __int64 v41; // [rsp+278h] [rbp-110h]
  __int64 v42; // [rsp+280h] [rbp-108h]
  int v43; // [rsp+288h] [rbp-100h]
  __int64 v44; // [rsp+290h] [rbp-F8h]
  __int64 v45; // [rsp+298h] [rbp-F0h]
  int v46; // [rsp+2A0h] [rbp-E8h]
  __int128 v47; // [rsp+2A8h] [rbp-E0h] BYREF
  _QWORD *v48; // [rsp+2B8h] [rbp-D0h]
  __int64 v49; // [rsp+2C0h] [rbp-C8h]
  _QWORD v50[6]; // [rsp+2C8h] [rbp-C0h] BYREF
  __m128i v51; // [rsp+2F8h] [rbp-90h] BYREF
  __int128 *v52; // [rsp+308h] [rbp-80h]
  int v53; // [rsp+318h] [rbp-70h] BYREF
  __int64 v54; // [rsp+320h] [rbp-68h]
  int *v55; // [rsp+328h] [rbp-60h]
  int *v56; // [rsp+330h] [rbp-58h]
  __int64 v57; // [rsp+338h] [rbp-50h]
  bool v58; // [rsp+340h] [rbp-48h]

  v24 = 0;
  v23 = 2;
  v22 = &off_2BEBEE0;
  v28 = &v30;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  sub_227B8B0(&v22, 0, 0, 0);
  v29 = a4;
  v22 = &off_2C04F98;
  v30 = &v32;
  v37 = v39;
  v38 = 0xA00000000LL;
  v48 = v50;
  v49 = 0x400000000LL;
  v47 = 0;
  v50[4] = &v51;
  v52 = &v47;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v51 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v55 = &v53;
  v56 = &v53;
  v33 = a1;
  v34 = &v22;
  v35 = 0;
  v36 = -1;
  v39[40] = 0;
  v39[41] = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v50[5] = 0;
  v53 = 0;
  v54 = 0;
  v57 = 0;
  v58 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  sub_995540((__int64)&v22, "?");
  v7 = a3;
  if ( !a3 )
  {
    v17[0] = v18;
    v8 = 48;
LABEL_3:
    LOBYTE(v18[0]) = v8;
    v9 = (_BYTE *)(&dword_0 + 1);
    v10 = v18;
    goto LABEL_4;
  }
  v13 = &v21.m128i_i8[5];
  while ( 1 )
  {
    --v13;
    v8 = v7 % 0xA + 48;
    *v13 = v8;
    if ( v7 <= 9 )
      break;
    v7 /= 0xAu;
  }
  v14 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v13);
  v10 = v18;
  v9 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v13);
  v17[0] = v18;
  if ( (unsigned __int64)(&v21.m128i_u8[5] - (unsigned __int8 *)v13) > 0xF )
  {
    if ( (__int64)v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v15 = (_QWORD *)operator new((unsigned __int64)(v14 + 1));
    v18[0] = &v21.m128i_u8[5] - (unsigned __int8 *)v13;
    v9 = (char *)(&v21.m128i_u8[5] - (unsigned __int8 *)v13);
    v17[0] = v15;
    goto LABEL_17;
  }
  if ( v14 == (_BYTE *)&dword_0 + 1 )
    goto LABEL_3;
  if ( v14 )
  {
    v15 = v18;
LABEL_17:
    v16 = v9;
    memcpy(v15, v13, (size_t)v14);
    v10 = v17[0];
    v9 = v16;
  }
LABEL_4:
  v17[1] = v9;
  v9[(_QWORD)v10] = 0;
  v11 = (__m128i *)sub_99BDC0(v17, 0, 0, "$TSS", 4u);
  v19 = &v21;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v21 = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v19 = (void *)v11->m128i_i64[0];
    v21.m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v20 = v11->m128i_u64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  sub_E7C4B0((__int64)&v33, v19, v20);
  if ( v19 != &v21 )
    operator delete(v19);
  if ( v17[0] != v18 )
    operator delete(v17[0]);
  sub_E81AE0((__int64)&v33, a2);
  sub_995540((__int64)v34, "@4HA");
  sub_E7AB30((__int64)&v33);
  return sub_E7A440(&v22);
}
