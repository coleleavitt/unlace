__int64 __fastcall sub_2B6DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  _UNKNOWN **v11; // [rsp+0h] [rbp-1B8h] BYREF
  _DWORD v12[4]; // [rsp+8h] [rbp-1B0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-1A0h]
  __int64 v14; // [rsp+20h] [rbp-198h]
  int v15; // [rsp+28h] [rbp-190h]
  int v16; // [rsp+30h] [rbp-188h]
  __m128i v17; // [rsp+38h] [rbp-180h]
  __int64 v18; // [rsp+48h] [rbp-170h]
  __int128 v19; // [rsp+50h] [rbp-168h]
  __int64 v20; // [rsp+60h] [rbp-158h]
  __int64 v21; // [rsp+68h] [rbp-150h]
  __int128 v22; // [rsp+70h] [rbp-148h]
  __int64 v23; // [rsp+80h] [rbp-138h]
  __int64 v24; // [rsp+88h] [rbp-130h]
  _DWORD v25[4]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-118h]
  __int64 v27; // [rsp+A8h] [rbp-110h]
  int v28; // [rsp+B0h] [rbp-108h]
  int v29; // [rsp+B8h] [rbp-100h]
  _UNKNOWN **v30; // [rsp+C0h] [rbp-F8h] BYREF
  _DWORD v31[4]; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-E0h]
  __int64 v33; // [rsp+E0h] [rbp-D8h]
  int v34; // [rsp+E8h] [rbp-D0h]
  int v35; // [rsp+F0h] [rbp-C8h]
  __m128i si128; // [rsp+F8h] [rbp-C0h]
  __int64 v37; // [rsp+108h] [rbp-B0h]
  __int128 v38; // [rsp+110h] [rbp-A8h]
  __int64 v39; // [rsp+120h] [rbp-98h]
  __int64 v40; // [rsp+128h] [rbp-90h]
  __int128 v41; // [rsp+130h] [rbp-88h]
  __int64 v42; // [rsp+140h] [rbp-78h]
  __int64 v43; // [rsp+148h] [rbp-70h]
  _DWORD v44[4]; // [rsp+150h] [rbp-68h] BYREF
  __int64 v45; // [rsp+160h] [rbp-58h]
  __int64 v46; // [rsp+168h] [rbp-50h]
  int v47; // [rsp+170h] [rbp-48h]
  int v48; // [rsp+178h] [rbp-40h]
  unsigned __int64 v49; // [rsp+188h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v30 = &off_4CE648;
  v31[0] = 0;
  copy_argloc(v31, a2 + 8);
  v2 = *(_QWORD *)(a2 + 24);
  v43 = 0;
  v32 = v2;
  v3 = *(_QWORD *)(a2 + 32);
  v35 = 0;
  v33 = v3;
  LODWORD(v3) = *(_DWORD *)(a2 + 40);
  v37 = 0;
  v34 = v3;
  v39 = 0;
  v40 = 0;
  v42 = -1;
  v44[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v38 = 0;
  v41 = 0;
  copy_argloc(v44, a2 + 8);
  v4 = *(_QWORD *)(a2 + 24);
  v11 = &off_4CE648;
  v12[0] = 0;
  v45 = v4;
  v5 = *(_QWORD *)(a2 + 32);
  v48 = -2;
  v46 = v5;
  v47 = *(_DWORD *)(a2 + 40);
  copy_argloc(v12, a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  v13 = v6;
  v7 = *(_QWORD *)(a1 + 32);
  v24 = 0;
  v14 = v7;
  LODWORD(v7) = *(_DWORD *)(a1 + 40);
  v16 = 0;
  v15 = v7;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = -1;
  v25[0] = 0;
  v17 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v22 = 0;
  copy_argloc(v25, a1 + 8);
  v8 = *(_QWORD *)(a1 + 24);
  v29 = -2;
  v26 = v8;
  v27 = *(_QWORD *)(a1 + 32);
  v28 = *(_DWORD *)(a1 + 40);
  v9 = sub_2B57D0((__int64)v12, (__int64)v31);
  sub_2B6AB0((__int64)&v11);
  sub_2B6AB0((__int64)&v30);
  return v9;
}
