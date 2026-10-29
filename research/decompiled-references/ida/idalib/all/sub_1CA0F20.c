__int64 __fastcall sub_1CA0F20(
        __int64 *a1,
        unsigned int *a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  unsigned int *v11; // r13
  __int64 v13; // r9
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rcx
  _WORD *v20; // r15
  __int64 v21; // rax
  _WORD **v22; // r14
  unsigned __int8 v23; // r12
  _WORD **v24; // r13
  _WORD *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rax
  _WORD **v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r14
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  __int64 v36; // rsi
  unsigned int v37; // r12d
  unsigned __int64 v38; // rax
  int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+18h] [rbp-D0h]
  unsigned int *v46; // [rsp+20h] [rbp-C8h]
  char v47; // [rsp+2Bh] [rbp-BDh]
  unsigned int v49; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v50[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v52; // [rsp+68h] [rbp-80h]
  _BYTE v53[120]; // [rsp+70h] [rbp-78h] BYREF

  v11 = a2;
  v43 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v50, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v33 = *a1;
    v34 = a2[2 * a2[1] + 4];
    v35 = a2[2 * a2[1] + 5];
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    v36 = *(_QWORD *)(v33 + 232);
    v37 = (unsigned int)ptr ^ v35 & ((unsigned int)ptr ^ v34);
    *(_DWORD *)(v33 + 224) = v37;
    v49 = v37;
    sub_BF6C80((unsigned int *)&ptr, v36);
    if ( v37 == (_DWORD)ptr )
    {
      LODWORD(v38) = 0;
      v39 = 0;
    }
    else
    {
      v40 = sub_FEAE70(&v49, (unsigned int *)&ptr);
      v39 = v40;
      v38 = HIDWORD(v40);
    }
    *(_DWORD *)(v33 + 1952) = v39;
    *(_DWORD *)(v33 + 1956) = v38;
  }
  v16 = v11[1];
  v17 = (__int64)(v11 + 4);
  v18 = (__int64)&v11[2 * v16 + 4];
  v19 = v16;
  if ( (unsigned int *)v18 == v11 + 4 )
  {
    v41 = 0;
    ptr = v53;
    v52 = 0x800000000LL;
    v28 = (_WORD **)v53;
    goto LABEL_33;
  }
  v20 = *(_WORD **)&v11[2 * v16 + 2];
  if ( (*v20 & 0x1FF) != 0xEE )
    goto LABEL_9;
  v21 = (__int64)&v11[2 * v16 + 2];
  while ( v17 != v21 )
  {
    v20 = *(_WORD **)(v21 - 8);
    v21 -= 8;
    if ( (*v20 & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v19 )
  {
    v20 = *(_WORD **)&v11[2 * (unsigned int)(v19 - 1) + 4];
LABEL_9:
    ptr = v53;
    v52 = 0x800000000LL;
    goto LABEL_10;
  }
  v20 = nullptr;
  ptr = v53;
  v52 = 0x800000000LL;
LABEL_10:
  v47 = 0;
  v22 = (_WORD **)v18;
  v23 = a3;
  v46 = v11;
  v24 = (_WORD **)(v11 + 4);
  do
  {
    v25 = *v24;
    if ( *v24 != v20 || (v26 = 2, !v23) )
      v26 = 0;
    v27 = sub_1C9AFD0(a1, *v24, v26, a4, a5, a6, a7, v14, v15, a10, a11, v19, v17, v13);
    if ( v27 == 1 )
    {
      if ( (*v25 & 0x1FF) == 0xF5 )
      {
        v28 = (_WORD **)ptr;
        v29 = 1;
        goto LABEL_16;
      }
      v47 = 1;
    }
    else
    {
      v19 = (unsigned int)v52;
      v31 = v27 & 0xFFFFFFFFFFFFFFFELL;
      v32 = (unsigned int)v52 + 1LL;
      if ( v32 > HIDWORD(v52) )
      {
        v45 = v31;
        sub_2237220(&ptr, v53, v32, 8);
        v19 = (unsigned int)v52;
        v31 = v45;
      }
      *((_QWORD *)ptr + v19) = v31;
      LODWORD(v52) = v52 + 1;
    }
    ++v24;
  }
  while ( v22 != v24 );
  v11 = v46;
  v28 = (_WORD **)ptr;
  if ( v47 )
  {
    v29 = 1;
    goto LABEL_16;
  }
  v41 = (unsigned int)v52;
LABEL_33:
  v42 = sub_1C36480(*a1, v11[2], v11[3], v28, v41, a3, *(double *)a4.m128_u64);
  v28 = (_WORD **)ptr;
  v29 = v42;
LABEL_16:
  if ( v28 != (_WORD **)v53 )
    free(v28);
  sub_15F30C0((__int64)v50);
  sub_1C36470(v43);
  return v29;
}
