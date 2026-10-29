/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_445EB0
// Address: 0x0000000000445EB0

//----- (0000000000445EB0) ----------------------------------------------------
__int64 __fastcall sub_445EB0(
        int *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  size_t v15; // r13
  __int64 v16; // r12
  int v17; // eax
  int *v18; // rdi
  int *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  size_t v25; // r13
  int v26; // eax
  int *v27; // rdi
  void *v29; // rax
  void *v30; // rax
  const void *v31; // rsi

  v12 = operator new(0x58u);
  v15 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v12 + 32) = 0;
  v16 = v12;
  *(_OWORD *)(v12 + 40) = 0;
  if ( v15 )
  {
    v30 = sub_4814F0(v15);
    *(_QWORD *)(v16 + 32) = v30;
    v31 = *((const void **)a1 + 4);
    *(_QWORD *)(v16 + 48) = v15;
    memcpy(v30, v31, v15);
    *(_QWORD *)(v16 + 40) = v15;
  }
  *(_BYTE *)(v16 + 56) = 2;
  *(_QWORD *)(v16 + 80) = 0;
  *(_OWORD *)(v16 + 64) = 0;
  sub_4418C0((unsigned __int8 *)(v16 + 56), (unsigned __int8 *)a1 + 56, 0.0, a4, a5, a6, v13, v14, a9, a10);
  v17 = *a1;
  v18 = *((int **)a1 + 3);
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_DWORD *)v16 = v17;
  *(_QWORD *)(v16 + 8) = a2;
  if ( v18 )
    *(_QWORD *)(v16 + 24) = sub_445EB0(v18, v16);
  v19 = *((int **)a1 + 2);
  if ( v19 )
  {
    v20 = v16;
    do
    {
      v21 = v20;
      v22 = operator new(0x58u);
      *(_QWORD *)(v22 + 32) = 0;
      v20 = v22;
      *(_OWORD *)(v22 + 40) = 0;
      v25 = *((_QWORD *)v19 + 5);
      if ( v25 )
      {
        v29 = sub_4814F0(*((_QWORD *)v19 + 5));
        *(_QWORD *)(v20 + 32) = v29;
        *(_QWORD *)(v20 + 48) = v25;
        memcpy(v29, *((const void **)v19 + 4), v25);
        *(_QWORD *)(v20 + 40) = v25;
      }
      *(_BYTE *)(v20 + 56) = 2;
      *(_QWORD *)(v20 + 80) = 0;
      *(_OWORD *)(v20 + 64) = 0;
      sub_4418C0(
        (unsigned __int8 *)(v20 + 56),
        (unsigned __int8 *)v19 + 56,
        0.0,
        (__m128)0LL,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10);
      v26 = *v19;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_DWORD *)v20 = v26;
      *(_QWORD *)(v21 + 16) = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v27 = *((int **)v19 + 3);
      if ( v27 )
        *(_QWORD *)(v20 + 24) = sub_445EB0(v27, v20);
      v19 = *((int **)v19 + 2);
    }
    while ( v19 );
  }
  return v16;
}
// 445F0A: variable 'v13' is possibly undefined
// 445F0A: variable 'v14' is possibly undefined
// 445F97: variable 'v23' is possibly undefined
// 445F97: variable 'v24' is possibly undefined
