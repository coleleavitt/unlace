/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E5B0
// Address: 0x000000000042E5B0

//----- (000000000042E5B0) ----------------------------------------------------
__int64 __fastcall sub_42E5B0(
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
  int v9; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v21; // rbp
  __m128i v22; // xmm0
  char *v23; // rax
  unsigned __int8 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v25[24]; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int8 v26[8]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+38h] [rbp-30h]
  unsigned __int64 v29; // [rsp+48h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v9 = *(unsigned __int16 *)(a1 + 64);
  v24[0] = 2;
  memset(v25, 0, sizeof(v25));
  switch ( v9 )
  {
    case 3:
    case 5:
      *(_QWORD *)v25 = *(_QWORD *)(a1 + 72);
      break;
    case 4:
      sub_441540((__int64)v24, 0.0, a3, a4, a5, a6, a7, a8, a9);
      v24[0] = 7;
      memset(v25, 0, sizeof(v25));
      sub_42E3C0((void **)v25, a1 + 40);
      break;
    case 7:
      sub_441540((__int64)v24, 0.0, a3, a4, a5, a6, a7, a8, a9);
      v22 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      v24[0] = 3;
      *(__m128i *)v25 = v22;
      break;
    case 8:
      v21 = *(_QWORD *)(a1 + 88);
      sub_441540((__int64)v24, 0.0, a3, a4, a5, a6, a7, a8, a9);
      v24[0] = 9;
      *(_QWORD *)v25 = v21;
      break;
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(1438);
      BUG();
  }
  v26[0] = 2;
  v27 = 0;
  v28 = 0;
  sub_4418C0(v26, v24, 0.0, a3, a4, a5, a6, a7, a8, a9);
  v13 = *(_QWORD *)(a1 + 432);
  v14 = *(char **)(a1 + 424);
  if ( *(_QWORD *)(a1 + 440) < (unsigned __int64)(v13 + 1) )
  {
    v23 = (char *)sub_481540(a1 + 424, v14, v13 + 1, 0x20u);
    *(_QWORD *)(a1 + 424) = v23;
    v14 = v23;
    v13 = *(_QWORD *)(a1 + 432);
  }
  v15 = &v14[32 * v13];
  *v15 = 2;
  *((_QWORD *)v15 + 3) = 0;
  *(_OWORD *)(v15 + 8) = 0;
  sub_4418C0((unsigned __int8 *)v15, v26, 0.0, a3, a4, a5, v11, v12, a8, a9);
  ++*(_QWORD *)(a1 + 432);
  sub_441540((__int64)v26, 0.0, a3, a4, a5, v16, v17, a8, a9);
  sub_441540((__int64)v24, 0.0, a3, a4, a5, v18, v19, a8, a9);
  return 0;
}
// 42E636: variable 'a6' is possibly undefined
// 42E636: variable 'a7' is possibly undefined
// 42E678: variable 'v11' is possibly undefined
// 42E678: variable 'v12' is possibly undefined
// 42E688: variable 'v16' is possibly undefined
// 42E688: variable 'v17' is possibly undefined
// 42E690: variable 'v18' is possibly undefined
// 42E690: variable 'v19' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
