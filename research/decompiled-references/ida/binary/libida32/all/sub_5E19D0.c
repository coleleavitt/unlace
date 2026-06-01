unsigned __int64 __fastcall sub_5E19D0(unsigned int a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbp
  size_t v8; // r8
  char *v9; // rsi
  void *v10; // r15
  __int16 v11; // r10
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // dl
  char *v17; // rax
  __m128i v18; // xmm0
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  const char *v22; // rdx
  char *v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rbx
  void *v27; // rdi
  __int16 n; // [rsp+8h] [rbp-B0h]
  size_t na; // [rsp+8h] [rbp-B0h]
  int v31; // [rsp+14h] [rbp-A4h]
  size_t v32; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int128 v34; // [rsp+28h] [rbp-90h]
  char v35; // [rsp+60h] [rbp-58h]
  __m128i v36; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = sub_58FD10(qword_2CA1698, a1);
  v34 = 0;
  v8 = *(_QWORD *)(a4 + 8);
  if ( !v8 )
  {
    v9 = nullptr;
    v10 = nullptr;
    v11 = *(_WORD *)(a4 + 24);
    v12 = *(_DWORD *)(a4 + 28);
    v35 = *(_BYTE *)(a4 + 32);
    v13 = 1;
    v36 = _mm_loadu_si128((const __m128i *)(a4 + 40));
LABEL_3:
    v32 = v8;
    v31 = v12;
    n = v11;
    ptr = (void *)qvector_reserve(&ptr, v9, v13, 56);
    v14 = v34;
    v9 = (char *)ptr;
    v8 = v32;
    v12 = v31;
    v11 = n;
    goto LABEL_4;
  }
  na = *(_QWORD *)(a4 + 8);
  v10 = (void *)qalloc_or_throw(na, (const char *)a1);
  memcpy(v10, *(const void **)a4, na);
  v14 = v34;
  v11 = *(_WORD *)(a4 + 24);
  v13 = v34 + 1;
  v12 = *(_DWORD *)(a4 + 28);
  v35 = *(_BYTE *)(a4 + 32);
  v9 = (char *)ptr;
  v8 = na;
  v36 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
    goto LABEL_3;
LABEL_4:
  v15 = 7 * v14;
  v16 = v35;
  v17 = &v9[8 * v15];
  *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  v18 = _mm_loadu_si128(&v36);
  *(_QWORD *)v17 = v10;
  v17[32] = v16;
  *(_QWORD *)&v34 = v34 + 1;
  *((_WORD *)v17 + 12) = v11;
  *((_DWORD *)v17 + 7) = v12;
  *(__m128i *)(v17 + 40) = v18;
  *(_QWORD *)(v7 + 8) = 0;
  if ( (unsigned int)sub_7891F0(v7, a2, &ptr) )
  {
    v22 = haystack;
    if ( *(_QWORD *)(a3 + 8) )
      v22 = *(const char **)a3;
    sub_727620((_DWORD)a2, (unsigned int)"Invalid %s directive", (_DWORD)v22, v19, v20, v21);
  }
  else
  {
    sub_5908A0(v7, a2);
  }
  if ( a1 == 8 )
    sub_58FE70(v7);
  v23 = (char *)ptr;
  if ( ptr )
  {
    v24 = v34;
    if ( (_QWORD)v34 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = *(void **)&v23[v25];
        if ( v27 )
        {
          *(_QWORD *)&v23[v25 + 8] = 0;
          qfree(v27);
          v23 = (char *)ptr;
        }
        ++v26;
        v25 += 56;
      }
      while ( v24 != v26 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v23);
  }
  return v37 - __readfsqword(0x28u);
}

