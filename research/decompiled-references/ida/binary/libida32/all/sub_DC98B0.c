__int64 __fastcall sub_DC98B0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r13d
  __m128i v11; // rax
  void *v12; // rsi
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-78h] BYREF
  void *v15; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-60h]
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]
  __int64 v20; // [rsp+48h] [rbp-30h]

  v4 = a1[22];
  sub_DFDA20(v4, 48);
  sub_DFF520(v17);
  sub_DFDA50(v4, 48);
  v9 = sub_DA9500((__int64)a1, a2, (__int64)v17, a3);
  if ( !(_BYTE)v9 )
    goto LABEL_2;
  v11.m128i_i64[0] = sub_D21170(a1, a3, v5, v6, v7, v8);
  v14 = v11;
  if ( v18 == 1 )
  {
    v13 = sub_CDA650((__int64)v17);
    v16 = a3;
    v12 = (void *)(v20 + v17[0] * v13);
    if ( a3 <= 0x40 )
      goto LABEL_5;
  }
  else
  {
    v12 = (void *)(v19 + v17[0]);
    v16 = a3;
    if ( a3 <= 0x40 )
    {
LABEL_5:
      v15 = v12;
      goto LABEL_6;
    }
  }
  sub_21E1730(&v15, v12, 0);
LABEL_6:
  sub_CE8850((void **)&v14, (__int64)&v15);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v14);
LABEL_2:
  sub_DFF560(v17);
  return v9;
}

