__int64 __fastcall sub_979FE0(__int64 a1, _DWORD *a2)
{
  char **exception; // rbx
  __int64 v5; // r15
  __m128i *v6; // rbp
  __int64 v7; // r12
  unsigned int v8; // edi
  int v9; // r10d
  size_t v10; // r15
  __m128i *v11; // rbx
  int v12; // ecx
  __int64 v13; // rdi
  __m128i *v14; // rsi
  __m128i *i; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int32 v18; // r8d
  int v19; // r11d
  __m128i *v20; // rax
  __m128i *v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rax
  unsigned int v32; // ebp
  unsigned int v33; // ecx
  unsigned int *v34; // rax
  _DWORD *v35; // rdx
  __int64 v36; // rax
  __m128i *v37; // rax
  int v38; // r9d
  __m128i *v39; // rcx
  const __m128i *v40; // rax
  int v41; // r10d
  __m128i *v42; // r11
  __int64 v43; // rdx
  __m128i *v44; // rsi
  __m128i *v45; // rdx
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-8Ch]
  int v48; // [rsp+Ch] [rbp-8Ch]
  int v49; // [rsp+10h] [rbp-88h]
  __int64 v50[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a1 + 32);
  v6 = *(__m128i **)(a1 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v8 = v5 - 1;
  v9 = v5;
  v10 = 16 * v5;
  v11 = &v6[v10 / 0x10];
  v12 = *(_DWORD *)(v7 + 12);
  v13 = 16LL * (v12 & v8);
  v14 = &v6[(unsigned __int64)v13 / 0x10];
  if ( v13 != v10 )
  {
    for ( i = &v6[(unsigned __int64)v13 / 0x10]; v11 != i; ++i )
    {
      v16 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v12 && v7 == v16 )
        {
LABEL_19:
          v23 = i->m128i_u32[2];
          goto LABEL_20;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v14 )
  {
    for ( i = v6; v14 != i; ++i )
    {
      v25 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v25 + 12) == v12 && v7 == v25 )
          goto LABEL_19;
      }
      else if ( !v25 )
      {
        break;
      }
    }
  }
LABEL_8:
  v17 = *(_QWORD *)(a1 + 16);
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4);
  else
    v18 = 0;
  v19 = *(_DWORD *)(a1 + 40);
  if ( 3 * v9 < (unsigned int)(4 * (v19 + *(_DWORD *)(a1 + 36))) )
  {
    v49 = v18;
    v10 = 16LL * (unsigned int)(2 * v9);
    v48 = 2 * v9;
    v37 = (__m128i *)sub_186B270(v10);
    v38 = v48;
    v18 = v49;
    v6 = v37;
    v39 = &v37[v10 / 0x10];
    if ( v48 )
    {
      do
      {
        v37->m128i_i64[0] = 0;
        ++v37;
        v37[-1].m128i_i32[2] = 0;
      }
      while ( v37 != v39 );
    }
    v40 = *(const __m128i **)(a1 + 24);
    v41 = v48 - 1;
    v11 = v39;
    v42 = (__m128i *)&v40[*(unsigned int *)(a1 + 32)];
    if ( v40 != v42 )
    {
      do
      {
        if ( v40->m128i_i64[0] > 1uLL )
        {
          v43 = 16LL * (*(_DWORD *)(v40->m128i_i64[0] + 12) & (unsigned int)v41);
          v44 = &v6[(unsigned __int64)v43 / 0x10];
          if ( v10 == v43 )
          {
LABEL_55:
            if ( v6 == v44 )
            {
LABEL_67:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v45 = v6;
            while ( v45->m128i_i64[0] )
            {
              if ( v44 == ++v45 )
                goto LABEL_67;
            }
          }
          else
          {
            v45 = &v6[(unsigned __int64)v43 / 0x10];
            while ( v45->m128i_i64[0] )
            {
              if ( v39 == ++v45 )
                goto LABEL_55;
            }
          }
          *v45 = _mm_loadu_si128(v40);
        }
        ++v40;
      }
      while ( v42 != v40 );
      v42 = *(__m128i **)(a1 + 24);
    }
    if ( v42 )
    {
      sub_186B220(v42);
      v38 = v48;
      v18 = v49;
      v41 = v48 - 1;
    }
    v12 = *(_DWORD *)(v7 + 12);
    *(_QWORD *)(a1 + 24) = v6;
    v19 = 0;
    *(_DWORD *)(a1 + 32) = v38;
    *(_DWORD *)(a1 + 40) = 0;
    v13 = 16LL * (v12 & (unsigned int)v41);
    v14 = &v6[(unsigned __int64)v13 / 0x10];
  }
  if ( v13 != v10 )
  {
    v20 = v14;
    v21 = nullptr;
    while ( 1 )
    {
      v22 = v20->m128i_i64[0];
      if ( v20->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v22 + 12) == v12 && v7 == v22 )
        {
          v20->m128i_i64[0] = v7;
          v20->m128i_i32[2] = v18;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v22 )
        {
          if ( v21 )
            goto LABEL_65;
          v21 = v20;
          goto LABEL_66;
        }
        v21 = v20;
      }
      if ( ++v20 == v11 )
        goto LABEL_32;
    }
  }
  v21 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v6 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v26 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v26 + 12) == v12 && v7 == v26 )
    {
      v6->m128i_i64[0] = v7;
      v6->m128i_i32[2] = v18;
      goto LABEL_37;
    }
LABEL_31:
    ++v6;
  }
  if ( v26 )
  {
    v21 = v6;
    goto LABEL_31;
  }
  if ( v21 )
LABEL_65:
    *(_DWORD *)(a1 + 40) = v19 - 1;
  else
    v21 = v6;
LABEL_66:
  v21->m128i_i64[0] = v7;
  v21->m128i_i32[2] = v18;
  ++*(_DWORD *)(a1 + 36);
LABEL_37:
  ++*(_DWORD *)(v7 + 8);
  v47 = v18;
  v27 = sub_979400(a1, v7);
  v23 = v47;
  v28 = v27;
  v29 = *(_QWORD *)(a1 + 16);
  if ( v29 )
  {
    v30 = *(unsigned int *)(v29 - 4);
    if ( (_DWORD)v30 == *(_DWORD *)(v29 - 8) )
    {
      v32 = (unsigned int)(3 * v30 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * (int)v30 + 8 >= v33 || (unsigned int)v30 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300((void *)(v29 - 8), v33);
      v23 = v47;
      v35 = v34 + 2;
      *v34 = v32;
      v36 = v34[1];
      *(_QWORD *)(a1 + 16) = v35;
      v31 = (__int64 *)&v35[2 * v36];
    }
    else
    {
      v31 = (__int64 *)(v29 + 8 * v30);
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v23 = v47;
    *v46 = 2;
    v31 = v46 + 1;
    *(_QWORD *)(a1 + 16) = v31;
  }
  *v31 = v28;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 16) - 4LL);
LABEL_20:
  a2[10] = v23;
  return v23;
}

