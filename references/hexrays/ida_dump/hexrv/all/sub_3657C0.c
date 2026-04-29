__int64 __fastcall sub_3657C0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned int tinfo_size; // eax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  int v13; // edx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _DWORD *v22; // rdi
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  int *v29; // rax
  int *v30; // rsi
  __int64 v31; // rcx
  __m128 v32; // xmm1
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rsi
  int *v36; // rax
  int *v37; // rsi
  __int64 v38; // rcx
  unsigned __int8 v39; // [rsp+3h] [rbp-EDh]
  int v40; // [rsp+4h] [rbp-ECh]
  unsigned __int64 v41; // [rsp+8h] [rbp-E8h] BYREF
  signed __int64 v42; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v43; // [rsp+18h] [rbp-D8h] BYREF
  __m128i v44; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-98h] BYREF
  __int128 v48; // [rsp+60h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-78h] BYREF
  __int128 v50; // [rsp+80h] [rbp-70h]
  __int64 *v51; // [rsp+98h] [rbp-58h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 80);
  v6 = a1[35];
  v53 = __readfsqword(0x28u);
  v46 = 0;
  v45 = 0;
  tinfo_size = get_tinfo_size(0, v5, 0);
  v39 = sub_CE6E0(v6, &v45, (__int64 *)a2, tinfo_size, 0);
  if ( !v39 )
    goto LABEL_21;
  v47 = 0;
  v49 = 0;
  v51 = nullptr;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  if ( !(_QWORD)v46 )
    goto LABEL_56;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = a1[35];
    v12 = *(_DWORD **)(v11 + 88);
    v13 = *(_DWORD *)(v45 + 4 * v10);
    v14 = &v12[*(_QWORD *)(v11 + 96)];
    if ( v12 == v14 )
      goto LABEL_24;
    v15 = *(_DWORD **)(v11 + 88);
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_24;
    }
    if ( v15 == v14 || (v16 = v15 - v12, v17 = v16, (_DWORD)v16 == -1) )
    {
LABEL_24:
      v22 = *(_DWORD **)(v11 + 112);
      v23 = &v22[*(_QWORD *)(v11 + 120)];
      if ( v22 == v23 )
        goto LABEL_14;
      v24 = *(_DWORD **)(v11 + 112);
      while ( v13 != *v24 )
      {
        if ( v23 == ++v24 )
          goto LABEL_14;
      }
      if ( v23 == v24 || (v25 = v24 - v22, v18 = v25, (_DWORD)v25 == -1) )
      {
LABEL_14:
        v39 = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)v11 != 3 )
      {
LABEL_31:
        if ( v18 >= (unsigned __int64)a1[27] || *(_DWORD *)(a1[26] + 4LL * v18) != -1 )
          goto LABEL_14;
        v26 = v50;
        v27 = v49;
        if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
        {
          v49 = qvector_reserve(&v49, v49, v50 + 1, 4);
          v27 = v49;
          v26 = v50;
        }
        *(_DWORD *)(v27 + 4 * v26) = v18;
        *(_QWORD *)&v50 = v50 + 1;
        goto LABEL_36;
      }
      v19 = a1[23];
      v20 = a1[24];
      v17 = v25;
    }
    else
    {
      v18 = v16;
      v19 = a1[23];
      v20 = a1[24];
      if ( *(_DWORD *)v11 != 3 )
        v18 = -1;
    }
    if ( v17 >= v20 || *(_DWORD *)(v19 + 4LL * v17) != -1 )
      goto LABEL_14;
    v34 = v48;
    v35 = v47;
    if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
    {
      v40 = v17;
      v47 = qvector_reserve(&v47, v47, v48 + 1, 4);
      v35 = v47;
      v17 = v40;
      v34 = v48;
    }
    *(_DWORD *)(v35 + 4 * v34) = v17;
    *(_QWORD *)&v48 = v48 + 1;
    if ( v18 != -1 )
      goto LABEL_31;
LABEL_36:
    if ( (unsigned __int8)sub_1BEE60(a2, (__int64 *)&v41, &v42, *(_DWORD *)(a2 + 88)) )
    {
      v32 = (__m128)(v42 - v41);
      v33 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v32);
      v43 = v33;
      v44 = v33;
      if ( (unsigned __int8)sub_312D70(a1 + 29, &v44, 0) )
        goto LABEL_14;
      sub_311AB0((__int64 *)&v51, &v43, *(double *)v33.m128i_i64, v32);
    }
    v10 = ++v9;
  }
  while ( v9 < (unsigned __int64)v46 );
  if ( !(_QWORD)v48 )
  {
    v28 = v50;
    if ( (_QWORD)v50 )
      goto LABEL_40;
LABEL_56:
    if ( !under_debugger )
      sub_37DDE0(52117);
    BUG();
  }
  v36 = (int *)v47;
  v37 = (int *)(v47 + 4 * v48);
  if ( (int *)v47 != v37 )
  {
    do
    {
      v38 = *v36++;
      *(_DWORD *)(a1[23] + 4 * v38) = a3;
    }
    while ( v37 != v36 );
  }
  v28 = v50;
LABEL_40:
  v29 = (int *)v49;
  v30 = (int *)(v49 + 4 * v28);
  if ( (int *)v49 != v30 )
  {
    do
    {
      v31 = *v29++;
      *(_DWORD *)(a1[26] + 4 * v31) = a3;
    }
    while ( v29 != v30 );
  }
  if ( (_QWORD)v52 )
    sub_311BB0(a1 + 29, &v51);
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
    sub_5FE10(a1 + 19, a3);
LABEL_15:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
LABEL_21:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v39;
}
