unsigned __int64 __fastcall sub_5ABCA0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r14d
  int v9; // r12d
  char *v10; // rbp
  char *v11; // r9
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rsi
  unsigned __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r9
  char *v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rbp
  char *v24; // rdi
  __int64 v25; // r9
  __int64 v26; // r10
  char *v27; // r12
  signed __int64 v28; // r15
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  size_t v34; // rdx
  unsigned int v35; // [rsp+4h] [rbp-74h]
  unsigned __int64 v36; // [rsp+8h] [rbp-70h]
  unsigned __int64 v37; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v35 = a3;
  v40 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v39 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v39) = 3;
    *(_QWORD *)&v39 = v39 + 1;
    sub_3FA160((__int64 *)&ptr, a2);
    sub_3FA160((__int64 *)&ptr, v35);
    sub_3FA160((__int64 *)&ptr, a4);
    add_undo_record(*(unsigned int *)(a1 + 40), ptr, v39);
    if ( ptr )
    {
      *(_QWORD *)&v39 = 0;
      qfree(ptr);
    }
  }
  v6 = *(_DWORD **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v39 = 0;
  v8 = a2 + a4;
  ptr = nullptr;
  v9 = v35 - a2;
  v10 = (char *)sub_5AA180(v6, (__int64)&v6[2 * v7], a2);
  v12 = v10;
  if ( v11 == v10 )
  {
    v33 = 0;
    v34 = 0;
  }
  else
  {
    do
    {
      if ( *(_DWORD *)v12 >= v8 )
      {
        v34 = v11 - v12;
        v33 = (v12 - v10) >> 3;
        goto LABEL_15;
      }
      v16 = ptr;
      v18 = v39;
      v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9 + *(_DWORD *)v12), _mm_cvtsi32_si128(*((_DWORD *)v12 + 1))).m128i_u64[0];
      v37 = v17;
      v15 = v39 + 1;
      if ( &v37 < ptr || &v37 >= (unsigned __int64 *)((char *)ptr + 8 * *((_QWORD *)&v39 + 1)) )
      {
        if ( *((_QWORD *)&v39 + 1) < v15 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 8);
          v16 = ptr;
          v18 = v39;
        }
        v16[v18] = v37;
      }
      else
      {
        if ( *((_QWORD *)&v39 + 1) < v15 )
        {
          v36 = v17;
          ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 8);
          v16 = ptr;
          v17 = v36;
          v18 = v39;
        }
        v16[v18] = v17;
      }
      v13 = *(_QWORD *)(a1 + 24);
      v14 = *(_QWORD *)(a1 + 16);
      v12 += 8;
      *(_QWORD *)&v39 = v39 + 1;
      v11 = (char *)(v14 + 8 * v13);
    }
    while ( v12 != v11 );
    v34 = 0;
    v33 = (v12 - v10) >> 3;
  }
LABEL_15:
  memmove(v10, v12, v34);
  v19 = 8 * v39;
  v20 = *(_QWORD *)(a1 + 24) - v33;
  v21 = (char *)ptr;
  v22 = 8 * v39;
  *(_QWORD *)(a1 + 24) = v20;
  v23 = v22 >> 3;
  if ( v23 )
  {
    v24 = *(char **)(a1 + 16);
    v27 = (char *)sub_5AA180(v24, (__int64)&v24[8 * v20], v35);
    v28 = v27 - v24;
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v23 + v25) )
    {
      v31 = qvector_reserve(a1 + 16, v24, v23 + v25, 8);
      v32 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v31;
      v27 = (char *)(v31 + v28);
      v26 = 8 * v32;
    }
    memmove(&v27[v19], v27, v26 - v28);
    v29 = 0;
    if ( v19 )
    {
      do
      {
        *(_QWORD *)&v27[v29] = *(_QWORD *)&v21[v29];
        v29 += 8;
      }
      while ( v19 != v29 );
    }
    *(_QWORD *)(a1 + 24) += v23;
    v21 = (char *)ptr;
  }
  if ( v21 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v21);
  }
  return v40 - __readfsqword(0x28u);
}

