__int64 __fastcall sub_1DD1DD0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int16 a5,
        char a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  bool v21; // r9
  __int16 v22; // r15
  _WORD *v23; // rax
  char v24; // r8
  unsigned __int64 v25; // r10
  __int64 v26; // r13
  bool v27; // r9
  char v28; // al
  __int16 v29; // ax
  unsigned int v30; // ebp
  unsigned __int8 v31; // al
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-58h]
  bool v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+8h] [rbp-50h]
  char v46; // [rsp+17h] [rbp-41h]
  unsigned __int64 v47; // [rsp+18h] [rbp-40h]

  v17 = a9 & 0x7FFFFFFF;
  if ( (a9 & 0x7FFFFFFF) != 8 )
  {
    if ( (unsigned int)(v17 - 2) <= 1 )
    {
      if ( v17 == 2 && !sub_1E38470(*a1, a4, a11, a1[4], 0) )
        return 1;
      v41 = sub_F1D610((__int64)&a9);
      v19 = sub_1CB5030(*a1, (__int64)&a9, v41, a4, 0, v18, *(double *)a7.m128_u64, a8);
      v20 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_5;
    }
    v43 = sub_F1D610((__int64)&a9);
    v19 = sub_1CB5680(*a1, (__int64)&a9, a4, *(double *)a7.m128_u64, a8, v33, v34, v35);
    v36 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_11:
    v20 = *v36;
LABEL_5:
    v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1;
    goto LABEL_6;
  }
  v19 = a10;
  v21 = 0;
  if ( ((*(_BYTE *)(a10 + 1) >> 1) & 3) == 1 )
  {
    v21 = 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 48 )
    {
      v37 = *a1;
      if ( *(_BYTE *)(a3 + 81) )
        v38 = *(_QWORD *)(a3 + 16LL * (unsigned int)(*(_DWORD *)(v37 + 12632) - 1) + 88);
      else
        v38 = *(_QWORD *)(a3 + 48);
      if ( *(_BYTE *)(a3 + 80) )
      {
        v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v39 + 16) == 38 )
          v38 = *(_QWORD *)(v39 + 32);
      }
      v44 = a10;
      v40 = (unsigned __int64)sub_1DD1D30(v37, v38, a1[4], a4, *(_QWORD *)(a3 + 40), nullptr, a7, a8);
      v19 = v44;
      v36 = (__int64 *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v36 )
        return 1;
      goto LABEL_11;
    }
  }
LABEL_6:
  v42 = v21;
  if ( v19 == 1 )
    return 1;
  v47 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(_WORD *)(a3 + 70) >> 4;
  v45 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v46 = (*(_BYTE *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
  v23 = (_WORD *)sub_EEE9A0(40, *(_QWORD **)(*a1 + 248), 8u);
  v24 = v46;
  v25 = v47;
  v26 = (__int64)v23;
  v27 = v42;
  *v23 = *v23 & 0xFE00 | 8;
  if ( unk_2CD7484 )
  {
    sub_EE9B50(8);
    v25 = v47;
    v24 = v46;
    v27 = v42;
  }
  v28 = *(_BYTE *)(v26 + 1);
  *(_DWORD *)(v26 + 4) = a4;
  *(_QWORD *)(v26 + 16) = v25;
  *(_BYTE *)(v26 + 1) = v28 & 0xF9 | (2 * (v24 & 3));
  *(_QWORD *)(v26 + 8) = v45;
  v29 = *(_WORD *)(v26 + 32);
  *(_WORD *)(v26 + 1) &= 0xF807u;
  *(_QWORD *)(v26 + 24) = a2 & 0xFFFFFFFFFFFFFFFBLL | (4LL * v27);
  *(_WORD *)(v26 + 32) = v29 & 0x8000 | v22;
  v30 = ((a5 & 0x7FFF) << 15) | *(_DWORD *)(v26 + 32) & 0xC0007FFF;
  *(_DWORD *)(v26 + 32) = v30;
  *(_BYTE *)(v26 + 35) = ((a6 & 1) << 6) | HIBYTE(v30) & 0xBF;
  v31 = sub_B63940(v26);
  *(_BYTE *)(v26 + 1) = (v31 << 6) | *(_BYTE *)(v26 + 1) & 0x3F;
  *(_BYTE *)(v26 + 2) = *(_BYTE *)(v26 + 2) & 0xF8 | (v31 >> 2) & 7;
  return v26;
}
