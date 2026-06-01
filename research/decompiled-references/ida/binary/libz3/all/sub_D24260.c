__m128i **__fastcall sub_D24260(__int64 *a1, const __m128i *a2, __m128i **a3)
{
  __int64 v5; // r12
  __int64 v6; // r8
  __m128i *v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i *v12; // r12
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  __m128i *v22; // r10
  __m128i *v23; // rdx
  __m128i *v24; // r13
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 v28; // rax
  __int32 v30; // eax
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i *v35; // rax
  int v36; // r9d
  __m128i *v37; // rdx
  const __m128i *v38; // rcx
  __m128i *v39; // r10
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax
  __m128i v43; // xmm0
  size_t v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+8h] [rbp-60h]
  __int64 *v47; // [rsp+18h] [rbp-50h]

  v5 = *((unsigned int *)a1 + 6);
  if ( 3 * (int)v5 < (unsigned int)(4 * (*((_DWORD *)a1 + 7) + *((_DWORD *)a1 + 8))) )
  {
    v44 = 24LL * (unsigned int)(2 * v5);
    v9 = v44;
    v35 = (__m128i *)sub_186B270(v44);
    v36 = 2 * v5;
    v7 = v35;
    if ( 2 * (_DWORD)v5 )
    {
      v37 = &v35[3 * (v5 & 0x7FFFFFFF)];
      do
      {
        v35->m128i_i64[0] = 0;
        v35 += 3;
        v35[-2].m128i_i64[1] = 0;
      }
      while ( v35 != v37 );
    }
    v38 = (const __m128i *)a1[2];
    v8 = v36 - 1;
    v12 = (__m128i *)((char *)v7 + v44);
    v39 = (__m128i *)((char *)v38 + 24 * *((unsigned int *)a1 + 6));
    if ( v38 != v39 )
    {
      do
      {
        while ( v38->m128i_i32[1] != 2 )
        {
          v38 = (const __m128i *)((char *)v38 + 24);
          if ( v39 == v38 )
            goto LABEL_50;
        }
        v40 = 24LL * (v38->m128i_i32[0] & v8);
        v41 = (__m128i *)((char *)v7 + v40);
        if ( v44 == v40 )
        {
LABEL_56:
          if ( v7 == v41 )
          {
LABEL_63:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v7;
          while ( v42->m128i_i32[1] )
          {
            v42 = (__m128i *)((char *)v42 + 24);
            if ( v41 == v42 )
              goto LABEL_63;
          }
        }
        else
        {
          v42 = (__m128i *)((char *)v7 + v40);
          while ( v42->m128i_i32[1] )
          {
            v42 = (__m128i *)((char *)v42 + 24);
            if ( v12 == v42 )
              goto LABEL_56;
          }
        }
        v43 = _mm_loadu_si128(v38);
        v38 = (const __m128i *)((char *)v38 + 24);
        *v42 = v43;
        v42[1].m128i_i64[0] = v38[-1].m128i_i64[1];
      }
      while ( v39 != v38 );
LABEL_50:
      v39 = (__m128i *)a1[2];
    }
    if ( v39 )
    {
      v45 = v36;
      sub_186B220(v39);
      v36 = v45;
    }
    v6 = a2->m128i_i64[0];
    v10 = *a1;
    a1[2] = (__int64)v7;
    *((_DWORD *)a1 + 6) = v36;
    v11 = *(unsigned int *)(v6 + 24);
    *((_DWORD *)a1 + 8) = 0;
    if ( (_DWORD)v11 )
      goto LABEL_3;
  }
  else
  {
    v6 = a2->m128i_i64[0];
    v7 = (__m128i *)a1[2];
    v8 = v5 - 1;
    v9 = 24 * v5;
    v10 = *a1;
    v11 = *(unsigned int *)(a2->m128i_i64[0] + 24);
    v12 = (__m128i *)((char *)v7 + 24 * v5);
    if ( (_DWORD)v11 )
    {
LABEL_3:
      v13 = *(_QWORD *)(v10 + 8);
      v14 = 0;
      v15 = -1640531527;
      do
      {
        if ( (*(_DWORD *)(v13 + 4LL * ((unsigned int)v14 >> 5)) & (1 << v14)) != 0 )
        {
          v16 = 33
              * ((4097 * **(_DWORD **)(v6 + 8 * v14 + 32) + 2127912214)
               ^ ((unsigned int)(4097 * **(_DWORD **)(v6 + 8 * v14 + 32) + 2127912214) >> 19)
               ^ 0xC761C23C);
          v17 = 9 * (((v16 + 374761393) << 9) ^ (v16 - 369570787)) - 42973499;
          v18 = v17 ^ HIWORD(v17);
          v19 = 33 * ((4097 * v15 + 2127912214) ^ ((4097 * v15 + 2127912214) >> 19) ^ 0xC761C23C);
          v20 = (9 * (((v19 + 374761393) << 9) ^ (v19 - 369570787)) - 42973499)
              ^ ((9 * (((v19 + 374761393) << 9) ^ (v19 - 369570787)) - 42973499) >> 16)
              ^ 0xB55A4F09;
          v15 = ((((v18 ^ 0xB55A4F09) - v20) ^ (v20 << 8))
               - v20
               + (((v18 ^ 0xB55A4F09) - v20) ^ (v20 << 8) ^ ((v20 - (((v18 ^ 0xB55A4F09) - v20) ^ (v20 << 8))) << 16)))
              ^ ((v20 - (((v18 ^ 0xB55A4F09) - v20) ^ (v20 << 8))) << 10);
        }
        ++v14;
      }
      while ( v14 != v11 );
      goto LABEL_7;
    }
  }
  v15 = -1640531527;
LABEL_7:
  v21 = v15 & v8;
  v22 = (__m128i *)((char *)v7 + 24 * v21);
  if ( 24 * v21 == v9 )
  {
    v24 = nullptr;
LABEL_22:
    if ( v22 == v7 )
    {
LABEL_55:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v30 = v7->m128i_i32[1];
      if ( v30 == 2 )
      {
        if ( v7->m128i_i32[0] == v15 )
        {
          v31 = v7->m128i_i64[1];
          v32 = *(unsigned int *)(v31 + 24);
          if ( !(_DWORD)v32 )
          {
LABEL_34:
            *a3 = v7;
            return a3;
          }
          v33 = 0;
          while ( (*(_DWORD *)(*(_QWORD *)(a1[1] + 8) + 4LL * ((unsigned int)v33 >> 5)) & (1 << v33)) == 0
               || *(_QWORD *)(v31 + 8 * v33 + 32) == *(_QWORD *)(v6 + 8 * v33 + 32) )
          {
            if ( ++v33 == v32 )
              goto LABEL_34;
          }
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( !v24 )
          {
            v24 = v7;
            goto LABEL_37;
          }
LABEL_36:
          --*((_DWORD *)a1 + 8);
          goto LABEL_37;
        }
        v24 = v7;
      }
      v7 = (__m128i *)((char *)v7 + 24);
      if ( v22 == v7 )
        goto LABEL_55;
    }
  }
  v47 = &v7->m128i_i64[3 * v21];
  v23 = (__m128i *)v47;
  v24 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v25 = v23->m128i_i32[1];
      if ( v25 != 2 )
        break;
      if ( v23->m128i_i32[0] != v15 )
        goto LABEL_11;
      v26 = v23->m128i_i64[1];
      v27 = *(unsigned int *)(v26 + 24);
      if ( !(_DWORD)v27 )
      {
LABEL_19:
        *a3 = v23;
        return a3;
      }
      v28 = 0;
      while ( (*(_DWORD *)(*(_QWORD *)(a1[1] + 8) + 4LL * ((unsigned int)v28 >> 5)) & (1 << v28)) == 0
           || *(_QWORD *)(v26 + 8 * v28 + 32) == *(_QWORD *)(v6 + 8 * v28 + 32) )
      {
        if ( ++v28 == v27 )
          goto LABEL_19;
      }
      v23 = (__m128i *)((char *)v23 + 24);
      if ( v23 == v12 )
      {
LABEL_21:
        v22 = (__m128i *)v47;
        goto LABEL_22;
      }
    }
    if ( !v25 )
      break;
    v24 = v23;
LABEL_11:
    v23 = (__m128i *)((char *)v23 + 24);
    if ( v23 == v12 )
      goto LABEL_21;
  }
  if ( v24 )
    goto LABEL_36;
  v24 = v23;
LABEL_37:
  v34 = _mm_loadu_si128(a2);
  v24->m128i_i32[0] = v15;
  v24->m128i_i32[1] = 2;
  *(__m128i *)((char *)v24 + 8) = v34;
  ++*((_DWORD *)a1 + 7);
  *a3 = v24;
  return a3;
}

