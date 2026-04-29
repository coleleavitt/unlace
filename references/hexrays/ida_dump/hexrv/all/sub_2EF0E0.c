unsigned __int64 __fastcall sub_2EF0E0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __m128i v6; // xmm0
  int v7; // eax
  __m128i v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v15; // [rsp+28h] [rbp-290h]
  __m128i v16; // [rsp+38h] [rbp-280h] BYREF
  __int64 v17; // [rsp+48h] [rbp-270h]
  _BYTE v18[8]; // [rsp+50h] [rbp-268h] BYREF
  __int128 v19; // [rsp+58h] [rbp-260h]
  _QWORD v20[2]; // [rsp+70h] [rbp-248h] BYREF
  _QWORD v21[2]; // [rsp+80h] [rbp-238h] BYREF
  _QWORD v22[2]; // [rsp+90h] [rbp-228h] BYREF
  int v23; // [rsp+A0h] [rbp-218h]
  int v24; // [rsp+A8h] [rbp-210h]
  char v25; // [rsp+B0h] [rbp-208h]
  __m128i v26; // [rsp+B8h] [rbp-200h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-1F0h]
  _BYTE v28[8]; // [rsp+D0h] [rbp-1E8h] BYREF
  __int128 v29; // [rsp+D8h] [rbp-1E0h]
  _QWORD v30[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  _QWORD v31[2]; // [rsp+100h] [rbp-1B8h] BYREF
  _QWORD v32[2]; // [rsp+110h] [rbp-1A8h] BYREF
  int v33; // [rsp+120h] [rbp-198h]
  int v34; // [rsp+128h] [rbp-190h]
  int v35; // [rsp+130h] [rbp-188h]
  __int64 v36; // [rsp+138h] [rbp-180h]
  __int64 (__fastcall **v37)(); // [rsp+140h] [rbp-178h] BYREF
  __m128i v38; // [rsp+148h] [rbp-170h]
  __int64 v39; // [rsp+158h] [rbp-160h]
  _BYTE v40[8]; // [rsp+160h] [rbp-158h] BYREF
  __int128 v41; // [rsp+168h] [rbp-150h]
  _QWORD v42[2]; // [rsp+180h] [rbp-138h] BYREF
  _QWORD v43[2]; // [rsp+190h] [rbp-128h] BYREF
  _QWORD v44[2]; // [rsp+1A0h] [rbp-118h] BYREF
  int v45; // [rsp+1B0h] [rbp-108h]
  int v46; // [rsp+1B8h] [rbp-100h]
  char v47; // [rsp+1C0h] [rbp-F8h]
  __m128i v48; // [rsp+1C8h] [rbp-F0h]
  __int64 v49; // [rsp+1D8h] [rbp-E0h]
  _BYTE v50[8]; // [rsp+1E0h] [rbp-D8h] BYREF
  __int128 v51; // [rsp+1E8h] [rbp-D0h]
  _QWORD v52[2]; // [rsp+200h] [rbp-B8h] BYREF
  _QWORD v53[2]; // [rsp+210h] [rbp-A8h] BYREF
  _QWORD v54[2]; // [rsp+220h] [rbp-98h] BYREF
  int v55; // [rsp+230h] [rbp-88h]
  int v56; // [rsp+238h] [rbp-80h]
  int v57; // [rsp+240h] [rbp-78h]
  __int64 v58; // [rsp+248h] [rbp-70h]
  _BYTE v59[16]; // [rsp+250h] [rbp-68h] BYREF
  void (__fastcall *v60)(_BYTE *, _BYTE *, __int64); // [rsp+260h] [rbp-58h]
  unsigned __int64 v61; // [rsp+278h] [rbp-40h]

  v3 = a2 - a1;
  v61 = __readfsqword(0x28u);
  if ( v3 > 272 )
  {
    v15 = 0xF0F0F0F0F0F0F0F1LL * (v3 >> 4);
    v4 = (v15 - 2) / 2;
    v5 = a1 + 272 * v4 + 32;
    while ( 1 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v5 - 24));
      v17 = *(_QWORD *)(v5 - 8);
      v20[0] = 0xFFFFFFFF00000000LL;
      v20[1] = 0;
      v21[0] = 0xFFFFFFFF00000000LL;
      v21[1] = 0;
      v22[0] = 0xFFFFFFFF00000000LL;
      v22[1] = 0;
      v16 = v6;
      v19 = 0;
      sub_120EE0((__int64)v18, v5);
      v7 = *(_DWORD *)(v5 + 80);
      v8 = _mm_loadu_si128((const __m128i *)(v5 + 104));
      v30[0] = 0xFFFFFFFF00000000LL;
      v23 = v7;
      v9 = *(_DWORD *)(v5 + 88);
      v30[1] = 0;
      v24 = v9;
      LOBYTE(v9) = *(_BYTE *)(v5 + 96);
      v31[0] = 0xFFFFFFFF00000000LL;
      v25 = v9;
      v10 = *(_QWORD *)(v5 + 120);
      v31[1] = 0;
      v27 = v10;
      v32[0] = 0xFFFFFFFF00000000LL;
      v32[1] = 0;
      v26 = v8;
      v29 = 0;
      sub_120EE0((__int64)v28, v5 + 128);
      v33 = *(_DWORD *)(v5 + 208);
      v34 = *(_DWORD *)(v5 + 216);
      v35 = *(_DWORD *)(v5 + 224);
      v36 = *(_QWORD *)(v5 + 232);
      sub_2C95F0((__int64)v59, a3);
      v11 = _mm_loadu_si128(&v16);
      v37 = off_4B3EA0;
      v39 = v17;
      v42[0] = 0xFFFFFFFF00000000LL;
      v42[1] = 0;
      v43[0] = 0xFFFFFFFF00000000LL;
      v43[1] = 0;
      v44[0] = 0xFFFFFFFF00000000LL;
      v44[1] = 0;
      v38 = v11;
      v41 = 0;
      sub_120EE0((__int64)v40, (__int64)v18);
      v12 = _mm_loadu_si128(&v26);
      v52[0] = 0xFFFFFFFF00000000LL;
      v45 = v23;
      v52[1] = 0;
      v46 = v24;
      v53[0] = 0xFFFFFFFF00000000LL;
      v47 = v25;
      v53[1] = 0;
      v49 = v27;
      v54[0] = 0xFFFFFFFF00000000LL;
      v54[1] = 0;
      v48 = v12;
      v51 = 0;
      sub_120EE0((__int64)v50, (__int64)v28);
      v55 = v33;
      v56 = v34;
      v57 = v35;
      v37 = off_4B56F0;
      v58 = v36;
      sub_2EE940(a1, v4, v15, (__int64)&v37, (__int64)v59);
      v37 = off_4B3EA0;
      sub_1188E0((__int64)v54);
      sub_1188E0((__int64)v53);
      sub_1188E0((__int64)v52);
      sub_1188E0((__int64)v44);
      sub_1188E0((__int64)v43);
      sub_1188E0((__int64)v42);
      if ( v60 )
        v60(v59, v59, 3);
      v5 -= 272;
      if ( !v4 )
        break;
      --v4;
      sub_1188E0((__int64)v32);
      sub_1188E0((__int64)v31);
      sub_1188E0((__int64)v30);
      sub_1188E0((__int64)v22);
      sub_1188E0((__int64)v21);
      sub_1188E0((__int64)v20);
    }
    sub_1188E0((__int64)v32);
    sub_1188E0((__int64)v31);
    sub_1188E0((__int64)v30);
    sub_1188E0((__int64)v22);
    sub_1188E0((__int64)v21);
    sub_1188E0((__int64)v20);
  }
  return v61 - __readfsqword(0x28u);
}
