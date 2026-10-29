__int64 __fastcall sub_17DE270(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v15; // r13
  unsigned __int64 v16; // r10
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbp
  __int64 v21; // r10
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  unsigned __int64 v38; // rsi
  unsigned int v39; // ecx
  __int64 v40; // [rsp+0h] [rbp-188h]
  unsigned __int64 v41; // [rsp+0h] [rbp-188h]
  __int64 v42; // [rsp+0h] [rbp-188h]
  __int64 v43; // [rsp+8h] [rbp-180h] BYREF
  __int64 v44; // [rsp+10h] [rbp-178h] BYREF
  __int64 v45; // [rsp+18h] [rbp-170h]
  _QWORD v46[16]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD *v48; // [rsp+A8h] [rbp-E0h]
  __int64 v49; // [rsp+B0h] [rbp-D8h]
  _OWORD v50[5]; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+108h] [rbp-80h]
  __int64 *v52; // [rsp+110h] [rbp-78h]
  __int64 v53; // [rsp+118h] [rbp-70h]
  unsigned int v54; // [rsp+120h] [rbp-68h]
  __int64 v55; // [rsp+128h] [rbp-60h] BYREF
  __int128 v56; // [rsp+130h] [rbp-58h]
  __int64 v57; // [rsp+140h] [rbp-48h]

  v43 = a6;
  v15 = sub_17A3CA0((__int64)a1, a2);
  v50[4] = 0;
  v48 = v50;
  v49 = 0x800000000LL;
  v53 = v43;
  v47 = 0;
  v51 = 0;
  v52 = a1;
  v54 = a5;
  sub_B85890(&v55, v43);
  v57 = 65537;
  v56 = 0;
  sub_1A395A0(&v47);
  sub_1A49A10(a1, &v47, v15, 0, 0);
  v16 = 0;
  if ( (_DWORD)v47 == 2 )
  {
    v16 = *v48 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = *(_BYTE *)(v16 + 28) & 0x7F;
    if ( (unsigned int)v17 - 53 <= 1 || ((v17 + 52) & 0x7Fu) <= 1 )
    {
      v18 = sub_B72ED0(*v48 & 0xFFFFFFFFFFFFFFF8LL);
      v16 = v18;
      if ( !v18 )
        goto LABEL_9;
      v17 = *(_BYTE *)(v18 + 28) & 0x7F;
    }
    if ( ((v17 + 61) & 0x7Fu) <= 1 || v17 == 47 )
    {
      sub_1CC2540(a1, a5, v16, 0);
      v16 = 0;
    }
  }
LABEL_9:
  v19 = v43;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 && *(char *)(a3 + 76) >= 0 )
  {
    v41 = v16;
    v44 = v43;
    LODWORD(v45) = a5;
    sub_B85890(v46, v43);
    v37 = *(_QWORD *)(a3 + 16);
    if ( (v37 & 4) != 0 )
      v38 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    sub_17B40D0((__int64)a1, v38, v33, v34, v35, v36, v44, v45);
    v19 = v43;
    v16 = v41;
  }
  v40 = v16;
  v20 = sub_17AFA10(a1, a3, a4, a5, v19, a11, 0.0, a8);
  if ( v20 )
  {
    v21 = v40;
    if ( !v40 || a12 && *(_BYTE *)(a12 + 1) )
      goto LABEL_18;
    v22 = *(_BYTE *)(v40 + 28) & 0x7F;
    if ( *(char *)(a3 + 76) >= 0 && (unsigned int)(v22 - 26) <= 0x1A )
    {
      sub_17DD7F0((__int64)a1, v20, v40, (__int64)&v47);
      v21 = v40;
      v22 = *(_BYTE *)(v40 + 28) & 0x7F;
    }
    if ( (unsigned int)(v22 - 58) <= 4 || (v42 = v21, !sub_15C11F0((__int64)(a1 + 326), v21, a1[68], v15, 0)) )
    {
LABEL_18:
      LOWORD(v44) = 1;
      sub_1836B60(a1, v15, v20, a9, &v44);
      sub_16660F0((__int64)a1, (__int64)v15, v20);
      sub_167AF90((__int64)a1, v20, v23, v24, v25, v26, (__m128i)0LL, a8);
      *(_BYTE *)(v20 + 29) = *(_BYTE *)(a3 + 29) & 0x60 | *(_BYTE *)(v20 + 29) & 0x9F;
      sub_17B7670((__int64)a1, v20, (__int64)v15, 1, v27, v28);
      v44 = v20;
      sub_179B290(a1, &v44, 1, v29, v30, v31);
    }
    else
    {
      if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x21 )
        v39 = 4909;
      else
        v39 = 4902;
      sub_168B9F0((__int64)&v44, a1 + 1, a5, v39, 0);
      sub_169D880((__int64)&v44, &v43);
      v20 = 0;
      sub_15F7200(&v44);
      sub_17AE800((__int64)a1, v42, a5);
    }
  }
  sub_169D230((__int64)&v47);
  return v20;
}
