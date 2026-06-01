void __fastcall sub_409240(_QWORD *a1, unsigned int *a2, unsigned __int16 *a3, __int32 a4)
{
  unsigned __int16 *v4; // r15
  unsigned int *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  __m128i v10; // xmm0
  unsigned int v11; // r13d
  int v12; // r15d
  __int64 v13; // rax
  __int16 v14; // dx
  __m128i v15; // xmm0
  void *v16; // r12
  __int64 v17; // rdx
  char v18; // r13
  unsigned int v19; // esi
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rax
  size_t v24; // r9
  size_t v25; // r10
  size_t v26; // r11
  char *v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  size_t v31; // r9
  size_t v32; // r10
  size_t v33; // r11
  char *v34; // rsi
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-108h] BYREF
  void *src; // [rsp+18h] [rbp-F0h]
  void **p_ptr; // [rsp+20h] [rbp-E8h]
  size_t n; // [rsp+28h] [rbp-E0h]
  size_t v40; // [rsp+30h] [rbp-D8h]
  size_t v41; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+48h] [rbp-C0h]
  __m128i v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h]
  __m128i v46; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  _BYTE v48[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+C8h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v6 = a1[2];
  v36.m128i_i32[0] = a4;
  v49 = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  a2 = (unsigned int *)*a2;
  v7 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      a3 = *(unsigned __int16 **)(v6 + 16);
      v8 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) >= (unsigned int)a2 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v8 )
        goto LABEL_6;
    }
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v7 )
  {
LABEL_11:
    v7 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    {
LABEL_9:
      v9 = *v4;
      v10 = _mm_loadu_si128((const __m128i *)(v4 + 2));
      v11 = *v5;
      v12 = *((_DWORD *)v4 + 5);
      LODWORD(src) = v9;
      v36 = v10;
      v13 = operator new(0x40u);
      v14 = (__int16)src;
      v15 = _mm_load_si128(&v36);
      *(_DWORD *)(v13 + 32) = v11;
      v16 = (void *)v13;
      *(_WORD *)(v13 + 36) = v14;
      *(_DWORD *)(v13 + 56) = v12;
      *(__m128i *)(v13 + 40) = v15;
      sub_406E00(a1, v7, v11);
      if ( v17 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++a1[5];
      }
      else if ( v16 )
      {
        operator delete(v16, 0x40u);
      }
      return;
    }
    goto LABEL_12;
  }
  if ( (_DWORD)a2 != *(_DWORD *)(v7 + 32) )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
LABEL_12:
    v18 = 0;
    goto LABEL_13;
  }
  if ( *(_WORD *)(v7 + 36) != *v4
    || *(_DWORD *)(v7 + 40) != *((_DWORD *)v4 + 1)
    || *(_DWORD *)(v7 + 44) != *((_DWORD *)v4 + 2)
    || *(_DWORD *)(v7 + 48) != *((_DWORD *)v4 + 3)
    || *(_DWORD *)(v7 + 52) != *((_DWORD *)v4 + 4)
    || *(_DWORD *)(v7 + 56) != *((_DWORD *)v4 + 5) )
  {
    v18 = must_journal(a1, a2, a3);
    if ( !v18 )
      goto LABEL_24;
LABEL_13:
    v19 = *v5;
    ptr = nullptr;
    p_ptr = &ptr;
    v43 = 0;
    sub_407AD0((__int64 *)&ptr, v19);
    v20 = v43;
    v21 = ptr;
    if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v43 + 1, 1);
      v21 = ptr;
      v20 = v43;
    }
    v21[v20] = v18;
    *(_QWORD *)&v43 = v43 + 1;
    if ( !v18 )
    {
      src = v48;
      goto LABEL_17;
    }
    v29 = _mm_loadu_si128((const __m128i *)(v7 + 36));
    v47 = *(_QWORD *)(v7 + 52);
    src = v48;
    v46 = v29;
    v30 = sub_408EB0((__int64)v48, 28, &v46);
    v31 = v30;
    if ( !v30 )
    {
LABEL_17:
      v22 = _mm_loadu_si128((const __m128i *)v4);
      v45 = *((_QWORD *)v4 + 2);
      v44 = v22;
      v23 = sub_408EB0((__int64)src, 28, &v44);
      v24 = v23;
      if ( !v23 )
        goto LABEL_44;
      v25 = v43;
      v26 = v43 + v23;
      if ( __CFADD__((_QWORD)v43, v23) )
      {
        if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_43;
        }
        v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v27 = (char *)ptr;
      v28 = v43;
      if ( *((_QWORD *)&v43 + 1) < v26 )
      {
        v41 = v43;
        v40 = v24;
        n = v26;
        ptr = (void *)qvector_reserve(p_ptr, ptr, v26, 1);
        v27 = (char *)ptr;
        v25 = v41;
        v28 = v43;
        v24 = v40;
        v26 = n;
      }
      v40 = v25;
      n = v24;
      p_ptr = (void **)v26;
      memset(&v27[v28], 0, v26 - v28);
      v24 = n;
      v25 = v40;
      *(_QWORD *)&v43 = p_ptr;
LABEL_43:
      memcpy((char *)ptr + v25, src, v24);
LABEL_44:
      add_undo_record(v36.m128i_u32[0], ptr, v43);
      if ( ptr )
      {
        *(_QWORD *)&v43 = 0;
        qfree(ptr);
      }
      if ( !v18 )
        goto LABEL_9;
LABEL_24:
      *(__m128i *)(v7 + 36) = _mm_loadu_si128((const __m128i *)v4);
      *(_QWORD *)(v7 + 52) = *((_QWORD *)v4 + 2);
      return;
    }
    v32 = v43;
    v33 = v43 + v30;
    if ( __CFADD__((_QWORD)v43, v30) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_31:
        memcpy((char *)ptr + v32, src, v31);
        goto LABEL_17;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = (char *)ptr;
    v35 = v43;
    if ( *((_QWORD *)&v43 + 1) < v33 )
    {
      v41 = v43;
      v40 = v31;
      n = v33;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v33, 1);
      v34 = (char *)ptr;
      v32 = v41;
      v35 = v43;
      v31 = v40;
      v33 = n;
    }
    v41 = v32;
    v40 = v31;
    n = v33;
    memset(&v34[v35], 0, v33 - v35);
    v31 = v40;
    v32 = v41;
    *(_QWORD *)&v43 = n;
    goto LABEL_31;
  }
}

