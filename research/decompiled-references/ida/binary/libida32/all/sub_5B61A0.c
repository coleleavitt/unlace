bool __fastcall sub_5B61A0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  __int64 v7; // r14
  __int64 *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 1480);
  v5 = *(_QWORD *)(a2 + 1424);
  v21 = __readfsqword(0x28u);
  v7 = a3[1];
  v18 = 0;
  sub_6141A0(*v4, 26, &v18, 8);
  if ( !(unsigned __int8)sub_419E50(a2, *(_DWORD *)(v5 + 8), (unsigned int *)&v18) )
  {
    v10 = a3[1];
    v11 = *a3;
    if ( a3[2] < (unsigned __int64)(v10 + 1) )
    {
      v16 = qvector_reserve(a3, v11, v10 + 1, 24);
      v10 = a3[1];
      *a3 = v16;
      v11 = v16;
    }
    v12 = v11 + 24 * v10;
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v12);
  }
  if ( !(unsigned __int8)sub_419E50(a2, *(_DWORD *)(v5 + 12), (unsigned int *)&v18) )
  {
    v13 = a3[1];
    v14 = *a3;
    if ( a3[2] < (unsigned __int64)(v13 + 1) )
    {
      v17 = qvector_reserve(a3, v14, v13 + 1, 24);
      v13 = a3[1];
      *a3 = v17;
      v14 = v17;
    }
    v15 = v14 + 24 * v13;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v15);
  }
  v19[0] = &v18;
  v8 = *(__int64 **)(a2 + 1480);
  v19[1] = a3;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B05C40), (__m128i)(unsigned __int64)sub_5B64E0);
  sub_5AF890(v8, (__int64)v19);
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v20.m128i_i64[0])(v19, v19, 3);
  return a3[1] == v7;
}

