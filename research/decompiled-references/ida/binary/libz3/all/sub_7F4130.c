__int64 __fastcall sub_7F4130(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int *v7; // r8
  int v8; // edx
  unsigned int v9; // esi
  _DWORD *v10; // r9
  _DWORD *v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // r10d
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 i; // rax
  int v27; // edx
  __int64 v28; // rdx
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rsi
  __int64 v36; // rsi
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // r12
  __m128i *v41; // rax
  __m128i *v42; // r13
  __m128i *v43; // rdx
  __m128i *v44; // rax
  __int64 v45; // rax
  __m128i *v46; // rdi
  unsigned int v47; // ecx
  const __m128i *v48; // r15
  __int64 v49; // r12
  const __m128i *v50; // r14
  __int64 v51; // rax
  __m128i *v52; // rdx
  __m128i *v53; // rax
  __m128i *v54; // [rsp+0h] [rbp-48h]

  v4 = *(_QWORD **)(a1 + 40);
  if ( v4 == (_QWORD *)*v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
  }
  else
  {
    if ( v4 == a2 )
      *(_QWORD *)(a1 + 40) = *a2;
    v5 = *a2;
    v6 = (_QWORD *)a2[1];
    *v6 = *a2;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = (int *)a2[4];
  if ( v7 )
  {
    v8 = *v7;
    v9 = (unsigned int)*v7 >> 13;
  }
  else
  {
    v9 = 0;
    v8 = 0;
  }
  v10 = (_DWORD *)a2[3];
  v11 = (_DWORD *)a2[2];
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v9 ^ (*v11 - *v10 - v8);
  v14 = (*v10 - v8 - v13) ^ (v13 << 8);
  v15 = (v8 - v13 - v14) ^ (v14 >> 13);
  v16 = (v13 - v14 - v15) ^ (v15 >> 12);
  v17 = (v14 - v15 - v16) ^ (v16 << 16);
  v18 = (v15 - v16 - v17) ^ (v17 >> 5);
  v19 = v16 - v17 - v18;
  v20 = (v18 - (v19 ^ (v18 >> 3)) - ((v17 - v18 - (v19 ^ (v18 >> 3))) ^ ((v19 ^ (v18 >> 3)) << 10)))
      ^ (((v17 - v18 - (v19 ^ (v18 >> 3))) ^ ((v19 ^ (v18 >> 3)) << 10)) >> 15);
  v21 = *(unsigned int *)(a1 + 24);
  v22 = v21 - 1;
  v21 *= 16;
  v23 = v12 + v21;
  v24 = 16LL * (v20 & v22);
  v25 = v12 + v24;
  if ( v24 == v21 )
  {
LABEL_18:
    if ( v12 != v25 )
    {
      for ( i = *(_QWORD *)(a1 + 16); v25 != i; i += 16 )
      {
        v29 = *(_DWORD *)(i + 4);
        if ( v29 == 2 )
        {
          if ( *(_DWORD *)i == v20 )
          {
            v30 = *(_QWORD *)(i + 8);
            if ( *(_BYTE *)(v30 + 44) == *((_BYTE *)a2 + 44)
              && *(_DWORD **)(v30 + 16) == v11
              && *(_DWORD **)(v30 + 24) == v10
              && *(int **)(v30 + 32) == v7 )
            {
              goto LABEL_28;
            }
          }
        }
        else if ( !v29 )
        {
          break;
        }
      }
    }
LABEL_32:
    v33 = *(_QWORD *)(a1 + 8);
    goto LABEL_33;
  }
  i = v12 + v24;
  while ( 1 )
  {
    v27 = *(_DWORD *)(i + 4);
    if ( v27 != 2 )
    {
      if ( !v27 )
        goto LABEL_32;
      goto LABEL_10;
    }
    if ( *(_DWORD *)i == v20 )
    {
      v28 = *(_QWORD *)(i + 8);
      if ( *(_BYTE *)(v28 + 44) == *((_BYTE *)a2 + 44)
        && *(_DWORD **)(v28 + 16) == v11
        && *(_DWORD **)(v28 + 24) == v10
        && *(int **)(v28 + 32) == v7 )
      {
        break;
      }
    }
LABEL_10:
    i += 16;
    if ( v23 == i )
      goto LABEL_18;
  }
LABEL_28:
  v31 = i + 16;
  if ( v23 == i + 16 )
    v31 = *(_QWORD *)(a1 + 16);
  v32 = *(_DWORD *)(a1 + 28) - 1;
  if ( !*(_DWORD *)(v31 + 4) )
  {
    *(_DWORD *)(i + 4) = 0;
    *(_DWORD *)(a1 + 28) = v32;
    goto LABEL_32;
  }
  *(_DWORD *)(i + 4) = 1;
  v38 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 28) = v32;
  v39 = v38 + 1;
  if ( v32 < 0x40 )
    v32 = 64;
  *(_DWORD *)(a1 + 32) = v39;
  if ( v32 >= v39 )
    goto LABEL_32;
  if ( !(unsigned __int8)sub_186AF10(v11) )
  {
    v40 = *(unsigned int *)(a1 + 24);
    v41 = (__m128i *)sub_186B270(16 * v40);
    v42 = v41;
    if ( (_DWORD)v40 )
    {
      if ( (_DWORD)v40 == 1 )
        goto LABEL_54;
      v43 = v41;
      v44 = &v41[2 * ((unsigned int)v40 >> 1)];
      do
      {
        v43->m128i_i64[0] = 0;
        v43 += 2;
        v43[-1].m128i_i64[0] = 0;
      }
      while ( v44 != v43 );
      if ( (v40 & 1) != 0 )
      {
        v41 = &v42[(unsigned int)v40 & 0xFFFFFFFE];
LABEL_54:
        v41->m128i_i64[0] = 0;
      }
    }
    v45 = *(unsigned int *)(a1 + 24);
    v46 = *(__m128i **)(a1 + 16);
    v47 = v45 - 1;
    v48 = v46;
    v49 = 16 * v45;
    v50 = &v46[v45];
    v54 = &v42[v45];
    if ( v46 != v50 )
    {
      do
      {
        if ( v48->m128i_i32[1] == 2 )
        {
          v51 = 16LL * (v48->m128i_i32[0] & v47);
          v52 = &v42[(unsigned __int64)v51 / 0x10];
          if ( v49 == v51 )
          {
LABEL_70:
            if ( v42 == v52 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v53 = v42;
            while ( v53->m128i_i32[1] )
            {
              if ( v52 == ++v53 )
                goto LABEL_75;
            }
          }
          else
          {
            v53 = &v42[(unsigned __int64)v51 / 0x10];
            while ( v53->m128i_i32[1] )
            {
              if ( v54 == ++v53 )
                goto LABEL_70;
            }
          }
          *v53 = _mm_loadu_si128(v48);
        }
        ++v48;
      }
      while ( v50 != v48 );
      v46 = *(__m128i **)(a1 + 16);
    }
    if ( v46 )
      sub_186B220(v46);
    *(_QWORD *)(a1 + 16) = v42;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v11 = (_DWORD *)a2[2];
  v33 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
LABEL_33:
    v34 = v11[2]-- == 1;
    if ( v34 )
    {
      sub_15D7BC0(v33, v11);
      v33 = *(_QWORD *)(a1 + 8);
    }
  }
  v35 = a2[3];
  if ( v35 )
  {
    v34 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v34 )
    {
      sub_15D7BC0(v33, v35);
      v33 = *(_QWORD *)(a1 + 8);
    }
  }
  v36 = a2[4];
  if ( v36 )
  {
    v34 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v33, v36);
  }
  return sub_186B220(a2);
}

