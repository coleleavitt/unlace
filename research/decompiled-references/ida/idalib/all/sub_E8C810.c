__int64 __fastcall sub_E8C810(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall ***v11)(); // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  _BYTE *v21; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 (__fastcall **v28)(); // [rsp+8h] [rbp-338h] BYREF
  int v29; // [rsp+10h] [rbp-330h]
  __int128 v30; // [rsp+18h] [rbp-328h]
  __int64 v31; // [rsp+28h] [rbp-318h]
  char v32; // [rsp+30h] [rbp-310h]
  int v33; // [rsp+34h] [rbp-30Ch]
  __int64 **v34; // [rsp+38h] [rbp-308h]
  __int64 v35; // [rsp+40h] [rbp-300h]
  __int64 *v36; // [rsp+48h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-2F0h]
  __int64 v38; // [rsp+60h] [rbp-2E0h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-298h] BYREF
  __int64 (__fastcall ***v40)(); // [rsp+B0h] [rbp-290h]
  __int64 v41; // [rsp+B8h] [rbp-288h]
  int v42; // [rsp+C0h] [rbp-280h]
  _QWORD *v43; // [rsp+C8h] [rbp-278h]
  __int64 v44; // [rsp+D0h] [rbp-270h]
  _QWORD v45[42]; // [rsp+D8h] [rbp-268h] BYREF
  int v46; // [rsp+228h] [rbp-118h]
  __int64 v47; // [rsp+230h] [rbp-110h]
  __int64 v48; // [rsp+238h] [rbp-108h]
  int v49; // [rsp+240h] [rbp-100h]
  __int64 v50; // [rsp+248h] [rbp-F8h]
  __int64 v51; // [rsp+250h] [rbp-F0h]
  int v52; // [rsp+258h] [rbp-E8h]
  __int128 v53; // [rsp+260h] [rbp-E0h] BYREF
  _QWORD *v54; // [rsp+270h] [rbp-D0h]
  __int64 v55; // [rsp+278h] [rbp-C8h]
  _QWORD v56[6]; // [rsp+280h] [rbp-C0h] BYREF
  __m128i v57; // [rsp+2B0h] [rbp-90h] BYREF
  __int128 *v58; // [rsp+2C0h] [rbp-80h]
  int v59; // [rsp+2D0h] [rbp-70h] BYREF
  __int64 v60; // [rsp+2D8h] [rbp-68h]
  int *v61; // [rsp+2E0h] [rbp-60h]
  int *v62; // [rsp+2E8h] [rbp-58h]
  __int64 v63; // [rsp+2F0h] [rbp-50h]
  bool v64; // [rsp+2F8h] [rbp-48h]

  v30 = 0;
  v28 = &off_2BEBEE0;
  v34 = &v36;
  v29 = 2;
  v32 = 0;
  v33 = 1;
  v31 = 0;
  sub_227B8B0(&v28, 0, 0, 0);
  v11 = &v28;
  v35 = a5;
  v36 = &v38;
  v43 = v45;
  v54 = v56;
  v28 = &off_2C04F98;
  v53 = 0;
  v56[4] = &v57;
  v44 = 0xA00000000LL;
  v58 = &v53;
  v39 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v40 = &v28;
  v41 = 0;
  v42 = -1;
  v45[40] = 0;
  v45[41] = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v55 = 0x400000000LL;
  v56[5] = 0;
  v57 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v59 = 0;
  v60 = 0;
  v61 = &v59;
  v62 = &v59;
  v12 = *(_QWORD *)(a1 + 8);
  v63 = 0;
  v64 = *(_BYTE *)(*(_QWORD *)(v12 + 17448) + 8LL) == 64;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v23 = sub_B8C3D0(a2, 0, (__int64)&v59, 0x400000000LL, v9, v10);
  v24 = *v23;
  v25 = *v23 + 8LL * *((unsigned int *)v23 + 2);
  if ( *v23 >= v25 )
  {
    v11 = v40;
    if ( v24 == v25 )
    {
LABEL_2:
      sub_995540((__int64)v11, "??_7");
      goto LABEL_3;
    }
    while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 197 )
    {
      v25 += 8LL;
      if ( v24 == v25 )
        goto LABEL_2;
    }
  }
  else
  {
    v26 = *v23;
    while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 197 )
    {
      v26 += 8LL;
      if ( v25 == v26 )
      {
        v11 = v40;
        goto LABEL_2;
      }
    }
    v11 = v40;
    if ( v26 == v25 )
      goto LABEL_2;
  }
  sub_995540((__int64)v11, "??_S");
LABEL_3:
  v16 = &a3[a4];
  sub_E82590(&v39, a2, 0, v13, v14, v15);
  sub_995540((__int64)v40, "6B");
  while ( v16 != a3 )
  {
    v20 = *a3;
    v5 &= 0xFFFFFFFF00000000LL;
    ++a3;
    sub_E82590(&v39, v20, v5, v17, v18, v19);
  }
  v21 = v40[4];
  if ( v21 >= (_BYTE *)v40[3] )
  {
    sub_227BA10(v40, 64);
  }
  else
  {
    v40[4] = (__int64 (__fastcall **)())(v21 + 1);
    *v21 = 64;
  }
  sub_E7AB30((__int64)&v39);
  return sub_E7A440(&v28);
}
