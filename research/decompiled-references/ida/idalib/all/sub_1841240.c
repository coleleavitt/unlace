__int64 __fastcall sub_1841240(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  int *v5; // rcx
  unsigned int v6; // r15d
  int *i; // r12
  int *v8; // rax
  char v9; // dl
  unsigned int v10; // esi
  _BOOL4 v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // r12
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // rdx
  size_t v24; // r8
  char *v25; // rsi
  void *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  char *v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __m128i *v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  int *v37; // r15
  int *v38; // rbp
  __int64 v40; // rax
  char *v41; // rdi
  __int64 v42; // [rsp+8h] [rbp-F0h]
  _BOOL4 v43; // [rsp+10h] [rbp-E8h]
  int *v44; // [rsp+10h] [rbp-E8h]
  __int64 *v45; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v48; // [rsp+48h] [rbp-B0h] BYREF
  void *v49[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-98h] BYREF
  void *src; // [rsp+70h] [rbp-88h] BYREF
  size_t n; // [rsp+78h] [rbp-80h]
  __m128i v53; // [rsp+80h] [rbp-78h] BYREF
  char v54[8]; // [rsp+90h] [rbp-68h] BYREF
  int v55; // [rsp+98h] [rbp-60h] BYREF
  int *v56; // [rsp+A0h] [rbp-58h]
  int *v57; // [rsp+A8h] [rbp-50h]
  int *v58; // [rsp+B0h] [rbp-48h]
  __int64 v59; // [rsp+B8h] [rbp-40h]

  *(_QWORD *)a1 = a1 + 16;
  v42 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  v4 = a3[1];
  v57 = &v55;
  v58 = &v55;
  *(_QWORD *)(a1 + 8) = 0;
  v55 = 0;
  v56 = nullptr;
  v59 = 0;
  v45 = a3 + 1;
  if ( (__int64 *)v4 == a3 + 1 )
    return a1;
  v5 = nullptr;
  do
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 24LL * *(unsigned int *)(v4 + 24) - 8);
    if ( !v5 )
    {
      i = &v55;
      if ( v57 == &v55 )
      {
        v11 = 1;
        goto LABEL_13;
      }
      goto LABEL_51;
    }
    for ( i = v5; ; i = v8 )
    {
      v10 = i[8];
      if ( v6 >= v10 )
        break;
      v8 = *((int **)i + 2);
      v9 = 1;
      if ( !v8 )
        goto LABEL_9;
LABEL_6:
      ;
    }
    v8 = *((int **)i + 3);
    v9 = 0;
    if ( v8 )
      goto LABEL_6;
LABEL_9:
    if ( v9 )
    {
      if ( v57 == i )
        goto LABEL_11;
LABEL_51:
      v44 = v5;
      v40 = std::_Rb_tree_decrement(i);
      v5 = v44;
      if ( v6 > *(_DWORD *)(v40 + 32) && i )
        goto LABEL_11;
      goto LABEL_46;
    }
    if ( v6 > v10 )
    {
LABEL_11:
      v11 = 1;
      if ( i != &v55 )
        v11 = v6 < i[8];
LABEL_13:
      v43 = v11;
      v12 = operator new(0x28u);
      *(_DWORD *)(v12 + 32) = v6;
      std::_Rb_tree_insert_and_rebalance(v43, v12, i, &v55);
      v16 = *(_QWORD *)(a1 + 8);
      ++v59;
      if ( 0x7FFFFFFFFFFFFFFFLL - v16 <= 4 )
        std::__throw_length_error("basic_string::append");
      v17 = v16 + 5;
      if ( v42 == *(_QWORD *)a1 )
        v18 = 15;
      else
        v18 = *(_QWORD *)(a1 + 16);
      if ( v17 > v18 )
      {
        sub_998B30(a1, v16, 0, "\n    ", 5u);
      }
      else
      {
        v19 = v16 + *(_QWORD *)a1;
        *(_DWORD *)v19 = 538976266;
        *(_BYTE *)(v19 + 4) = 32;
      }
      v20 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = v17;
      *(_BYTE *)(v20 + v16 + 5) = 0;
      v21 = *(_QWORD *)(*a3 + 48);
      if ( v21 )
        v22 = (void *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
      else
        v22 = (void *)sub_A7AA70(*(_QWORD *)(a2 + 248), *a3, v18, v13, v14, v15);
      v49[0] = v22;
      sub_F78400((__int64)&src, (__int64 *)v49);
      v24 = n;
      v25 = *(char **)(a1 + 8);
      v26 = src;
      v27 = *(_QWORD *)a1;
      v28 = (unsigned __int64)&v25[n];
      if ( v42 == *(_QWORD *)a1 )
        v29 = 15;
      else
        v29 = *(_QWORD *)(a1 + 16);
      if ( v28 > v29 )
      {
        sub_998B30(a1, (size_t)v25, 0, src, n);
        v27 = *(_QWORD *)a1;
      }
      else if ( n )
      {
        v41 = &v25[v27];
        if ( n == 1 )
        {
          *v41 = *(_BYTE *)src;
        }
        else
        {
          v25 = (char *)src;
          memcpy(v41, src, n);
        }
        v27 = *(_QWORD *)a1;
      }
      *(_QWORD *)(a1 + 8) = v28;
      *(_BYTE *)(v27 + v28) = 0;
      if ( src != &v53 )
        operator delete(src);
      v30 = *(_QWORD *)(v4 + 16);
      if ( 3LL * *(unsigned int *)(v4 + 24) )
      {
        do
        {
          v33 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v30 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v33 + 8) & 0xF) != 0 )
            v33 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v30 + 16LL), (__int64)v25, v23, (__int64)v26, v24);
          v48 = v33 & 0xFFFFFFFFFFFFFFF0LL;
          sub_F78400((__int64)v49, (__int64 *)&v48);
          v34 = (__m128i *)sub_99BDC0(v49, 0, 0, " -> ", 4u);
          src = &v53;
          if ( (__m128i *)v34->m128i_i64[0] == &v34[1] )
          {
            v53 = _mm_loadu_si128(v34 + 1);
          }
          else
          {
            src = (void *)v34->m128i_i64[0];
            v53.m128i_i64[0] = v34[1].m128i_i64[0];
          }
          n = v34->m128i_u64[1];
          v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
          v34->m128i_i64[1] = 0;
          v34[1].m128i_i8[0] = 0;
          v24 = n;
          v25 = *(char **)(a1 + 8);
          v26 = src;
          v32 = *(_QWORD *)a1;
          v35 = (unsigned __int64)&v25[n];
          if ( v42 == *(_QWORD *)a1 )
            v36 = 15;
          else
            v36 = *(_QWORD *)(a1 + 16);
          if ( v35 <= v36 )
          {
            if ( n )
            {
              v31 = &v25[v32];
              if ( n == 1 )
              {
                *v31 = *(_BYTE *)src;
              }
              else
              {
                v25 = (char *)src;
                memcpy(v31, src, n);
              }
              v32 = *(_QWORD *)a1;
            }
          }
          else
          {
            sub_998B30(a1, (size_t)v25, 0, src, n);
            v32 = *(_QWORD *)a1;
          }
          *(_QWORD *)(a1 + 8) = v35;
          *(_BYTE *)(v32 + v35) = 0;
          if ( src != &v53 )
            operator delete(src);
          if ( v49[0] != &v50 )
            operator delete(v49[0]);
          v30 += 24;
          v23 = 3LL * *(unsigned int *)(v4 + 24);
        }
        while ( v30 != *(_QWORD *)(v4 + 16) + 24LL * *(unsigned int *)(v4 + 24) );
      }
      v5 = v56;
    }
LABEL_46:
    v4 = *(_QWORD *)v4;
  }
  while ( (__int64 *)v4 != v45 );
  v37 = v5;
  if ( v5 )
  {
    do
    {
      sub_9C4D30((__int64)v54, *((_QWORD **)v37 + 3));
      v38 = *((int **)v37 + 2);
      operator delete(v37);
      v37 = v38;
    }
    while ( v38 );
  }
  return a1;
}
