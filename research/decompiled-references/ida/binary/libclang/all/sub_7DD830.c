char __fastcall sub_7DD830(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r12
  const __m128i *v3; // rbp
  __m128i v5; // xmm0
  bool v6; // cc
  __m128i v7; // xmm1
  __int64 v8; // rax
  int v9; // esi
  bool v10; // al
  int v11; // r14d
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  int v15; // r9d
  __m128i *v16; // r8
  int v17; // r15d
  __m128i *v18; // rcx
  __m128i *v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  char v27; // al
  __int64 v28; // rax
  __int8 *v29; // rbp
  __int64 v30; // rax
  int v31; // esi
  bool v32; // al
  int v33; // edx
  __m128i *v34; // rsi
  char v35; // al
  char v36; // al
  __int64 v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+8h] [rbp-90h]
  int v40; // [rsp+14h] [rbp-84h]
  __m128i *v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+28h] [rbp-70h] BYREF
  __m128i v43; // [rsp+30h] [rbp-68h] BYREF
  __m128i v44; // [rsp+40h] [rbp-58h] BYREF
  __int64 v45; // [rsp+50h] [rbp-48h]

  v2 = a1 + 16;
  v3 = a2;
  *(_QWORD *)a1 = a1 + 16;
  v5 = _mm_load_si128(&v44);
  v43.m128i_i32[0] = 0;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  v6 = a2->m128i_i32[0] <= 73;
  v7 = _mm_load_si128(&v43);
  v38 = a1 + 104;
  v8 = v45;
  *(_QWORD *)(a1 + 96) = 1;
  *(__m128i *)(a1 + 104) = v7;
  *(_QWORD *)(a1 + 136) = v8;
  *(_QWORD *)(a1 + 176) = v8;
  *(__m128i *)(a1 + 120) = v5;
  *(__m128i *)(a1 + 144) = v7;
  *(__m128i *)(a1 + 160) = v5;
  if ( !v6 && a2->m128i_i64[1] )
  {
    v9 = a2->m128i_i32[0];
    v43.m128i_i32[0] = 73;
    v10 = sub_7204C0(v43.m128i_i32, v9);
    v11 = v3->m128i_i32[0];
    if ( v10 )
    {
      v28 = v3->m128i_i64[1];
      v43.m128i_i64[0] = v3[1].m128i_i64[0];
      v42 = v28;
      LOBYTE(v12) = sub_7DB4D0(&v42, &v43);
    }
    else if ( v11 == 5 )
    {
      v30 = v3->m128i_i64[1];
      v42 = v3[1].m128i_i64[0];
      v43.m128i_i64[0] = v30;
      LOBYTE(v12) = sub_7DB530(&v43, &v42);
    }
    else
    {
      LOBYTE(v12) = 77;
      if ( v11 > 73 )
      {
        v13 = v3->m128i_u64[1];
        v14 = 0x9DDFEA08EB382D69LL
            * (HIDWORD(v13)
             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v13) ^ (8LL * (unsigned int)v13 - 0xAE502812AA7333LL)))
             ^ ((0x9DDFEA08EB382D69LL * (HIDWORD(v13) ^ (8LL * (unsigned int)v13 - 0xAE502812AA7333LL))) >> 47));
        v12 = -348639895 * (v14 ^ (HIDWORD(v14) >> 15));
      }
    }
    v15 = 1;
    v16 = nullptr;
    v17 = v12 & 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = (__m128i *)(v38 + (-v17 & 0x28));
        LODWORD(v19) = v18->m128i_i32[0];
        if ( !v11 )
          return (char)v19;
        if ( v11 != 1045 )
          break;
        if ( (_DWORD)v19 == 1045 )
          return (char)v19;
        if ( !(_DWORD)v19 )
        {
LABEL_12:
          v20 = *(_DWORD *)(a1 + 96);
          if ( !v16 )
            v16 = v18;
          v43.m128i_i64[0] = (__int64)v16;
          v21 = (v20 >> 1) + 1;
          if ( (*(_BYTE *)(a1 + 96) & 1) == 0 )
          {
            v22 = *(_DWORD *)(a1 + 112);
            v23 = a1 + 96;
            if ( 4 * v21 < 3 * v22 )
              goto LABEL_16;
LABEL_39:
            v22 *= 2;
            goto LABEL_40;
          }
          v22 = 2;
          v23 = a1 + 96;
          if ( (unsigned int)(4 * v21) >= 6 )
            goto LABEL_39;
LABEL_16:
          if ( v22 >> 3 >= v22 - (v21 + *(_DWORD *)(a1 + 100)) )
          {
LABEL_40:
            sub_7DD180(v23, v22);
            sub_7DB920(v23, (__int64)v3, &v43);
            v16 = (__m128i *)v43.m128i_i64[0];
            v21 = (*(_DWORD *)(a1 + 96) >> 1) + 1;
          }
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 1 | (2 * v21);
          if ( v16->m128i_i32[0] )
            --*(_DWORD *)(a1 + 100);
          *v16 = _mm_loadu_si128(v3);
          v16[1] = _mm_loadu_si128(v3 + 1);
          v16[2].m128i_i64[0] = v3[2].m128i_i64[0];
          goto LABEL_20;
        }
        v35 = v17 + v15;
        v11 = v3->m128i_i32[0];
        ++v15;
        v17 = v35 & 1;
      }
      if ( v11 == (_DWORD)v19 )
        break;
LABEL_28:
      if ( !(_DWORD)v19 )
        goto LABEL_12;
      v11 = v3->m128i_i32[0];
      if ( !v16 && (_DWORD)v19 == 1045 )
      {
        v36 = v17 + v15;
        v16 = v18;
        ++v15;
        v17 = v36 & 1;
      }
      else
      {
        v27 = v17 + v15++;
        v17 = v27 & 1;
      }
    }
    if ( v11 == 6 )
    {
      LOBYTE(v19) = v3->m128i_i64[1] == v18->m128i_i64[1];
      goto LABEL_26;
    }
    v31 = v3->m128i_i32[0];
    v41 = v16;
    v40 = v15;
    v39 = v38 + (-v17 & 0x28);
    v43.m128i_i32[0] = 73;
    v32 = sub_7204C0(v43.m128i_i32, v31);
    v18 = (__m128i *)v39;
    v15 = v40;
    v16 = v41;
    if ( v32 || (LODWORD(v19) = v3->m128i_i32[0], v3->m128i_i32[0] == 5) )
    {
      if ( v3->m128i_i64[1] == *(_QWORD *)(v39 + 8) )
      {
        v19 = *(__m128i **)(v39 + 16);
        if ( (__m128i *)v3[1].m128i_i64[0] == v19 )
          return (char)v19;
      }
      goto LABEL_27;
    }
    v33 = *(_DWORD *)v39;
    if ( (int)v19 <= 73 )
    {
      if ( v33 <= 73 )
        return (char)v19;
      v34 = nullptr;
    }
    else
    {
      v34 = (__m128i *)v3->m128i_i64[1];
      v19 = nullptr;
      if ( v33 <= 73 )
      {
LABEL_46:
        LOBYTE(v19) = v19 == v34;
LABEL_26:
        if ( (_BYTE)v19 )
          return (char)v19;
LABEL_27:
        LODWORD(v19) = v18->m128i_i32[0];
        goto LABEL_28;
      }
    }
    v19 = *(__m128i **)(v39 + 8);
    goto LABEL_46;
  }
LABEL_20:
  v24 = *(unsigned int *)(a1 + 8);
  v25 = *(_QWORD *)a1;
  v26 = v24 + 1;
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v24 + 1) )
  {
    if ( (unsigned __int64)v3 < v25 || (unsigned __int64)v3 >= v25 + 40 * v24 )
    {
      sub_25D6060(a1, v2, v26, 40);
      v25 = *(_QWORD *)a1;
      v24 = *(unsigned int *)(a1 + 8);
    }
    else
    {
      v29 = &v3->m128i_i8[-v25];
      sub_25D6060(a1, v2, v26, 40);
      v25 = *(_QWORD *)a1;
      v24 = *(unsigned int *)(a1 + 8);
      v3 = (const __m128i *)&v29[*(_QWORD *)a1];
    }
  }
  v19 = (__m128i *)(v25 + 40 * v24);
  *v19 = _mm_loadu_si128(v3);
  v19[1] = _mm_loadu_si128(v3 + 1);
  v19[2].m128i_i64[0] = v3[2].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  return (char)v19;
}

