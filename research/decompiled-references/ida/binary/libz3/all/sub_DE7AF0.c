__int64 __fastcall sub_DE7AF0(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 *a5)
{
  char *v6; // rax
  __int64 *v7; // r11
  __int64 v8; // r10
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // r12
  __m128i *v25; // rbp
  __int64 v26; // r14
  const __m128i *v27; // rdi
  bool v28; // zf
  __m128i v29; // xmm0
  __int64 v30; // r10
  char *v31; // rcx
  __int64 v32; // rax
  int v33; // edi
  unsigned int v34; // edx
  char *v35; // rsi
  __int64 v36; // rdx
  char *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r12
  unsigned int v41; // ebp
  __int64 v42; // rbx
  unsigned int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rbp
  char *v46; // rbp
  char *v47; // r12
  char *v48; // rdi
  int v50; // r12d
  __int64 v51; // rax
  _OWORD *v52; // rax
  __int64 v53; // rax
  int v55; // [rsp+10h] [rbp-188h]
  __m128i v59; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h]
  unsigned int v61; // [rsp+58h] [rbp-140h]
  unsigned int v62; // [rsp+5Ch] [rbp-13Ch]
  _OWORD v63[19]; // [rsp+60h] [rbp-138h] BYREF

  v6 = *(char **)(a2 + 40);
  if ( !v6 )
    goto LABEL_11;
  if ( !*(_DWORD *)v6 )
    goto LABEL_56;
  v7 = a5;
  while ( *(_DWORD *)v6 != 1 )
  {
    v8 = *v7;
    v9 = *((__int64 **)v6 + 2);
    v10 = *((unsigned int *)v6 + 6);
    v11 = *(_DWORD *)(*v7 + 12);
    v12 = v10 - 1;
    v10 *= 16;
    v13 = (__int64 *)((char *)v9 + v10);
    v14 = 16LL * (v11 & v12);
    v15 = &v9[(unsigned __int64)v14 / 8];
    if ( v14 == v10 )
    {
LABEL_38:
      if ( v9 == v15 )
        goto LABEL_11;
      while ( 1 )
      {
        v39 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v39 + 12) == v11 && v8 == v39 )
          {
            v16 = v9;
            goto LABEL_28;
          }
        }
        else if ( !v39 )
        {
          goto LABEL_11;
        }
        v9 += 2;
        if ( v15 == v9 )
          goto LABEL_11;
      }
    }
    v16 = &v9[(unsigned __int64)v14 / 8];
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned __int64)*v16 <= 1 )
      {
        if ( !v17 )
          goto LABEL_11;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
        break;
LABEL_8:
      v16 += 2;
      if ( v13 == v16 )
        goto LABEL_38;
    }
LABEL_28:
    v6 = (char *)v16[1];
    if ( !v6 )
      goto LABEL_11;
    ++v7;
  }
  v30 = *v7;
  v31 = *((char **)v6 + 2);
  v32 = *((unsigned int *)v6 + 6);
  v33 = *(_DWORD *)(*v7 + 12);
  v34 = v32 - 1;
  v32 *= 16;
  v35 = &v31[v32];
  v36 = 16LL * (v33 & v34);
  v37 = &v31[v36];
  if ( v36 == v32 )
  {
LABEL_58:
    if ( v31 != v37 )
    {
      while ( 1 )
      {
        v53 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 > 1u )
        {
          if ( *(_DWORD *)(v53 + 12) == v33 && v30 == v53 )
          {
            v6 = v31;
            goto LABEL_56;
          }
        }
        else if ( !v53 )
        {
          goto LABEL_11;
        }
        v31 += 16;
        if ( v37 == v31 )
          goto LABEL_11;
      }
    }
    goto LABEL_11;
  }
  v6 = &v31[v36];
  while ( 1 )
  {
    v38 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 > 1u )
      break;
    if ( !v38 )
      goto LABEL_11;
LABEL_34:
    v6 += 16;
    if ( v35 == v6 )
      goto LABEL_58;
  }
  if ( *(_DWORD *)(v38 + 12) != v33 || v30 != v38 )
    goto LABEL_34;
LABEL_56:
  v44 = *((_QWORD *)v6 + 1);
  if ( v44 )
  {
    sub_DE6390((__int64)a1, *((_QWORD *)v6 + 1), a2, a4, a5);
    return v44;
  }
LABEL_11:
  v59.m128i_i8[8] = 2;
  ptr = v63;
  v18 = *a3;
  v62 = 16;
  v59.m128i_i64[0] = v18;
  v19 = _mm_load_si128(&v59);
  v61 = 1;
  v59.m128i_i32[0] = 0;
  v59.m128i_i8[8] = 0;
  v63[0] = v19;
  sub_15D0DF0(&v59);
  if ( a4 )
  {
    v20 = a5;
    do
    {
      v21 = *v20;
      v59.m128i_i8[8] = 1;
      v59.m128i_i64[0] = v21;
      if ( v61 < v62 )
      {
        *((__m128i *)ptr + v61) = _mm_load_si128(&v59);
      }
      else
      {
        v55 = 2 * v62;
        v22 = sub_186B270(32LL * v62);
        v23 = v61;
        v24 = (__m128i *)v22;
        if ( v61 )
        {
          v25 = (__m128i *)v22;
          v26 = 0;
          do
          {
            v27 = (const __m128i *)((char *)ptr + 16 * v26);
            v28 = v27->m128i_i8[8] == 0;
            *v25 = _mm_loadu_si128(v27);
            v27->m128i_i32[0] = 0;
            if ( !v28 )
              v27->m128i_i8[8] = 0;
            sub_15D0DF0(v27);
            v23 = v61;
            ++v26;
            ++v25;
          }
          while ( (unsigned int)v26 < v61 );
        }
        if ( ptr != v63 && ptr )
        {
          sub_186B220(ptr);
          v23 = v61;
        }
        v29 = _mm_load_si128(&v59);
        ptr = v24;
        v28 = v59.m128i_i8[8] == 0;
        v62 = v55;
        v24[v23] = v29;
        if ( v28 )
        {
          v59.m128i_i32[0] = 0;
          goto LABEL_15;
        }
      }
      v59.m128i_i32[0] = 0;
      v59.m128i_i8[8] = 0;
LABEL_15:
      ++v20;
      ++v61;
      sub_15D0DF0(&v59);
    }
    while ( &a5[a4] != v20 );
  }
  sub_15F01E0(&v59, *a1);
  v40 = ptr;
  v41 = v61;
  v42 = *a1;
  v43 = sub_15F0200(&v59);
  v44 = sub_15D2CD0(v42, v43, 0, v41, v40);
  v45 = *(_QWORD *)(a2 + 40);
  if ( !v45 )
  {
    v50 = *(_DWORD *)(a2 + 12);
    v51 = sub_17E9C90(a1[1], 40);
    *(_DWORD *)v51 = v50;
    v45 = v51;
    *(_QWORD *)(v51 + 8) = 0;
    v52 = (_OWORD *)sub_186B270(0x80u);
    *v52 = 0;
    v52[1] = 0;
    v52[2] = 0;
    v52[3] = 0;
    v52[4] = 0;
    v52[5] = 0;
    v52[6] = 0;
    v52[7] = 0;
    *(_QWORD *)(v45 + 16) = v52;
    *(_QWORD *)(v45 + 24) = 8;
    *(_DWORD *)(v45 + 32) = 0;
    *(_QWORD *)(a2 + 40) = v45;
  }
  sub_DE9EC0(v45, a1, a5, v44);
  sub_DE5EB0((__int64)a1, v44, a2, a4, a5);
  sub_DE6390((__int64)a1, v44, a2, a4, a5);
  v46 = (char *)ptr;
  v47 = (char *)ptr + 16 * v61;
  if ( ptr != v47 )
  {
    do
    {
      v48 = v46;
      v46 += 16;
      sub_15D0DF0(v48);
    }
    while ( v47 != v46 );
    v47 = (char *)ptr;
  }
  if ( v47 != (char *)v63 && v47 )
    sub_186B220(v47);
  return v44;
}

