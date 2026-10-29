__m128i *__fastcall sub_185BF60(
        __int64 *a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        __m128i a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r14d
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __m128i *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i *v27; // r14
  __int64 v28; // rax
  unsigned int v30; // eax
  unsigned int v33; // [rsp+14h] [rbp-134h]
  __int64 v34; // [rsp+20h] [rbp-128h] BYREF
  __int64 v35; // [rsp+28h] [rbp-120h]
  __int64 v36; // [rsp+30h] [rbp-118h]
  __int64 v37[3]; // [rsp+40h] [rbp-108h] BYREF
  void *v38; // [rsp+58h] [rbp-F0h]
  __int64 v39; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v40[200]; // [rsp+80h] [rbp-C8h] BYREF

  v12 = *a6;
  v33 = a5;
  if ( !(_DWORD)v12 || !a6[1] )
  {
    v27 = *((__m128i **)a6 + 1);
    if ( !v27 )
    {
      sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(a8 + 24), 0x1529u, 0);
      sub_15F7200(v40);
      return v27;
    }
  }
  v13 = *(_DWORD *)a8;
  v14 = a9;
  if ( *(_DWORD *)a8 == 6 )
  {
    sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(a8 + 24), 0x1518u, 0);
    v28 = *(_QWORD *)a6;
    goto LABEL_30;
  }
  if ( v13 > 6 )
  {
    if ( v13 != 7 )
      goto LABEL_7;
    sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(a8 + 24), 0x151Fu, 0);
    v28 = *(_QWORD *)(*(_QWORD *)(a8 + 8) + 36LL);
LABEL_30:
    v37[0] = v28;
    sub_1587DB0((__int64)v40, v37);
    sub_15F7200(v40);
    return nullptr;
  }
  if ( v13 >= 4 )
  {
    sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(a8 + 24), (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 ? 5398 : 6786, 0);
    v37[0] = *(_QWORD *)a6;
    sub_1587DB0((__int64)v40, v37);
    sub_15F7200(v40);
    if ( (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 )
      return nullptr;
  }
LABEL_7:
  v15 = a1;
  sub_17B41B0((__int64)&v34, a1, (unsigned int *)a8, *(double *)a7.m128i_i64, v12, a5, (__int64)a6);
  if ( !v34 )
    return nullptr;
  if ( !a4 )
  {
    sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(a8 + 24), (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 ? 6483 : 2944, 0);
    v20 = j__strlen("using ");
    sub_9EC740((__int64)v37, *a6, "using ", v20, 0);
    v15 = v37;
    sub_1589170((__int64)v40, v37);
    if ( v38 != &v39 )
      operator delete(v38);
    sub_15F7200(v40);
  }
  if ( a9 )
  {
    if ( !(unsigned __int8)sub_E91760(*((_QWORD *)a6 + 1), (__int64)v15, v16, v17, v18, v19)
      && !(unsigned __int8)sub_B858E0(&v34) )
    {
      sub_168B9F0((__int64)v40, a1 + 1, a9, 0x12ACu, 0);
      v30 = sub_B85A10((__int64)&v34);
      if ( !v30 )
        v30 = v35;
      v14 = 0;
      v37[0] = __PAIR64__(v30, *a6);
      sub_1587DB0((__int64)v40, v37);
      sub_15F7200(v40);
    }
    goto LABEL_14;
  }
  if ( (unsigned __int8)sub_1E53090(a1, a6, 8) || (unsigned __int8)sub_1E536B0(a1, &v34, 8) )
    return nullptr;
LABEL_14:
  v21 = *(_QWORD **)(a10 + 8);
  v22 = (8LL * *(unsigned int *)(a10 + 16)) >> 5;
  if ( v22 )
  {
    if ( *(_WORD *)(*v21 + 32LL) != 396 && *(_WORD *)(v21[1] + 32LL) != 396 && *(_WORD *)(v21[2] + 32LL) != 396 )
    {
      v23 = &v21[4 * v22];
      if ( *(_WORD *)(v21[3] + 32LL) != 396 )
      {
        while ( v21 + 4 != v23
             && *(_WORD *)(v21[4] + 32LL) != 396
             && *(_WORD *)(v21[5] + 32LL) != 396
             && *(_WORD *)(v21[6] + 32LL) != 396
             && *(_WORD *)(v21[7] + 32LL) != 396 )
          v21 += 4;
      }
    }
  }
  v24 = sub_185AD60(a1, a2, a3, a4, v33 != 0, v33, (__int64)a6, a7, v34, v35, v36, v14, a10);
  v27 = v24;
  if ( v24 )
    sub_17B7670((__int64)a1, (__int64)v24, (__int64)a2, 0, v25, v26);
  return v27;
}
