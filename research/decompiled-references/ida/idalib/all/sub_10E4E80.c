__int64 __fastcall sub_10E4E80(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int8 *v15; // rsi
  __m128i *v16; // rax
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  int v21; // [rsp+8h] [rbp-A0h]
  void *v22; // [rsp+10h] [rbp-98h] BYREF
  size_t v23; // [rsp+18h] [rbp-90h]
  _BYTE v24[16]; // [rsp+20h] [rbp-88h] BYREF
  void *v25[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-68h] BYREF
  void *v27; // [rsp+50h] [rbp-58h] BYREF
  __int64 v28; // [rsp+58h] [rbp-50h]
  __m128i v29; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_BYTE **)a3;
  v8 = *(_QWORD *)a3 + *(_QWORD *)(a3 + 8);
  v27 = &v29;
  sub_10D8CD0(&v27, v7, v8);
  sub_9EE560(&v27, *a4, (size_t)a4[1]);
  v9 = sub_2214730(a1, v27, v28, a2);
  if ( v27 != &v29 )
    operator delete(v27);
  if ( !(_BYTE)v9 )
  {
    v11 = sub_22B7B00(a3);
    if ( v11 < 0 )
    {
      v21 = v11;
      v12 = (_BYTE *)sub_22B6740(*(unsigned int *)(a3 + 44));
      LODWORD(v14) = v21;
      if ( v12 )
      {
        v22 = v24;
        sub_10D8DB0(&v22, v12, (__int64)&v12[v13]);
        LODWORD(v14) = v21;
      }
      else
      {
        v24[0] = 0;
        v23 = 0;
        v22 = v24;
      }
      if ( !(_DWORD)v14 )
        goto LABEL_21;
      v14 = (unsigned int)v14;
      v15 = &v29.m128i_i8[5];
      while ( 1 )
      {
        *--v15 = v14 % 0xA + 48;
        if ( v14 <= 9 )
          break;
        v14 /= 0xAu;
      }
      v25[0] = v26;
      sub_10D8CD0(v25, v15, (__int64)v29.m128i_i64 + 5);
      v16 = (__m128i *)sub_99BDC0(v25, 0, 0, v22, v23);
      v27 = &v29;
      if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
      {
        v29 = _mm_loadu_si128(v16 + 1);
      }
      else
      {
        v27 = (void *)v16->m128i_i64[0];
        v29.m128i_i64[0] = v16[1].m128i_i64[0];
      }
      v28 = v16->m128i_i64[1];
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v16->m128i_i64[1] = 0;
      v16[1].m128i_i8[0] = 0;
      sub_22BA720(a3, v27, v28);
      if ( v27 != &v29 )
        operator delete(v27);
      if ( v25[0] != v26 )
        operator delete(v25[0]);
      v17 = *(_BYTE **)a3;
      v18 = *(_QWORD *)(a3 + 8);
      v27 = &v29;
      sub_10D8CD0(&v27, v17, (__int64)&v17[v18]);
      sub_9EE560(&v27, *a4, (size_t)a4[1]);
      v9 = sub_2214730(a1, v27, v28, a2);
      if ( v27 != &v29 )
        operator delete(v27);
      if ( !(_BYTE)v9 )
      {
LABEL_21:
        sub_22BA720(a3, v22, v23);
        v19 = *(_BYTE **)a3;
        v20 = *(_QWORD *)a3 + *(_QWORD *)(a3 + 8);
        v27 = &v29;
        sub_10D8CD0(&v27, v19, v20);
        sub_9EE560(&v27, *a4, (size_t)a4[1]);
        v9 = sub_2214730(a1, v27, v28, a2);
        if ( v27 != &v29 )
          operator delete(v27);
      }
      if ( v22 != v24 )
        operator delete(v22);
    }
  }
  return v9;
}
