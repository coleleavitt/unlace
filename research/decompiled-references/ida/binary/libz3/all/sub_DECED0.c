__int64 __fastcall sub_DECED0(__int64 a1, unsigned __int64 *a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __m128i v7; // xmm0
  __m128i *v8; // rbx
  __int32 v9; // r10d
  __int64 v10; // rcx
  __m128i *v11; // rbp
  unsigned __int64 v12; // rsi
  __int64 v13; // r10
  __m128i *v14; // rdi
  __m128i *v15; // rax
  __int64 *v16; // rcx
  int v17; // edx
  int v18; // eax
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 result; // rax
  _QWORD *v23; // rdx
  unsigned int v24; // ebx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  __m128i *v28; // rax
  __int32 v29; // r8d
  size_t v30; // r9
  __m128i *v31; // rdx
  const __m128i *v32; // r15
  __m128i *v33; // r11
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm1
  _QWORD *v38; // rax
  __m128i v39; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+10h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  __m128i v42; // [rsp+20h] [rbp-88h] BYREF
  __int32 v43; // [rsp+34h] [rbp-74h]
  size_t v44; // [rsp+38h] [rbp-70h]
  __int64 v45[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a1 + 32);
  v6 = *a2;
  v7 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)(unsigned __int64)a2);
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    LODWORD(v41) = 2 * v5;
    v42 = v7;
    v40 = 24LL * (unsigned int)(2 * v5);
    v39.m128i_i64[0] = v40;
    v28 = (__m128i *)sub_186B270(v40);
    v29 = v41;
    v30 = v40;
    v10 = v40;
    v7 = _mm_load_si128(&v42);
    v8 = v28;
    v31 = (__m128i *)((char *)v28 + v40);
    if ( (_DWORD)v41 )
    {
      do
      {
        v28->m128i_i64[0] = 0;
        v28 = (__m128i *)((char *)v28 + 24);
        v28[-1].m128i_i64[0] = 0;
      }
      while ( v28 != v31 );
    }
    v32 = *(const __m128i **)(a1 + 24);
    v9 = v29 - 1;
    v11 = (__m128i *)((char *)v8 + v30);
    v33 = (__m128i *)((char *)v32 + 24 * *(unsigned int *)(a1 + 32));
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i32[1] != 2 )
        {
          v32 = (const __m128i *)((char *)v32 + 24);
          if ( v33 == v32 )
            goto LABEL_44;
        }
        v34 = 24LL * (v32->m128i_i32[0] & (unsigned int)v9);
        v35 = (__m128i *)((char *)v8 + v34);
        if ( v34 == v30 )
        {
LABEL_51:
          if ( v35 == v8 )
          {
LABEL_58:
            v44 = v30;
            v43 = v29;
            v42.m128i_i64[0] = v10;
            LODWORD(v41) = v29 - 1;
            v40 = (__int64)v33;
            v39 = v7;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v8;
          while ( v36->m128i_i32[1] )
          {
            v36 = (__m128i *)((char *)v36 + 24);
            if ( v35 == v36 )
              goto LABEL_58;
          }
        }
        else
        {
          v36 = (__m128i *)((char *)v8 + v34);
          while ( v36->m128i_i32[1] )
          {
            v36 = (__m128i *)((char *)v36 + 24);
            if ( v11 == v36 )
              goto LABEL_51;
          }
        }
        v37 = _mm_loadu_si128(v32);
        v32 = (const __m128i *)((char *)v32 + 24);
        *v36 = v37;
        v36[1].m128i_i64[0] = v32[-1].m128i_i64[1];
      }
      while ( v33 != v32 );
LABEL_44:
      v33 = *(__m128i **)(a1 + 24);
    }
    if ( v33 )
    {
      v42.m128i_i32[0] = v29;
      v41 = v10;
      LODWORD(v40) = v29 - 1;
      v39 = v7;
      sub_186B220(v33);
      v29 = v42.m128i_i32[0];
      v10 = v41;
      v9 = v40;
      v7 = _mm_load_si128(&v39);
    }
    *(_QWORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 32) = v29;
    *(_DWORD *)(a1 + 40) = 0;
    if ( v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *(__m128i **)(a1 + 24);
    v9 = v5 - 1;
    v10 = 24 * v5;
    v11 = (__m128i *)((char *)v8 + 24 * v5);
    if ( v6 )
    {
LABEL_3:
      if ( (v6 & 7) == 1 )
        v12 = v6 >> 3;
      else
        LODWORD(v12) = *(_DWORD *)(v6 - 8);
      goto LABEL_5;
    }
  }
  LODWORD(v12) = -1640531495;
LABEL_5:
  v13 = (unsigned int)v12 & v9;
  v14 = (__m128i *)((char *)v8 + 24 * v13);
  if ( 24 * v13 != v10 )
  {
    v15 = (__m128i *)((char *)v8 + 24 * v13);
    v16 = nullptr;
    while ( 1 )
    {
      v17 = v15->m128i_i32[1];
      if ( v17 == 2 )
      {
        if ( (_DWORD)v12 == v15->m128i_i32[0] && v6 == v15->m128i_i64[1] )
        {
          v15->m128i_i32[1] = 2;
          *(__m128i *)((char *)v15 + 8) = v7;
          goto LABEL_26;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_24;
          v16 = (__int64 *)v15;
          goto LABEL_25;
        }
        v16 = (__int64 *)v15;
      }
      v15 = (__m128i *)((char *)v15 + 24);
      if ( v15 == v11 )
        goto LABEL_17;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v18 = v8->m128i_i32[1];
    if ( v18 != 2 )
      break;
    if ( (_DWORD)v12 == v8->m128i_i32[0] && v6 == v8->m128i_i64[1] )
    {
      v8->m128i_i32[1] = 2;
      *(__m128i *)((char *)v8 + 8) = v7;
      goto LABEL_26;
    }
LABEL_16:
    v8 = (__m128i *)((char *)v8 + 24);
  }
  if ( v18 )
  {
    v16 = (__int64 *)v8;
    goto LABEL_16;
  }
  if ( v16 )
LABEL_24:
    --*(_DWORD *)(a1 + 40);
  else
    v16 = (__int64 *)v8;
LABEL_25:
  *((_DWORD *)v16 + 1) = 2;
  *(_DWORD *)v16 = v12;
  *(__m128i *)(v16 + 1) = v7;
  ++*(_DWORD *)(a1 + 36);
LABEL_26:
  v19 = *(_QWORD **)(a1 + 88);
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v24 = (3 * v20 + 1) >> 1;
      v25 = 8 * v24 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v25 || v20 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v45, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (unsigned int *)sub_186B300(v19 - 1, v25);
      v27 = v26[1];
      v19 = v26 + 2;
      *v26 = v24;
      *(_QWORD *)(a1 + 88) = v26 + 2;
      LODWORD(v26) = v27;
      v23 = &v19[v27];
      result = (unsigned int)((_DWORD)v26 + 1);
    }
    else
    {
      v21 = v20;
      result = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v19 = v38 + 1;
    *v38 = 2;
    result = 1;
    *(_QWORD *)(a1 + 88) = v19;
    v23 = v19;
  }
  *v23 = a2;
  *((_DWORD *)v19 - 1) = result;
  return result;
}

