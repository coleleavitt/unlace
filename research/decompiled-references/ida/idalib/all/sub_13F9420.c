void __fastcall sub_13F9420(__int64 a1, __int64 a2)
{
  const void *v2; // r14
  size_t v3; // r12
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 *v8; // rax
  const void *v9; // r12
  size_t v10; // rbx
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r8d
  _QWORD *v18; // rcx
  __m128i *v19; // r13
  __m128i si128; // xmm0
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 *v24; // rcx
  _QWORD *v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // [rsp+4h] [rbp-54h]
  unsigned int v28; // [rsp+4h] [rbp-54h]
  __int64 *v29; // [rsp+8h] [rbp-50h]
  __int64 *v30; // [rsp+8h] [rbp-50h]
  __int64 *v31[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( sub_13F8CB0(a1, *(_QWORD *)(a2 + 192), *(_QWORD *)(a2 + 200)) )
  {
    *(_BYTE *)(a2 + 1696) = 1;
    return;
  }
  v2 = *(const void **)(a2 + 192);
  v3 = *(_QWORD *)(a2 + 200);
  v4 = sub_2244B30(v2, v3);
  v5 = (unsigned int)sub_2244CB0(a1 + 344, v2, v3, v4);
  v7 = (__int64 *)(*(_QWORD *)(a1 + 344) + 8 * v5);
  if ( *v7 )
  {
    if ( *v7 != -8 )
    {
      sub_13F9290(v31, v7, 0);
      v8 = v31[0];
      goto LABEL_6;
    }
    --*(_DWORD *)(a1 + 360);
  }
  v29 = v7;
  v27 = v5;
  v16 = sub_22300B0(v3 + 33, 8, v5, v7, v5, v6);
  v17 = v27;
  v18 = v29;
  v19 = (__m128i *)v16;
  if ( v3 )
  {
    memcpy((void *)(v16 + 32), v2, v3);
    v18 = v29;
    v17 = v27;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v19[2].m128i_i8[v3] = 0;
  v19->m128i_i64[0] = v3;
  v19[1] = si128;
  v19->m128i_i64[1] = 0;
  *v18 = v19;
  ++*(_DWORD *)(a1 + 356);
  v21 = sub_22450D0(a1 + 344, v17);
  sub_13F9290(v31, (__int64 *)(*(_QWORD *)(a1 + 344) + 8LL * v21), 0);
  v8 = v31[0];
LABEL_6:
  v9 = *(const void **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *v8;
  v12 = sub_2244B30(*(_QWORD *)a2, v10);
  v13 = (unsigned int)sub_2244CB0(v11 + 8, v9, v10, v12);
  v15 = (__int64 *)(*(_QWORD *)(v11 + 8) + 8 * v13);
  if ( *v15 )
  {
    if ( *v15 != -8 )
    {
      sub_A45C10(v31, v15, 0);
      return;
    }
    --*(_DWORD *)(v11 + 24);
  }
  v30 = v15;
  v28 = v13;
  v22 = sub_22300B0(v10 + 9, 8, v13, v15, v13, v14);
  v23 = v28;
  v24 = v30;
  v25 = (_QWORD *)v22;
  if ( v10 )
  {
    memcpy((void *)(v22 + 8), v9, v10);
    v24 = v30;
    v23 = v28;
  }
  *((_BYTE *)v25 + v10 + 8) = 0;
  *v25 = v10;
  *v24 = (__int64)v25;
  ++*(_DWORD *)(v11 + 20);
  v26 = sub_22450D0(v11 + 8, v23);
  sub_A45C10(v31, (__int64 *)(*(_QWORD *)(v11 + 8) + 8LL * v26), 0);
}
