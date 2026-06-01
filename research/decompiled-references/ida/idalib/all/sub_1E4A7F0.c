unsigned __int64 __fastcall sub_1E4A7F0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v12; // rdx
  void **v13; // rax
  __int64 v14; // rax
  char v15; // r13
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  bool v28; // zf
  char *v29; // rdi
  __int64 v30; // r12
  __int64 v31; // r13
  void **v32; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+8h] [rbp-B0h]
  __int64 v47; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v48; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+60h] [rbp-58h] BYREF
  __int64 v52; // [rsp+68h] [rbp-50h]
  __int16 v53; // [rsp+70h] [rbp-48h]
  char v54; // [rsp+72h] [rbp-46h]
  __int64 v55; // [rsp+78h] [rbp-40h]

  v12 = *a1;
  v46 = 1;
  v45 = v12;
  v13 = (void **)&v47;
  do
  {
    *v13 = (void *)-4096LL;
    v13 += 2;
  }
  while ( v13 != &ptr );
  v54 = 0;
  ptr = &v51;
  v50 = 0x100000000LL;
  v14 = *(_QWORD *)(v12 + 11280);
  *(_QWORD *)(v12 + 11280) = &v45;
  v15 = *((_BYTE *)a1 + 56);
  *((_BYTE *)a1 + 56) = 0;
  v16 = *(_QWORD *)(a2 + 56);
  v52 = v14;
  v53 = 0;
  v55 = 0;
  v17 = sub_1E48E00((__int64)a1, v16);
  if ( !v17 )
    goto LABEL_29;
  v20 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v21 = sub_1E46F30(a1, v20, v17, 0, a3, a4, a5, a6, v18, v19, a9, a10);
    if ( v21 )
      goto LABEL_6;
LABEL_29:
    v22 = 0;
    goto LABEL_11;
  }
  v21 = (__int64)sub_1E44740(a1, v20, v17, 0, a3, a4, a5, a6, v18, v19, a9, a10);
  if ( !v21 )
    goto LABEL_29;
LABEL_6:
  v22 = sub_B77A30(v21);
  *(_BYTE *)(v22 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v22 + 29) & 0x9F;
  if ( (*(_WORD *)(v22 + 30) & 0x180) != 0 )
  {
    if ( (*(_QWORD *)sub_BC3640((_QWORD *)v22) & 0xFFFFFFFFFFFFFFF8LL) == 0
      && (unsigned __int8)sub_B726C0(*(_QWORD *)(a2 + 48), v20, v23, v24) )
    {
      *(_BYTE *)(*(_QWORD *)(v22 + 48) + 83LL) |= 0x80u;
      v43 = (_QWORD *)sub_BC3640((_QWORD *)v22);
      *v43 = a2 | *v43 & 7LL;
    }
    v27 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
      v27 = *(_QWORD *)v27;
    if ( ((*(_BYTE *)(v27 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v38 = *(_QWORD *)(a2 + 64);
      if ( (((unsigned __int8)v38 | (unsigned __int8)(v38 >> 1)) & 1) != 0 )
        goto LABEL_38;
      v39 = sub_AEA770((__int64 *)(a2 + 64), a2, v38, v24, v25, v26);
      if ( !v39 )
        goto LABEL_38;
      v40 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      {
        if ( (*(_BYTE *)(*v40 + 8LL) & 0x7Fu) - 59 > 2 )
          goto LABEL_11;
        v40 = (_QWORD *)v40[1];
      }
      else if ( ((_BYTE)v40[1] & 0x7Fu) - 59 > 2 )
      {
        goto LABEL_11;
      }
      v41 = *(_QWORD *)(v39 + 16);
      v42 = v41 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v41 & 4) != 0 )
        v42 = *(_QWORD *)(v42 + 8);
      if ( (_QWORD *)v42 != v40 )
LABEL_38:
        sub_165BD80((_QWORD *)*a1, v22);
    }
  }
  else
  {
    if ( (*(_QWORD *)sub_BC3640((_QWORD *)v22) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v22 + 48) + 83LL) |= 0x80u;
      v44 = (_QWORD *)sub_BC3640((_QWORD *)v22);
      v34 = *v44 & 7LL;
      *v44 = v34 | a2;
    }
    sub_B94AD0((__m128i *)a1[3], v22, v34, v35, v36, v37);
  }
LABEL_11:
  v28 = (_BYTE)v53 == 0;
  v29 = (char *)ptr;
  *((_BYTE *)a1 + 56) = v15;
  if ( v28 )
  {
    if ( (_DWORD)v50 )
    {
      v30 = 0;
      v31 = 8LL * (unsigned int)(v50 - 1) + 8;
      do
      {
        v32 = *(void ***)&v29[v30];
        if ( v32 )
        {
          if ( *v32 != v32 + 2 )
            free(*v32);
          operator delete(v32, 0x30u);
          v29 = (char *)ptr;
        }
        v30 += 8;
      }
      while ( v30 != v31 );
    }
    LOBYTE(v53) = 1;
    *(_QWORD *)(v45 + 11280) = v52;
  }
  if ( v29 != (char *)&v51 )
    free(v29);
  if ( (v46 & 1) == 0 )
    operator delete(v47, 16LL * v48, 8);
  return v22;
}
