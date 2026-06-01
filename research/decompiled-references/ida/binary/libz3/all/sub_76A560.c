__int64 __fastcall sub_76A560(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v3; // rdi
  _OWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // [rsp-8h] [rbp-38h] BYREF
  _BYTE v17[48]; // [rsp+0h] [rbp-30h] BYREF

  v3 = a1 + 5;
  *(v3 - 3) = 0;
  *(v3 - 2) = a2;
  *(v3 - 1) = 0;
  *(__m128i *)(v3 - 5) = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  sub_16744A0(v3, a2);
  sub_1684300(a1 + 8, a2);
  a1[10] = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  a1[14] = a2;
  a1[11] = (__int64)v4;
  a1[12] = 8;
  *((_DWORD *)a1 + 26) = 0;
  a1[15] = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  sub_180C5A0(&v16, "bv");
  v5 = *a1;
  v6 = *a1 + 560;
  if ( !(unsigned __int8)sub_15D1480(v6, &v16) || (v14 = (unsigned int)sub_15D1320(v6, &v16), !sub_15D2690(v5, v14)) )
  {
    v7 = *a1;
    v8 = sub_186B270(0x268u);
    sub_1672BD0(v8);
    sub_15DA890(v7, &v16, v8);
  }
  sub_180C5A0(v17, "array");
  v9 = *a1;
  v10 = *a1 + 560;
  if ( !(unsigned __int8)sub_15D1480(v10, v17)
    || (v15 = (unsigned int)sub_15D1320(v10, v17), (result = sub_15D2690(v9, v15)) == 0) )
  {
    v11 = *a1;
    v12 = sub_186B270(0x88u);
    sub_1684100(v12);
    return sub_15DA890(v11, v17, v12);
  }
  return result;
}

