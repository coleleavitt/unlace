__int64 __fastcall sub_228020(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v5; // r14d
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  const __m128i *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r13
  const __m128i *v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r12
  int v21; // ecx
  __int64 v22; // rbx
  int v23; // r15d
  __int64 v24; // r13
  __m128i *v25; // rax
  int v26; // esi
  const __m128i *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  signed int i; // ebx
  const __m128i *v33; // rax
  int v34; // ecx
  unsigned int v35; // ecx
  char v36; // al
  __int64 v37; // rdi
  signed int j; // ebx
  const __m128i *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  char v42; // al
  __int64 v43; // [rsp+10h] [rbp-98h] BYREF
  __int64 v44; // [rsp+18h] [rbp-90h]
  const __m128i *v45; // [rsp+20h] [rbp-88h] BYREF
  __int128 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h]
  char v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 1 )
    return 1;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 == -1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(v3 + 320);
  if ( (_BYTE)v5 )
    return v5;
  if ( *(_QWORD *)(v3 + 144) > v2 || *(_BYTE *)(*(_QWORD *)(a1 + 48) + 148LL) != 2 )
    return 1;
  v7 = *(int *)(v3 + 64);
  v45 = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v46 = 0;
  if ( v7 )
  {
    v8 = qvector_reserve(&v45, 0, v7, 16);
    v9 = v45;
    v10 = v8;
    v11 = v8;
    v12 = *((_QWORD *)&v46 + 1);
    *((_QWORD *)&v46 + 1) = 0;
    v13 = v45;
    v14 = v46 - 1;
    if ( (__int64)v46 - 1 >= 0 )
    {
      do
      {
        v15 = _mm_loadu_si128(v13);
        v11 += 16;
        ++v13;
        *(__m128i *)(v11 - 16) = v15;
      }
      while ( v14-- != 0 );
      v9 = v45;
    }
    qfree(v9);
    v17 = v46;
    v45 = (const __m128i *)v10;
    *((_QWORD *)&v46 + 1) = v12;
    if ( (unsigned __int64)v46 < v7 )
    {
      *(_OWORD *)(v10 + 16 * v46) = 0;
      v18 = v17 + 1;
      if ( v17 + 1 < v7 )
      {
        do
        {
          v19 = v18++;
          v45[v19] = 0;
        }
        while ( v7 != v18 );
      }
    }
    *(_QWORD *)&v46 = v7;
  }
  v20 = *(_QWORD **)(a1 + 112);
  v21 = *(_DWORD *)(a1 + 200);
  while ( *(_QWORD **)(a1 + 120) != v20 )
  {
    if ( (v20[10] & 1) != 0 )
    {
      v22 = v20[11];
      v23 = v21 & 0x1000;
      v24 = v22 + 40LL * v20[12];
      if ( v22 != v24 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 4LL) != -1 || (v51 = 1, !v23) )
          {
            v26 = *(_DWORD *)(v22 + 32);
            if ( *(_BYTE *)(v22 + 36) )
            {
              sub_5FE10(&v49, v26);
              v25 = (__m128i *)&v45[*(int *)(v22 + 32)];
              if ( (unsigned __int64)(v25->m128i_i64[0] - 1) >= *(_QWORD *)v22 )
                v25->m128i_i64[0] = *(_QWORD *)v22;
            }
            else
            {
              sub_5FE10(&v47, v26);
              v27 = &v45[*(int *)(v22 + 32)];
              if ( (unsigned __int64)(v27->m128i_i64[1] - 1) >= *(_QWORD *)v22 )
                v27->m128i_i64[1] = *(_QWORD *)v22;
            }
          }
          v22 += 40;
        }
        while ( v24 != v22 );
        v21 = *(_DWORD *)(a1 + 200);
      }
    }
    if ( (*v20 & 2) == 0 )
    {
      v28 = (_QWORD *)v20[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v29 = (_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
        v30 = *v29;
        if ( (*v29 & 2) == 0 )
        {
          while ( (_QWORD *)v29[2] == v20 )
          {
            v20 = v29;
            v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
            v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 2) != 0 )
            {
              v20 = (_QWORD *)v31;
              goto LABEL_33;
            }
            v29 = (_QWORD *)v31;
          }
        }
        v20 = v29;
      }
      else
      {
        do
        {
          v20 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
      }
    }
LABEL_33:
    ;
  }
  if ( (v21 & 0x1000) != 0 )
    goto LABEL_35;
  if ( (unsigned __int8)sub_60500(&v47) )
  {
    if ( (*(_BYTE *)(a1 + 201) & 0x10) == 0 )
      goto LABEL_38;
LABEL_35:
    if ( (unsigned __int8)sub_60500(&v49) )
    {
      if ( v51 )
        v5 = sub_60500(&v47);
      goto LABEL_38;
    }
    if ( (unsigned __int8)sub_60500(&v47) )
      goto LABEL_67;
    for ( i = sub_605E0(&v49, 0); ; i = sub_605E0(&v49, i + 1) )
    {
      if ( i == (_DWORD)v50 )
        goto LABEL_38;
      v33 = &v45[i];
      if ( !v33->m128i_i64[0] )
        break;
      if ( v33->m128i_i64[0] >= (unsigned __int64)v33->m128i_i64[1] )
      {
        v34 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
        v43 = 0;
        v44 = 0;
        v35 = v34 - 1;
        if ( v35 == i )
        {
          qfree(0);
        }
        else
        {
          v36 = sub_227E00(a1, &v43, i, v35, &v47, 1);
          v37 = v43;
          if ( !v36 )
            goto LABEL_71;
          qfree(v43);
        }
      }
    }
    if ( !under_debugger )
      sub_37DDE0(52915);
LABEL_77:
    BUG();
  }
  if ( (unsigned __int8)sub_60500(&v49) )
    goto LABEL_67;
  for ( j = sub_605E0(&v47, 0); ; j = sub_605E0(&v47, j + 1) )
  {
    if ( j == (_DWORD)v48 )
      goto LABEL_38;
    v39 = &v45[j];
    v40 = v39->m128i_u64[1];
    if ( !v40 )
    {
      if ( !under_debugger )
        sub_37DDE0(52854);
      goto LABEL_77;
    }
    v41 = v39->m128i_i64[0];
    if ( !v41 || v41 >= v40 )
      break;
LABEL_69:
    ;
  }
  v43 = 0;
  v44 = 0;
  if ( !j )
  {
    qfree(0);
    goto LABEL_67;
  }
  v42 = sub_227E00(a1, &v43, 0, j, &v49, 0);
  v37 = v43;
  if ( !v42 )
  {
    qfree(v43);
    goto LABEL_69;
  }
LABEL_71:
  qfree(v37);
LABEL_67:
  v5 = 1;
LABEL_38:
  qfree(v49);
  qfree(v47);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v5;
}
