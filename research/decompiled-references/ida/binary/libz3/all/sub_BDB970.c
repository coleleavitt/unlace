__int64 __fastcall sub_BDB970(__int64 *a1, unsigned int *a2, int a3, unsigned int **a4, unsigned int **a5)
{
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // edx
  unsigned int **v12; // rsi
  __int64 v13; // rdx
  unsigned int **i; // rax
  unsigned int *v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // r14d
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned int v22; // edi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  unsigned int *v32; // rax
  unsigned int *v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  __m128i *v36; // rax
  __m128i *v37; // rdx
  __int64 *v38; // rdx
  const __m128i *v39; // r15
  __m128i *v40; // r8
  __int64 v41; // rdx
  __m128i *v42; // rsi
  __m128i *v43; // rdx
  __int64 *v44; // rax
  size_t v45; // [rsp+8h] [rbp-60h]
  int v46; // [rsp+10h] [rbp-58h]
  unsigned int v47; // [rsp+20h] [rbp-48h]

  if ( a2[2] > 1 )
  {
    v8 = (__int64)a1 + (-a3 & 0x18) + 16;
    v9 = a2[3];
    a4 = *(unsigned int ***)v8;
    v10 = *(unsigned int *)(v8 + 8);
    v11 = v10 - 1;
    v10 *= 16;
    v12 = (unsigned int **)((char *)a4 + v10);
    v13 = 16LL * (v9 & v11);
    a5 = &a4[(unsigned __int64)v13 / 8];
    if ( v13 != v10 )
    {
      for ( i = &a4[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
      {
        v15 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( v15[3] == v9 && a2 == v15 )
            return *((unsigned __int8 *)i + 8);
        }
        else if ( !v15 )
        {
          goto LABEL_9;
        }
      }
    }
    for ( ; a5 != a4; a4 += 2 )
    {
      v32 = *a4;
      if ( (unsigned __int64)*a4 > 1 )
      {
        if ( v32[3] == v9 && a2 == v32 )
        {
          i = a4;
          return *((unsigned __int8 *)i + 8);
        }
      }
      else if ( !v32 )
      {
        break;
      }
    }
  }
LABEL_9:
  v16 = (unsigned __int8)a3;
  LOBYTE(v17) = sub_BDB460(a1, a2, (unsigned __int8)a3, (unsigned __int64)a4, a5, a3);
  v18 = v17;
  if ( a2[2] <= 1 )
    return v18;
  v19 = &a1[3 * v16];
  v20 = *((unsigned int *)v19 + 6);
  if ( 3 * (int)v20 < (unsigned int)(4 * (*((_DWORD *)v19 + 7) + *((_DWORD *)v19 + 8))) )
  {
    v47 = 2 * v20;
    v46 = 2 * v20;
    v45 = 16LL * (unsigned int)(2 * v20);
    v34 = sub_186B270(v45);
    v35 = v46;
    v21 = v34;
    v20 = v47;
    v36 = (__m128i *)(v34 + v45);
    v37 = (__m128i *)v21;
    if ( v46 )
    {
      do
      {
        v37->m128i_i64[0] = 0;
        ++v37;
        v37[-1].m128i_i8[8] = 0;
      }
      while ( v37 != v36 );
    }
    v38 = &a1[3 * v16];
    v39 = (const __m128i *)v38[2];
    v40 = (__m128i *)&v39[*((unsigned int *)v38 + 6)];
    if ( v39 != v40 )
    {
      do
      {
        if ( v39->m128i_i64[0] > 1uLL )
        {
          v41 = 16LL * (*(_DWORD *)(v39->m128i_i64[0] + 12) & (unsigned int)(v46 - 1));
          v42 = (__m128i *)(v21 + v41);
          if ( v45 == v41 )
          {
LABEL_50:
            if ( (__m128i *)v21 == v42 )
            {
LABEL_63:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v43 = (__m128i *)v21;
            while ( v43->m128i_i64[0] )
            {
              if ( v42 == ++v43 )
                goto LABEL_63;
            }
          }
          else
          {
            v43 = (__m128i *)(v21 + v41);
            while ( v43->m128i_i64[0] )
            {
              if ( v36 == ++v43 )
                goto LABEL_50;
            }
          }
          *v43 = _mm_loadu_si128(v39);
        }
        ++v39;
      }
      while ( v40 != v39 );
      v40 = (__m128i *)a1[3 * v16 + 2];
    }
    if ( v40 )
    {
      sub_186B220(v40);
      v35 = v46;
      v20 = v47;
    }
    v44 = &a1[3 * v16];
    v44[2] = v21;
    *((_DWORD *)v44 + 6) = v35;
    *((_DWORD *)v44 + 8) = 0;
  }
  else
  {
    v21 = v19[2];
  }
  v22 = a2[3];
  v23 = v20 - 1;
  v24 = 16 * v20;
  v25 = v21 + v24;
  v26 = 16LL * (v22 & v23);
  v27 = v21 + v26;
  if ( v26 != v24 )
  {
    v28 = v21 + v26;
    v29 = 0;
    while ( 1 )
    {
      v30 = *(unsigned int **)v28;
      if ( *(_QWORD *)v28 > 1u )
      {
        if ( v30[3] == v22 && a2 == v30 )
        {
          *(_QWORD *)v28 = a2;
          *(_BYTE *)(v28 + 8) = v18;
          return v18;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_60;
          v29 = v28;
          goto LABEL_61;
        }
        v29 = v28;
      }
      v28 += 16;
      if ( v25 == v28 )
        goto LABEL_34;
    }
  }
  v29 = 0;
  while ( 1 )
  {
LABEL_34:
    if ( v27 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v33 = *(unsigned int **)v21;
    if ( *(_QWORD *)v21 <= 1u )
      break;
    if ( v33[3] == v22 && a2 == v33 )
    {
      *(_QWORD *)v21 = a2;
      *(_BYTE *)(v21 + 8) = v18;
      return v18;
    }
LABEL_33:
    v21 += 16;
  }
  if ( v33 )
  {
    v29 = v21;
    goto LABEL_33;
  }
  if ( v29 )
LABEL_60:
    --LODWORD(a1[3 * v16 + 4]);
  else
    v29 = v21;
LABEL_61:
  *(_QWORD *)v29 = a2;
  *(_BYTE *)(v29 + 8) = v18;
  ++HIDWORD(a1[3 * v16 + 3]);
  return v18;
}

