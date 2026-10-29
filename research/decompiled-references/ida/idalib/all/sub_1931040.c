__int64 __fastcall sub_1931040(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 a9)
{
  _WORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r12
  __int64 v20; // r15
  __int16 v21; // ax
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v36[200]; // [rsp+20h] [rbp-C8h] BYREF

  v13 = (_WORD *)a9;
  v14 = sub_1E855F0(a1, a4, *(_QWORD *)(a9 + 8));
  if ( (*(_BYTE *)(a4 + 720) & 1) != 0 )
    return 1;
  v19 = (__int64 *)v14;
  if ( ((**(_DWORD **)a4 >> 12) & 0x7F) == 0x45 )
    return 1;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    sub_186C8D0((__int64)a1, a4, *(double *)a7.m128_u64, v15, v16, v17, v18);
  sub_181E1D0(a1, a4);
  v20 = *v19;
  *a5 = sub_1E61050(a1, *v19, v19, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
  v21 = *(_WORD *)a9 & 0x1FF;
  if ( v21 == 20 )
  {
    v22 = a9;
    v23 = a9;
    v24 = 0;
  }
  else
  {
    v22 = 0;
    if ( v21 == 19 )
      v22 = a9;
    v23 = 0;
    v24 = v22;
  }
  v25 = (_BYTE *)a1[29];
  if ( ((v25[13] & 6) != 0 || (v25[47] & 0x20) != 0)
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1
    && v22 )
  {
    if ( !v24 )
      goto LABEL_20;
    v26 = *(unsigned int *)(v24 + 4);
    if ( !(_DWORD)v26 )
    {
      v28 = sub_C00A40(v24, v22, v26, (__int64)v25, v23);
      sub_168B9F0((__int64)v36, a1 + 1, v28, 0xBA9u, 0);
      sub_15F7200(v36);
      return 1;
    }
    if ( v23 )
    {
LABEL_20:
      v29 = *(_QWORD *)(v23 + 24);
    }
    else
    {
      if ( (_DWORD)v26 != 1 )
        return sub_1917590((__int64)a1, a3, a6, a9, v19, a7, a8);
      v29 = *(_QWORD *)(v24 + 24);
    }
    if ( (*(_DWORD *)v29 & 0x10000) == 0
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 > 1 )
    {
      return sub_1917590((__int64)a1, a3, a6, a9, v19, a7, a8);
    }
  }
  if ( v21 != 19 )
    goto LABEL_24;
  v32 = sub_192A480((__int64)a1, a2, a9, a7, a8);
  if ( v32 == 1 )
    return 1;
  v25 = (_BYTE *)a1[29];
  v13 = (_WORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
LABEL_24:
  v30 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v25[1] & 8) != 0 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(*v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 13 || ((*(_WORD *)(v31 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      sub_168B9F0((__int64)v36, a1 + 1, a3, 0x1C29u, 0);
      v35 = sub_EEC8C0((unsigned __int64)v13, (__int64)(a1 + 1), *(double *)a7.m128_u64);
      sub_1587DB0((__int64)v36, &v35);
      sub_15F7200(v36);
    }
  }
  sub_19D64C0(a1[92], v20, v13, v25, v23);
  sub_19E2A50(a1[92], v20, v13);
  sub_16C73C0((__int64)a1, *v30, (__int64)v13);
  return sub_16B2590((__int64)a1, a3, v19, a6, v13, a7, *(double *)a8.m128_u64);
}
