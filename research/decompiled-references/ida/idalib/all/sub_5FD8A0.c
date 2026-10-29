unsigned __int64 __fastcall sub_5FD8A0(unsigned int a1, __int64 a2, const char **a3, __int64 a4)
{
  __int64 v6; // rbx
  size_t v7; // r15
  char *v8; // rsi
  void *v9; // r14
  __int16 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // dl
  char *v15; // rax
  __m128i v16; // xmm0
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  const char *v20; // rdx
  char *v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rax
  void *v25; // rdi
  void **p_ptr; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+10h] [rbp-B8h]
  __int16 v30; // [rsp+1Ch] [rbp-ACh]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-A0h]
  char v33; // [rsp+68h] [rbp-60h]
  __m128i v34; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = sub_5A9ED0(qword_2CCB598, a1);
  v32 = 0;
  v7 = *(_QWORD *)(a4 + 8);
  if ( !v7 )
  {
    v8 = nullptr;
    v9 = nullptr;
    v10 = *(_WORD *)(a4 + 24);
    v11 = *(_QWORD *)(a4 + 32);
    v12 = 1;
    v33 = *(_BYTE *)(a4 + 40);
    v34 = _mm_loadu_si128((const __m128i *)(a4 + 48));
LABEL_3:
    v30 = v10;
    v29 = v11;
    p_ptr = &ptr;
    ptr = (void *)qvector_reserve(&ptr, v8, v12, 64);
    v8 = (char *)ptr;
    v10 = v30;
    v13 = v32;
    v11 = v29;
    goto LABEL_4;
  }
  v9 = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
  memcpy(v9, *(const void **)a4, v7);
  v13 = v32;
  v8 = (char *)ptr;
  v33 = *(_BYTE *)(a4 + 40);
  v10 = *(_WORD *)(a4 + 24);
  v12 = v32 + 1;
  v11 = *(_QWORD *)(a4 + 32);
  v34 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
    goto LABEL_3;
LABEL_4:
  v14 = v33;
  v15 = &v8[64 * v13];
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  v16 = _mm_load_si128(&v34);
  *(_QWORD *)v15 = v9;
  v15[40] = v14;
  *(_QWORD *)&v32 = v32 + 1;
  *((_WORD *)v15 + 12) = v10;
  *((_QWORD *)v15 + 4) = v11;
  *((__m128i *)v15 + 3) = v16;
  *(_QWORD *)(v6 + 8) = 0;
  if ( (unsigned int)sub_7A9590(v6, a2, &ptr) )
  {
    v20 = haystack;
    if ( a3[1] )
      v20 = *a3;
    sub_747B60(a2, (unsigned int)"Invalid %s directive", (_DWORD)v20, v17, v18, v19, (__int64)a3, (_DWORD)p_ptr, v29);
  }
  else
  {
    sub_5AAA60(v6);
  }
  if ( a1 == 8 )
    sub_5AA030(v6);
  v21 = (char *)ptr;
  if ( ptr )
  {
    v22 = v32;
    if ( (_QWORD)v32 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[64 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = (char *)ptr;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v21);
  }
  return v35 - __readfsqword(0x28u);
}
