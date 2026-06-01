__int64 __fastcall sub_DFAB80(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char **v3; // rbx
  __int64 v4; // r8
  unsigned __int64 v7; // r13
  __m128i *v8; // rbx
  unsigned int v9; // edi
  __m128i v10; // xmm0
  unsigned __int64 v11; // rsi
  int v12; // ecx
  size_t v13; // r15
  __m128i *v14; // rbp
  __int64 v15; // rax
  __m128i *v16; // r9
  __m128i *v17; // rax
  int v18; // edx
  bool v19; // zf
  void *exception; // rbx
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  __m128i *v23; // rdi
  __int64 result; // rax
  __int64 v25; // rcx
  int v26; // edx
  __m128i *i; // rax
  int v28; // edx
  __m128i *v29; // rax
  int v30; // r8d
  __m128i *v31; // rdx
  const __m128i *v32; // r10
  __m128i *v33; // r11
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm1
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 *v41; // rsi
  unsigned int v42; // ebx
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  __m128i v47; // [rsp+0h] [rbp-98h] BYREF
  __m128i v48; // [rsp+10h] [rbp-88h] BYREF
  __int64 v49; // [rsp+20h] [rbp-78h]
  __m128i *v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+34h] [rbp-64h]
  size_t v52; // [rsp+38h] [rbp-60h]
  __int64 v53[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = a3;
  if ( !*(_QWORD *)(a1 + 312) )
  {
    v49 = a3;
    sub_DFBCB0(a1);
    v4 = v49;
  }
  if ( v4 )
    ++*(_DWORD *)(v4 + 16);
  v7 = *a2;
  v8 = *(__m128i **)(a1 + 672);
  v9 = *(_DWORD *)(a1 + 680);
  v10 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)(unsigned __int64)v4);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v11 = v7 >> 3;
    else
      LODWORD(v11) = *(_DWORD *)(v7 - 8);
  }
  else
  {
    LODWORD(v11) = -1640531495;
  }
  v12 = v9 - 1;
  v13 = 24LL * v9;
  v14 = (__m128i *)((char *)v8 + v13);
  v15 = 24LL * ((unsigned int)v11 & (v9 - 1));
  v16 = (__m128i *)((char *)v8 + v15);
  if ( v15 != v13 )
  {
    v17 = (__m128i *)((char *)v8 + v15);
    do
    {
      v18 = v17->m128i_i32[1];
      if ( v18 == 2 )
      {
        if ( (_DWORD)v11 == v17->m128i_i32[0] && v17->m128i_i64[1] == v7 )
        {
LABEL_15:
          v19 = *(_QWORD *)(a1 + 312) == 0;
          v53[0] = *a2;
          if ( v19 )
          {
            v49 = v4;
            sub_DFBCB0(a1);
            v4 = v49;
          }
          sub_DC2790(*(_QWORD *)(a1 + 312), v4);
          exception = __cxa_allocate_exception(0x30u);
          sub_E0F430(exception, "sort already defined ", v53);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
      }
      else if ( !v18 )
      {
        goto LABEL_19;
      }
      v17 = (__m128i *)((char *)v17 + 24);
    }
    while ( v14 != v17 );
  }
  if ( v8 != v16 )
  {
    for ( i = *(__m128i **)(a1 + 672); v16 != i; i = (__m128i *)((char *)i + 24) )
    {
      v28 = i->m128i_i32[1];
      if ( v28 == 2 )
      {
        if ( (_DWORD)v11 == i->m128i_i32[0] && i->m128i_i64[1] == v7 )
          goto LABEL_15;
      }
      else if ( !v28 )
      {
        break;
      }
    }
  }
LABEL_19:
  if ( 3 * v9 < 4 * (*(_DWORD *)(a1 + 684) + *(_DWORD *)(a1 + 688)) )
  {
    v47.m128i_i32[0] = 2 * v9;
    v48 = v10;
    v13 = 48LL * v9;
    v49 = v13;
    v29 = (__m128i *)sub_186B270(v13);
    v30 = 2 * v9;
    v10 = _mm_load_si128(&v48);
    v8 = v29;
    v31 = (__m128i *)((char *)v29 + v13);
    if ( 2 * v9 )
    {
      do
      {
        v29->m128i_i64[0] = 0;
        v29 = (__m128i *)((char *)v29 + 24);
        v29[-1].m128i_i64[0] = 0;
      }
      while ( v29 != v31 );
    }
    v32 = *(const __m128i **)(a1 + 672);
    v12 = v30 - 1;
    v14 = (__m128i *)((char *)v8 + v13);
    v33 = (__m128i *)((char *)v32 + 24 * *(unsigned int *)(a1 + 680));
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i32[1] != 2 )
        {
          v32 = (const __m128i *)((char *)v32 + 24);
          if ( v33 == v32 )
            goto LABEL_65;
        }
        v34 = 24LL * (v32->m128i_i32[0] & (unsigned int)v12);
        v35 = (__m128i *)((char *)v8 + v34);
        if ( v34 == v13 )
        {
LABEL_75:
          if ( v35 == v8 )
          {
LABEL_85:
            v52 = v13;
            v51 = 2 * v9;
            v50 = v33;
            v47.m128i_i64[0] = (__int64)v32;
            LODWORD(v49) = v30 - 1;
            v48 = v10;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v8;
          while ( v36->m128i_i32[1] )
          {
            v36 = (__m128i *)((char *)v36 + 24);
            if ( v35 == v36 )
              goto LABEL_85;
          }
        }
        else
        {
          v36 = (__m128i *)((char *)v8 + v34);
          while ( v36->m128i_i32[1] )
          {
            v36 = (__m128i *)((char *)v36 + 24);
            if ( v14 == v36 )
              goto LABEL_75;
          }
        }
        v37 = _mm_loadu_si128(v32);
        v32 = (const __m128i *)((char *)v32 + 24);
        *v36 = v37;
        v36[1].m128i_i64[0] = v32[-1].m128i_i64[1];
      }
      while ( v33 != v32 );
LABEL_65:
      v33 = *(__m128i **)(a1 + 672);
    }
    if ( v33 )
    {
      v48.m128i_i32[0] = 2 * v9;
      LODWORD(v49) = v30 - 1;
      v47 = v10;
      sub_186B220(v33);
      v30 = v48.m128i_i32[0];
      v10 = _mm_load_si128(&v47);
      v12 = v49;
    }
    *(_QWORD *)(a1 + 672) = v8;
    *(_DWORD *)(a1 + 680) = v30;
    *(_DWORD *)(a1 + 688) = 0;
    if ( v7 )
      goto LABEL_21;
  }
  else if ( v7 )
  {
LABEL_21:
    if ( (v7 & 7) == 1 )
      v21 = v7 >> 3;
    else
      LODWORD(v21) = *(_DWORD *)(v7 - 8);
    goto LABEL_23;
  }
  LODWORD(v21) = -1640531495;
LABEL_23:
  v22 = (unsigned int)v21 & v12;
  v23 = (__m128i *)((char *)v8 + 24 * v22);
  if ( 24 * v22 != v13 )
  {
    result = (__int64)&v8->m128i_i64[3 * v22];
    v25 = 0;
    while ( 1 )
    {
      v26 = *(_DWORD *)(result + 4);
      if ( v26 == 2 )
      {
        if ( (_DWORD)v21 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v7 )
        {
          *(_DWORD *)(result + 4) = 2;
          *(__m128i *)(result + 8) = v10;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v25 )
            goto LABEL_50;
          v25 = result;
          goto LABEL_51;
        }
        v25 = result;
      }
      result += 24;
      if ( (__m128i *)result == v14 )
        goto LABEL_35;
    }
  }
  v25 = 0;
  while ( 1 )
  {
LABEL_35:
    if ( v23 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = v8->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v21 == v8->m128i_i32[0] && v8->m128i_i64[1] == v7 )
    {
      v8->m128i_i32[1] = 2;
      *(__m128i *)((char *)v8 + 8) = v10;
      goto LABEL_52;
    }
LABEL_34:
    v8 = (__m128i *)((char *)v8 + 24);
  }
  if ( (_DWORD)result )
  {
    v25 = (__int64)v8;
    goto LABEL_34;
  }
  if ( v25 )
LABEL_50:
    --*(_DWORD *)(a1 + 688);
  else
    v25 = (__int64)v8;
LABEL_51:
  *(_DWORD *)(v25 + 4) = 2;
  *(_DWORD *)v25 = v21;
  *(__m128i *)(v25 + 8) = v10;
  ++*(_DWORD *)(a1 + 684);
LABEL_52:
  if ( !*(_BYTE *)(a1 + 257) )
  {
    v38 = *(_QWORD **)(a1 + 728);
    if ( v38 )
    {
      v39 = *((_DWORD *)v38 - 1);
      if ( v39 == *((_DWORD *)v38 - 2) )
      {
        v42 = (3 * v39 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v39 + 8 >= v43 || v39 >= v42 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_DF63A0(v53, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v38 - 1, v43);
        v45 = v44[1];
        v38 = v44 + 2;
        *v44 = v42;
        *(_QWORD *)(a1 + 728) = v44 + 2;
        v41 = (unsigned __int64 *)&v44[2 * v45 + 2];
        result = (unsigned int)(v45 + 1);
      }
      else
      {
        v40 = v39;
        result = v39 + 1;
        v41 = &v38[v40];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      *v46 = 2;
      result = 1;
      v38 = v46 + 1;
      *(_QWORD *)(a1 + 728) = v38;
      v41 = v38;
    }
    *v41 = *a2;
    *((_DWORD *)v38 - 1) = result;
  }
  return result;
}

