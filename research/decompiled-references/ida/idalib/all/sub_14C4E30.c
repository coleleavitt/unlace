unsigned __int64 __fastcall sub_14C4E30(__int64 a1, unsigned __int8 a2, __m128i a3, double a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  char v11; // al
  __int64 *v12; // rdi
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  char v18; // al
  __int16 v20; // ax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+36h] [rbp-42h] BYREF
  char v35; // [rsp+37h] [rbp-41h] BYREF
  __int64 v36[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 96);
  sub_18C74E0(v5, 0, 0, 4);
  v34 = 0;
  v6 = sub_14BDA20(a1, 2, 0, 0, 0, &v34, a3);
  if ( v6 == 1 )
    goto LABEL_16;
  v7 = v6;
  v36[0] = a1;
  if ( v34
    || (v8 = v6, (int)sub_FFF790(*(unsigned __int16 *)(a1 + 32), *(_BYTE *)(a1 + 1952), 1) > 5)
    || (v20 = *(_WORD *)(a1 + 32), (v20 & 0xFFFB) == 0x22)
    || v20 == 26
    || v20 == 20
    && ((v21 = *(_QWORD *)(a1 + 8), v22 = *(_QWORD *)(v21 + 2944), v22 >= *(unsigned int *)(v21 + 2912))
      ? (v23 = sub_14180A0(v21, 1u))
      : (v23 = *(_QWORD *)(v21 + 2904) + 24 * v22),
        *(_WORD *)(v23 + 16) != 20) )
  {
    v8 = sub_14C23C0(v36, v7, 0, a3, a4);
    if ( v8 == 1 )
      goto LABEL_16;
    v34 = 0;
  }
  v11 = sub_174DEF0(
          *(_QWORD *)(a1 + 96),
          (unsigned int)v8 & 0xFFFFFFFE,
          (unsigned int)&v35,
          a2,
          v9,
          v10,
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32));
  if ( !v11 )
  {
    if ( v35 )
      goto LABEL_27;
LABEL_16:
    v8 = 1;
    goto LABEL_17;
  }
  if ( v35 )
  {
LABEL_27:
    sub_14C23C0(v36, v8, v11 ^ 1, a3, a4);
    goto LABEL_16;
  }
  while ( *(_WORD *)(a1 + 32) == 29 )
  {
    v12 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v12, (int *)(a1 + 16));
    v13 = *(_DWORD *)(a1 + 40);
    v14 = sub_14BDA20(a1, 2, 0, 0, 0, &v34, a3);
    v15 = v14;
    if ( v14 == 1 )
      goto LABEL_16;
    v36[0] = a1;
    if ( v34
      || (v28 = v14,
          v31 = v14,
          v16 = sub_FFF790(*(unsigned __int16 *)(a1 + 32), *(_BYTE *)(a1 + 1952), 1),
          v15 = v28,
          v16 > 5)
      || (v24 = *(_WORD *)(a1 + 32), (v24 & 0xFFFB) == 0x22)
      || v24 == 26
      || (v17 = v31, v24 == 20)
      && ((v25 = *(_QWORD *)(a1 + 8), v26 = *(_QWORD *)(v25 + 2944), v26 >= *(unsigned int *)(v25 + 2912))
        ? (v33 = v28, v30 = v17, v27 = sub_14180A0(v25, 1u), v15 = v33, v17 = v30)
        : (v27 = *(_QWORD *)(v25 + 2904) + 24 * v26),
          *(_WORD *)(v27 + 16) != 20) )
    {
      v17 = sub_14C23C0(v36, v15, 0, a3, a4);
      if ( v17 == 1 )
        goto LABEL_16;
      v34 = 0;
    }
    v29 = v17;
    v32 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v18 = sub_174DEF0(
            *(_QWORD *)(a1 + 96),
            (unsigned int)v17 & 0xFFFFFFFE,
            (unsigned int)&v35,
            a2,
            v17,
            (unsigned int)v17 & 0xFFFFFFFE,
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    if ( !v18 )
    {
      if ( v35 )
      {
LABEL_15:
        sub_14C23C0(v36, v29, v18 ^ 1, a3, a4);
        goto LABEL_16;
      }
      goto LABEL_16;
    }
    v18 = v35;
    if ( v35 )
      goto LABEL_15;
    v8 = sub_192A3E0(
           *(_QWORD *)(a1 + 96),
           *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
           v13,
           29,
           v8 & 0xFFFFFFFFFFFFFFFELL,
           v32);
    if ( v8 <= 1 )
      goto LABEL_16;
  }
LABEL_17:
  sub_190D5E0(v5);
  return v8;
}
