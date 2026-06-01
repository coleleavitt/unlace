__m128i *__fastcall sub_A846A0(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 *v28; // r12
  unsigned __int64 *i; // rbp
  unsigned __int64 v30; // rsi
  unsigned int v33; // ecx
  size_t v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // xmm0_8
  __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rax
  char **exception; // r12
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __m128i v45; // [rsp+18h] [rbp-90h] BYREF
  int v46; // [rsp+2Ch] [rbp-7Ch]
  __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v49; // [rsp+48h] [rbp-60h] BYREF
  char *v50[11]; // [rsp+50h] [rbp-58h] BYREF

  v7 = (unsigned __int8)a5;
  v43 = *(_QWORD *)(a2 + 8);
  v8 = *a3;
  v9 = *((unsigned int *)a3 + 2);
  v45.m128i_i64[1] = a4;
  v46 = a5;
  v10 = v8 + 48 * v9;
  if ( v8 == v10 )
  {
    LODWORD(a4) = *(_DWORD *)a4;
    if ( !(_DWORD)a4 )
    {
LABEL_48:
      v25.m128i_i64[0] = v43;
      v12 = nullptr;
      goto LABEL_49;
    }
LABEL_56:
    v12 = nullptr;
LABEL_57:
    v39 = *(_QWORD *)(a2 + 24);
    if ( !v39 )
    {
      sub_16669E0(a2 + 16);
      v39 = *(_QWORD *)(a2 + 24);
    }
    v40 = sub_166A700(v39, v45.m128i_i32[2], (unsigned __int8)v46, a4, a5, a6);
    v50[0] = (char *)v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    v49 = v12;
    v48 = v43;
    sub_A74DF0(&v49, v50);
    v12 = v49;
    v43 = v48;
  }
  else
  {
    while ( 1 )
    {
      v11 = v8;
      if ( *(_DWORD *)(v8 + 4) == 2 )
        break;
      v8 += 48;
      if ( v10 == v8 )
        goto LABEL_47;
    }
    if ( v10 == v8 )
    {
LABEL_47:
      if ( *(_DWORD *)v45.m128i_i64[1] )
        goto LABEL_56;
      goto LABEL_48;
    }
    v12 = nullptr;
    do
    {
      v13 = *(_DWORD *)(v11 + 16);
      if ( v13 )
      {
        v14 = *(unsigned int *)(v11 + 8);
        v15 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8 * v14);
        v16 = *v15;
        if ( (*(_BYTE *)(v11 + 20) & 1) != 0
          || v13 != 1
          || (*(_BYTE *)(v11 + 36) & 1) != 0
          || *(_DWORD *)(v11 + 32) != 1 )
        {
          v17 = *(_QWORD *)(a2 + 24);
          v18 = v11 + 16;
          if ( !v17 )
          {
            v45.m128i_i64[0] = v11 + 16;
            sub_16669E0(a2 + 16);
            v17 = *(_QWORD *)(a2 + 24);
            v18 = v11 + 16;
          }
          sub_166A700(v17, v18, v7, v14, a5, a6);
          v19 = sub_15E1B70(*(_QWORD *)(a2 + 16));
          v20 = v19;
          if ( v19 )
            ++*(_DWORD *)(v19 + 8);
          if ( v12 )
          {
            v21 = *((_DWORD *)v12 - 1);
            if ( v21 == *((_DWORD *)v12 - 2) )
            {
              v33 = (3 * v21 + 1) >> 1;
              v34 = 8 * v33 + 8;
              if ( 8 * v21 + 8 >= (unsigned int)v34 || v21 >= v33 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_137C7A(v50);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v50);
                sub_233E40((__int64)v50);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v45.m128i_i32[0] = (3 * v21 + 1) >> 1;
              v35 = sub_186B300(v12 - 1, v34);
              v12 = (unsigned __int64 *)(v35 + 8);
              *(_DWORD *)v35 = v45.m128i_i32[0];
              LODWORD(v35) = *(_DWORD *)(v35 + 4);
              a4 = (__int64)&v12[(unsigned int)v35];
              v23 = v35 + 1;
            }
            else
            {
              v22 = v21;
              v23 = v21 + 1;
              a4 = (__int64)&v12[v22];
            }
          }
          else
          {
            v41 = (_QWORD *)sub_186B270(0x18u);
            v12 = v41 + 1;
            *v41 = 2;
            v23 = 1;
            a4 = (__int64)v12;
          }
          *(_QWORD *)a4 = v20;
          *((_DWORD *)v12 - 1) = v23;
        }
        else
        {
          v47 = *v15;
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v49 = v12;
          v48 = v43;
          sub_A74DF0(&v49, &v47);
          v12 = v49;
          v43 = v48;
        }
      }
      v24 = v11 + 48;
      if ( v10 == v11 + 48 )
        break;
      while ( 1 )
      {
        v11 = v24;
        if ( *(_DWORD *)(v24 + 4) == 2 )
          break;
        v24 += 48;
        if ( v10 == v24 )
          goto LABEL_23;
      }
    }
    while ( v24 != v10 );
LABEL_23:
    if ( *(_DWORD *)v45.m128i_i64[1] )
      goto LABEL_57;
  }
  v25 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  if ( !v12 || (a4 = *((unsigned int *)v12 - 1), !(_DWORD)a4) )
  {
LABEL_49:
    v36 = *(_QWORD *)(a2 + 24);
    if ( !v36 )
    {
      v45.m128i_i64[0] = v25.m128i_i64[0];
      sub_16669E0(a2 + 16);
      v36 = *(_QWORD *)(a2 + 24);
    }
    v45.m128i_i64[0] = v25.m128i_i64[0];
    v37 = sub_166A700(v36, (unsigned int)&qword_1C7F2A0, (unsigned __int8)v46, a4, a5, a6);
    v38 = v45.m128i_i64[0];
    a1->m128i_i64[0] = v37;
    a1->m128i_i64[1] = v38;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    if ( !v12 )
      return a1;
    goto LABEL_54;
  }
  if ( (_DWORD)a4 == 1 )
  {
    v27 = *v12;
    *a1 = _mm_unpacklo_epi64((__m128i)*v12, v25);
    if ( !v27 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v26 = *(_QWORD *)(a2 + 16);
  v45.m128i_i64[0] = v25.m128i_i64[0];
  v27 = sub_15E1AF0(v26);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, _mm_loadl_epi64(&v45));
  if ( !v27 )
  {
LABEL_54:
    a4 = *((unsigned int *)v12 - 1);
    goto LABEL_29;
  }
LABEL_28:
  ++*(_DWORD *)(v27 + 8);
  a4 = *((unsigned int *)v12 - 1);
LABEL_29:
  v28 = &v12[a4];
  for ( i = v12; i < v28; ++i )
  {
    while ( 1 )
    {
      v30 = *i;
      if ( *i )
      {
        if ( (*(_DWORD *)(v30 + 8))-- == 1 )
          break;
      }
      if ( ++i >= v28 )
        goto LABEL_35;
    }
    sub_15D7BC0(v43, v30);
  }
LABEL_35:
  sub_186B220(v12 - 1);
  return a1;
}

