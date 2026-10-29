__int64 __fastcall sub_695580(_QWORD *a1, const __m128i *a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __m128i si128; // xmm0
  __m128i *v16; // r13
  __m128i *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  _BOOL8 v20; // rdi
  unsigned __int64 v21; // rax
  __int32 v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  size_t v26; // r9
  __int64 v27; // r8
  unsigned __int64 v28; // r10
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // r9
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rdx
  unsigned int v42; // [rsp+8h] [rbp-A0h]
  char v43; // [rsp+Fh] [rbp-99h]
  unsigned __int64 v44; // [rsp+10h] [rbp-98h]
  unsigned __int64 v45; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  _BYTE ptr[24]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE src[5]; // [rsp+5Eh] [rbp-4Ah] BYREF
  char v51[5]; // [rsp+63h] [rbp-45h] BYREF
  unsigned __int64 v52[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = a1 + 1;
  v6 = a3;
  v9 = a1[2];
  v42 = a4;
  v52[0] = __readfsqword(0x28u);
  v10 = a2->m128i_i64[0];
  v11 = a2->m128i_u32[2];
  if ( !v9 )
  {
LABEL_20:
    v12 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)must_journal(a1, v11, a3) )
      goto LABEL_11;
    goto LABEL_21;
  }
  v12 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      a3 = *(_QWORD **)(v9 + 32);
      if ( (unsigned __int64)a3 < v10 )
      {
        v9 = *(_QWORD *)(v9 + 24);
        goto LABEL_7;
      }
      if ( (_QWORD *)v10 == a3 && (int)v11 > *(_DWORD *)(v9 + 40) )
        break;
      v12 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_8;
    }
    v9 = *(_QWORD *)(v9 + 24);
LABEL_7:
    ;
  }
  while ( v9 );
LABEL_8:
  if ( v5 == (_QWORD *)v12 )
    goto LABEL_20;
  if ( *(_QWORD *)(v12 + 32) != v10 || *(_DWORD *)(v12 + 40) != (_DWORD)v11 )
  {
    if ( !(unsigned __int8)must_journal(a1, v11, a3) )
      goto LABEL_11;
LABEL_21:
    v43 = 0;
    goto LABEL_22;
  }
  v39 = *v6;
  v40 = *(_QWORD *)(v12 + 48);
  if ( !(unsigned int)lexcompare_tinfo(v40, *v6, 0, v10, a5) )
    return v52[0] - __readfsqword(0x28u);
  v43 = must_journal(v40, v39, v41);
  if ( !v43 )
    return copy_tinfo_t(v12 + 48);
LABEL_22:
  v23 = a2->m128i_i32[2];
  v24 = a2->m128i_i64[0];
  memset(ptr, 0, sizeof(ptr));
  LODWORD(v44) = v23;
  v25 = pack_dq(src, v52, v24) - (_QWORD)src;
  v26 = v25;
  if ( v25 )
  {
    v27 = *(_QWORD *)&ptr[8];
    v28 = *(_QWORD *)&ptr[8] + v25;
    if ( !__CFADD__(*(_QWORD *)&ptr[8], v25) )
      goto LABEL_24;
    if ( *(_QWORD *)&ptr[8] <= 0x7FFFFFFFFFFFFFFEuLL )
    {
      v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
      v29 = *(_QWORD *)ptr;
      v30 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[16] < v28 )
      {
        v47 = *(_QWORD *)&ptr[8];
        n = v26;
        v45 = v28;
        *(_QWORD *)ptr = qvector_reserve(ptr, *(_QWORD *)ptr, v28, 1);
        v29 = *(_QWORD *)ptr;
        v27 = v47;
        v30 = *(_QWORD *)&ptr[8];
        v26 = n;
        v28 = v45;
      }
      v47 = v27;
      n = v26;
      v45 = v28;
      memset((void *)(v29 + v30), 0, v28 - v30);
      v26 = n;
      v27 = v47;
      *(_QWORD *)&ptr[8] = v45;
    }
    else if ( *(_QWORD *)&ptr[8] != 0x7FFFFFFFFFFFFFFFLL )
    {
      *(_QWORD *)&ptr[8] = 0x7FFFFFFFFFFFFFFFLL;
    }
    memcpy((void *)(v27 + *(_QWORD *)ptr), src, v26);
  }
  v31 = pack_dd(src, v51, (unsigned int)v44) - (_QWORD)src;
  v32 = v31;
  if ( v31 )
  {
    v33 = *(_QWORD *)&ptr[8];
    v34 = v31 + *(_QWORD *)&ptr[8];
    if ( !__CFADD__(v31, *(_QWORD *)&ptr[8]) )
      goto LABEL_30;
    if ( *(_QWORD *)&ptr[8] <= 0x7FFFFFFFFFFFFFFEuLL )
    {
      v34 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_30:
      v35 = *(_QWORD *)ptr;
      v36 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[16] < v34 )
      {
        n = v32;
        v45 = *(_QWORD *)&ptr[8];
        v44 = v34;
        *(_QWORD *)ptr = qvector_reserve(ptr, *(_QWORD *)ptr, v34, 1);
        v35 = *(_QWORD *)ptr;
        v32 = n;
        v36 = *(_QWORD *)&ptr[8];
        v33 = v45;
        v34 = v44;
      }
      n = v32;
      v45 = v33;
      v44 = v34;
      memset((void *)(v35 + v36), 0, v34 - v36);
      v33 = v45;
      v32 = n;
      *(_QWORD *)&ptr[8] = v44;
    }
    else if ( *(_QWORD *)&ptr[8] != 0x7FFFFFFFFFFFFFFFLL )
    {
      *(_QWORD *)&ptr[8] = 0x7FFFFFFFFFFFFFFFLL;
    }
    memcpy((void *)(v33 + *(_QWORD *)ptr), src, v32);
  }
  v37 = *(_QWORD *)&ptr[8];
  v38 = *(_QWORD *)ptr;
  if ( *(_QWORD *)&ptr[16] < (unsigned __int64)(*(_QWORD *)&ptr[8] + 1LL) )
  {
    *(_QWORD *)ptr = qvector_reserve(ptr, *(_QWORD *)ptr, *(_QWORD *)&ptr[8] + 1LL, 1);
    v38 = *(_QWORD *)ptr;
    v37 = *(_QWORD *)&ptr[8];
  }
  *(_BYTE *)(v38 + v37) = v43;
  ++*(_QWORD *)&ptr[8];
  if ( v43 )
  {
    v48 = 0;
    copy_tinfo_t(&v48);
    sub_693E90((__int64 *)ptr, (__int64)&v48);
    clear_tinfo_t(&v48);
  }
  v48 = 0;
  copy_tinfo_t(&v48);
  sub_693E90((__int64 *)ptr, (__int64)&v48);
  clear_tinfo_t(&v48);
  add_undo_record(v42, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(void **)ptr);
  }
  if ( !v43 )
  {
LABEL_11:
    v13 = _mm_loadu_si128(a2);
    *(_QWORD *)&ptr[16] = 0;
    *(__m128i *)ptr = v13;
    copy_tinfo_t(&ptr[16]);
    v14 = (__m128i *)operator new(0x38u);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v16 = v14 + 3;
    v17 = v14;
    v14[3].m128i_i64[0] = 0;
    v14[2] = si128;
    copy_tinfo_t(&v14[3]);
    v18 = sub_695420(a1, v12, (__int64)v17[2].m128i_i64);
    if ( v19 )
    {
      v20 = 1;
      if ( !v18 && v5 != (_QWORD *)v19 )
      {
        v21 = *(_QWORD *)(v19 + 32);
        if ( v17[2].m128i_i64[0] >= v21 )
        {
          v20 = 0;
          if ( v17[2].m128i_i64[0] == v21 )
            v20 = v17[2].m128i_i32[2] < *(_DWORD *)(v19 + 40);
        }
      }
      std::_Rb_tree_insert_and_rebalance(v20, v17, v19, v5);
      ++a1[5];
    }
    else if ( v17 )
    {
      clear_tinfo_t(v16);
      operator delete(v17, 0x38u);
    }
    clear_tinfo_t(&ptr[16]);
    return v52[0] - __readfsqword(0x28u);
  }
  return copy_tinfo_t(v12 + 48);
}
