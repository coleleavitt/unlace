unsigned __int64 __fastcall sub_1E3A940(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  char v28; // al
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // [rsp-10h] [rbp-58h]
  __int64 v42; // [rsp-8h] [rbp-50h]
  __int64 *v43; // [rsp+8h] [rbp-40h]

  v11 = *(_QWORD **)(*a1 + 248);
  v12 = 8LL * *(unsigned int *)(a2 + 64);
  v13 = v11[294];
  v11[304] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11[295] >= (unsigned __int64)(v12 + v14) && v13 )
    v11[294] = v12 + v14;
  else
    v14 = sub_986170((__int64)(v11 + 294), v12, v12, 3, a8, a9);
  v15 = *(__int64 **)(a2 + 56);
  v16 = *(unsigned int *)(a2 + 64);
  v43 = &v15[v16];
  if ( v43 == v15 )
  {
    v21 = -8;
LABEL_10:
    v22 = a1[3];
    v23 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v23 = 0;
    v24 = sub_B7A390(
            *(_QWORD *)(*a1 + 248),
            v22,
            *(_DWORD *)(a2 + 24),
            v23,
            *(_QWORD *)(*(_QWORD *)(v14 + v21) + 48LL),
            a9,
            v14,
            v16);
    v27 = v42;
    v19 = v24;
    v28 = *(_BYTE *)(a2 + 29);
    if ( (v28 & 1) != 0 )
    {
      v29 = sub_B8C3D0(a2, v22, v41, v42, v25, v26);
      v30 = *((unsigned int *)v29 + 2);
      v31 = *v29 + 8 * v30;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v32 = (__int64 *)*sub_B8C3D0(a2, v22, v30, v27, v25, v26);
      else
        v32 = nullptr;
      while ( (__int64 *)v31 != v32 )
      {
        v33 = *v32++;
        v34 = sub_B395B0(v33, *(_QWORD *)(*a1 + 248));
        sub_B8CC60(v19, v34, v35, v36, v37, v38);
      }
      v28 = *(_BYTE *)(a2 + 29);
    }
    v39 = v28 & 2 | *(_BYTE *)(v19 + 29) & 0xFD;
    *(_BYTE *)(v19 + 29) = v39;
    v40 = *(_BYTE *)(a2 + 29) & 0x60;
    *(_BYTE *)(v19 + 29) = v40 | v39 & 0x9F;
    sub_B94AD0((__m128i *)a1[3], v19, v40, v27, v25, v26);
  }
  else
  {
    v17 = 1;
    while ( 1 )
    {
      v19 = sub_1E38470(*a1, *(_DWORD *)(a2 + 24), *v15, a1[4], 0, a3, a4, a5);
      if ( !v19 )
        break;
      v18 = (int)v17;
      *(_QWORD *)(v14 + 8 * v17 - 8) = v19;
      ++v15;
      ++v17;
      if ( v43 == v15 )
      {
        v21 = 8 * v18 - 8;
        v16 = *(unsigned int *)(a2 + 64);
        goto LABEL_10;
      }
    }
  }
  return v19;
}
