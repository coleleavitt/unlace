__int64 __fastcall sub_E68720(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v6; // r12
  _BYTE *v8; // rax
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rax
  _WORD *v22; // rdx
  _WORD **v23; // rax
  _WORD *v24; // rax
  __int64 (__fastcall **v25)(); // [rsp+8h] [rbp-328h] BYREF
  int v26; // [rsp+10h] [rbp-320h]
  __int128 v27; // [rsp+18h] [rbp-318h]
  _BYTE *v28; // [rsp+28h] [rbp-308h]
  char v29; // [rsp+30h] [rbp-300h]
  int v30; // [rsp+34h] [rbp-2FCh]
  __int64 **v31; // [rsp+38h] [rbp-2F8h]
  __int64 v32; // [rsp+40h] [rbp-2F0h]
  __int64 *v33; // [rsp+48h] [rbp-2E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-2E0h]
  __int64 v35; // [rsp+60h] [rbp-2D0h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp-288h] BYREF
  int v37; // [rsp+C0h] [rbp-270h]
  _QWORD *v38; // [rsp+C8h] [rbp-268h]
  __int64 v39; // [rsp+D0h] [rbp-260h]
  _QWORD v40[42]; // [rsp+D8h] [rbp-258h] BYREF
  int v41; // [rsp+228h] [rbp-108h]
  __int64 v42; // [rsp+230h] [rbp-100h]
  __int64 v43; // [rsp+238h] [rbp-F8h]
  int v44; // [rsp+240h] [rbp-F0h]
  __int64 v45; // [rsp+248h] [rbp-E8h]
  __int64 v46; // [rsp+250h] [rbp-E0h]
  int v47; // [rsp+258h] [rbp-D8h]
  __int128 v48; // [rsp+260h] [rbp-D0h] BYREF
  _QWORD *v49; // [rsp+270h] [rbp-C0h]
  __int64 v50; // [rsp+278h] [rbp-B8h]
  _QWORD v51[6]; // [rsp+280h] [rbp-B0h] BYREF
  __m128i v52; // [rsp+2B0h] [rbp-80h] BYREF
  __int128 *v53; // [rsp+2C0h] [rbp-70h]
  int v54; // [rsp+2D0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+2D8h] [rbp-58h]
  int *v56; // [rsp+2E0h] [rbp-50h]
  int *v57; // [rsp+2E8h] [rbp-48h]
  __int64 v58; // [rsp+2F0h] [rbp-40h]
  bool v59; // [rsp+2F8h] [rbp-38h]

  v6 = (_BYTE *)a2;
  v27 = 0;
  v26 = 2;
  v25 = &off_2BC1F40;
  v31 = &v33;
  v29 = 0;
  v30 = 1;
  v28 = nullptr;
  sub_2257B70(&v25, 0, 0, 0);
  v32 = a5;
  v25 = &off_2BDAF98;
  v33 = &v35;
  v38 = v40;
  v39 = 0xA00000000LL;
  v49 = v51;
  v50 = 0x400000000LL;
  v48 = 0;
  v51[4] = &v52;
  v53 = &v48;
  v56 = &v54;
  v57 = &v54;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v36[0] = a1;
  v36[1] = &v25;
  v36[2] = 0;
  v37 = -1;
  v40[40] = 0;
  v40[41] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v51[5] = 0;
  v52 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v54 = 0;
  v55 = 0;
  v58 = 0;
  v8 = v28;
  v59 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  if ( (unsigned __int64)v28 >= *((_QWORD *)&v27 + 1) )
  {
    sub_2257CD0(&v25, 63);
    if ( !sub_B55E40(a2) )
      goto LABEL_3;
LABEL_13:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    {
LABEL_14:
      v20 = ((*(_BYTE *)(sub_B68890(a2) + 89) >> 2) ^ 1) & 1;
LABEL_15:
      a2 = v20 | a2 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_3;
    }
    v21 = sub_B68690(a2, a2, v9, (__int64)v10, v11, v12);
    v22 = (_WORD *)*v21;
    v10 = (_WORD *)(*v21 + 8LL * *((unsigned int *)v21 + 2));
    if ( *v21 < (unsigned __int64)v10 )
    {
      v24 = (_WORD *)*v21;
      while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 64 )
      {
        v24 += 4;
        if ( v10 == v24 )
          goto LABEL_14;
      }
      if ( v10 == v24 )
        goto LABEL_14;
    }
    else
    {
      if ( v22 == v10 )
        goto LABEL_14;
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 64 )
      {
        v23 = (_WORD **)(v10 + 4);
        while ( v23 != (_WORD **)v22 )
        {
          v10 = *v23++;
          if ( v10[18] == 64 )
            goto LABEL_28;
        }
        goto LABEL_14;
      }
    }
LABEL_28:
    v20 = 0;
    goto LABEL_15;
  }
  ++v28;
  *v8 = 63;
  if ( sub_B55E40(a2) )
    goto LABEL_13;
LABEL_3:
  sub_E5E850(v36, a2, 0, (__int64)v10, v11, v12);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 32) )
    v13 = 0;
  else
    v13 = (v6[29] >> 5) & 3;
  sub_E56160(v13, (unsigned int *)a3, (__int64)v36, (__int64)&v25);
  v16 = *(_BYTE **)(a3 + 40);
  if ( !v16 )
    v16 = v6;
  v17 = (__int64 *)(*((_QWORD *)v16 + 6) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *v17;
  if ( *(_BYTE *)(*v17 + 16) != 26 )
    v18 = sub_F3F310(*v17, v18, v14, v15);
  sub_E5F3E0((__int64)v36, v18, v6, 0, 1);
  sub_E56DF0((__int64)v36);
  return sub_E56700(&v25);
}

