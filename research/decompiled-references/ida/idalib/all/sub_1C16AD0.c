__int64 __fastcall sub_1C16AD0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // rbp
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 (__fastcall *v24)(__int64, unsigned __int64, _QWORD, _QWORD); // r14
  unsigned __int8 v25; // al
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v47; // [rsp+8h] [rbp-40h]

  v10 = a6;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a5);
  v13 = sub_1C160F0(a1, a6);
  v14 = *(_QWORD *)(*(_QWORD *)(a6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 && ((*(_WORD *)(v14 + 18) >> 3) & 0x1FFu) > 0x1F1 || (*(_WORD *)v10 & 0x1FF) == 0x35 )
  {
    --*(_DWORD *)(a1 + 40);
    if ( a4 == 21 )
    {
LABEL_24:
      v38 = *(_QWORD *)(a1 + 8);
      v39 = *(unsigned int *)(v38 + 1952);
      v40 = *(unsigned int *)(v38 + 1956);
      if ( *(_QWORD *)(v38 + 1944) == __PAIR64__(v40, v39) )
      {
        v40 = 0;
        v39 = 0;
      }
      v19 = v10 & 0xFFFFFFFFFFFFFFFELL;
      v23 = sub_C09F10(
              *(_QWORD **)(v38 + 248),
              v12,
              v13,
              21,
              *(_QWORD *)(v13 + 8),
              (*(_BYTE *)(v13 + 1) >> 1) & 3,
              0,
              a3,
              (v40 << 32) | v39);
      goto LABEL_11;
    }
  }
  else
  {
    v10 = v13;
    if ( a4 == 21 )
      goto LABEL_24;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v15 == 1 )
    return 1;
  v16 = a4 - 20;
  if ( a4 >= 29 )
    v16 = a4 - 13;
  v47 = v15 & 0xFFFFFFFFFFFFFFFELL;
  v17 = sub_1929BB0(*(_QWORD *)(a1 + 8), a2, a3, v16, v15 & 0xFFFFFFFFFFFFFFFELL, (_QWORD *)v10, a7, a8, 0);
  if ( v17 == 1 )
    return 1;
  v18 = *(_QWORD *)(a1 + 8);
  v19 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v20 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v21 = *(unsigned int *)(v18 + 1952);
  v22 = *(unsigned int *)(v18 + 1956);
  if ( *(_QWORD *)(v18 + 1944) == __PAIR64__(v22, v21) )
  {
    v22 = 0;
    v21 = 0;
  }
  v23 = sub_C0BCA0(
          *(_QWORD **)(v18 + 248),
          v12,
          v13,
          a4,
          v20,
          (*(_BYTE *)(v19 + 1) >> 1) & 3,
          0,
          a3,
          (v22 << 32) | v21,
          *(_QWORD *)(v47 + 8),
          v20);
LABEL_11:
  v24 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL);
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v26 = v19;
  v27 = v24(a1, v19, a3, v25);
  if ( v27 == 1 )
    return 1;
  v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
  v29 = *(unsigned int *)(a1 + 40);
  if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    v26 = a1 + 48;
    sub_2237220(a1 + 32, a1 + 48, v29 + 1, 8);
    v29 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v29) = v28;
  v30 = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 40);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v30 + 48))(a1) )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v34 + 16) != 13 || ((*(_WORD *)(v34 + 18) >> 3) & 0x1FF) != 0x1B3)
      && ((*(_DWORD *)v28 & 0x10000) != 0
       || (*(_BYTE *)(v28 + 1) & 6) != 0
       || (v41 = sub_F63270(
                   *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                   v26,
                   *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL,
                   v31,
                   v32,
                   v33)) == nullptr
       || sub_B9E190((__int64)v41, v26, v42, v43, v44, v45)) )
    {
      v35 = *(unsigned int *)(a1 + 40);
      *(_DWORD *)(a1 + 16) = v35 - 1;
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v35 - 8);
      if ( (*(_WORD *)v36 & 0x1FF) == 0x1A )
        *(_BYTE *)(v36 + 2) &= ~8u;
    }
  }
  return (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 16LL))(a1, v23);
}
