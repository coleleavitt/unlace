__int64 __fastcall sub_E65AF0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v7; // rcx
  char v8; // al
  char *v9; // rcx
  _QWORD *v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // r9
  char *v14; // rsi
  char *v15; // r14
  _QWORD *v16; // rax
  char *v17; // [rsp+0h] [rbp-388h]
  void *v18[2]; // [rsp+10h] [rbp-378h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-368h] BYREF
  void *v20; // [rsp+30h] [rbp-358h]
  size_t v21; // [rsp+38h] [rbp-350h]
  __m128i v22; // [rsp+40h] [rbp-348h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+50h] [rbp-338h] BYREF
  int v24; // [rsp+58h] [rbp-330h]
  __int128 v25; // [rsp+60h] [rbp-328h]
  __int64 v26; // [rsp+70h] [rbp-318h]
  char v27; // [rsp+78h] [rbp-310h]
  int v28; // [rsp+7Ch] [rbp-30Ch]
  __int64 **v29; // [rsp+80h] [rbp-308h]
  __int64 v30; // [rsp+88h] [rbp-300h]
  __int64 *v31; // [rsp+90h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-2F0h]
  __int64 v33; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v34[3]; // [rsp+F0h] [rbp-298h] BYREF
  int v35; // [rsp+108h] [rbp-280h]
  _QWORD *v36; // [rsp+110h] [rbp-278h]
  __int64 v37; // [rsp+118h] [rbp-270h]
  _QWORD v38[42]; // [rsp+120h] [rbp-268h] BYREF
  int v39; // [rsp+270h] [rbp-118h]
  __int64 v40; // [rsp+278h] [rbp-110h]
  __int64 v41; // [rsp+280h] [rbp-108h]
  int v42; // [rsp+288h] [rbp-100h]
  __int64 v43; // [rsp+290h] [rbp-F8h]
  __int64 v44; // [rsp+298h] [rbp-F0h]
  int v45; // [rsp+2A0h] [rbp-E8h]
  __int128 v46; // [rsp+2A8h] [rbp-E0h] BYREF
  _QWORD *v47; // [rsp+2B8h] [rbp-D0h]
  __int64 v48; // [rsp+2C0h] [rbp-C8h]
  _QWORD v49[6]; // [rsp+2C8h] [rbp-C0h] BYREF
  __m128i v50; // [rsp+2F8h] [rbp-90h] BYREF
  __int128 *v51; // [rsp+308h] [rbp-80h]
  int v52; // [rsp+318h] [rbp-70h] BYREF
  __int64 v53; // [rsp+320h] [rbp-68h]
  int *v54; // [rsp+328h] [rbp-60h]
  int *v55; // [rsp+330h] [rbp-58h]
  __int64 v56; // [rsp+338h] [rbp-50h]
  bool v57; // [rsp+340h] [rbp-48h]

  v25 = 0;
  v24 = 2;
  v23 = &off_2BC1F40;
  v29 = &v31;
  v27 = 0;
  v28 = 1;
  v26 = 0;
  sub_2257B70(&v23, 0, 0, 0);
  v30 = a4;
  v23 = &off_2BDAF98;
  v31 = &v33;
  v36 = v38;
  v37 = 0xA00000000LL;
  v47 = v49;
  v48 = 0x400000000LL;
  v46 = 0;
  v49[4] = &v50;
  v51 = &v46;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v50 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v54 = &v52;
  v55 = &v52;
  v34[0] = a1;
  v34[1] = (__int64)&v23;
  v34[2] = 0;
  v35 = -1;
  v38[40] = 0;
  v38[41] = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v49[5] = 0;
  v52 = 0;
  v53 = 0;
  v56 = 0;
  v57 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  sub_971800((__int64)&v23, "?");
  v7 = a3;
  if ( !a3 )
  {
    v18[0] = v19;
    v8 = 48;
LABEL_3:
    LOBYTE(v19[0]) = v8;
    v9 = (_BYTE *)(&dword_0 + 1);
    v10 = v19;
    goto LABEL_4;
  }
  v14 = &v22.m128i_i8[5];
  while ( 1 )
  {
    --v14;
    v8 = v7 % 0xA + 48;
    *v14 = v8;
    if ( v7 <= 9 )
      break;
    v7 /= 0xAu;
  }
  v15 = (char *)(&v22.m128i_u8[5] - (unsigned __int8 *)v14);
  v10 = v19;
  v9 = (char *)(&v22.m128i_u8[5] - (unsigned __int8 *)v14);
  v18[0] = v19;
  if ( (unsigned __int64)(&v22.m128i_u8[5] - (unsigned __int8 *)v14) > 0xF )
  {
    if ( (__int64)v15 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v16 = (_QWORD *)operator new((unsigned __int64)(v15 + 1));
    v19[0] = &v22.m128i_u8[5] - (unsigned __int8 *)v14;
    v9 = (char *)(&v22.m128i_u8[5] - (unsigned __int8 *)v14);
    v18[0] = v16;
    goto LABEL_17;
  }
  if ( v15 == (_BYTE *)&dword_0 + 1 )
    goto LABEL_3;
  if ( v15 )
  {
    v16 = v19;
LABEL_17:
    v17 = v9;
    memcpy(v16, v14, (size_t)v15);
    v10 = v18[0];
    v9 = v17;
  }
LABEL_4:
  v18[1] = v9;
  v9[(_QWORD)v10] = 0;
  v11 = (__m128i *)sub_978080(v18, 0, 0, "$RT", 3u);
  v20 = &v22;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v22 = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v20 = (void *)v11->m128i_i64[0];
    v22.m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v21 = v11->m128i_u64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  sub_E58770((__int64)v34, v20, v21);
  if ( v20 != &v22 )
    operator delete(v20);
  if ( v18[0] != v19 )
    operator delete(v18[0]);
  sub_E659E0(v34, a2, 0, &byte_22CD811, 0, v12);
  sub_E56DF0((__int64)v34);
  return sub_E56700(&v23);
}

