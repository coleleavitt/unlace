/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443560
// Address: 0x0000000000443560

//----- (0000000000443560) ----------------------------------------------------
__int64 __fastcall sub_443560(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  pthread_mutex_t *v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  char *v30; // rsi
  char *v31; // rdi
  double v32; // xmm4_8
  double v33; // xmm5_8
  char *v34; // rax
  unsigned __int8 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+18h] [rbp-60h]
  unsigned __int8 v38[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  unsigned __int64 v41; // [rsp+48h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  v10 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v11 = *(_QWORD *)(a1 + 104);
  if ( !v11 || (v12 = *(_DWORD *)(v11 + 136), v12 <= 0) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(487);
    BUG();
  }
  *(_DWORD *)(v11 + 136) = v12 - 1;
  sub_482F10(v10);
  v15 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 96) + 1 == v15 )
    goto LABEL_4;
  v23 = *(_QWORD *)(a1 + 24);
  v35[0] = 2;
  v36 = 0;
  v37 = 0;
  if ( (unsigned int)sub_442230((__m128i *)v35, (__m128i *)(v23 + 32 * v15 - 32), 0.0, a3, a4, a5, v13, v14, a8, a9) )
    goto LABEL_23;
  v26 = *(int *)(a1 + 96);
  if ( v35[0] != 10 || SDWORD2(v36) < (int)v26 )
    goto LABEL_18;
  if ( !sub_4419D0(v35, 2, 0.0, a3, a4, a5, v24, v25, a8, a9) )
  {
LABEL_23:
    sub_441540((__int64)v35, 0.0, a3, a4, a5, v24, v25, a8, a9);
    return 0;
  }
  v26 = *(int *)(a1 + 96);
LABEL_18:
  v27 = *(_QWORD *)(a1 + 32);
  if ( v26 != v27 )
  {
    v38[0] = 2;
    v39 = 0;
    v40 = 0;
    sub_442DA0(a1 + 24, v26, v38, 0.0, a3, a4, a5, v24, v25, a8, a9);
    sub_441540((__int64)v38, 0.0, a3, a4, a5, v28, v29, a8, a9);
    v27 = *(_QWORD *)(a1 + 32);
  }
  v30 = *(char **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v27 + 1) )
  {
    v34 = (char *)sub_481540(a1 + 24, v30, v27 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v34;
    v30 = v34;
    v27 = *(_QWORD *)(a1 + 32);
  }
  v31 = &v30[32 * v27];
  *v31 = 2;
  *((_QWORD *)v31 + 3) = 0;
  *(_OWORD *)(v31 + 8) = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_442230((__m128i *)v31, (__m128i *)v35, 0.0, a3, a4, a5, v24, v25, a8, a9);
  sub_441540((__int64)v35, 0.0, a3, a4, a5, v32, v33, a8, a9);
LABEL_4:
  v16 = *(_QWORD *)(a1 + 80);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 72);
    v18 = *(_QWORD *)(a1 + 32);
    do
    {
      if ( *(int *)(v17 + 4 * v16 - 4) < v18 )
        break;
      *(_QWORD *)(a1 + 80) = --v16;
    }
    while ( v16 );
  }
  v19 = *(_QWORD *)(a1 + 56);
  v20 = *(_QWORD *)(a1 + 48) + 24 * v19 - 24;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v20 + 16);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v20 + 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v20 + 8);
  v21 = *(_QWORD *)v20;
  *(_QWORD *)(a1 + 104) = v21;
  if ( v19 )
    *(_QWORD *)(a1 + 56) = v19 - 1;
  if ( v21 )
    v21 += 32;
  *(_QWORD *)(a1 + 128) = v21;
  return 1;
}
// 4436B9: variable 'v13' is possibly undefined
// 4436B9: variable 'v14' is possibly undefined
// 4436DE: variable 'v24' is possibly undefined
// 4436DE: variable 'v25' is possibly undefined
// 443727: variable 'v28' is possibly undefined
// 443727: variable 'v29' is possibly undefined
// 443769: variable 'v32' is possibly undefined
// 443769: variable 'v33' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
