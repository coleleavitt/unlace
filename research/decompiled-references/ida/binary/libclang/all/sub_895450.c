__int64 __fastcall sub_895450(
        unsigned int a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        _DWORD **a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v13; // r14d
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  int v21; // r12d
  unsigned __int8 **v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // rax^4
  __int64 v36; // rax
  _QWORD *v37; // rdi
  unsigned int v40; // [rsp+18h] [rbp-180h]
  __int64 v41[8]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v42[10]; // [rsp+60h] [rbp-138h] BYREF
  int v43; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-E0h]
  int *v45; // [rsp+C0h] [rbp-D8h]
  int *v46; // [rsp+C8h] [rbp-D0h]
  __int64 v47; // [rsp+D0h] [rbp-C8h]
  int v48; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-B0h]
  int *v50; // [rsp+F0h] [rbp-A8h]
  int *v51; // [rsp+F8h] [rbp-A0h]
  __int64 v52; // [rsp+100h] [rbp-98h]
  __int64 v53; // [rsp+108h] [rbp-90h]
  int v54; // [rsp+110h] [rbp-88h]
  _DWORD *v55; // [rsp+118h] [rbp-80h]
  __int64 v56; // [rsp+120h] [rbp-78h]
  _DWORD v57[4]; // [rsp+128h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+138h] [rbp-60h] BYREF
  int v59; // [rsp+148h] [rbp-50h]
  unsigned __int64 v60; // [rsp+150h] [rbp-48h] BYREF
  char v61; // [rsp+158h] [rbp-40h]

  v13 = a8;
  if ( *(_BYTE *)(a9 + 962) && *(_DWORD *)(a9 + 40) > 1u )
    return 0;
  if ( !*(_DWORD *)(a9 + 44) )
  {
    sub_A2E1A0(a9, a1, 2191, 0);
    return 0;
  }
  v40 = *(_DWORD *)(a9 + 40);
  if ( *(_DWORD *)(sub_A2CB40(a9) + 132) < v40 )
  {
    v23 = (unsigned __int8 **)sub_A2E1A0(a9, a1, 2200, 0);
    v24 = sub_A2CB40(a9);
    if ( v23 )
      sub_8356A0(v23, *(unsigned int *)(v24 + 132), 3u);
    return 0;
  }
  v14 = sub_AC7B80(a4);
  v15 = _mm_loadl_epi64((const __m128i *)(a9 + 40));
  v42[1] = a9;
  v16 = v14;
  v42[5] = a4;
  v42[0] = &off_47DA9F0;
  v17 = *(_QWORD *)(a9 + 32);
  v15.m128i_i64[0] = _mm_add_epi32(v15, _mm_loadl_epi64((const __m128i *)&qword_3C86E78)).m128i_u64[0];
  v42[3] = a2;
  v42[2] = v17;
  v45 = &v43;
  v46 = &v43;
  v50 = &v48;
  v51 = &v48;
  LODWORD(v17) = *(_DWORD *)(a9 + 44);
  v42[4] = a3;
  v54 = v17;
  v55 = v57;
  v42[6] = a7;
  v56 = 0x200000001LL;
  v42[7] = a8;
  v42[8] = 0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v52 = 0;
  v53 = v16;
  v57[0] = 1;
  v57[2] = 1;
  v59 = 0;
  v58[0] = 0;
  *(_QWORD *)(a9 + 32) = v42;
  *(_QWORD *)(a9 + 40) = v15.m128i_i64[0];
  LOBYTE(v17) = *(_BYTE *)(a2 + 28);
  v58[1] = 0;
  v61 = 0;
  v60 = 0;
  if ( (unsigned int)(v17 & 0x7F) - 33 > 3 )
    goto LABEL_14;
  v13 = a2 + 72;
  if ( (*(_BYTE *)(a2 + 83) & 2) != 0 )
  {
    v25 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v25 & 4) != 0 )
      v26 = *(_QWORD *)v26;
    if ( !v26 )
      BUG();
    if ( *(_BYTE *)(v26 + 9) >> 5 != 2 )
    {
      if ( *(char *)(a2 + 82) >= 0 )
        goto LABEL_7;
      v27 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
      v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v27 & 4) != 0 )
        v28 = *(_QWORD *)v28;
      if ( !v28 )
        BUG();
      v29 = v28 - 64;
      if ( *(_BYTE *)(v28 + 9) >> 5 == 2 )
      {
        if ( !sub_7868A0(v29) )
          goto LABEL_7;
      }
      else if ( !(unsigned __int8)sub_830C00(v29, a2) )
      {
        goto LABEL_7;
      }
    }
    BYTE4(v41[0]) &= ~1u;
    LODWORD(v41[0]) = 0;
    v30 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
    v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v30 & 4) != 0 )
      v31 = *(_QWORD *)v31;
    if ( !v31 )
      BUG();
    if ( (unsigned __int8)sub_8682D0(a9, **(_QWORD **)(a2 + 120), *a5, (__int64)v41, *(_BYTE *)(v31 + 9) >> 5 == 2)
      && (v32 = sub_7A5B20(a2), v13 = sub_84C750(a9, *a5, a3, v32, (__int64)v41), (_BYTE)v13) )
    {
      sub_81F730((__int64)a3, a10);
    }
    else
    {
      v13 = 0;
    }
    if ( LODWORD(v41[0]) > 1 )
      sub_69F740((__int64)v41);
    goto LABEL_16;
  }
LABEL_7:
  v18 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
  v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v18 & 4) != 0 )
    v19 = (_QWORD *)*v19;
  if ( v19 )
  {
    v20 = v19[8];
    if ( v20 )
    {
      if ( (*(_BYTE *)(v20 + 10) & 0x20) != 0 && (unsigned int)sub_780B80(a2) == 42 && !*(_BYTE *)(a9 + 962) )
      {
        v36 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
        v37 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v36 & 4) != 0 )
          v37 = (_QWORD *)*v37;
        if ( v37 )
          v37 -= 8;
        sub_7A3AC0((__int64)v37, (__int64)v58, &v60);
      }
    }
  }
LABEL_14:
  v41[0] = a10;
  v41[1] = a11;
  v21 = sub_88E980(v41, a9, a6, nullptr);
  if ( v21 == 2 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25 > 1 )
      v33 = sub_B0D320(v33);
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v34 + 16) == 13 )
    {
      v13 = 1;
      if ( ((*(_WORD *)(v34 + 18) >> 3) & 0x1FF) == 0x1B2 )
        goto LABEL_16;
    }
    v35 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2) >> 32;
    sub_A2E1A0(a9, v35, 2253, 0);
  }
  LOBYTE(v13) = v21 == 1;
LABEL_16:
  sub_822100((__int64)v42);
  return v13;
}

