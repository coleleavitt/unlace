__int64 __fastcall sub_2B18B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __m128i v3; // xmm0
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  __m128i v7; // xmm0
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  __m128i v16; // [rsp+8h] [rbp-240h] BYREF
  __int64 v17; // [rsp+18h] [rbp-230h]
  _BYTE v18[8]; // [rsp+20h] [rbp-228h] BYREF
  __int128 v19; // [rsp+28h] [rbp-220h]
  _QWORD v20[2]; // [rsp+40h] [rbp-208h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-1F8h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-1E8h] BYREF
  int v23; // [rsp+70h] [rbp-1D8h]
  int v24; // [rsp+78h] [rbp-1D0h]
  char v25; // [rsp+80h] [rbp-1C8h]
  __m128i v26; // [rsp+88h] [rbp-1C0h]
  __int64 v27; // [rsp+98h] [rbp-1B0h]
  _BYTE v28[8]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-1A0h]
  _QWORD v30[2]; // [rsp+C0h] [rbp-188h] BYREF
  _QWORD v31[2]; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v32[2]; // [rsp+E0h] [rbp-168h] BYREF
  int v33; // [rsp+F0h] [rbp-158h]
  int v34; // [rsp+F8h] [rbp-150h]
  int v35; // [rsp+100h] [rbp-148h]
  __int64 (__fastcall **v36)(); // [rsp+110h] [rbp-138h]
  __m128i v37; // [rsp+118h] [rbp-130h] BYREF
  __int64 v38; // [rsp+128h] [rbp-120h]
  _BYTE v39[8]; // [rsp+130h] [rbp-118h] BYREF
  __int128 v40; // [rsp+138h] [rbp-110h]
  _QWORD v41[2]; // [rsp+150h] [rbp-F8h] BYREF
  _QWORD v42[2]; // [rsp+160h] [rbp-E8h] BYREF
  _QWORD v43[2]; // [rsp+170h] [rbp-D8h] BYREF
  int v44; // [rsp+180h] [rbp-C8h]
  int v45; // [rsp+188h] [rbp-C0h]
  char v46; // [rsp+190h] [rbp-B8h]
  __m128i v47; // [rsp+198h] [rbp-B0h]
  __int64 v48; // [rsp+1A8h] [rbp-A0h]
  _BYTE v49[8]; // [rsp+1B0h] [rbp-98h] BYREF
  __int128 v50; // [rsp+1B8h] [rbp-90h]
  _QWORD v51[2]; // [rsp+1D0h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+1E0h] [rbp-68h] BYREF
  _QWORD v53[2]; // [rsp+1F0h] [rbp-58h] BYREF
  int v54; // [rsp+200h] [rbp-48h]
  int v55; // [rsp+208h] [rbp-40h]
  int v56; // [rsp+210h] [rbp-38h]
  unsigned __int64 v57; // [rsp+218h] [rbp-30h]

  v57 = __readfsqword(0x28u);
  v36 = off_4ADC60;
  v41[1] = 0;
  v42[1] = 0;
  v43[1] = 0;
  v38 = *(_QWORD *)(a2 + 24);
  v37 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v41[0] = 0xFFFFFFFF00000000LL;
  v42[0] = 0xFFFFFFFF00000000LL;
  v43[0] = 0xFFFFFFFF00000000LL;
  v40 = 0;
  sub_11ECE0((__int64)v39, a2 + 32);
  v2 = *(_DWORD *)(a2 + 112);
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v46 = 0;
  v44 = v2;
  v4 = *(_DWORD *)(a2 + 120);
  v47 = v3;
  v45 = v4;
  v5 = *(_QWORD *)(a2 + 24);
  v51[1] = 0;
  v48 = v5;
  v51[0] = 0xFFFFFFFF00000000LL;
  v52[0] = 0xFFFFFFFF00000000LL;
  v52[1] = 0;
  v53[0] = 0xFFFFFFFF00000000LL;
  v53[1] = 0;
  v50 = 0;
  sub_11ECE0((__int64)v49, a2 + 32);
  v6 = *(_DWORD *)(a2 + 112);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v56 = -2;
  v54 = v6;
  v8 = *(_DWORD *)(a2 + 120);
  v16 = v7;
  v55 = v8;
  v9 = *(_QWORD *)(a1 + 24);
  v20[1] = 0;
  v17 = v9;
  v20[0] = 0xFFFFFFFF00000000LL;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  v19 = 0;
  sub_11ECE0((__int64)v18, a1 + 32);
  v10 = *(_DWORD *)(a1 + 112);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v25 = 0;
  v23 = v10;
  v12 = *(_DWORD *)(a1 + 120);
  v26 = v11;
  v24 = v12;
  v13 = *(_QWORD *)(a1 + 24);
  v30[1] = 0;
  v27 = v13;
  v30[0] = 0xFFFFFFFF00000000LL;
  v31[0] = 0xFFFFFFFF00000000LL;
  v31[1] = 0;
  v32[0] = 0xFFFFFFFF00000000LL;
  v32[1] = 0;
  v29 = 0;
  sub_11ECE0((__int64)v28, a1 + 32);
  v35 = -2;
  v33 = *(_DWORD *)(a1 + 112);
  v34 = *(_DWORD *)(a1 + 120);
  if ( v24 < v45 )
  {
    v14 = -1;
  }
  else if ( v24 > v45 )
  {
    v14 = 1;
  }
  else
  {
    v14 = sub_1310E0((__int64)&v16, (__int64)&v37);
  }
  sub_1166E0((__int64)v32);
  sub_1166E0((__int64)v31);
  sub_1166E0((__int64)v30);
  sub_1166E0((__int64)v22);
  sub_1166E0((__int64)v21);
  sub_1166E0((__int64)v20);
  v36 = off_4ADC60;
  sub_1166E0((__int64)v53);
  sub_1166E0((__int64)v52);
  sub_1166E0((__int64)v51);
  sub_1166E0((__int64)v43);
  sub_1166E0((__int64)v42);
  sub_1166E0((__int64)v41);
  return v14;
}
