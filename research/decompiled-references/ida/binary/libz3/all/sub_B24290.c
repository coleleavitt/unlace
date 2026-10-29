void __fastcall sub_B24290(__int64 a1, __int32 a2, __int64 a3)
{
  char **exception; // rbx
  _DWORD *v5; // rax
  __int64 v8; // r14
  int v9; // ecx
  __m128i *v10; // r15
  unsigned int v11; // edi
  int v12; // r9d
  size_t v13; // r14
  __m128i *v14; // r13
  __int64 v15; // rdi
  __m128i *v16; // rsi
  __m128i *i; // rax
  __int64 v18; // rdx
  __m128i *v19; // rax
  __m128i *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i *j; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  unsigned int v30; // ebp
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __m128i *v34; // rax
  int v35; // r8d
  __m128i *v36; // r9
  __m128i *v37; // rdi
  int v38; // r10d
  const __m128i *v39; // rcx
  const __m128i *v40; // r11
  __int64 v41; // rax
  __m128i *v42; // rdx
  __m128i *v43; // rax
  _QWORD *v44; // rdx
  int v45; // [rsp+10h] [rbp-78h]
  __int64 v46[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_WORD *)(a3 + 4) )
    return;
  v5 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v5 || *v5 != *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) || v5[1] > 1u )
    return;
  v8 = *(unsigned int *)(a1 + 152);
  v9 = *(_DWORD *)(a3 + 12);
  v10 = *(__m128i **)(a1 + 144);
  v11 = v8 - 1;
  v12 = *(_DWORD *)(a1 + 152);
  v13 = 16 * v8;
  v14 = &v10[v13 / 0x10];
  v15 = 16LL * (v9 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v13 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 0x10]; v14 != i; ++i )
    {
      v18 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a3 == v18 )
          return;
      }
      else if ( !v18 )
      {
        goto LABEL_14;
      }
    }
  }
  if ( v10 != v16 )
  {
    for ( j = *(__m128i **)(a1 + 144); v16 != j; ++j )
    {
      v24 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v24 + 12) == v9 && a3 == v24 )
          return;
      }
      else if ( !v24 )
      {
        break;
      }
    }
  }
LABEL_14:
  if ( 3 * v12 < (unsigned int)(4 * (*(_DWORD *)(a1 + 156) + *(_DWORD *)(a1 + 160))) )
  {
    v45 = 2 * v12;
    v13 = 16LL * (unsigned int)(2 * v12);
    v34 = (__m128i *)sub_186B270(v13);
    v35 = v45;
    v10 = v34;
    v36 = &v34[v13 / 0x10];
    if ( v45 )
    {
      do
      {
        v34->m128i_i64[0] = 0;
        ++v34;
        v34[-1].m128i_i32[2] = 0;
      }
      while ( v34 != v36 );
    }
    v37 = *(__m128i **)(a1 + 144);
    v38 = v45 - 1;
    v14 = v36;
    v39 = v37;
    v40 = &v37[*(unsigned int *)(a1 + 152)];
    if ( v37 != v40 )
    {
      do
      {
        if ( v39->m128i_i64[0] > 1uLL )
        {
          v41 = 16LL * (*(_DWORD *)(v39->m128i_i64[0] + 12) & (unsigned int)v38);
          v42 = &v10[(unsigned __int64)v41 / 0x10];
          if ( v13 == v41 )
          {
LABEL_57:
            if ( v10 == v42 )
            {
LABEL_69:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v43 = v10;
            while ( v43->m128i_i64[0] )
            {
              if ( v42 == ++v43 )
                goto LABEL_69;
            }
          }
          else
          {
            v43 = &v10[(unsigned __int64)v41 / 0x10];
            while ( v43->m128i_i64[0] )
            {
              if ( v36 == ++v43 )
                goto LABEL_57;
            }
          }
          *v43 = _mm_loadu_si128(v39);
        }
        ++v39;
      }
      while ( v40 != v39 );
      v37 = *(__m128i **)(a1 + 144);
    }
    if ( v37 )
    {
      sub_186B220(v37);
      v35 = v45;
      v38 = v45 - 1;
    }
    v9 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)(a1 + 144) = v10;
    *(_DWORD *)(a1 + 152) = v35;
    *(_DWORD *)(a1 + 160) = 0;
    v15 = 16LL * (v9 & (unsigned int)v38);
    v16 = &v10[(unsigned __int64)v15 / 0x10];
  }
  if ( v15 != v13 )
  {
    v19 = v16;
    v20 = nullptr;
    while ( 1 )
    {
      v21 = v19->m128i_i64[0];
      if ( v19->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v21 + 12) == v9 && a3 == v21 )
        {
          v19->m128i_i64[0] = a3;
          v19->m128i_i32[2] = a2;
          goto LABEL_39;
        }
      }
      else
      {
        if ( !v21 )
        {
          if ( v20 )
            goto LABEL_67;
          v20 = v19;
          goto LABEL_68;
        }
        v20 = v19;
      }
      if ( ++v19 == v14 )
        goto LABEL_26;
    }
  }
  v20 = nullptr;
  while ( 1 )
  {
LABEL_26:
    if ( v10 == v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v22 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v22 + 12) == v9 && a3 == v22 )
    {
      v10->m128i_i64[0] = a3;
      v10->m128i_i32[2] = a2;
      goto LABEL_39;
    }
LABEL_25:
    ++v10;
  }
  if ( v22 )
  {
    v20 = v10;
    goto LABEL_25;
  }
  if ( v20 )
LABEL_67:
    --*(_DWORD *)(a1 + 160);
  else
    v20 = v10;
LABEL_68:
  v20->m128i_i64[0] = a3;
  v20->m128i_i32[2] = a2;
  ++*(_DWORD *)(a1 + 156);
LABEL_39:
  v25 = *(_QWORD **)(a1 + 176);
  ++*(_DWORD *)(a3 + 8);
  if ( v25 )
  {
    v26 = *((_DWORD *)v25 - 1);
    if ( v26 == *((_DWORD *)v25 - 2) )
    {
      v30 = (3 * v26 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v26 + 8 >= v31 || v26 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v46, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v46);
        sub_233E40((__int64)v46);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v25 - 1, v31);
      v33 = v32[1];
      v25 = v32 + 2;
      *v32 = v30;
      *(_QWORD *)(a1 + 176) = v32 + 2;
      LODWORD(v32) = v33;
      v29 = &v25[v33];
      v28 = (_DWORD)v32 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v25[v27];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    *v44 = 2;
    v28 = 1;
    v25 = v44 + 1;
    *(_QWORD *)(a1 + 176) = v25;
    v29 = v25;
  }
  *v29 = a3;
  *((_DWORD *)v25 - 1) = v28;
}

