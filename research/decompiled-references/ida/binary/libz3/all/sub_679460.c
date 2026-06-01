__int64 __fastcall sub_679460(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // ecx
  __m128i *v6; // rbp
  unsigned int v7; // edi
  int v8; // r9d
  size_t v9; // r14
  __m128i *v10; // rbx
  __int64 v11; // rdi
  __m128i *v12; // rsi
  __m128i *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  __m128i *v17; // rax
  __m128i *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  _OWORD *v25; // rax
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
  __m128i *v36; // r10
  const __m128i *v37; // rcx
  int v38; // r9d
  __m128i *v39; // r11
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax
  _QWORD *v43; // rdx
  char **exception; // rbx
  __int64 v45; // rdx
  int v46; // [rsp+10h] [rbp-68h]
  __int64 v47[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 152);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(__m128i **)(a1 + 144);
  v7 = v4 - 1;
  v8 = v4;
  v9 = 16 * v4;
  v10 = &v6[v9 / 0x10];
  v11 = 16LL * (v5 & v7);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v9 )
  {
    for ( i = &v6[(unsigned __int64)v11 / 0x10]; v10 != i; ++i )
    {
      v14 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v14 + 12) == v5 && a2 == v14 )
        {
LABEL_19:
          v20 = *(_QWORD **)(a1 + 168);
          v16 = i->m128i_u32[2];
          return v20[v16];
        }
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v12 )
  {
    for ( i = v6; v12 != i; ++i )
    {
      v22 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v22 + 12) == v5 && a2 == v22 )
          goto LABEL_19;
      }
      else if ( !v22 )
      {
        break;
      }
    }
  }
LABEL_8:
  v15 = *(_QWORD *)(a1 + 168);
  if ( v15 )
    v16 = *(unsigned int *)(v15 - 4);
  else
    v16 = 0;
  if ( 3 * v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 156) + *(_DWORD *)(a1 + 160))) )
  {
    v46 = 2 * v8;
    v9 = 16LL * (unsigned int)(2 * v8);
    v34 = (__m128i *)sub_186B270(v9);
    v35 = v46;
    v6 = v34;
    v36 = &v34[v9 / 0x10];
    if ( v46 )
    {
      do
      {
        v34->m128i_i64[0] = 0;
        ++v34;
        v34[-1].m128i_i32[2] = 0;
      }
      while ( v34 != v36 );
    }
    v37 = *(const __m128i **)(a1 + 144);
    v38 = v46 - 1;
    v10 = v36;
    v39 = (__m128i *)&v37[*(unsigned int *)(a1 + 152)];
    if ( v37 != v39 )
    {
      do
      {
        if ( v37->m128i_i64[0] > 1uLL )
        {
          v40 = 16LL * (*(_DWORD *)(v37->m128i_i64[0] + 12) & (unsigned int)v38);
          v41 = &v6[(unsigned __int64)v40 / 0x10];
          if ( v9 == v40 )
          {
LABEL_55:
            if ( v6 == v41 )
            {
LABEL_67:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v42 = v6;
            while ( v42->m128i_i64[0] )
            {
              if ( v41 == ++v42 )
                goto LABEL_67;
            }
          }
          else
          {
            v42 = &v6[(unsigned __int64)v40 / 0x10];
            while ( v42->m128i_i64[0] )
            {
              if ( v36 == ++v42 )
                goto LABEL_55;
            }
          }
          *v42 = _mm_loadu_si128(v37);
        }
        ++v37;
      }
      while ( v39 != v37 );
      v39 = *(__m128i **)(a1 + 144);
    }
    if ( v39 )
    {
      sub_186B220(v39);
      v35 = v46;
      v38 = v46 - 1;
    }
    v5 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 144) = v6;
    *(_DWORD *)(a1 + 152) = v35;
    *(_DWORD *)(a1 + 160) = 0;
    v11 = 16LL * (v5 & (unsigned int)v38);
    v12 = &v6[(unsigned __int64)v11 / 0x10];
  }
  if ( v11 != v9 )
  {
    v17 = v12;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v5 && a2 == v19 )
        {
          v17->m128i_i64[0] = a2;
          v17->m128i_i32[2] = v16;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_65;
          v18 = v17;
          goto LABEL_66;
        }
        v18 = v17;
      }
      if ( ++v17 == v10 )
        goto LABEL_32;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v6 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v23 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v23 + 12) == v5 && a2 == v23 )
    {
      v6->m128i_i64[0] = a2;
      v6->m128i_i32[2] = v16;
      goto LABEL_37;
    }
LABEL_31:
    ++v6;
  }
  if ( v23 )
  {
    v18 = v6;
    goto LABEL_31;
  }
  if ( v18 )
LABEL_65:
    --*(_DWORD *)(a1 + 160);
  else
    v18 = v6;
LABEL_66:
  v18->m128i_i64[0] = a2;
  v18->m128i_i32[2] = v16;
  ++*(_DWORD *)(a1 + 156);
LABEL_37:
  v24 = sub_186B270(0x18u);
  v25 = (_OWORD *)sub_186B270(0x80u);
  v20 = *(_QWORD **)(a1 + 168);
  *(_QWORD *)(v24 + 8) = 8;
  *(_QWORD *)v24 = v25;
  *(_DWORD *)(v24 + 16) = 0;
  *v25 = 0;
  v25[1] = 0;
  v25[2] = 0;
  v25[3] = 0;
  v25[4] = 0;
  v25[5] = 0;
  v25[6] = 0;
  v25[7] = 0;
  if ( v20 )
  {
    v26 = *((_DWORD *)v20 - 1);
    if ( v26 == *((_DWORD *)v20 - 2) )
    {
      v30 = (3 * v26 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v26 + 8 >= v31 || v26 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6(v47, "Overflow encountered when expanding vector", v45);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v20 - 1, v31);
      v33 = v32[1];
      v20 = v32 + 2;
      *v32 = v30;
      *(_QWORD *)(a1 + 168) = v32 + 2;
      LODWORD(v32) = v33;
      v29 = &v20[v33];
      v28 = (_DWORD)v32 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v20[v27];
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    *v43 = 2;
    v28 = 1;
    v20 = v43 + 1;
    *(_QWORD *)(a1 + 168) = v20;
    v29 = v20;
  }
  *v29 = v24;
  *((_DWORD *)v20 - 1) = v28;
  return v20[v16];
}

