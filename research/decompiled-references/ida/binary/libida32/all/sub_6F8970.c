__int64 __fastcall sub_6F8970(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char v11; // cl
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r8
  double v17; // xmm4_8
  double v18; // xmm5_8

  v11 = *(_BYTE *)(a2 + 16);
  if ( v11 == 26 )
  {
    v12 = 15;
    if ( a2 )
      v12 = 8 * ((*(_BYTE *)(a2 + 19) & 0x1E) != 0) + 15;
  }
  else
  {
    v13 = 16;
    if ( v11 == 25 )
      goto LABEL_5;
    v12 = 15;
  }
  v13 = 8 * ((v12 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
LABEL_5:
  v14 = a3 + v13;
  v15 = sub_F487E0(*(_QWORD *)(a2 + 24));
  return sub_6F74E0(
           a1,
           *(_QWORD *)(a2 + 24),
           v15 * ((v14 != 0) + (v14 - (unsigned __int64)(v14 != 0)) / v15),
           v15,
           v16,
           a4,
           a5,
           a6,
           a7,
           v17,
           v18,
           a10,
           a11);
}

