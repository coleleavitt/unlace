void __fastcall sub_A0C250(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _BYTE *v5; // rsi
  int v6; // eax
  _BYTE *v7; // rsi
  __int64 v8; // r13
  __m128i *v9; // rsi
  __int64 v10; // rdx
  bool v11; // zf
  _QWORD *v12; // rdi
  unsigned __int16 *v13; // rsi
  __int64 v14; // r13
  __m128i *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  void *v18; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+8h] [rbp-80h]
  __m128i v20; // [rsp+10h] [rbp-78h] BYREF
  void *v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  char v24; // [rsp+40h] [rbp-48h]

  sub_A0AC30(a1, a2);
  v4 = *(unsigned __int16 *)*a1;
  v5 = (_BYTE *)(*a1 + 2LL);
  *a1 = v5;
  if ( !v4 )
  {
    v6 = *(unsigned __int16 *)v5;
    v7 = v5 + 2;
    *a1 = v7;
    if ( !v6 )
      return;
    goto LABEL_14;
  }
  v8 = (unsigned int)(v4 - 1);
  v18 = &v20;
  sub_A09A40(&v18, v5, (__int64)&v5[v8]);
  v9 = (__m128i *)v18;
  v21 = &v23;
  if ( v18 == &v20 )
  {
    v9 = &v23;
    v23 = _mm_load_si128(&v20);
  }
  else
  {
    v21 = v18;
    v23.m128i_i64[0] = v20.m128i_i64[0];
  }
  v10 = v19;
  v11 = *(_BYTE *)(a2 + 104) == 0;
  v19 = 0;
  v18 = &v20;
  v12 = (_QWORD *)(a2 + 72);
  v22 = v10;
  v20.m128i_i8[0] = 0;
  v24 = 1;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 72) = a2 + 88;
    sub_A09AE0(v12, v9, (__int64)v9->m128i_i64 + v10);
    *(_BYTE *)(a2 + 104) = 1;
  }
  else
  {
    sub_9EE8A0((__int64)v12, (__int64)&v21);
  }
  if ( v24 && v21 != &v23 )
    operator delete(v21);
  if ( v18 != &v20 )
    operator delete(v18);
  v13 = (unsigned __int16 *)(v8 + *a1);
  *a1 = v13;
  v6 = *v13;
  v7 = v13 + 1;
  *a1 = v7;
  if ( v6 )
  {
LABEL_14:
    v14 = (unsigned int)(v6 - 1);
    v18 = &v20;
    sub_A09A40(&v18, v7, (__int64)&v7[v14]);
    v15 = (__m128i *)v18;
    v21 = &v23;
    if ( v18 == &v20 )
    {
      v15 = &v23;
      v23 = _mm_load_si128(&v20);
    }
    else
    {
      v21 = v18;
      v23.m128i_i64[0] = v20.m128i_i64[0];
    }
    v16 = v19;
    v20.m128i_i8[0] = 0;
    v17 = (_QWORD *)(a2 + 112);
    v11 = *(_BYTE *)(a2 + 144) == 0;
    v18 = &v20;
    v22 = v19;
    v19 = 0;
    v24 = 1;
    if ( v11 )
    {
      *(_QWORD *)(a2 + 112) = a2 + 128;
      sub_A09AE0(v17, v15, (__int64)v15->m128i_i64 + v16);
      *(_BYTE *)(a2 + 144) = 1;
    }
    else
    {
      sub_9EE8A0((__int64)v17, (__int64)&v21);
    }
    if ( v24 && v21 != &v23 )
      operator delete(v21);
    if ( v18 != &v20 )
      operator delete(v18);
    *a1 += v14;
  }
}
