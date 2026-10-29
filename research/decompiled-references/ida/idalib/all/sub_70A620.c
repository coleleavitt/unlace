__int64 __fastcall sub_70A620(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __int64 v15; // rdi
  __int64 v17; // rsi
  _QWORD *v19; // rsi
  double v20; // xmm4_8
  double v21; // xmm5_8
  _BYTE *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r9
  unsigned __int8 v26; // r8
  char v27; // di
  unsigned __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // [rsp+0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+8h] [rbp-70h]
  _UNKNOWN **v47; // [rsp+10h] [rbp-68h] BYREF
  __int64 v48; // [rsp+18h] [rbp-60h]
  __int128 v49; // [rsp+20h] [rbp-58h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  __int64 v51; // [rsp+38h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-38h]
  unsigned __int64 v53; // [rsp+48h] [rbp-30h]

  v15 = *(_QWORD *)(a1 + 16);
  v53 = __readfsqword(0x28u);
  v17 = *(_QWORD *)(v15 + 600);
  if ( v17 )
  {
    a4 = 0;
    a3 = (_DWORD *)(*(_QWORD *)(v15 + 592) + 56LL);
    while ( (unsigned int)(*a3 - 4) > 1 || a3[1] != 3700 )
    {
      ++a4;
      a3 += 16;
      if ( v17 == a4 )
        goto LABEL_7;
    }
    return v53 - __readfsqword(0x28u);
  }
LABEL_7:
  if ( **(__int64 **)(v15 + 8) >= 0 || (sub_6F62E0(v15), v15 = *(_QWORD *)(a1 + 16), **(__int64 **)(v15 + 8) >= 0) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 1896LL) + 136LL) )
    {
      v22 = *(_BYTE **)(a2 + 2320);
      a7 = 0.0;
      v45 = 2;
      v23 = *(_QWORD *)(a2 + 2264);
      v46 = 0;
      v24 = *(_QWORD *)(v23 + 80);
      v25 = (unsigned __int64)((*v22 & 2) != 0) << 28;
      v26 = v22[1];
      v27 = v26 >> 3;
      v26 >>= 4;
      v28 = (unsigned __int64)(v26 & 1) << 27;
      v29 = (unsigned __int64)!(v26 & 1) << 30;
      v30 = ((unsigned __int64)((v22[3] & 8) != 0) << 33)
          | v29
          | ((unsigned __int64)!(v27 & 1) << 29)
          | v25
          | v28
          | ((unsigned __int64)(*v22 & 1) << 26)
          | ((unsigned __int64)((v22[1] & 8) != 0) << 25)
          | ((unsigned __int64)((*(_WORD *)v22 & 0x1008) != 0) << 24)
          | ((unsigned __int64)((v22[1] & 8) != 0) << 9)
          | 0x660800442000LL
          | ((unsigned __int64)((v22[3] & 4) != 0) << 23);
      v31 = *(_DWORD *)v22;
      LOBYTE(v22) = v22[89];
      v49 = 0;
      v48 = 0;
      v47 = &off_2BFB5F8;
      v50 = 0;
      v52 = 0;
      v32 = (unsigned __int64)((unsigned __int8)v22 & 1) << 47;
      v33 = (unsigned __int64)((v31 & 0x10000080) == 128) << 34;
      v45 = v32 | v33 | v30 | 2;
      v51 = 0x100000000LL;
      v34 = sub_704780((__int64 *)(v24 + 72), v24, v32, v33, v29, v25);
      ((void (__fastcall *)(_QWORD *, _UNKNOWN ***, __int64 *, _QWORD, __int64))sub_BB7900)(v34, &v47, &v45, 0, 1);
      v47 = &off_2BFB5F8;
      if ( v50 != (_QWORD)v49 )
        ((void (__fastcall *)(_UNKNOWN ***, _UNKNOWN ***, __int64, __int64, __int64, __int64, __int64, __int64))sub_227B9F0)(
          &v47,
          &v47,
          v35,
          v36,
          v37,
          v38,
          v45,
          v46);
      sub_227B7A0(&v47);
      v15 = *(_QWORD *)(a1 + 16);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 1896LL) + 137LL) )
    {
      a7 = 0.0;
      v39 = *(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL);
      v49 = 0;
      v48 = 0;
      v51 = 0x100000000LL;
      v50 = 0;
      v47 = &off_2BFB5F8;
      v52 = 0;
      v40 = sub_704780((__int64 *)(v39 + 72), v39, (__int64)a3, a4, a5, a6);
      sub_AE8940(v40, &v47, 0, 0);
      v47 = &off_2BFB5F8;
      if ( v50 != (_QWORD)v49 )
        ((void (__fastcall *)(_UNKNOWN ***, _UNKNOWN ***, __int64, __int64, __int64, __int64, __int64, __int64))sub_227B9F0)(
          &v47,
          &v47,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      sub_227B7A0(&v47);
    }
  }
  v19 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL),
          (__int64)a3,
          a4,
          a5,
          a6);
  if ( !v19 )
    return v53 - __readfsqword(0x28u);
  return sub_709840((__int64 *)(a1 + 24), (__int64)v19, a7, a8, a9, a10, v20, v21, a13, a14);
}
