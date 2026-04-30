__int64 __fastcall sub_288200(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rsi
  __int64 v15; // rdx
  __int64 v18; // rdi
  unsigned int v19; // r15d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  int v28; // ebp
  int v29; // eax
  int v31; // eax
  int v32; // ecx
  bool v33; // zf
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  char v36[57]; // [rsp+Fh] [rbp-79h] BYREF
  int v37[2]; // [rsp+48h] [rbp-40h]

  v13 = *(_QWORD *)(a1 + 360);
  *(_QWORD *)v37 = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a1 + 392);
  if ( a2 <= 0 || v13 == v15 )
    return 0;
  v18 = *(_QWORD *)(a1 + 16);
  if ( a3 == 1 )
  {
    v31 = *(_DWORD *)(a1 + 424);
    v19 = a2;
    if ( v31 <= a2 )
      v19 = *(_DWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 424) -= v19;
    if ( v31 >= a2 )
      goto LABEL_14;
    *(_BYTE *)(a1 + 433) = 1;
    sub_1E96E0((QT::QObject *)&v36[1], *(double *)a5.m128_u64, v18, 0);
    v27 = a1 + 184;
  }
  else
  {
    v19 = a2;
    v20 = 0xF0F0F0F0F0F0F0F1LL * ((*(_QWORD *)(a1 + 376) - v13) >> 4)
        + 0xF0F0F0F0F0F0F0F1LL * ((v15 - *(_QWORD *)(a1 + 400)) >> 4)
        + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3);
    v21 = *(_QWORD *)(a4 + 184);
    v22 = *(_DWORD *)(a1 + 424);
    v23 = (*(_QWORD *)(a1 + 416) == 0) + (_DWORD)v20 - 1;
    if ( (int)v21 < 0 )
      LODWORD(v21) = 0;
    if ( (int)v21 > v23 - v22 )
      LODWORD(v21) = v23 - v22;
    v24 = v23 - (v22 + v21);
    if ( v24 <= a2 )
      v19 = v24;
    *(_DWORD *)(a1 + 424) = v19 + v22;
    if ( v24 >= a2 )
      goto LABEL_14;
    *(_BYTE *)(a1 + 433) = 1;
    sub_1E96E0((QT::QObject *)&v36[1], *(double *)a5.m128_u64, v18, 0);
    v27 = a1 + 264;
  }
  v28 = a2 - v19;
  v36[0] = 0;
  v29 = sub_287C20(a1, v36, v27, v28, a3, a5, a6, a7, a8, v25, v26, a11, a12);
  *(_BYTE *)(a1 + 433) = 0;
  v19 += v29;
  if ( a3 == 2 )
  {
    v32 = v29 + *(_DWORD *)(a1 + 424);
    v33 = v36[0] == 0;
    *(_DWORD *)(a1 + 424) = v32;
    if ( !v33 && v28 > v29 )
    {
      v34 = *(_QWORD *)(a4 + 176);
      v35 = (*(_QWORD *)(a1 + 416) == 0)
          + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
          + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
          - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
          - 1;
      if ( (int)v34 < 0 )
        LODWORD(v34) = 0;
      if ( (int)v34 > (int)v35 - v32 )
        LODWORD(v34) = v35 - v32;
      if ( v32 + (int)v34 < v35 )
      {
        ++v19;
        *(_DWORD *)(a1 + 424) = v32 + 1;
      }
    }
  }
  sub_1E98C0((QT::QObject *)&v36[1]);
  v18 = *(_QWORD *)(a1 + 16);
LABEL_14:
  sub_459CA0(v18);
  return v19;
}
