__m128i *__fastcall sub_1A93A20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        __int64 a9,
        __int32 a10,
        __int64 a11,
        __int32 a12,
        char a13,
        __int16 a14,
        __int16 a15,
        unsigned __int64 a16,
        __int64 *a17,
        int a18,
        __int64 a19)
{
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  size_t v29; // rax
  unsigned int v30; // eax
  __m128i *v31; // r12
  __m128i *v32; // r15
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  __int16 v42; // ax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // r12
  size_t v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 *v63; // rax
  __int64 *v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rax
  _DWORD *v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rax
  __int64 v74; // rcx
  char v76; // [rsp+13h] [rbp-145h]
  _QWORD *v78; // [rsp+18h] [rbp-140h]
  __int64 v80; // [rsp+28h] [rbp-130h]
  int v81; // [rsp+3Ch] [rbp-11Ch]
  __int64 v82; // [rsp+48h] [rbp-110h] BYREF
  __int64 v83[3]; // [rsp+50h] [rbp-108h] BYREF
  void *v84; // [rsp+68h] [rbp-F0h]
  __int64 v85; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v86; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD *v87; // [rsp+98h] [rbp-C0h]

  v21 = a17;
  v78 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( *(_DWORD *)(a6 + 56) )
    v22 = 0;
  else
    v22 = *(_QWORD *)(a6 + 64);
  v82 = v22;
  if ( (a14 & 0x804) != 0 )
  {
    if ( !(*(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6) )
    {
LABEL_5:
      v26 = *(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL);
      v76 = 1;
      goto LABEL_6;
    }
    goto LABEL_61;
  }
  if ( (a14 & 0xE34) != 0 || !a13 )
    goto LABEL_80;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
  {
    if ( *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6 )
      goto LABEL_61;
LABEL_97:
    v26 = *(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL);
    v76 = a13;
    goto LABEL_6;
  }
  if ( (unsigned __int8)sub_F6AE00(*(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL), a2, v50, v51, v52) )
  {
LABEL_80:
    sub_168B6E0((__int64)a1);
    v26 = *(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL);
    v76 = 0;
    goto LABEL_6;
  }
  if ( !(*(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6) )
    goto LABEL_97;
LABEL_61:
  v76 = 1;
  v26 = *(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a14 & 4) == 0 )
  {
    if ( *(_BYTE *)(v26 + 16) == 34 || (v26 = sub_1A93160(*(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL), a2, v23, v24)) != 0 )
    {
      v53 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v54 = *(_QWORD *)v53;
      v55 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v53 + 16LL) - 35;
      if ( (unsigned int)v55 > 1 )
        v54 = sub_F63050(v54, a2, v55, v24);
      v56 = sub_9C7D40(v54, a2, v55, v24, v25);
      if ( !v56 )
        goto LABEL_5;
      v57 = v78[2188];
      v58 = j__strlen("NSCopying");
      v59 = sub_6F3470(v57, "NSCopying", v58);
      v60 = sub_1A86640(a1, v59, a4, 0, *(double *)a7.m128_u64, *(double *)a8.m128i_i64);
      if ( !v60 )
        goto LABEL_5;
      v76 = sub_BAE190(v56, v60, 1, 0, v61, v62);
      if ( !v76 )
        goto LABEL_5;
      sub_168B9F0((__int64)&v86, a1, a4, 0x1B6Fu, 0);
      sub_17AE460((__int64)&v86, &v82);
      sub_15F7200(&v86);
    }
    v26 = *(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_6:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1 )
  {
    v27 = *v21;
    v87 = v21 + 1;
    v86 = v27;
    v28 = sub_F6CE20(&v86);
    v81 = sub_15F0EF0(*a1, v28, 0, (__m128i)a7, *(double *)a8.m128i_i64);
    sub_168B9F0((__int64)&v86, a1, *(_DWORD *)(a6 + 80), 0x13A3u, 0);
    v29 = j__strlen("*");
    sub_9EC740((__int64)v83, v81, "*", v29, 0);
    sub_1589170((__int64)&v86, v83);
    if ( v84 != &v85 )
      operator delete(v84);
    sub_15F7200(&v86);
    a16 = sub_A74EC0((__int64)v78, a16);
    v86 = *v21;
    v87 = v21 + 1;
    v30 = sub_F6CCB0(&v86, a7);
    v21 = sub_A81910(v78, a16, v30);
  }
  v31 = (__m128i *)(a3 + 48);
  if ( !a3 )
    v31 = nullptr;
  v32 = (__m128i *)sub_BA9580(v78, (__int64)v31, *(_DWORD *)(a6 + 80), v82, a4, a5, a16, (__int64)v21, 0);
  LOBYTE(v33) = ((HIBYTE(a14) | HIBYTE(a15)) & 0x40) != 0;
  v80 = sub_BAAD60((unsigned __int64)v31, v82, (unsigned int)(v33 + 1), v34, v35, v36);
  if ( v80 )
  {
    sub_168B9F0((__int64)&v86, a1, v32[1].m128i_u32[2], 0xE85u, 0);
    sub_15F7200(&v86);
    sub_168B9F0((__int64)&v86, a1, *(_DWORD *)(v80 + 24), 0x189Au, 0);
    sub_15F7200(&v86);
    sub_B88650((__int64)v32, 1);
  }
  else
  {
    sub_B94AD0(v31, (__int64)v32, v37, v38, v39, v40);
    if ( a19 )
      sub_B90130((__int64)v32, a19, v69, v70, v71, v72);
  }
  v41 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v41 - 25) <= 1u || (unsigned __int8)(v41 - 2) <= 4u )
  {
    sub_168B9F0((__int64)&v86, a1, a4, 0x12FBu, 0);
    sub_1605D30((__int64)&v86, (__int64 *)&a16);
    sub_15F7200(&v86);
    sub_B88650((__int64)v32, 1);
  }
  v32[5].m128i_i64[0] = a9;
  v32[6].m128i_i32[0] = a10;
  v32[5].m128i_i64[1] = a11;
  v32[6].m128i_i32[1] = a12;
  v42 = a15 & 0x4FFF;
  if ( a15 < 0 )
    v42 = a15 & 0x4FFF | 0x8000;
  v32[4].m128i_i16[5] = v42;
  sub_1836CB0((__int64 *)*a1, a2, v32, (__int64 *)a6, a7, a8);
  v45 = v32[4].m128i_u16[4];
  if ( (a14 & 1) != 0 )
  {
    v45 |= 1u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 2) != 0 )
  {
    v45 |= 2u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x80u) != 0 )
  {
    LOBYTE(v45) = v45 | 0x80;
    v32[4].m128i_i16[4] = v45;
  }
  if ( a13 )
  {
    v45 |= 8u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x10) != 0 )
  {
    v45 |= 0x10u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x400) != 0 )
  {
    BYTE1(v45) |= 4u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x200) != 0 )
  {
    BYTE1(v45) |= 2u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x20) != 0 )
  {
    v45 |= 0x20u;
    v32[4].m128i_i16[4] = v45;
  }
  v46 = a14 & 0x800;
  if ( (a14 & 0x800) != 0 )
  {
    BYTE1(v45) |= 8u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( v76 )
  {
    v45 |= 4u;
    v32[4].m128i_i16[4] = v45;
  }
  v47 = v45;
  BYTE1(v45) |= 1u;
  v48 = v47 | 0x40u;
  if ( (a14 & 0x40) != 0 )
    LOWORD(v45) = v48;
  if ( (a14 & 0x800) != 0 )
    LOWORD(v45) = v45 | 4;
  v32[4].m128i_i16[4] = v45;
  if ( v76 )
  {
    BYTE1(v45) |= 8u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( a18 == 21 )
  {
    v46 = v32[4].m128i_i8[12] & 0xFC | 1u;
    v32[4].m128i_i8[12] = v32[4].m128i_i8[12] & 0xFC | 1;
  }
  else if ( a18 == 22 )
  {
    v46 = v32[4].m128i_i8[12] & 0xFC | 2u;
    v32[4].m128i_i8[12] = v32[4].m128i_i8[12] & 0xFC | 2;
  }
  if ( (a14 & 0x1000) != 0 )
  {
    BYTE1(v45) |= 0x10u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x2000) != 0 )
  {
    BYTE1(v45) |= 0x20u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( (a14 & 0x4000) != 0 )
  {
    BYTE1(v45) |= 0x40u;
    v32[4].m128i_i16[4] = v45;
  }
  if ( a14 < 0 )
  {
LABEL_74:
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x13 )
    {
      sub_168B9F0((__int64)&v86, a1, v32[1].m128i_u32[2], 0x1103u, 0);
      LOBYTE(v83[0]) = 1;
      sub_1588420((__int64)&v86, (unsigned __int8 *)v83);
      sub_15F7200(&v86);
    }
    else
    {
      v67 = (_DWORD *)sub_168B6E0((__int64)a1);
      switch ( v67[92] )
      {
        case 0:
        case 2:
        case 3:
        case 6:
          goto LABEL_79;
        case 1:
        case 4:
          goto LABEL_85;
        case 5:
          v68 = v67[93];
          if ( v68 <= 1 || (v67[94] & 0x7FFFFFFFu) <= 1 && v68 == 2 )
          {
LABEL_85:
            sub_168B9F0((__int64)&v86, a1, v32[1].m128i_u32[2], 0x1C0Eu, 0);
            v83[0] = v32[2].m128i_i64[1];
            sub_15894B0((__int64)&v86, v83);
            sub_15F7200(&v86);
          }
          else
          {
LABEL_79:
            v32[4].m128i_i16[4] |= 0x8000u;
          }
          break;
      }
    }
    return v32;
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    return v32;
  v63 = sub_B8C3D0(a3, a2, v46, v48, v43, v44);
  v64 = (__int64 *)*v63;
  v65 = *v63 + 8LL * *((unsigned int *)v63 + 2);
  if ( *v63 >= v65 )
  {
    if ( v64 == (__int64 *)v65 )
      return v32;
    if ( *(_WORD *)(*(_QWORD *)v65 + 36LL) == 429 )
      goto LABEL_74;
    v73 = (__int64 *)(v65 + 8);
    while ( v64 != v73 )
    {
      v74 = *v73++;
      if ( *(_WORD *)(v74 + 36) == 429 )
        goto LABEL_74;
    }
  }
  else
  {
    v66 = *v63;
    while ( *(_WORD *)(*(_QWORD *)v66 + 36LL) != 429 )
    {
      v66 += 8LL;
      if ( v65 == v66 )
        return v32;
    }
    if ( v65 != v66 )
      goto LABEL_74;
  }
  return v32;
}
