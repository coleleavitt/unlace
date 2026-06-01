__int64 __fastcall sub_77CF70(__m128i **a1, const __m128i *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __m128i v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A0h]
  _BYTE v20[16]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  _QWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v25; // [rsp+68h] [rbp-50h]
  char v26; // [rsp+70h] [rbp-48h]

  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)a4);
  v18 = sub_1141FA0(a4);
  v19 = sub_1141F80(a4);
  sub_16669D0(v20, v17.m128i_i64[0]);
  v21 = a5;
  v22 = a6;
  v11 = sub_1141FA0(v17.m128i_i64[1]);
  sub_1632D10(v23, v17.m128i_i64[0], v11, a6, 0);
  v23[2] = v17.m128i_i64[1];
  v23[0] = &off_1C544A8;
  sub_177BA80(v24);
  v12 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
  v13 = (unsigned __int64)v12 << 20;
  v14 = v12 == -1;
  v15 = -1;
  if ( !v14 )
    v15 = v13;
  v25 = v15;
  v26 = sub_1859610(a3, "factor", 1);
  sub_177BAB0(v24, a3);
  *a1 = &v17;
  sub_77F5C0(&v17, a2);
  *a1 = nullptr;
  v23[0] = &off_1C544A8;
  return sub_16329F0(v23);
}

