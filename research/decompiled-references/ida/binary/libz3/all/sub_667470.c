__m128 *__fastcall sub_667470(__m128 *a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rax
  _QWORD *v7; // r8
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned int v10; // eax
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  char *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  __int64 v21; // rax
  __m128 v22; // xmm0
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __m128 *result; // rax
  unsigned int v28; // r15d
  size_t v29; // rbx
  _OWORD *v30; // rdx
  _OWORD *v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // r10
  unsigned int v34; // esi
  unsigned int v35; // edx
  __int64 *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r9
  __int64 *v39; // rdi
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 *v42; // rdx
  unsigned int v43; // r11d
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 *v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  size_t v49; // rsi
  __m128 v51[4]; // [rsp+10h] [rbp-40h] BYREF

  v5 = a2[2];
  if ( !v5 || !*(_DWORD *)(v5 - 4) )
  {
    result = a1;
    *a1 = _mm_loadh_ps((const double *)a2);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    return result;
  }
  sub_665810(v51, a2, a3, (__int64)(a2 + 3), 0);
  v7 = (_QWORD *)a2[12];
  v9 = v51[0].m128_u64[1];
  v8 = v51[0].m128_u64[0];
  if ( v7 )
  {
    v10 = *((_DWORD *)v7 - 1);
    if ( v10 )
    {
      v33 = a2[11];
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 - 4);
        if ( v34 >> 1 )
        {
          v35 = v34 - 1;
          v36 = (__int64 *)a2[11];
          do
          {
            v37 = v35;
            v38 = *v36;
            --v35;
            ++v36;
            v39 = (__int64 *)(v33 + 8 * v37);
            *(v36 - 1) = *v39;
            *v39 = v38;
          }
          while ( v34 - 1 - (v34 >> 1) != v35 );
        }
      }
      else
      {
        v34 = 0;
      }
      v40 = v10;
      v41 = v10 - 1;
      v42 = v7;
      v40 >>= 1;
      v43 = v41 - v40;
      if ( v40 )
      {
        do
        {
          v44 = v41;
          v45 = *v42;
          --v41;
          ++v42;
          v46 = &v7[v44];
          *(v42 - 1) = *v46;
          *v46 = v45;
        }
        while ( v43 != v41 );
      }
      v47 = sub_15DB6A0(*a2, a4 ^ 1u, v34, v33, v7, v8, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      v48 = v47;
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      if ( v8 )
      {
        v15 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v9, v8);
      }
      v8 = v48;
    }
  }
  v11 = (_QWORD *)a2[10];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a2[9];
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_12;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_12:
    v11 = (_QWORD *)a2[10];
    if ( v11 )
LABEL_13:
      *((_DWORD *)v11 - 1) = 0;
  }
  if ( *((_DWORD *)a2 + 9) || *((_DWORD *)a2 + 10) )
  {
    v16 = (char *)a2[3];
    v17 = 0;
    v18 = *((unsigned int *)a2 + 8);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_20;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_20:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_21;
    if ( v16 )
    {
      sub_186B220(v16);
      a2[3] = 0;
      v28 = *((_DWORD *)a2 + 8) >> 1;
      *((_DWORD *)a2 + 8) = v28;
      v29 = v28;
      v30 = (_OWORD *)sub_186B270(v29 * 16);
      if ( !v28 )
      {
LABEL_46:
        a2[3] = v30;
LABEL_21:
        *(_QWORD *)((char *)a2 + 36) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      a2[3] = 0;
      v49 = (unsigned int)v18 >> 1;
      *((_DWORD *)a2 + 8) = v49;
      v29 = v49;
      v30 = (_OWORD *)sub_186B270(16 * v49);
    }
    v31 = &v30[v29];
    v32 = v30;
    if ( ((v29 * 16) & 0x10) == 0 || (v32 = v30 + 1, *v30 = 0, v31 != v30 + 1) )
    {
      do
      {
        *v32 = 0;
        v32 += 2;
        *(v32 - 1) = 0;
      }
      while ( v31 != v32 );
    }
    goto LABEL_46;
  }
LABEL_22:
  v21 = a2[12];
  v22 = (__m128)_mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v23 = a2[11];
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  v24 = (_QWORD *)a2[6];
  v25 = &v24[2 * *((unsigned int *)a2 + 14)];
  if ( v24 != v25 )
  {
    while ( *v24 <= 1u )
    {
      v24 += 2;
      if ( v25 == v24 )
        goto LABEL_34;
    }
    while ( v25 != v24 )
    {
      v26 = v24 + 2;
      v24[1] = 0;
      if ( v25 == v24 + 2 )
        break;
      while ( 1 )
      {
        v24 = v26;
        if ( *v26 > 1u )
          break;
        v26 += 2;
        if ( v25 == v26 )
          goto LABEL_34;
      }
    }
  }
LABEL_34:
  result = a1;
  *a1 = v22;
  return result;
}

