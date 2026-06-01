__int64 __fastcall sub_289010(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r12d
  unsigned int v21; // r14d
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rdx
  int v25; // r12d
  int v26; // r10d
  int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rcx
  _BYTE v31[56]; // [rsp+0h] [rbp-68h] BYREF
  int v32[2]; // [rsp+38h] [rbp-30h]

  *(_QWORD *)v32 = __readfsqword(0x28u);
  v12 = *(_DWORD *)(a1 + 424) + a2;
  if ( v12 < 0 )
  {
    v20 = -v12;
    *(_BYTE *)(a1 + 433) = 1;
    v21 = 1;
    sub_1E96E0((QT::QObject *)v31, *(double *)a3.m128_u64, *(_QWORD *)(a1 + 16), 0);
    v24 = a1 + 184;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 392);
    v14 = *(_QWORD *)(a1 + 416);
    v15 = v12;
    v16 = *(_QWORD *)(a1 + 384);
    v17 = *(_QWORD *)(a1 + 360);
    v18 = *(_QWORD *)(a1 + 376);
    v19 = (v14 == 0)
        + 0xF0F0F0F0F0F0F0F1LL * ((v18 - v17) >> 4)
        + ((v14 - v16) >> 3)
        - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
        - 1;
    if ( v12 < v19 )
      goto LABEL_10;
    v20 = v12 + 1 - v19;
    if ( v20 <= 0 )
      goto LABEL_9;
    *(_BYTE *)(a1 + 433) = 1;
    v21 = 2;
    sub_1E96E0((QT::QObject *)v31, *(double *)a3.m128_u64, *(_QWORD *)(a1 + 16), 0);
    v24 = a1 + 264;
  }
  v25 = sub_287C20(a1, nullptr, v24, v20, v21, a3, a4, a5, a6, v22, v23, a9, a10);
  sub_1E98C0((QT::QObject *)v31);
  *(_BYTE *)(a1 + 433) = 0;
  v26 = *(_DWORD *)(a1 + 424);
  if ( v21 == 1 )
  {
    *(_DWORD *)(a1 + 424) = v25 + v26;
    v27 = v25 + v26 + a2;
  }
  else
  {
    v27 = a2 + v26;
  }
  if ( v27 < 0 )
    return 0;
  v14 = *(_QWORD *)(a1 + 416);
  v16 = *(_QWORD *)(a1 + 384);
  v15 = v27;
  v17 = *(_QWORD *)(a1 + 360);
  v13 = *(_QWORD *)(a1 + 392);
  v18 = *(_QWORD *)(a1 + 376);
LABEL_9:
  if ( v15 >= (v14 == 0)
            + 0xF0F0F0F0F0F0F0F1LL * ((v13 - *(_QWORD *)(a1 + 400)) >> 4)
            + ((v14 - v16) >> 3)
            - 0xF0F0F0F0F0F0F0FLL * ((v18 - v17) >> 4)
            - 1 )
    return 0;
LABEL_10:
  v28 = v15 - 0xF0F0F0F0F0F0F0FLL * ((v17 - *(_QWORD *)(a1 + 368)) >> 4);
  if ( v28 >= 0 && v15 == 0xF0F0F0F0F0F0F0FLL * ((v17 - *(_QWORD *)(a1 + 368)) >> 4) )
    v29 = 272 * v15 + v17;
  else
    v29 = *(_QWORD *)(v16 + 8 * v28);
  return *(_QWORD *)v29;
}
