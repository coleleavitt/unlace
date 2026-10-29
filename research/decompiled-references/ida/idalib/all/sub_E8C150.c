__int64 __fastcall sub_E8C150(__int64 a1, _BYTE *a2, int a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v25; // rax
  __int64 (__fastcall **v26)(); // [rsp+0h] [rbp-338h] BYREF
  int v27; // [rsp+8h] [rbp-330h]
  __int128 v28; // [rsp+10h] [rbp-328h]
  __int64 v29; // [rsp+20h] [rbp-318h]
  char v30; // [rsp+28h] [rbp-310h]
  int v31; // [rsp+2Ch] [rbp-30Ch]
  __int64 **v32; // [rsp+30h] [rbp-308h]
  __int64 v33; // [rsp+38h] [rbp-300h]
  __int64 *v34; // [rsp+40h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-2F0h]
  __int64 v36; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v38)(); // [rsp+A8h] [rbp-290h]
  __int64 v39; // [rsp+B0h] [rbp-288h]
  int v40; // [rsp+B8h] [rbp-280h]
  _QWORD *v41; // [rsp+C0h] [rbp-278h]
  __int64 v42; // [rsp+C8h] [rbp-270h]
  _QWORD v43[42]; // [rsp+D0h] [rbp-268h] BYREF
  int v44; // [rsp+220h] [rbp-118h]
  __int64 v45; // [rsp+228h] [rbp-110h]
  __int64 v46; // [rsp+230h] [rbp-108h]
  int v47; // [rsp+238h] [rbp-100h]
  __int64 v48; // [rsp+240h] [rbp-F8h]
  __int64 v49; // [rsp+248h] [rbp-F0h]
  int v50; // [rsp+250h] [rbp-E8h]
  __int128 v51; // [rsp+258h] [rbp-E0h] BYREF
  _QWORD *v52; // [rsp+268h] [rbp-D0h]
  __int64 v53; // [rsp+270h] [rbp-C8h]
  _QWORD v54[6]; // [rsp+278h] [rbp-C0h] BYREF
  __m128i v55; // [rsp+2A8h] [rbp-90h] BYREF
  __int128 *v56; // [rsp+2B8h] [rbp-80h]
  int v57; // [rsp+2C8h] [rbp-70h] BYREF
  __int64 v58; // [rsp+2D0h] [rbp-68h]
  int *v59; // [rsp+2D8h] [rbp-60h]
  int *v60; // [rsp+2E0h] [rbp-58h]
  __int64 v61; // [rsp+2E8h] [rbp-50h]
  bool v62; // [rsp+2F0h] [rbp-48h]

  v28 = 0;
  v27 = 2;
  v26 = &off_2BEBEE0;
  v32 = &v34;
  v30 = 0;
  v31 = 1;
  v29 = 0;
  sub_227B8B0(&v26, 0, 0, 0);
  v33 = a6;
  v26 = &off_2C04F98;
  v34 = &v36;
  v10 = a2[28];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v37 = a1;
  v38 = &v26;
  if ( (v10 & 0x7F) == 0x47 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 6) + 32LL))(*((_QWORD *)a2 + 6));
  }
  else
  {
    v25 = sub_B77AF0((__int64)a2);
    if ( v25 )
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 48) + 32LL))(*(_QWORD *)(v25 + 48));
    else
      v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
  }
  v40 = a3;
  v39 = v11;
  v41 = v43;
  v42 = 0xA00000000LL;
  v52 = v54;
  v53 = 0x400000000LL;
  v54[4] = &v55;
  v56 = &v51;
  v59 = &v57;
  v60 = &v57;
  v12 = *(_QWORD *)(a1 + 8);
  v51 = 0;
  v13 = *(_QWORD *)(v12 + 17448);
  v43[40] = 0;
  v55 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v43[41] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v54[5] = 0;
  v57 = 0;
  v58 = 0;
  v61 = 0;
  v62 = *(_BYTE *)(v13 + 8) == 64;
  sub_995540((__int64)v38, "??_E");
  v14 = *(_QWORD *)(sub_B8C1B0((__int64)(a2 + 72)) + 16);
  if ( (v14 & 4) != 0 )
    v18 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v18 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v18 - 64;
  if ( !v18 )
    v19 = 0;
  sub_E82590(&v37, v19, 0, v15, v16, v17);
  sub_E79EA0((a2[29] >> 5) & 3, a4, (__int64)&v37, (__int64)&v26);
  v22 = (__int64 *)(*((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *v22;
  if ( *(_BYTE *)(*v22 + 16) != 26 )
    v23 = sub_F63050(*v22, v23, v20, v21);
  sub_E83120((__int64)&v37, v23, a2, 0, 1);
  sub_E7AB30((__int64)&v37);
  return sub_E7A440(&v26);
}
