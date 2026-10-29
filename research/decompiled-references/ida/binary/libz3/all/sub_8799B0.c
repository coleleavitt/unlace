void __fastcall sub_8799B0(__int64 a1, signed int a2, signed int a3)
{
  signed int v4; // r8d
  unsigned int v5; // r15d
  __int64 *v6; // r14
  __int64 v7; // r13
  int v8; // r9d
  int v9; // eax
  __m128i *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // esi
  size_t v13; // r12
  signed int v14; // edx
  __m128i *v15; // r13
  unsigned int v16; // edi
  unsigned int v17; // r10d
  unsigned int v18; // esi
  unsigned int v19; // edx
  int v20; // edi
  unsigned int v21; // esi
  unsigned int v22; // edx
  int v23; // r10d
  unsigned int v24; // esi
  __int64 v25; // rax
  __m128i *v26; // rdi
  __m128i *v27; // rax
  __m128i *v28; // rcx
  int v29; // edx
  __int64 *v30; // r12
  __int64 *v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int32 v36; // eax
  int v37; // eax
  __m128i *v38; // rax
  int v39; // r10d
  __m128i *v40; // rdx
  const __m128i *v41; // r9
  __m128i *v42; // r11
  __int64 v43; // rdx
  __m128i *v44; // rsi
  __m128i *v45; // rdx
  __m128i v46; // xmm0
  __m128i *v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // ebx
  unsigned int i; // eax
  unsigned int v51; // [rsp+0h] [rbp-58h]
  unsigned int v52; // [rsp+0h] [rbp-58h]
  unsigned int v53; // [rsp+0h] [rbp-58h]
  signed int v54; // [rsp+8h] [rbp-50h]
  int v55; // [rsp+14h] [rbp-44h]

  if ( a2 == a3 )
    return;
  v4 = a2;
  v5 = a3;
  if ( a2 <= a3 )
  {
    v5 = a2;
    v4 = a3;
  }
  v6 = *(__int64 **)(a1 + 40);
  v6[3] = 0xFFFFFFFF00000000LL;
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 20);
  *((_DWORD *)v6 + 4) = v5;
  *((_DWORD *)v6 + 5) = v4;
  if ( 3 * (int)v7 < (unsigned int)(4 * (v8 + v9)) )
  {
    v54 = v4;
    v13 = 16LL * (unsigned int)(2 * v7);
    v38 = (__m128i *)sub_186B270(v13);
    v39 = 2 * v7;
    v4 = v54;
    v10 = v38;
    if ( 2 * (_DWORD)v7 )
    {
      v40 = &v38[2 * (v7 & 0x7FFFFFFF)];
      do
      {
        v38->m128i_i64[0] = 0;
        v38 += 2;
        v38[-1].m128i_i64[0] = 0;
      }
      while ( v40 != v38 );
    }
    v41 = *(const __m128i **)(a1 + 8);
    v11 = v39 - 1;
    v15 = &v10[v13 / 0x10];
    v42 = (__m128i *)&v41[*(unsigned int *)(a1 + 16)];
    if ( v41 != v42 )
    {
      do
      {
        while ( v41->m128i_i32[1] != 2 )
        {
          if ( v42 == ++v41 )
            goto LABEL_45;
        }
        v43 = 16LL * (v41->m128i_i32[0] & v11);
        v44 = &v10[(unsigned __int64)v43 / 0x10];
        if ( v13 == v43 )
        {
LABEL_59:
          if ( v10 == v44 )
          {
LABEL_66:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v45 = v10;
          while ( v45->m128i_i32[1] )
          {
            if ( v44 == ++v45 )
              goto LABEL_66;
          }
        }
        else
        {
          v45 = &v10[(unsigned __int64)v43 / 0x10];
          while ( v45->m128i_i32[1] )
          {
            if ( v15 == ++v45 )
              goto LABEL_59;
          }
        }
        v46 = _mm_loadu_si128(v41++);
        *v45 = v46;
      }
      while ( v42 != v41 );
LABEL_45:
      v42 = *(__m128i **)(a1 + 8);
    }
    if ( v42 )
    {
      v55 = v39;
      v52 = v39 - 1;
      sub_186B220(v42);
      v39 = v55;
      v4 = v54;
      v11 = v52;
    }
    v14 = *((_DWORD *)v6 + 5);
    v12 = *((_DWORD *)v6 + 4);
    *(_QWORD *)(a1 + 8) = v10;
    v8 = 0;
    *(_DWORD *)(a1 + 16) = v39;
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v10 = *(__m128i **)(a1 + 8);
    v11 = v7 - 1;
    v12 = v5;
    v13 = 16 * v7;
    v14 = v4;
    v15 = &v10[v7];
  }
  v16 = v12 - v14;
  v17 = v14 - v12;
  v18 = (v14 - v12 + v14) ^ ((v12 - v14) << 8);
  v19 = (v17 - v18) ^ (v18 >> 13);
  v20 = (v16 - v18 - v19) ^ (v19 >> 12);
  v21 = (v18 - v19 - v20) ^ (v20 << 16);
  v22 = (v19 - v20 - v21) ^ (v21 >> 5);
  v23 = (v20 - v21 - v22) ^ (v22 >> 3);
  v24 = (v22 - v23 - ((v23 << 10) ^ (v21 - v22 - v23))) ^ (((v23 << 10) ^ (v21 - v22 - v23)) >> 15);
  v25 = 16LL * (v24 & v11);
  v26 = &v10[(unsigned __int64)v25 / 0x10];
  if ( v25 != v13 )
  {
    v27 = &v10[(unsigned __int64)v25 / 0x10];
    v28 = nullptr;
    while ( 1 )
    {
      v29 = v27->m128i_i32[1];
      if ( v29 == 2 )
      {
        if ( v27->m128i_i32[0] == v24 )
        {
          v30 = (__int64 *)v27->m128i_i64[1];
          if ( v30[2] == v6[2] )
            goto LABEL_14;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_31;
          v28 = v27;
          goto LABEL_32;
        }
        v28 = v27;
      }
      if ( ++v27 == v15 )
        goto LABEL_25;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_25:
    if ( v26 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v36 = v10->m128i_i32[1];
    if ( v36 != 2 )
      break;
    if ( v10->m128i_i32[0] == v24 )
    {
      v30 = (__int64 *)v10->m128i_i64[1];
      if ( v30[2] == v6[2] )
        goto LABEL_14;
    }
LABEL_24:
    ++v10;
  }
  if ( v36 )
  {
    v28 = v10;
    goto LABEL_24;
  }
  if ( v28 )
LABEL_31:
    *(_DWORD *)(a1 + 24) = v8 - 1;
  else
    v28 = v10;
LABEL_32:
  v28->m128i_i32[0] = v24;
  v37 = *(_DWORD *)(a1 + 20);
  v30 = v6;
  v28->m128i_i64[1] = (__int64)v6;
  v28->m128i_i32[1] = 2;
  *(_DWORD *)(a1 + 20) = v37 + 1;
LABEL_14:
  ++*((_DWORD *)v30 + 6);
  v51 = v4;
  sub_878AE0((_QWORD *)a1, (unsigned int *)v30);
  v31 = *(__int64 **)(a1 + 32);
  v32 = v51;
  if ( !v31 )
  {
    *(_QWORD *)(a1 + 32) = v30;
    *(__m128i *)v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
    if ( v6 != v30 )
      goto LABEL_18;
    goto LABEL_51;
  }
  if ( v31 != v30 )
  {
    v33 = *v30;
    v34 = (__int64 *)v30[1];
    *v34 = *v30;
    *(_QWORD *)(v33 + 8) = v34;
    **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL) = v30;
    v30[1] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    v35 = *(_QWORD *)(a1 + 32);
    *v30 = v35;
    *(_QWORD *)(v35 + 8) = v30;
    *(_QWORD *)(a1 + 32) = v30;
  }
  if ( v6 == v30 )
  {
LABEL_51:
    v47 = (__m128i *)sub_186B270(0x20u);
    v32 = v51;
    v47[1].m128i_i64[0] = -1;
    v47[1].m128i_i64[1] = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(a1 + 40) = v47;
    *v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
  }
LABEL_18:
  if ( !*((_DWORD *)v30 + 7) )
  {
    v53 = v32;
    sub_878D20(a1, v30);
    sub_879900((__int64 *)a1, v5, v53);
    return;
  }
  if ( (unsigned int)(2 * *(_DWORD *)(a1 + 52)) < *((_DWORD *)v30 + 6) )
  {
    sub_879240((__int64 *)a1);
    if ( v6 == v30 )
      goto LABEL_53;
  }
  else
  {
    if ( v6 != v30 )
      return;
LABEL_53:
    v48 = *(_QWORD *)a1;
    v49 = *(_DWORD *)(a1 + 60) + 1;
    *(_DWORD *)(a1 + 60) = v49;
    if ( *(_DWORD *)(sub_7E4EB0(v48) + 92) < v49 )
    {
      *(_DWORD *)(a1 + 60) = 0;
      i = *(_DWORD *)(a1 + 48);
      if ( i < *(_DWORD *)(a1 + 20) )
      {
        sub_879240((__int64 *)a1);
        for ( i = *(_DWORD *)(a1 + 48); i < *(_DWORD *)(a1 + 20); i = *(_DWORD *)(a1 + 48) )
          sub_878D20(a1, *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL));
      }
      *(_DWORD *)(a1 + 48) = 110 * i / 0x64 + 1;
    }
  }
}

