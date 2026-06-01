__int64 __fastcall sub_36AA40(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rbx
  unsigned int tinfo_size; // eax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  int v12; // edx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r15d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _DWORD *v21; // rdi
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // rax
  int *v30; // rsi
  __m128 v31; // xmm1
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rsi
  int *v35; // rax
  int *v36; // rsi
  unsigned __int8 v37; // [rsp+3h] [rbp-EDh]
  int v38; // [rsp+4h] [rbp-ECh]
  unsigned __int64 v39; // [rsp+8h] [rbp-E8h] BYREF
  signed __int64 v40; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v41; // [rsp+18h] [rbp-D8h] BYREF
  __m128i v42; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+40h] [rbp-B0h]
  int *v45; // [rsp+58h] [rbp-98h] BYREF
  __int128 v46; // [rsp+60h] [rbp-90h]
  int *v47; // [rsp+78h] [rbp-78h] BYREF
  __int128 v48; // [rsp+80h] [rbp-70h]
  __int64 *v49; // [rsp+98h] [rbp-58h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-40h]

  v5 = a1[35];
  v51 = __readfsqword(0x28u);
  v44 = 0;
  v43 = 0;
  tinfo_size = get_tinfo_size();
  v37 = sub_D2BA0(v5, (__int64)&v43, a2, tinfo_size, 0);
  if ( !v37 )
    goto LABEL_21;
  v45 = nullptr;
  v47 = nullptr;
  v49 = nullptr;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  if ( !(_QWORD)v44 )
    goto LABEL_56;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = a1[35];
    v11 = *(_DWORD **)(v10 + 88);
    v12 = *(_DWORD *)(v43 + 4 * v9);
    v13 = &v11[*(_QWORD *)(v10 + 96)];
    if ( v11 == v13 )
      goto LABEL_24;
    v14 = *(_DWORD **)(v10 + 88);
    while ( v12 != *v14 )
    {
      if ( v13 == ++v14 )
        goto LABEL_24;
    }
    if ( v14 == v13 || (v15 = v14 - v11, v16 = v15, (_DWORD)v15 == -1) )
    {
LABEL_24:
      v21 = *(_DWORD **)(v10 + 112);
      v22 = &v21[*(_QWORD *)(v10 + 120)];
      if ( v21 == v22 )
        goto LABEL_14;
      v23 = *(_DWORD **)(v10 + 112);
      while ( v12 != *v23 )
      {
        if ( v22 == ++v23 )
          goto LABEL_14;
      }
      if ( v22 == v23 || (v24 = v23 - v21, v17 = v24, (_DWORD)v24 == -1) )
      {
LABEL_14:
        v37 = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)v10 != 3 )
      {
LABEL_31:
        if ( v17 >= (unsigned __int64)a1[27] || *(_DWORD *)(a1[26] + 4LL * v17) != -1 )
          goto LABEL_14;
        v25 = v48;
        v26 = (__int64)v47;
        if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
        {
          v47 = (int *)qvector_reserve((__int64)&v47, (__int64)v47, v48 + 1, 4);
          v26 = (__int64)v47;
          v25 = v48;
        }
        *(_DWORD *)(v26 + 4 * v25) = v17;
        *(_QWORD *)&v48 = v48 + 1;
        goto LABEL_36;
      }
      v18 = a1[23];
      v19 = a1[24];
      v16 = v24;
    }
    else
    {
      v17 = v15;
      v18 = a1[23];
      v19 = a1[24];
      if ( *(_DWORD *)v10 != 3 )
        v17 = -1;
    }
    if ( v16 >= v19 || *(_DWORD *)(v18 + 4LL * v16) != -1 )
      goto LABEL_14;
    v33 = v46;
    v34 = (__int64)v45;
    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
    {
      v38 = v16;
      v45 = (int *)qvector_reserve((__int64)&v45, (__int64)v45, v46 + 1, 4);
      v34 = (__int64)v45;
      v16 = v38;
      v33 = v46;
    }
    *(_DWORD *)(v34 + 4 * v33) = v16;
    *(_QWORD *)&v46 = v46 + 1;
    if ( v17 != -1 )
      goto LABEL_31;
LABEL_36:
    if ( (unsigned __int8)sub_1C34E0((__int64)a2, (__int64 *)&v39, &v40, a2[22]) )
    {
      v31 = (__m128)(v40 - v39);
      v32 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v31);
      v41 = v32;
      v42 = v32;
      if ( (unsigned __int8)sub_317E70(a1 + 29, &v42, 0) )
        goto LABEL_14;
      sub_316BB0((__int64 *)&v49, &v41, *(double *)v32.m128i_i64, v31);
    }
    v9 = ++v8;
  }
  while ( v8 < (unsigned __int64)v44 );
  if ( !(_QWORD)v46 )
  {
    v28 = v48;
    if ( (_QWORD)v48 )
      goto LABEL_40;
LABEL_56:
    if ( !under_debugger )
      sub_383060(52117);
    BUG();
  }
  v35 = v45;
  v36 = &v45[v46];
  if ( v45 != v36 )
  {
    do
    {
      v27 = *v35++;
      *(_DWORD *)(a1[23] + 4 * v27) = a3;
    }
    while ( v36 != v35 );
  }
  v28 = v48;
LABEL_40:
  v29 = v47;
  v30 = &v47[v28];
  if ( v47 != v30 )
  {
    do
    {
      v27 = *v29;
      v28 = a1[26];
      ++v29;
      *(_DWORD *)(v28 + 4 * v27) = a3;
    }
    while ( v29 != v30 );
  }
  if ( (_QWORD)v50 )
    sub_316CB0(a1 + 29, &v49, v28, v27);
  if ( ((*a2 - 2) & 0xFFFFFFFD) == 0 )
    sub_64190(a1 + 19, a3);
LABEL_15:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree((__int64)v49);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree((__int64)v47);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree((__int64)v45);
  }
LABEL_21:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  return v37;
}
