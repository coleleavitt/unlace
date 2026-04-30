__int64 __fastcall sub_4BF5C0(
        __int64 a1,
        const char *a2,
        const char *a3,
        int a4,
        int a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  const char *v16; // rbx
  size_t v17; // r12
  __int64 v18; // rdx
  void *v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  const char *v22; // rax
  const char *v23; // r14
  size_t v24; // rax
  size_t v25; // rbx
  __int64 v26; // rax
  bool v27; // cc
  char i; // r12
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 result; // rax
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rcx
  int v36; // edx
  int v37; // esi
  int v38; // edx
  void *v39; // rdi
  size_t v40; // r12
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-40h]
  __int64 v43; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  if ( a3 )
  {
    v16 = a3;
    *(_OWORD *)(a1 + 8) = 0;
    v17 = strlen(a3);
    v18 = v17 + 1;
  }
  else
  {
    v18 = 1;
    v17 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v16 = (const char *)&unk_5C2F25;
  }
  v42 = v18;
  v19 = (void *)qvector_reserve(a1, 0, v18, 1);
  *(_QWORD *)a1 = v19;
  *(_QWORD *)(a1 + 8) = v42;
  memmove(v19, v16, v17);
  *(_BYTE *)(*(_QWORD *)a1 + v17) = 0;
  *(_DWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 84) = a5;
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_WORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v22 = sub_4BF130(a1, a2, (__m128)0LL, a7, a8, a9, v20, v21, a12, a13);
  v23 = v22;
  if ( !v22 || (v24 = strlen(v22), (v25 = v24) == 0) )
  {
    v26 = a1 + 56;
    v27 = *(_QWORD *)(a1 + 72) <= 0x63u;
    *(_QWORD *)(a1 + 40) = 0;
    v43 = a1 + 56;
    if ( !v27 )
      goto LABEL_6;
    goto LABEL_34;
  }
  v39 = *(void **)(a1 + 32);
  v40 = v24 + 1;
  if ( *(_QWORD *)(a1 + 48) < v24 + 1 )
  {
    v41 = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v40, 1);
    *(_QWORD *)(a1 + 32) = v41;
    v39 = (void *)v41;
  }
  *(_QWORD *)(a1 + 40) = v40;
  memmove(v39, v23, v25);
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + v25) = 0;
  v26 = a1 + 56;
  v43 = a1 + 56;
  if ( *(_QWORD *)(a1 + 72) <= 0x63u )
LABEL_34:
    *(_QWORD *)(a1 + 56) = qvector_reserve(v26, *(_QWORD *)(a1 + 56), 100, 1);
LABEL_6:
  for ( i = *v23; *v23; i = *v23 )
  {
    v29 = *(_QWORD *)(a1 + 64);
    if ( v29 )
    {
      if ( (unsigned __int64)--v29 > 0x63 )
        goto LABEL_25;
      if ( (unsigned __int8)(i - 65) > 0x19u && (unsigned __int8)(i - 48) > 9u && (unsigned __int8)(i - 97) >= 0x1Au )
        i = 32;
      v30 = v29 + 2;
    }
    else
    {
      if ( (unsigned __int8)(i - 48) > 9u && (unsigned __int8)(i - 65) > 0x19u )
      {
        v31 = *(_QWORD *)(a1 + 56);
        v30 = 2;
        if ( (unsigned __int8)(i - 97) > 0x19u )
          i = 32;
        if ( *(_QWORD *)(a1 + 72) >= 2u )
          goto LABEL_15;
LABEL_22:
        v32 = qvector_reserve(v43, v31, v30, 1);
        *(_QWORD *)(a1 + 56) = v32;
        v31 = v32;
        goto LABEL_15;
      }
      v30 = 2;
    }
    v31 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 72) < v30 )
      goto LABEL_22;
LABEL_15:
    *(_QWORD *)(a1 + 64) = v30;
    ++v23;
    *(_BYTE *)(v31 + v29) = i;
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + v29 + 1) = 0;
  }
  result = *(_QWORD *)(a1 + 64);
  if ( !result )
  {
LABEL_36:
    v36 = 0;
    goto LABEL_30;
  }
LABEL_25:
  v34 = *(unsigned __int8 **)(a1 + 56);
  v35 = v34 + 1;
  result = *v34;
  if ( !(_BYTE)result )
    goto LABEL_36;
  v36 = 0;
  do
  {
    v37 = 2 * v36;
    v38 = ~v36;
    if ( (result & 1) != 0 )
      v38 = v37;
    ++v35;
    v36 = ((char)result >> 1) + v38;
    result = *(v35 - 1);
  }
  while ( (_BYTE)result );
LABEL_30:
  *(_DWORD *)(a1 + 80) = v36;
  return result;
}
