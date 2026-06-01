unsigned int *__fastcall sub_1DAD880(
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
  unsigned int *v12; // rbx
  __int64 v13; // r9
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rcx
  unsigned __int16 *v20; // r13
  __int64 v21; // rax
  bool v22; // r14
  unsigned __int16 **v23; // rbx
  unsigned __int16 *v24; // r15
  void *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  bool v29; // cl
  _WORD **v30; // rdi
  __int64 v32; // r13
  unsigned int v33; // r12d
  unsigned int v34; // r14d
  __int64 v35; // rsi
  unsigned int v36; // r14d
  unsigned __int64 v37; // rax
  int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-E0h]
  unsigned int *v42; // [rsp+18h] [rbp-D0h]
  char v44; // [rsp+23h] [rbp-C5h]
  unsigned __int64 v46; // [rsp+28h] [rbp-C0h]
  unsigned int v47; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v48[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v50; // [rsp+68h] [rbp-80h]
  _BYTE v51[120]; // [rsp+70h] [rbp-78h] BYREF

  v12 = a2;
  v41 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v48, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v32 = *a1;
    v33 = a2[2 * a2[1] + 4];
    v34 = a2[2 * a2[1] + 5];
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    v35 = *(_QWORD *)(v32 + 232);
    v36 = (unsigned int)ptr ^ ((unsigned int)ptr ^ v33) & v34;
    *(_DWORD *)(v32 + 224) = v36;
    v47 = v36;
    sub_BF6C80((unsigned int *)&ptr, v35);
    if ( v36 == (_DWORD)ptr )
    {
      LODWORD(v37) = 0;
      v38 = 0;
    }
    else
    {
      v39 = sub_FEAE70(&v47, (unsigned int *)&ptr);
      v38 = v39;
      v37 = HIDWORD(v39);
    }
    *(_DWORD *)(v32 + 1952) = v38;
    *(_DWORD *)(v32 + 1956) = v37;
  }
  v16 = v12[1];
  v17 = (__int64)(v12 + 4);
  v18 = (__int64)&v12[2 * v16 + 4];
  v19 = v16;
  if ( (unsigned int *)v18 == v12 + 4 )
  {
    v29 = 0;
    ptr = v51;
    v50 = 0x800000000LL;
    v30 = (_WORD **)v51;
LABEL_35:
    if ( *(_DWORD *)(*a1 + 12632) || v29 )
    {
      v40 = sub_1C36480(*a1, v12[2], v12[3], v30, (unsigned int)v50, a3, *(double *)a4.m128_u64);
      v30 = (_WORD **)ptr;
      v12 = (unsigned int *)v40;
    }
    goto LABEL_25;
  }
  v20 = *(unsigned __int16 **)&v12[2 * v16 + 2];
  if ( (*v20 & 0x1FF) != 0xEE )
    goto LABEL_9;
  v21 = (__int64)&v12[2 * v16 + 2];
  while ( v17 != v21 )
  {
    v20 = *(unsigned __int16 **)(v21 - 8);
    v21 -= 8;
    if ( (*v20 & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v19 )
  {
    v20 = *(unsigned __int16 **)&v12[2 * (unsigned int)(v19 - 1) + 4];
LABEL_9:
    ptr = v51;
    v50 = 0x800000000LL;
    goto LABEL_10;
  }
  v20 = nullptr;
  ptr = v51;
  v50 = 0x800000000LL;
LABEL_10:
  v44 = 0;
  v22 = 0;
  v42 = v12;
  v23 = (unsigned __int16 **)(v12 + 4);
  do
  {
    v24 = *v23;
    if ( *v23 != v20 || (v25 = &dword_0 + 2, !a3) )
      v25 = nullptr;
    v26 = sub_1DAD2E0(a1, *v23, v25, a4, a5, a6, a7, v14, v15, a10, a11, v19, v17, v13);
    if ( v26 == 1 )
    {
      if ( (*v24 & 0x1FF) == 0xF5 )
      {
        v30 = (_WORD **)ptr;
        v12 = (unsigned int *)(&dword_0 + 1);
        goto LABEL_25;
      }
      v44 = 1;
    }
    else
    {
      v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v22 )
        v22 = v24 != (unsigned __int16 *)v27;
      v19 = (unsigned int)v50;
      v28 = (unsigned int)v50 + 1LL;
      if ( v28 > HIDWORD(v50) )
      {
        v46 = v27;
        sub_2237220(&ptr, v51, v28, 8);
        v19 = (unsigned int)v50;
        v27 = v46;
      }
      *((_QWORD *)ptr + v19) = v27;
      LODWORD(v50) = v50 + 1;
    }
    ++v23;
  }
  while ( (unsigned __int16 **)v18 != v23 );
  v29 = v22;
  v12 = v42;
  v30 = (_WORD **)ptr;
  if ( !v44 )
    goto LABEL_35;
  v12 = (unsigned int *)(&dword_0 + 1);
LABEL_25:
  if ( v30 != (_WORD **)v51 )
    free(v30);
  sub_15F30C0((__int64)v48);
  sub_1C36470(v41);
  return v12;
}
