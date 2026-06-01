__int64 __fastcall sub_C57060(
        unsigned int a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        _DWORD **a5,
        _WORD *a6,
        __int128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  unsigned __int8 **v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // [rsp+4h] [rbp-1E4h]
  unsigned __int8 v40; // [rsp+4h] [rbp-1E4h]
  unsigned int v42; // [rsp+10h] [rbp-1D8h] BYREF
  char v43; // [rsp+14h] [rbp-1D4h]
  __m128 v44; // [rsp+50h] [rbp-198h] BYREF
  __int64 v45; // [rsp+60h] [rbp-188h]
  char v46; // [rsp+68h] [rbp-180h]
  __int64 v47; // [rsp+78h] [rbp-170h]
  _BYTE *v48; // [rsp+80h] [rbp-168h]
  __int64 v49; // [rsp+88h] [rbp-160h]
  _BYTE v50[80]; // [rsp+90h] [rbp-158h] BYREF
  __m128i v51[10]; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+188h] [rbp-60h] BYREF
  unsigned __int64 v53[9]; // [rsp+1A0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a8 + 914) && *(_DWORD *)(a8 + 40) > 1u )
  {
LABEL_20:
    LODWORD(a6) = 0;
    return (unsigned int)a6;
  }
  if ( !*(_DWORD *)(a8 + 44) )
  {
    sub_E33C80(a8, a1, 2393, 0);
    LODWORD(a6) = 0;
    return (unsigned int)a6;
  }
  v39 = *(_DWORD *)(a8 + 40);
  if ( v39 > *(_DWORD *)(sub_E32240(a8) + 132) )
  {
    v21 = (unsigned __int8 **)sub_E33C80(a8, a1, 2402, 0);
    v22 = sub_E32240(a8);
    if ( v21 )
      sub_AE9DF0(v21, *(unsigned int *)(v22 + 132), 3u);
    goto LABEL_20;
  }
  v14 = sub_EEC8C0(a4);
  sub_C0F9C0(v51, a8, v14, a2, (__int64)a3, a4, a7);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    if ( (*(_BYTE *)(a2 + 83) & 2) != 0 )
    {
      v24 = sub_B72690(a2 + 72);
      if ( !v24 )
        BUG();
      if ( *(_BYTE *)(v24 + 9) >> 5 == 2 )
        goto LABEL_29;
      if ( *(char *)(a2 + 82) < 0 )
      {
        v25 = sub_B72690(a2 + 72);
        v29 = v25 - 64;
        if ( v25 )
          v25 -= 64LL;
        if ( sub_C29DE0(v25, a8, v29, v26, v27, v28) )
        {
LABEL_29:
          v43 &= ~1u;
          v40 = sub_B981D0((_QWORD *)a2, a8);
          v42 = 0;
          v30 = sub_B72690(a2 + 72);
          if ( !v30 )
            BUG();
          v31 = **(_QWORD **)(a2 + 120);
          LODWORD(a6) = sub_C36DF0(a8, v31, *a5, (__int64)&v42, *(_BYTE *)(v30 + 9) >> 5 == 2);
          if ( (_BYTE)a6 )
          {
            v44 = 0u;
            v48 = v50;
            v45 = 0;
            v46 |= 1u;
            v47 = 0;
            v49 = 0x800000000LL;
            v50[65] = 0;
            v32 = sub_B987D0((_QWORD *)a2, v31);
            LODWORD(a6) = sub_C30FD0(a8, a5[v40], a3, v32, (__int64)&v42);
            if ( (_BYTE)a6 )
              sub_C0F890((__int64)a3, a9);
          }
          if ( v42 > 1 )
            sub_A4F8E0((int *)&v42);
          goto LABEL_17;
        }
      }
    }
    v15 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    v16 = (int *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v15 & 4) != 0 )
      v16 = *(int **)v16;
    if ( v16 )
    {
      if ( v16 != &dword_40 )
      {
        v17 = *((_QWORD *)v16 + 8);
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(a2) == 42 && !*(_BYTE *)(a8 + 914) )
          {
            v35 = sub_B72690(a2 + 72);
            if ( v35 )
              v35 -= 64LL;
            sub_BA4FF0(v35, (__int64)&v52, v53, v36, v37, v38);
          }
        }
      }
    }
  }
  v44 = _mm_loadh_ps((const double *)&a10);
  v20 = sub_C53060((__int64 *)&v44, a8, a6);
  if ( v20 == 2 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490(a2, a8, v18, v19) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v33 + 16) == 13 )
    {
      LODWORD(a6) = 1;
      if ( ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_17;
    }
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_E33C80(a8, HIDWORD(v34), 2455, 0);
  }
  LOBYTE(a6) = v20 == 1;
LABEL_17:
  sub_C23C00((__int64)v51);
  return (unsigned int)a6;
}
