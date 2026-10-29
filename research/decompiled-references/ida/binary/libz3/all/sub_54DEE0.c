__int64 __fastcall sub_54DEE0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  char *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // r8
  char *i; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned int v18; // edx
  __m128i *v19; // r12
  int v20; // r10d
  size_t v21; // r15
  __m128i *v22; // r13
  int v23; // ecx
  __int64 v24; // r10
  __m128i *v25; // rdi
  __m128i *v26; // rax
  __m128i *v27; // rsi
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r12d
  unsigned int v33; // ecx
  unsigned int *v34; // rax
  __int64 v35; // rax
  __m128i *v36; // rax
  int v37; // r9d
  __m128i *v38; // r8
  const __m128i *v39; // rcx
  __m128i *v40; // r11
  __int64 v41; // rax
  __m128i *v42; // rdx
  __m128i *v43; // rax
  _QWORD *v44; // rax
  int v45; // [rsp+0h] [rbp-88h]
  __int64 v46[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a1 + 80);
  v6 = *(char **)(a1 + 72);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = &v6[v5];
  v10 = 16LL * (v7 & v8);
  v11 = &v6[v10];
  if ( v10 != v5 )
  {
    for ( i = &v6[v10]; v9 != i; i += 16 )
    {
      v13 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && a2 == v13 )
          return *((unsigned int *)i + 2);
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v6; v6 += 16 )
  {
    v30 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 > 1u )
    {
      if ( *(_DWORD *)(v30 + 12) == v7 && a2 == v30 )
      {
        i = v6;
        return *((unsigned int *)i + 2);
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_8:
  v14 = *(_DWORD *)(a1 + 96);
  v15 = *(_QWORD **)(a1 + 224);
  *(_DWORD *)(a1 + 96) = v14 + 2;
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
    {
      v32 = (unsigned int)(3 * v16 + 1) >> 1;
      v33 = 4 * v32 + 8;
      if ( 4 * (int)v16 + 8 >= v33 || (unsigned int)v16 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v46, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v46);
        sub_233E40((__int64)v46);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v15 - 1, v33);
      v15 = v34 + 2;
      *v34 = v32;
      v35 = v34[1];
      *(_QWORD *)(a1 + 224) = v15;
      v17 = (unsigned int *)v15 + v35;
    }
    else
    {
      v17 = (unsigned int *)v15 + v16;
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x10u);
    *v44 = 2;
    v15 = v44 + 1;
    *(_QWORD *)(a1 + 224) = v44 + 1;
    v17 = (unsigned int *)(v44 + 1);
  }
  *v17 = v14;
  ++*((_DWORD *)v15 - 1);
  v18 = *(_DWORD *)(a1 + 80);
  if ( 3 * v18 < 4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88)) )
  {
    v45 = 2 * v18;
    v21 = 32LL * v18;
    v36 = (__m128i *)sub_186B270(v21);
    v37 = v45;
    v19 = v36;
    v38 = &v36[v21 / 0x10];
    if ( v45 )
    {
      do
      {
        v36->m128i_i64[0] = 0;
        ++v36;
        v36[-1].m128i_i32[2] = 0;
      }
      while ( v36 != v38 );
    }
    v39 = *(const __m128i **)(a1 + 72);
    v20 = v45 - 1;
    v22 = v38;
    v40 = (__m128i *)&v39[*(unsigned int *)(a1 + 80)];
    if ( v39 != v40 )
    {
      do
      {
        if ( v39->m128i_i64[0] > 1uLL )
        {
          v41 = 16LL * (*(_DWORD *)(v39->m128i_i64[0] + 12) & (unsigned int)v20);
          v42 = &v19[(unsigned __int64)v41 / 0x10];
          if ( v21 == v41 )
          {
LABEL_57:
            if ( v19 == v42 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v43 = v19;
            while ( v43->m128i_i64[0] )
            {
              if ( v42 == ++v43 )
                goto LABEL_66;
            }
          }
          else
          {
            v43 = &v19[(unsigned __int64)v41 / 0x10];
            while ( v43->m128i_i64[0] )
            {
              if ( v38 == ++v43 )
                goto LABEL_57;
            }
          }
          *v43 = _mm_loadu_si128(v39);
        }
        ++v39;
      }
      while ( v40 != v39 );
      v40 = *(__m128i **)(a1 + 72);
    }
    if ( v40 )
    {
      sub_186B220(v40);
      v37 = v45;
      v20 = v45 - 1;
    }
    *(_QWORD *)(a1 + 72) = v19;
    *(_DWORD *)(a1 + 80) = v37;
    *(_DWORD *)(a1 + 88) = 0;
  }
  else
  {
    v19 = *(__m128i **)(a1 + 72);
    v20 = v18 - 1;
    v21 = 16LL * v18;
    v22 = &v19[v21 / 0x10];
  }
  v23 = *(_DWORD *)(a2 + 12);
  v24 = 16LL * (v23 & (unsigned int)v20);
  v25 = &v19[(unsigned __int64)v24 / 0x10];
  if ( v24 != v21 )
  {
    v26 = &v19[(unsigned __int64)v24 / 0x10];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = v26->m128i_i64[0];
      if ( v26->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a2 == v28 )
        {
          v26->m128i_i64[0] = a2;
          v26->m128i_i32[2] = v14;
          return v14;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_64;
          v27 = v26;
          goto LABEL_65;
        }
        v27 = v26;
      }
      if ( ++v26 == v22 )
        goto LABEL_35;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = v19->m128i_i64[0];
    if ( v19->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v31 + 12) == v23 && a2 == v31 )
    {
      v19->m128i_i64[0] = a2;
      v19->m128i_i32[2] = v14;
      return v14;
    }
LABEL_34:
    ++v19;
  }
  if ( v31 )
  {
    v27 = v19;
    goto LABEL_34;
  }
  if ( v27 )
LABEL_64:
    --*(_DWORD *)(a1 + 88);
  else
    v27 = v19;
LABEL_65:
  v27->m128i_i64[0] = a2;
  v27->m128i_i32[2] = v14;
  ++*(_DWORD *)(a1 + 84);
  return v14;
}

