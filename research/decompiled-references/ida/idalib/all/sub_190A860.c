__int64 __fastcall sub_190A860(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v10; // r12d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r15
  _QWORD *v26; // rsi
  __int64 v27; // rbx
  char v28; // r13
  char v29; // al
  unsigned __int8 v30; // al
  _QWORD *v31; // rsi
  __int64 v32; // r14
  char v33; // r13
  char v34; // al
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r14
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r13
  char v45; // r15
  char v46; // dl
  __int64 v47; // [rsp+0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+0h] [rbp-58h]
  __int64 v49; // [rsp+0h] [rbp-58h]
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = a5;
  v11 = sub_1907C70(a1, a2, a7, a8, (__int64)a3, (__int64)a4, a5, a6);
  if ( v11 == 1 )
    return 1;
  v17 = v11;
  v18 = sub_1907C70(a1, a3, a7, a8, v12, v13, v14, v15);
  if ( v18 == 1 )
    return 1;
  v23 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  v24 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v25 = (unsigned __int64)v23;
  if ( !a4 )
  {
    v31 = *(_QWORD **)(a1 + 248);
    v32 = v31[2437];
    v27 = sub_EEE9A0(40, v31, 8u);
    v33 = (*(_BYTE *)(v24 + 1) >> 1) & 3;
    *(_WORD *)v27 = *(_WORD *)v27 & 0xFE00 | 0x2F;
    if ( unk_2CD7484 )
      sub_EE9B50(47);
    v34 = *(_BYTE *)(v27 + 1);
    *(_QWORD *)(v27 + 8) = v32;
    *(_QWORD *)(v27 + 16) = v24;
    *(_QWORD *)(v27 + 24) = v25;
    *(_QWORD *)(v27 + 32) = 0;
    *(_BYTE *)(v27 + 1) = v34 & 0xF9 | (2 * (v33 & 3));
    *(_WORD *)(v27 + 1) = *(_WORD *)(v27 + 1) & 0xF807 | 0x28;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)v24 & 0x10000) == 0 && (*v23 & 0x10000) == 0 && (*(_DWORD *)a4 & 0x10000) == 0 )
  {
    v35 = sub_1907C70(a1, a4, a7, a8, v19, v20, v21, v22);
    if ( v35 != 1 )
    {
      v51[0] = a1;
      v48 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v39 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v40 = *(_QWORD *)v39;
      if ( *(_BYTE *)(*(_QWORD *)v39 + 16LL) != 31 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 31 )
          BUG();
        v40 = sub_F63050(v40, a4, v36, v37);
      }
      v50 = v40;
      v41 = sub_18D8200(v51, v25, *(unsigned int *)(v40 + 40), 0, v40, v38, *(double *)a7.m128i_i64);
      v43 = sub_18D8200(v51, v48, *(unsigned int *)(v50 + 44), 1, v50, v42, *(double *)a7.m128i_i64);
      v44 = v43;
      if ( v41 )
      {
        if ( v43 )
        {
          v49 = *(_QWORD *)(v50 + 32);
          v27 = sub_EEE9A0(40, *(_QWORD **)(a1 + 248), 8u);
          v45 = (*(_BYTE *)(v24 + 1) >> 1) & 3;
          *(_WORD *)v27 = *(_WORD *)v27 & 0xFE00 | 0x2F;
          if ( unk_2CD7484 )
            sub_EE9B50(47);
          v46 = *(_BYTE *)(v27 + 1);
          *(_QWORD *)(v27 + 16) = v24;
          *(_QWORD *)(v27 + 24) = v41;
          *(_QWORD *)(v27 + 32) = v44;
          *(_BYTE *)(v27 + 1) = v46 & 0xF9 | (2 * (v45 & 3));
          *(_WORD *)(v27 + 1) = *(_WORD *)(v27 + 1) & 0xF807 | 0x28;
          *(_QWORD *)(v27 + 8) = v49;
          goto LABEL_11;
        }
      }
    }
    return 1;
  }
  v26 = *(_QWORD **)(a1 + 248);
  v47 = v26[2384];
  v27 = sub_EEE9A0(40, v26, 8u);
  v28 = (*(_BYTE *)(v24 + 1) >> 1) & 3;
  *(_WORD *)v27 = *(_WORD *)v27 & 0xFE00 | 0x2F;
  if ( unk_2CD7484 )
    sub_EE9B50(47);
  v29 = *(_BYTE *)(v27 + 1);
  *(_QWORD *)(v27 + 16) = v24;
  *(_QWORD *)(v27 + 24) = v25;
  *(_QWORD *)(v27 + 32) = a4;
  *(_BYTE *)(v27 + 1) = v29 & 0xF9 | (2 * (v28 & 3));
  *(_WORD *)(v27 + 1) = *(_WORD *)(v27 + 1) & 0xF807 | 0x28;
  *(_QWORD *)(v27 + 8) = v47;
LABEL_11:
  *(_DWORD *)(v27 + 4) = v10;
  v30 = sub_B62970(v27);
  *(_BYTE *)(v27 + 1) = (v30 << 6) | *(_BYTE *)(v27 + 1) & 0x3F;
  *(_BYTE *)(v27 + 2) = *(_BYTE *)(v27 + 2) & 0xF8 | (v30 >> 2) & 7;
  return v27;
}
