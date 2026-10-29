unsigned __int64 __fastcall sub_31F040(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbx
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __int64 v15; // rdx
  _BOOL4 v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  double v22; // xmm4_8
  double v23; // xmm5_8
  char v25; // [rsp+0h] [rbp-48h]
  char v26; // [rsp+0h] [rbp-48h]
  __int16 v27; // [rsp+6h] [rbp-42h] BYREF
  __int64 v28; // [rsp+8h] [rbp-40h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v9 = reg_int_op("AutoSsInterval", 0, 0, 0);
  v10 = v9;
  v28 = v9;
  v11 = reg_int_op("AutoSsMaxCount", 0, 0, 0);
  v12 = v11;
  v29 = v11;
  v27 = v28 != 0;
  if ( v11 )
    v27 |= 2u;
  if ( (unsigned int)reg_int_op("AutoSsOverwrite", 0, 0, 0) )
    v27 |= 4u;
  if ( (unsigned int)sub_1697D0(
                       (int)"Database snapshot options\n"
                            "%/%*\n"
                            "<##Options#Enable ~a~utomatic snapshots:C21>\n"
                            "<~L~imit automatic snapshots:C22:::>\n"
                            "<~O~verwrite previous snapshots:C23:::>20>\n"
                            "\n"
                            "<Automatic snapshot ~i~nterval (in minutes):D30:5:5::>\n"
                            "<~M~aximum number of automatic snapshots   :D31:5:5::>\n",
                       (__int64)sub_3182C0,
                       a1,
                       (__int64)&v27,
                       (__int64)&v28,
                       (__int64)&v29,
                       a2,
                       a3,
                       a4,
                       a5,
                       v13,
                       v14,
                       a8,
                       a9,
                       v25) )
  {
    if ( (v27 & 1) == 0 )
      v28 = 0;
    if ( (v27 & 2) != 0 )
    {
      v15 = v29;
      v16 = (v27 & 4) != 0;
    }
    else
    {
      v29 = 0;
      v16 = 0;
      v15 = 0;
    }
    if ( v12 != v15 )
      reg_int_op("AutoSsMaxCount", 1, v15, 0);
    reg_int_op("AutoSsOverwrite", 1, v16, 0);
    v17 = v28;
    if ( v28 != v10 )
    {
      if ( qword_8CD8C8 )
      {
        sub_1C92B0((QT::QBasicTimer *)qword_8CD8C8, *(double *)a2.m128_u64, a3);
        v17 = v28;
        qword_8CD8C8 = 0;
      }
      reg_int_op("AutoSsInterval", 1, v17, 0);
      if ( v28 )
        sub_31E3B0(a2, a3, a4, a5, v22, v23, a8, a9, (__int64)"AutoSsInterval", 1, v18, v19, v20, v21, v26);
    }
  }
  return v30 - __readfsqword(0x28u);
}
