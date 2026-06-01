__int64 __fastcall sub_986BE0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i *v8; // rbx
  unsigned int v9; // r10d
  __int64 v10; // rcx
  __m128i *v11; // rbp
  __int64 v12; // r10
  __m128i *v13; // rsi
  __m128i *v14; // rax
  __m128i *v15; // rcx
  int v16; // edx
  __int32 v17; // eax
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 *v22; // rdx
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rdx
  __m128i *v27; // rax
  int v28; // r8d
  __m128i *v29; // rdx
  const __m128i *v30; // r15
  __m128i *v31; // r11
  __int64 v32; // rax
  __m128i *v33; // rdx
  __m128i *v34; // rax
  __m128i v35; // xmm0
  _QWORD *v36; // rax
  size_t v37; // [rsp+10h] [rbp-88h]
  int v38; // [rsp+18h] [rbp-80h]
  __int64 v39[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = sub_9864A0((_QWORD *)a1, a2, a3);
  v7 = *(unsigned int *)(a1 + 256);
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 260) + *(_DWORD *)(a1 + 264))) )
  {
    v38 = 2 * v7;
    v37 = 24LL * (unsigned int)(2 * v7);
    v27 = (__m128i *)sub_186B270(v37);
    v28 = v38;
    v10 = v37;
    v8 = v27;
    v29 = (__m128i *)((char *)v27 + v37);
    if ( v38 )
    {
      do
      {
        v27->m128i_i64[0] = 0;
        v27 = (__m128i *)((char *)v27 + 24);
        v27[-1].m128i_i32[0] = -2;
      }
      while ( v27 != v29 );
    }
    v30 = *(const __m128i **)(a1 + 248);
    v9 = v38 - 1;
    v11 = (__m128i *)((char *)v8 + v37);
    v31 = (__m128i *)((char *)v30 + 24 * *(unsigned int *)(a1 + 256));
    if ( v30 != v31 )
    {
      do
      {
        while ( v30->m128i_i32[1] != 2 )
        {
          v30 = (const __m128i *)((char *)v30 + 24);
          if ( v31 == v30 )
            goto LABEL_43;
        }
        v32 = 24LL * (v30->m128i_i32[0] & v9);
        v33 = (__m128i *)((char *)v8 + v32);
        if ( v32 == v37 )
        {
LABEL_48:
          if ( v33 == v8 )
          {
LABEL_55:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v34 = v8;
          while ( v34->m128i_i32[1] )
          {
            v34 = (__m128i *)((char *)v34 + 24);
            if ( v33 == v34 )
              goto LABEL_55;
          }
        }
        else
        {
          v34 = (__m128i *)((char *)v8 + v32);
          while ( v34->m128i_i32[1] )
          {
            v34 = (__m128i *)((char *)v34 + 24);
            if ( v11 == v34 )
              goto LABEL_48;
          }
        }
        v35 = _mm_loadu_si128(v30);
        v30 = (const __m128i *)((char *)v30 + 24);
        *v34 = v35;
        v34[1].m128i_i64[0] = v30[-1].m128i_i64[1];
      }
      while ( v31 != v30 );
LABEL_43:
      v31 = *(__m128i **)(a1 + 248);
    }
    if ( v31 )
    {
      sub_186B220(v31);
      v28 = v38;
      v10 = v37;
      v9 = v38 - 1;
    }
    *(_QWORD *)(a1 + 248) = v8;
    *(_DWORD *)(a1 + 256) = v28;
    *(_DWORD *)(a1 + 264) = 0;
  }
  else
  {
    v8 = *(__m128i **)(a1 + 248);
    v9 = v7 - 1;
    v10 = 24 * v7;
    v11 = (__m128i *)((char *)v8 + 24 * v7);
  }
  v12 = a2 & v9;
  v13 = (__m128i *)((char *)v8 + 24 * v12);
  if ( 24 * v12 != v10 )
  {
    v14 = (__m128i *)((char *)v8 + 24 * v12);
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14->m128i_i32[1];
      if ( v16 == 2 )
      {
        if ( v14->m128i_i32[0] == a2 && v14->m128i_i32[2] == a2 )
        {
          v14->m128i_i32[2] = a2;
          v14[1].m128i_i64[0] = v6;
          v14->m128i_i32[1] = 2;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_21;
          v15 = v14;
          goto LABEL_22;
        }
        v15 = v14;
      }
      v14 = (__m128i *)((char *)v14 + 24);
      if ( v14 == v11 )
        goto LABEL_15;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v13 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v8->m128i_i32[1];
    if ( v17 != 2 )
      break;
    if ( v8->m128i_i32[0] == a2 && v8->m128i_i32[2] == a2 )
    {
      v8->m128i_i32[2] = a2;
      v8[1].m128i_i64[0] = v6;
      v8->m128i_i32[1] = 2;
      goto LABEL_23;
    }
LABEL_14:
    v8 = (__m128i *)((char *)v8 + 24);
  }
  if ( v17 )
  {
    v15 = v8;
    goto LABEL_14;
  }
  if ( v15 )
LABEL_21:
    --*(_DWORD *)(a1 + 264);
  else
    v15 = v8;
LABEL_22:
  v15->m128i_i32[2] = a2;
  v15[1].m128i_i64[0] = v6;
  v15->m128i_i32[1] = 2;
  v15->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 260);
LABEL_23:
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v18 = *(_QWORD **)(a1 + 296);
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v23 = (3 * v19 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v24 || v19 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v18 - 1, v24);
      v26 = v25[1];
      v18 = v25 + 2;
      *v25 = v23;
      *(_QWORD *)(a1 + 296) = v25 + 2;
      LODWORD(v25) = v26;
      v22 = &v18[v26];
      result = (unsigned int)((_DWORD)v25 + 1);
    }
    else
    {
      v20 = v19;
      result = v19 + 1;
      v22 = &v18[v20];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x18u);
    v18 = v36 + 1;
    *v36 = 2;
    result = 1;
    *(_QWORD *)(a1 + 296) = v18;
    v22 = v18;
  }
  *v22 = v6;
  *((_DWORD *)v18 - 1) = result;
  return result;
}

