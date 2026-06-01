__int64 __fastcall sub_6067F0(__int64 a1, unsigned __int64 a2, int a3)
{
  __m128 *v4; // rbx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  double v8; // r15
  double v9; // rsi
  unsigned __int64 v10; // rax
  _OWORD *v11; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_1C52860;
  v4 = (__m128 *)sub_186B270(0x480u);
  *v4 = _mm_loadh_ps((const double *)a2);
  sub_1858590(&v4[1], **(_QWORD **)(a2 + 32));
  sub_5C8F60((__int64)&v4[1].m128_i64[1], (unsigned __int64 *)a2, 40000);
  sub_FC1490((_DWORD)v4 + 448, *(_QWORD *)a2, (_DWORD)v4 + 16, v5, v6, v7);
  v8 = *(double *)a2;
  sub_1584DD0(&v4[28].m128_u16[4], *(_QWORD *)&v8, *(_DWORD *)(*(_QWORD *)&v8 + 712LL) != 0);
  v4[28].m128_u64[1] = (unsigned __int64)&off_1C52820;
  v4[37].m128_u64[1] = (unsigned __int64)&v4[62];
  v4[38].m128_i32[0] = 0;
  v4[38].m128_u64[1] = 0;
  sub_1584DD0(&v4[39], *(_QWORD *)&v8, 0);
  v4[48].m128_u64[0] = 0;
  v4[48].m128_i32[2] = 0;
  v4[39].m128_u64[0] = (unsigned __int64)&off_1C61DB8;
  sub_1584DD0(&v4[49], *(_QWORD *)&v8, 0);
  v9 = *(double *)a2;
  *(double *)v4[59].m128_u64 = v8;
  *(double *)v4[60].m128_u64 = v8;
  *(double *)v4[61].m128_u64 = v8;
  v4[49].m128_u64[0] = (unsigned __int64)&off_1C61DE0;
  v4[58].m128_i32[0] = 0;
  v4[58].m128_u64[1] = 0;
  v4[59].m128_u64[1] = 0;
  v4[60].m128_u64[1] = 0;
  v4[61].m128_u64[1] = 0;
  v4[28].m128_u64[1] = (unsigned __int64)&off_1C52840;
  v4[62].m128_u64[0] = a2;
  *(double *)&v4[62].m128_u64[1] = v9;
  sub_16744A0(&v4[63], *(_QWORD *)&v9);
  v10 = v4[62].m128_u64[1];
  v4[65].m128_u64[0] = 0;
  v4[66].m128_u64[0] = 0;
  v4[64].m128_u64[1] = v10;
  v4[65].m128_u64[1] = v10;
  v4[66].m128_u64[1] = v10;
  v4[67].m128_u64[0] = 0;
  v4[67].m128_u64[1] = v10;
  v4[68].m128_u64[0] = 0;
  v4[68].m128_u64[1] = v10;
  v4[69].m128_u64[0] = 0;
  v4[69].m128_u64[1] = 0;
  v4[70].m128_u64[0] = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  v4[70].m128_u64[1] = (unsigned __int64)v11;
  *v11 = 0;
  v4[71].m128_u64[0] = 8;
  v4[71].m128_i32[2] = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  sub_1862300(&v4[1], "blast_full", 1);
  sub_1862300(&v4[1], "blast_quant", 1);
  result = sub_FC0660(&v4[28], &v4[1]);
  *(_QWORD *)(a1 + 24) = v4;
  return result;
}

