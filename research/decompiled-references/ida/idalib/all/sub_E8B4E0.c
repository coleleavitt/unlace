__int64 __fastcall sub_E8B4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(); // r13
  unsigned int v11; // esi
  __int64 v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  int *v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v24; // edx
  int v25; // [rsp+0h] [rbp-364h]
  __int64 v26; // [rsp+4h] [rbp-360h]
  __int64 v27; // [rsp+Ch] [rbp-358h] BYREF
  __int64 v28; // [rsp+14h] [rbp-350h]
  __int64 v29; // [rsp+24h] [rbp-340h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+2Ch] [rbp-338h] BYREF
  int v31; // [rsp+34h] [rbp-330h]
  __int128 v32; // [rsp+3Ch] [rbp-328h]
  _DWORD *v33; // [rsp+4Ch] [rbp-318h]
  char v34; // [rsp+54h] [rbp-310h]
  int v35; // [rsp+58h] [rbp-30Ch]
  __int64 **v36; // [rsp+5Ch] [rbp-308h]
  __int64 v37; // [rsp+64h] [rbp-300h]
  __int64 *v38; // [rsp+6Ch] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+74h] [rbp-2F0h]
  __int64 v40; // [rsp+84h] [rbp-2E0h] BYREF
  _QWORD v41[3]; // [rsp+CCh] [rbp-298h] BYREF
  int v42; // [rsp+E4h] [rbp-280h]
  _QWORD *v43; // [rsp+ECh] [rbp-278h]
  __int64 v44; // [rsp+F4h] [rbp-270h]
  _QWORD v45[42]; // [rsp+FCh] [rbp-268h] BYREF
  int v46; // [rsp+24Ch] [rbp-118h]
  __int64 v47; // [rsp+254h] [rbp-110h]
  __int64 v48; // [rsp+25Ch] [rbp-108h]
  int v49; // [rsp+264h] [rbp-100h]
  __int64 v50; // [rsp+26Ch] [rbp-F8h]
  __int64 v51; // [rsp+274h] [rbp-F0h]
  int v52; // [rsp+27Ch] [rbp-E8h]
  __int128 v53; // [rsp+284h] [rbp-E0h] BYREF
  _QWORD *v54; // [rsp+294h] [rbp-D0h]
  __int64 v55; // [rsp+29Ch] [rbp-C8h]
  _QWORD v56[6]; // [rsp+2A4h] [rbp-C0h] BYREF
  __m128i v57; // [rsp+2D4h] [rbp-90h] BYREF
  __int128 *v58; // [rsp+2E4h] [rbp-80h]
  int v59; // [rsp+2F4h] [rbp-70h] BYREF
  __int64 v60; // [rsp+2FCh] [rbp-68h]
  int *v61; // [rsp+304h] [rbp-60h]
  int *v62; // [rsp+30Ch] [rbp-58h]
  __int64 v63; // [rsp+314h] [rbp-50h]
  bool v64; // [rsp+31Ch] [rbp-48h]

  v27 = a2;
  v28 = a3;
  v30 = &off_2BEBEE0;
  v32 = 0;
  v36 = &v38;
  v31 = 2;
  v34 = 0;
  v35 = 1;
  v33 = nullptr;
  sub_227B8B0(&v30, 0, 0, 0);
  v37 = a4;
  v30 = &off_2C04F98;
  v38 = &v40;
  v43 = v45;
  v44 = 0xA00000000LL;
  v54 = v56;
  v55 = 0x400000000LL;
  v53 = 0;
  v56[4] = &v57;
  v58 = &v53;
  v61 = &v59;
  v62 = &v59;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v41[0] = a1;
  v41[1] = &v30;
  v41[2] = 0;
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
  v56[5] = 0;
  v57 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v59 = 0;
  v60 = 0;
  v63 = 0;
  v9 = (__int64)v33;
  v64 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  if ( *((_QWORD *)&v32 + 1) - (_QWORD)v33 > 4u )
  {
    *v33 = 1852401215;
    v10 = &v30;
    *(_BYTE *)(v9 + 4) = 36;
    v33 = (_DWORD *)((char *)v33 + 5);
  }
  else
  {
    v10 = (__int64 (__fastcall ***)())sub_227BF10(&v30, "?fin$", 5);
  }
  v11 = *(_DWORD *)(a1 + 240);
  if ( !v11 )
  {
    v29 = 0;
    goto LABEL_23;
  }
  v12 = *(_QWORD *)(a1 + 224);
  v13 = (v11 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
  v14 = v12 + 24LL * v13;
  v8 = *(unsigned int *)(v14 + 8);
  v7 = *(_QWORD *)v14;
  if ( (_DWORD)v8 == (_DWORD)v28 && v27 == v7 )
  {
LABEL_15:
    v16 = *(unsigned int *)(v14 + 16);
    v17 = (int *)(v14 + 16);
    v18 = v16 + 1;
    goto LABEL_16;
  }
  v25 = 1;
  v15 = 0;
  while ( v7 )
  {
    if ( (_DWORD)v8 != 0 || v7 != -1 || v15 )
      goto LABEL_21;
LABEL_10:
    v13 = (v11 - 1) & (v25 + v13);
    v26 = v12 + 24LL * v13;
    v7 = *(_QWORD *)v26;
    v8 = *(unsigned int *)(v26 + 8);
    if ( (_DWORD)v8 == (_DWORD)v28 && v27 == v7 )
    {
      v14 = v12 + 24LL * v13;
      goto LABEL_15;
    }
    ++v25;
    v15 = v14;
    v14 = v12 + 24LL * v13;
  }
  if ( (_DWORD)v8 )
  {
LABEL_21:
    v14 = v15;
    goto LABEL_10;
  }
  v9 = 3 * v11;
  if ( !v15 )
    v15 = v14;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 232) + 1);
  v29 = v15;
  if ( 4 * (int)v6 >= (unsigned int)v9 )
  {
LABEL_23:
    v11 *= 2;
    goto LABEL_24;
  }
  v9 = v11 - *(_DWORD *)(a1 + 236) - (unsigned int)v6;
  if ( (unsigned int)v9 <= v11 >> 3 )
  {
LABEL_24:
    sub_E7FC10((__int64 **)(a1 + 224), v11, v9, v6, v7, v8);
    sub_E7B750((__int64 *)(a1 + 224), &v27, &v29);
    LODWORD(v6) = *(_DWORD *)(a1 + 232) + 1;
    v15 = v29;
  }
  *(_DWORD *)(a1 + 232) = v6;
  if ( *(_DWORD *)(v15 + 8) || *(_QWORD *)v15 )
    --*(_DWORD *)(a1 + 236);
  v17 = (int *)(v15 + 16);
  v16 = 0;
  *((_QWORD *)v17 - 2) = v27;
  v24 = v28;
  *v17 = 0;
  *(v17 - 2) = v24;
  v18 = 1;
LABEL_16:
  *v17 = v18;
  v19 = sub_227B910(v10, v16);
  v22 = *(_QWORD *)(v19 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v22) > 2 )
  {
    *(_BYTE *)(v22 + 2) = 64;
    *(_WORD *)v22 = 12352;
    *(_QWORD *)(v19 + 32) += 3LL;
  }
  else
  {
    sub_227BF10(v19, "@0@", 3);
  }
  sub_E82590(v41, v27, v28, v22, v20, v21);
  sub_E7AB30((__int64)v41);
  return sub_E7A440(&v30);
}
