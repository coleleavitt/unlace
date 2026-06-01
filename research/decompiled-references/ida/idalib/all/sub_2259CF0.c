__int64 __fastcall sub_2259CF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  _BYTE *v3; // rax
  __m128i *v4; // rax
  __int64 v5; // rax
  __m128i si128; // xmm0
  _BYTE *v8; // rsi
  __m128i *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  __m128i v11[2]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a2[14];
  if ( v2 )
  {
    v8 = (_BYTE *)a2[13];
    v9 = v11;
    sub_2259C30(&v9, v8, (__int64)&v8[v2]);
    v4 = v9;
    v2 = v10;
  }
  else
  {
    v3 = (_BYTE *)a2[2];
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 32) &= ~1u;
      v11[0].m128i_i8[0] = 0;
      *(_QWORD *)a1 = a1 + 16;
      goto LABEL_7;
    }
    v9 = v11;
    sub_2259A00(&v9, v3, (__int64)&v3[a2[3]]);
    v4 = v9;
    v2 = v10;
  }
  *(_BYTE *)(a1 + 32) &= ~1u;
  *(_QWORD *)a1 = a1 + 16;
  if ( v4 != v11 )
  {
    *(_QWORD *)a1 = v4;
    v5 = v11[0].m128i_i64[0];
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = v5;
    return a1;
  }
LABEL_7:
  si128 = _mm_load_si128(v11);
  *(_QWORD *)(a1 + 8) = v2;
  *(__m128i *)(a1 + 16) = si128;
  return a1;
}
