__int64 __fastcall sub_64A560(__int64 a1, __int64 a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rdx
  int v11; // ebx
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r12d
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 result; // rax
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rdx
  size_t v27; // r15
  __m128i *v28; // rax
  __m128i *v29; // r12
  __m128i *v30; // rdx
  const __m128i *v31; // rbx
  __m128i *v32; // r8
  __int64 v33; // rax
  __m128i *v34; // rdx
  __m128i *v35; // rax
  __m128i v36; // xmm0
  _QWORD *v37; // rax
  __int64 v38; // [rsp+0h] [rbp-58h]
  __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+8h] [rbp-50h]

  sub_62A000(*(_QWORD *)(a1 + 8), a2);
  v6 = *(_QWORD **)(a1 + 16);
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v23 = (3 * v7 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v24 || v7 >= v23 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v3 = (char *)operator new(0x2Bu);
        strcpy(v3, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v3;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v6 - 1, v24);
      v26 = v25[1];
      *v25 = v23;
      *(_QWORD *)(a1 + 16) = v25 + 2;
      *(_QWORD *)&v25[2 * v26 + 2] = a2;
      v25[1] = v26 + 1;
      if ( *(_DWORD *)(a2 + 56) )
        goto LABEL_5;
      goto LABEL_30;
    }
    v8 = v7;
    v9 = v7 + 1;
    v10 = &v6[v8];
  }
  else
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    v6 = v37 + 1;
    *v37 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 16) = v6;
    v10 = v6;
  }
  *v10 = a2;
  *((_DWORD *)v6 - 1) = v9;
  if ( !*(_DWORD *)(a2 + 56) )
LABEL_30:
    sub_649EC0(a1, a2);
LABEL_5:
  v11 = *(_DWORD *)(a1 + 56);
  v38 = a1 + 48;
  v12 = 2 * v11;
  if ( 3 * v11 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v27 = 16LL * v12;
    v28 = (__m128i *)sub_186B270(v27);
    v29 = v28;
    if ( v12 )
    {
      v30 = &v28[2 * (v11 & 0x7FFFFFFF)];
      do
      {
        v28->m128i_i64[0] = 0;
        v28 += 2;
        v28[-1].m128i_i64[0] = 0;
      }
      while ( v28 != v30 );
    }
    v31 = *(const __m128i **)(a1 + 48);
    v32 = (__m128i *)&v31[*(unsigned int *)(a1 + 56)];
    if ( v31 != v32 )
    {
      do
      {
        while ( v31->m128i_i32[1] != 2 )
        {
          if ( v32 == ++v31 )
            goto LABEL_44;
        }
        v33 = 16LL * (v31->m128i_i32[0] & (v12 - 1));
        v34 = &v29[(unsigned __int64)v33 / 0x10];
        if ( v27 == v33 )
        {
LABEL_48:
          if ( v29 == v34 )
          {
LABEL_54:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v35 = v29;
          while ( v35->m128i_i32[1] )
          {
            if ( v34 == ++v35 )
              goto LABEL_54;
          }
        }
        else
        {
          v35 = &v29[(unsigned __int64)v33 / 0x10];
          while ( v35->m128i_i32[1] )
          {
            if ( &v29[v27 / 0x10] == ++v35 )
              goto LABEL_48;
          }
        }
        v36 = _mm_loadu_si128(v31++);
        *v35 = v36;
      }
      while ( v32 != v31 );
LABEL_44:
      v32 = *(__m128i **)(a1 + 48);
    }
    if ( v32 )
      sub_186B220(v32);
    *(_QWORD *)(a1 + 48) = v29;
    *(_DWORD *)(a1 + 56) = v12;
    *(_DWORD *)(a1 + 64) = 0;
  }
  v13 = sub_62A680(v38, a2);
  v14 = *(_QWORD *)(a1 + 48);
  v15 = v13;
  v16 = *(unsigned int *)(a1 + 56);
  v17 = v16 - 1;
  v16 *= 16;
  v18 = v14 + v16;
  v19 = 16LL * (v15 & v17);
  v20 = v14 + v19;
  if ( v19 != v16 )
  {
    v14 += v19;
    v21 = 0;
    while ( 1 )
    {
      result = *(unsigned int *)(v14 + 4);
      if ( (_DWORD)result == 2 )
      {
        if ( v15 == *(_DWORD *)v14 )
        {
          v39 = v20;
          result = sub_62A560(v38, *(_QWORD *)(v14 + 8), a2);
          v20 = v39;
          if ( (_BYTE)result )
            goto LABEL_14;
        }
      }
      else
      {
        if ( !(_DWORD)result )
          goto LABEL_15;
        v21 = v14;
      }
      v14 += 16;
      if ( v18 == v14 )
      {
        v14 = *(_QWORD *)(a1 + 48);
        goto LABEL_22;
      }
    }
  }
  v21 = 0;
  while ( 1 )
  {
LABEL_22:
    if ( v20 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *(unsigned int *)(v14 + 4);
    if ( (_DWORD)result != 2 )
      break;
    if ( v15 == *(_DWORD *)v14 )
    {
      v40 = v20;
      result = sub_62A560(v38, *(_QWORD *)(v14 + 8), a2);
      v20 = v40;
      if ( (_BYTE)result )
      {
LABEL_14:
        *(_QWORD *)(v14 + 8) = a2;
        *(_DWORD *)(v14 + 4) = 2;
        return result;
      }
    }
LABEL_21:
    v14 += 16;
  }
  if ( (_DWORD)result )
  {
    v21 = v14;
    goto LABEL_21;
  }
LABEL_15:
  if ( v21 )
    --*(_DWORD *)(a1 + 64);
  else
    v21 = v14;
  *(_QWORD *)(v21 + 8) = a2;
  *(_DWORD *)(v21 + 4) = 2;
  *(_DWORD *)v21 = v15;
  ++*(_DWORD *)(a1 + 60);
  return result;
}

