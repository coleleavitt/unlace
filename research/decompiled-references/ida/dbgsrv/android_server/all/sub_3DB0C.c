/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DB0C
// Address: 0x000000000003DB0C

//----- (000000000003DB0C) ----------------------------------------------------
_QWORD *__fastcall sub_3DB0C(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // x11
  __int64 v4; // x10
  __int64 v5; // x12
  _QWORD *v7; // x0
  __int64 v8; // x20
  __int64 v9; // x9
  unsigned __int64 v10; // x21
  __int64 v11; // x9
  __int64 *v12; // x8
  char v13; // w22
  __int64 v14; // x9
  __int64 v15; // x13
  __int64 v16; // x16
  unsigned __int64 v17; // x14
  unsigned __int64 v18; // x15
  __int64 *v19; // x0
  __int64 v20; // x14
  unsigned __int64 v21; // x15
  __int64 *v22; // x4
  __int64 v23; // x5
  signed __int64 v24; // x15
  __int64 v25; // x14
  unsigned __int64 v26; // x11
  _QWORD *v27; // x2
  __int64 v28; // x3
  int64x2_t v29; // q0
  unsigned __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x9
  __int64 v33; // x10
  __int64 v34; // x11
  __int64 v35; // x10
  _QWORD *result; // x0
  unsigned __int64 v37; // x1
  __int64 v38; // x8
  __int64 v39; // x9

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = (_QWORD *)(v4 + 8 * (v3 / 0x38));
  if ( v5 != v4 )
  {
    v8 = *v7 + 72 * (v3 % 0x38);
    if ( a3 != v8 )
      goto LABEL_3;
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v8 = 0;
  if ( !a3 )
    goto LABEL_7;
LABEL_3:
  v9 = v8 - *v7;
  v10 = 56 * (a2 - v7) - 0x71C71C71C71C71C7LL * ((a3 - *a2) >> 3) + v9 / -72;
  if ( !v10 )
  {
LABEL_8:
    v13 = 1;
    v14 = v8;
    v12 = (__int64 *)(v4 + 8 * (v3 / 0x38));
    goto LABEL_9;
  }
  v11 = v10 - 0x71C71C71C71C71C7LL * (v9 >> 3);
  if ( v11 < 1 )
  {
    v39 = 55 - v11;
    v12 = &v7[v39 / -56];
    v13 = 0;
    v14 = *v12 + 72 * (56 * (v39 / 56) - v39) + 3960;
  }
  else
  {
    v12 = &v7[v11 / 0x38uLL];
    v13 = 0;
    v14 = *v12 + 72 * (v11 % 0x38uLL);
  }
LABEL_9:
  v15 = *(_QWORD *)(a1 + 40);
  v16 = v14 - *v12;
  v17 = 0x8E38E38E38E38E39LL * (v16 >> 3);
  v18 = v17 + 1;
  if ( v10 <= (unsigned __int64)(v15 - 1) >> 1 )
  {
    if ( v16 < -71 )
    {
      v22 = &v12[(__int64)(54 - v17) / -56];
      v23 = *v22 + 72 * (56 * ((__int64)(54 - v17) / 56) - (54 - v17)) + 3960;
    }
    else
    {
      v22 = &v12[v18 / 0x38];
      v23 = *v22 + 72 * (v18 % 0x38);
    }
    sub_4A5E8(v7, v8, v12, v14, v22, v23);
    free_debug_event(v8);
    v29 = vaddq_s64(*(int64x2_t *)(a1 + 32), (int64x2_t)xmmword_F1800);
    v30 = v29.n128_u64[0];
    *(int64x2_t *)(a1 + 32) = v29;
    if ( v29.n128_u64[0] >= 0x70 )
    {
      operator delete(**(void ***)(a1 + 8));
      v30 = *(_QWORD *)(a1 + 32) - 56LL;
      *(_QWORD *)(a1 + 8) += 8LL;
      *(_QWORD *)(a1 + 32) = v30;
    }
  }
  else
  {
    if ( v16 < -71 )
    {
      v24 = 54 - v17;
      v25 = (unsigned __int128)((__int64)(54 - v17) * (__int128)(__int64)0xB6DB6DB6DB6DB6DBLL) >> 64;
      v19 = &v12[(v25 >> 4) + ((unsigned __int64)v25 >> 63)];
      v20 = *v19;
      v21 = 56 * (v24 / 56) - v24 + 55;
    }
    else
    {
      v19 = &v12[v18 / 0x38];
      v20 = *v19;
      v21 = v18 % 0x38;
    }
    v26 = v15 + v3;
    v27 = (_QWORD *)(v4 + 8 * (v26 / 0x38));
    if ( v5 == v4 )
      v28 = 0;
    else
      v28 = *v27 + 72 * (v26 % 0x38);
    sub_4A7BC(v19, v20 + 72 * v21, v27, v28, v12, v14);
    free_debug_event(v31);
    v32 = *(_QWORD *)(a1 + 16);
    v30 = *(_QWORD *)(a1 + 32);
    v33 = *(_QWORD *)(a1 + 40) - 1LL;
    v34 = 56 * ((v32 - *(_QWORD *)(a1 + 8)) >> 3) - 1;
    if ( v32 == *(_QWORD *)(a1 + 8) )
      v34 = 0;
    *(_QWORD *)(a1 + 40) = v33;
    if ( v34 - (v33 + v30) >= 0x70 )
    {
      operator delete(*(void **)(v32 - 8));
      v30 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 16) -= 8LL;
    }
  }
  v35 = *(_QWORD *)(a1 + 8);
  result = (_QWORD *)(v35 + 8 * (v30 / 0x38));
  if ( *(_QWORD *)(a1 + 16) == v35 )
  {
    v37 = 0;
    if ( (v13 & 1) != 0 )
      return result;
  }
  else
  {
    v37 = *result + 72 * (v30 % 0x38);
    if ( (v13 & 1) != 0 )
      return result;
  }
  v38 = v10 - 0x71C71C71C71C71C7LL * ((__int64)(v37 - *result) >> 3);
  if ( v38 < 1 )
    result += (55 - v38) / -56;
  else
    result += v38 / 0x38uLL;
  return result;
}
// 3DE3C: variable 'v31' is possibly undefined
// F1800: using guessed type __int128 xmmword_F1800;
