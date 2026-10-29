/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4359E0
// Address: 0x00000000004359E0

//----- (00000000004359E0) ----------------------------------------------------
__int64 __fastcall sub_4359E0(
        __int64 a1,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rbp
  void *v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  void *v21; // rax
  char v22; // [rsp+0h] [rbp-28h]

  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(void **)a1;
  if ( !v15 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    v18 = 1;
    v19 = 2;
    goto LABEL_3;
  }
  if ( (unsigned __int64)(v15 - 1) <= 0x3FF )
  {
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_QWORD *)(a1 + 8);
    --v15;
    goto LABEL_7;
  }
  sub_410EA0((int)"%s", (__int64)v16, v15 - 1, a12, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10, v22);
  v16 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v16);
    v18 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    if ( !v18 )
    {
      v15 = 0;
      v18 = 1;
      v16 = nullptr;
      v19 = 2;
      goto LABEL_8;
    }
    v15 = v18 - 1;
    v16 = nullptr;
    v17 = 0;
    goto LABEL_7;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 16);
  if ( v18 )
  {
    v15 = v18 - 1;
LABEL_7:
    v19 = v15 + 2;
    if ( v17 >= v15 + 2 )
      goto LABEL_4;
LABEL_8:
    v21 = sub_481540(a1, v16, v19, 1u);
    *(_QWORD *)a1 = v21;
    v16 = v21;
    goto LABEL_4;
  }
  v15 = 0;
  v18 = 1;
  v19 = 2;
LABEL_3:
  if ( v17 < 2 )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)(a1 + 8) = v19;
  *((_BYTE *)v16 + v15) = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v18) = 0;
  return 0;
}
// 435A79: variable 'v22' is possibly undefined
