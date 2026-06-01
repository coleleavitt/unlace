__int64 __fastcall sub_54E2F0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v5; // r13d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  unsigned int *v8; // rax
  __int64 v9; // rcx
  __m128i *v10; // rbx
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __m128i *v13; // r14
  int v14; // esi
  __int64 v15; // r10
  __m128i *v16; // rdi
  __m128i *v17; // rax
  __m128i *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rax
  unsigned int v22; // ebx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rax
  int v27; // r9d
  __m128i *v28; // r8
  const __m128i *v29; // r15
  __m128i *v30; // r11
  __int64 v31; // rax
  __m128i *v32; // rdx
  __m128i *v33; // rax
  __m128i v34; // xmm0
  _QWORD *v35; // rax
  size_t v36; // [rsp+8h] [rbp-90h]
  unsigned int v37; // [rsp+8h] [rbp-90h]
  int v38; // [rsp+10h] [rbp-88h]
  size_t v39; // [rsp+10h] [rbp-88h]
  int v40; // [rsp+18h] [rbp-80h]
  __int64 v41[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = v5 + 2;
  v6 = *(_QWORD **)(a1 + 224);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v22 = (unsigned int)(3 * v7 + 1) >> 1;
      v23 = 4 * v22 + 8;
      if ( 4 * (int)v7 + 8 >= (unsigned int)v23 || (unsigned int)v7 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v6 - 1, v23);
      v6 = v24 + 2;
      *v24 = v22;
      v25 = v24[1];
      *(_QWORD *)(a1 + 224) = v6;
      v8 = (unsigned int *)v6 + v25;
    }
    else
    {
      v8 = (unsigned int *)v6 + v7;
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x10u);
    v6 = v35 + 1;
    *v35 = 2;
    *(_QWORD *)(a1 + 224) = v35 + 1;
    v8 = (unsigned int *)(v35 + 1);
  }
  *v8 = v5;
  ++*((_DWORD *)v6 - 1);
  if ( !a2 )
    return v5;
  v9 = *(unsigned int *)(a1 + 80);
  if ( 3 * (int)v9 < (unsigned int)(4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88))) )
  {
    v38 = 2 * v9;
    v36 = 16LL * (unsigned int)(2 * v9);
    v26 = (__m128i *)sub_186B270(v36);
    v12 = v36;
    v27 = v38;
    v10 = v26;
    v28 = &v26[v36 / 0x10];
    if ( v38 )
    {
      do
      {
        v26->m128i_i64[0] = 0;
        ++v26;
        v26[-1].m128i_i32[2] = 0;
      }
      while ( v26 != v28 );
    }
    v29 = *(const __m128i **)(a1 + 72);
    v11 = v38 - 1;
    v13 = v28;
    v30 = (__m128i *)&v29[*(unsigned int *)(a1 + 80)];
    if ( v29 != v30 )
    {
      do
      {
        while ( v29->m128i_i64[0] <= 1uLL )
        {
          if ( v30 == ++v29 )
            goto LABEL_40;
        }
        v31 = 16LL * (*(_DWORD *)(v29->m128i_i64[0] + 12) & v11);
        v32 = &v10[(unsigned __int64)v31 / 0x10];
        if ( v36 == v31 )
        {
LABEL_44:
          if ( v10 == v32 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v33 = v10;
          while ( v33->m128i_i64[0] )
          {
            if ( v32 == ++v33 )
              goto LABEL_50;
          }
        }
        else
        {
          v33 = &v10[(unsigned __int64)v31 / 0x10];
          while ( v33->m128i_i64[0] )
          {
            if ( v28 == ++v33 )
              goto LABEL_44;
          }
        }
        v34 = _mm_loadu_si128(v29++);
        *v33 = v34;
      }
      while ( v30 != v29 );
LABEL_40:
      v30 = *(__m128i **)(a1 + 72);
    }
    if ( v30 )
    {
      v40 = v38;
      v39 = v36;
      v37 = v27 - 1;
      sub_186B220(v30);
      v27 = v40;
      v12 = v39;
      v11 = v37;
    }
    *(_QWORD *)(a1 + 72) = v10;
    *(_DWORD *)(a1 + 80) = v27;
    *(_DWORD *)(a1 + 88) = 0;
  }
  else
  {
    v10 = *(__m128i **)(a1 + 72);
    v11 = v9 - 1;
    v12 = 16 * v9;
    v13 = (__m128i *)((char *)v10 + v12);
  }
  v14 = *(_DWORD *)(a2 + 12);
  v15 = 16LL * (v14 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v12 )
  {
    v17 = &v10[(unsigned __int64)v15 / 0x10];
    v18 = nullptr;
    while ( 1 )
    {
      v19 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v14 && a2 == v19 )
        {
          v17->m128i_i64[0] = a2;
          v17->m128i_i32[2] = v5;
          return v5;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_16;
          v18 = v17;
          goto LABEL_17;
        }
        v18 = v17;
      }
      if ( ++v17 == v13 )
        goto LABEL_22;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_22:
    if ( v16 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v21 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v21 + 12) == v14 && a2 == v21 )
    {
      v10->m128i_i64[0] = a2;
      v10->m128i_i32[2] = v5;
      return v5;
    }
LABEL_21:
    ++v10;
  }
  if ( v21 )
  {
    v18 = v10;
    goto LABEL_21;
  }
  if ( v18 )
LABEL_16:
    --*(_DWORD *)(a1 + 88);
  else
    v18 = v10;
LABEL_17:
  v18->m128i_i64[0] = a2;
  v18->m128i_i32[2] = v5;
  ++*(_DWORD *)(a1 + 84);
  return v5;
}

