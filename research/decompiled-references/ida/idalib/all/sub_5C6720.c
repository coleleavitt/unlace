unsigned __int64 __fastcall sub_5C6720(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  char *v10; // rbp
  __int64 v11; // r9
  char *v12; // rbx
  __m128i *v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __m128i *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  __int32 v19; // r10d
  char *v20; // r15
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rbp
  char *v25; // rdi
  char *v26; // rbx
  __int64 v27; // r9
  __int64 v28; // r10
  signed __int64 v29; // r12
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r14
  size_t v35; // rdx
  __int32 v37; // [rsp+14h] [rbp-74h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  __m128i v39; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v41 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v41) = 3;
    *(_QWORD *)&v41 = v41 + 1;
    sub_40D2A0((__int64 *)&ptr, a2);
    sub_40D2A0((__int64 *)&ptr, a3);
    sub_40D2A0((__int64 *)&ptr, a4);
    add_undo_record(*(unsigned int *)(a1 + 48), ptr, v41);
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
    }
  }
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a1 + 24);
  v41 = 0;
  ptr = nullptr;
  v8 = a3 - a2;
  v9 = a4 + a2;
  v10 = (char *)sub_5C46C0(v7, (__int64)&v7[2 * v6], a2);
  v12 = v10;
  if ( (char *)v11 == v10 )
  {
    v34 = 0;
    v35 = 0;
  }
  else
  {
    do
    {
      if ( *(_QWORD *)v12 >= v9 )
      {
        v35 = v11 - (_QWORD)v12;
        v34 = (v12 - v10) >> 4;
        goto LABEL_15;
      }
      v17 = v8 + *(_QWORD *)v12;
      v19 = *((_DWORD *)v12 + 2);
      v18 = v41;
      v16 = (__m128i *)ptr;
      v39.m128i_i64[0] = v17;
      v39.m128i_i32[2] = v19;
      v15 = v41 + 1;
      if ( &v39 < ptr || &v39 >= (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v41 + 1)) )
      {
        if ( *((_QWORD *)&v41 + 1) < v15 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v41 + 1, 16);
          v16 = (__m128i *)ptr;
          v18 = v41;
        }
        v16[v18] = _mm_load_si128(&v39);
      }
      else
      {
        if ( *((_QWORD *)&v41 + 1) < v15 )
        {
          v38 = v17;
          v37 = v19;
          ptr = (void *)qvector_reserve(&ptr, ptr, v41 + 1, 16);
          v16 = (__m128i *)ptr;
          v17 = v38;
          v18 = v41;
          v19 = v37;
        }
        v13 = &v16[v18];
        v13->m128i_i64[0] = v17;
        v13->m128i_i32[2] = v19;
      }
      v14 = *(_QWORD *)(a1 + 32);
      v12 += 16;
      *(_QWORD *)&v41 = v41 + 1;
      v11 = *(_QWORD *)(a1 + 24) + 16 * v14;
    }
    while ( v12 != (char *)v11 );
    v35 = 0;
    v34 = (v12 - v10) >> 4;
  }
LABEL_15:
  memmove(v10, v12, v35);
  v20 = (char *)ptr;
  v21 = *(_QWORD *)(a1 + 32) - v34;
  v22 = v41;
  *(_QWORD *)(a1 + 32) = v21;
  v23 = 16 * v22;
  v24 = v23 >> 4;
  if ( v23 >> 4 )
  {
    v25 = *(char **)(a1 + 24);
    v26 = (char *)sub_5C46C0(v25, (__int64)&v25[16 * v21], a3);
    v29 = v26 - v25;
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v24 + v27) )
    {
      v32 = qvector_reserve(a1 + 24, v25, v24 + v27, 16);
      v33 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = v32;
      v26 = (char *)(v32 + v29);
      v28 = 16 * v33;
    }
    memmove(&v26[v23], v26, v28 - v29);
    v30 = 0;
    if ( v23 )
    {
      do
      {
        *(__m128i *)&v26[v30] = _mm_loadu_si128((const __m128i *)&v20[v30]);
        v30 += 16;
      }
      while ( v23 != v30 );
    }
    *(_QWORD *)(a1 + 32) += v24;
    v20 = (char *)ptr;
  }
  if ( v20 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v20);
  }
  return v42 - __readfsqword(0x28u);
}
