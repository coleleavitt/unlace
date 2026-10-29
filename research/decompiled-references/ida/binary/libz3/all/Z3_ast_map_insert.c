char __fastcall Z3_ast_map_insert(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  char v8; // r15
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __m128i *v14; // rbp
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r10d
  __m128i *v23; // rdx
  __m128i *v24; // rax
  const __m128i *v25; // r12
  __m128i *v26; // r11
  __int64 v27; // rdx
  __m128i *v28; // rsi
  __m128i *v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rsi
  __int64 v35; // [rsp+8h] [rbp-70h]
  size_t v36; // [rsp+10h] [rbp-68h]
  unsigned int v37; // [rsp+10h] [rbp-68h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  int v39; // [rsp+18h] [rbp-60h]
  size_t v40; // [rsp+18h] [rbp-60h]
  __int64 v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+28h] [rbp-50h]

  v5 = a4;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
  {
    sub_29EB90(a1, a2, a3, a4, a5, a4);
    v5 = a4;
  }
  v9 = *(unsigned int *)(a2 + 40);
  v10 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 1520) = 0;
  v35 = *(_QWORD *)(a2 + 24);
  if ( 3 * (int)v9 < (unsigned int)(4 * (v10 + *(_DWORD *)(a2 + 44))) )
  {
    v41 = v5;
    v39 = 2 * v9;
    v36 = 16LL * (unsigned int)(2 * v9);
    v21 = sub_186B270(v36);
    v22 = v39;
    v13 = v36;
    v11 = v21;
    v23 = (__m128i *)v21;
    v5 = v41;
    v24 = (__m128i *)(v36 + v21);
    if ( v39 )
    {
      if ( (((_BYTE)v24 - (_BYTE)v11) & 0x10) == 0
        || (v23 = (__m128i *)(v11 + 16), *(_OWORD *)v11 = 0, v24 != (__m128i *)(v11 + 16)) )
      {
        do
        {
          *v23 = 0;
          v23 += 2;
          v23[-1] = 0;
        }
        while ( v24 != v23 );
      }
    }
    v25 = *(const __m128i **)(a2 + 32);
    v12 = v39 - 1;
    v14 = v24;
    v26 = (__m128i *)&v25[*(unsigned int *)(a2 + 40)];
    if ( v25 != v26 )
    {
      do
      {
        while ( v25->m128i_i64[0] <= 1uLL )
        {
          if ( v26 == ++v25 )
            goto LABEL_34;
        }
        v27 = 16LL * (*(_DWORD *)(v25->m128i_i64[0] + 12) & v12);
        v28 = (__m128i *)(v11 + v27);
        if ( v36 == v27 )
        {
LABEL_38:
          if ( (__m128i *)v11 == v28 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = (__m128i *)v11;
          while ( v29->m128i_i64[0] )
          {
            if ( v28 == ++v29 )
              goto LABEL_50;
          }
        }
        else
        {
          v29 = (__m128i *)(v11 + v27);
          while ( v29->m128i_i64[0] )
          {
            if ( v24 == ++v29 )
              goto LABEL_38;
          }
        }
        v30 = _mm_loadu_si128(v25++);
        *v29 = v30;
      }
      while ( v26 != v25 );
LABEL_34:
      v26 = *(__m128i **)(a2 + 32);
    }
    if ( v26 )
    {
      v42 = v39;
      v40 = v36;
      v37 = v22 - 1;
      sub_186B220(v26);
      v22 = v42;
      v5 = v41;
      v13 = v40;
      v12 = v37;
    }
    *(_QWORD *)(a2 + 32) = v11;
    v10 = 0;
    *(_DWORD *)(a2 + 40) = v22;
    *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 32);
    v12 = v9 - 1;
    v13 = 16 * v9;
    v14 = (__m128i *)(v11 + v13);
  }
  v15 = *(_DWORD *)(a3 + 12);
  v16 = 16LL * (v15 & v12);
  v17 = v11 + v16;
  if ( v16 != v13 )
  {
    v18 = v11 + v16;
    v19 = nullptr;
    while ( 1 )
    {
      v20 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 > 1u )
      {
        if ( *(_DWORD *)(v20 + 12) == v15 && a3 == v20 )
        {
          v31 = *(_QWORD *)(v18 + 8);
          v19 = (_QWORD *)v18;
          goto LABEL_55;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_44;
          v19 = (_QWORD *)v18;
          goto LABEL_45;
        }
        v19 = (_QWORD *)v18;
      }
      v18 += 16;
      if ( (__m128i *)v18 == v14 )
        goto LABEL_16;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_16:
    if ( v17 == v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v18 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 <= 1u )
    {
      if ( v18 )
      {
        v19 = (_QWORD *)v11;
        goto LABEL_15;
      }
      if ( v19 )
LABEL_44:
        *(_DWORD *)(a2 + 48) = v10 - 1;
      else
        v19 = (_QWORD *)v11;
LABEL_45:
      *v19 = a3;
      v19[1] = 0;
      ++*(_DWORD *)(a2 + 44);
LABEL_46:
      ++*(_DWORD *)(a3 + 8);
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v18 + 12) == v15 && a3 == v18 )
      break;
LABEL_15:
    v11 += 16;
  }
  v31 = *(_QWORD *)(v11 + 8);
  v19 = (_QWORD *)v11;
LABEL_55:
  if ( !v31 )
    goto LABEL_46;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v31 + 8))-- == 1 )
  {
    v38 = v5;
    LOBYTE(v18) = sub_15D7BC0(v35, v31);
    v5 = v38;
  }
LABEL_48:
  v19[1] = v5;
  if ( v8 )
  {
    LOBYTE(v18) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return v18;
}

