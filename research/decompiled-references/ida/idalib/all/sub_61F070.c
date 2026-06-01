unsigned __int64 __fastcall sub_61F070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  bool v6; // zf
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  void *v10; // rdx
  __m128i v11; // xmm1
  void *v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  _QWORD *v15; // rdx
  void *v16; // rdi
  __m128 v17; // xmm0
  int *v18; // rcx
  void *v19; // rdi
  const char *v20; // rdx
  size_t v21; // rax
  __int64 v22; // r15
  size_t v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  void *v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __m128 v30; // xmm0
  int *v31; // rcx
  __int64 v32; // rdx
  char **v33; // rbx
  char **v34; // rbp
  char **v35; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 i; // [rsp+0h] [rbp-10F8h]
  __int64 v43; // [rsp+8h] [rbp-10F0h]
  void *v44; // [rsp+10h] [rbp-10E8h] BYREF
  __m128i v45; // [rsp+18h] [rbp-10E0h] BYREF
  int v46; // [rsp+30h] [rbp-10C8h] BYREF
  void *v47; // [rsp+38h] [rbp-10C0h]
  int *v48; // [rsp+40h] [rbp-10B8h] BYREF
  int *v49; // [rsp+48h] [rbp-10B0h]
  __int128 v50; // [rsp+50h] [rbp-10A8h]
  void *ptr; // [rsp+60h] [rbp-1098h]
  __m128i v52; // [rsp+68h] [rbp-1090h] BYREF
  int v53; // [rsp+80h] [rbp-1078h] BYREF
  void *v54; // [rsp+88h] [rbp-1070h]
  int *v55; // [rsp+90h] [rbp-1068h] BYREF
  int *v56; // [rsp+98h] [rbp-1060h]
  __int128 v57; // [rsp+A0h] [rbp-1058h]
  char s[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v59; // [rsp+10B8h] [rbp-40h]

  v6 = *(_BYTE *)(a1 + 81) == 0;
  v59 = __readfsqword(0x28u);
  if ( v6 )
  {
    *(_BYTE *)(a1 + 81) = 1;
    v8 = *(_QWORD *)(a1 + 16);
    v43 = a1 + 56;
    if ( *(_QWORD *)(a1 + 72) < v8 )
    {
      v41 = qvector_reserve(a1 + 56, *(_QWORD *)(a1 + 56), v8, 80);
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 56) = v41;
    }
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = v9 + 24 * v8; i != v9; v9 += 24 )
    {
      v20 = haystack;
      if ( *(_QWORD *)(v9 + 8) )
        v20 = *(const char **)v9;
      qmakepath((unsigned int)s, 4096, (_DWORD)v20, (unsigned int)"idsnames", 0, a6);
      v44 = nullptr;
      v45 = 0;
      v21 = strlen(s);
      v22 = v21 + 1;
      v23 = v21;
      v44 = (void *)qvector_reserve(&v44, 0, v21 + 1, 1);
      v45.m128i_i64[0] = v22;
      memmove(v44, s, v23);
      *((_BYTE *)v44 + v23) = 0;
      v40 = *(_QWORD *)(a1 + 64);
      v39 = *(_QWORD *)(a1 + 56);
      v24 = *(_QWORD *)(a1 + 72);
      v48 = &v46;
      v46 = 0;
      v25 = v40 + 1;
      v47 = nullptr;
      v49 = &v46;
      v50 = 0;
      if ( (unsigned __int64)&v44 < v39 || (unsigned __int64)&v44 >= v39 + 80 * v24 )
      {
        if ( v24 < v25 )
        {
          v37 = qvector_reserve(v43, v39, v40 + 1, 80);
          *(_QWORD *)(a1 + 56) = v37;
          v39 = v37;
          v40 = *(_QWORD *)(a1 + 64);
        }
        v26 = v44;
        v27 = _mm_loadu_si128(&v45);
        v44 = nullptr;
        v28 = v39 + 80 * v40;
        *(__m128i *)(v28 + 8) = v27;
        *(_QWORD *)v28 = v26;
        v29 = v47;
        v45 = 0;
        if ( v47 )
        {
          v19 = nullptr;
          v30 = _mm_loadh_ps((const double *)&v48);
          *(_DWORD *)(v28 + 32) = v46;
          v31 = v49;
          *(__m128 *)(v28 + 40) = v30;
          *(_QWORD *)(v28 + 56) = v31;
          v29[1] = v28 + 32;
          v47 = nullptr;
          *(_QWORD *)(v28 + 64) = v50;
          v48 = &v46;
          v49 = &v46;
          *(_QWORD *)&v50 = 0;
        }
        else
        {
          *(_DWORD *)(v28 + 32) = 0;
          *(_QWORD *)(v28 + 40) = 0;
          v19 = v47;
          *(_QWORD *)(v28 + 48) = v28 + 32;
          *(_QWORD *)(v28 + 56) = v28 + 32;
          *(_QWORD *)(v28 + 64) = 0;
        }
        *(_QWORD *)(v28 + 72) = *((_QWORD *)&v50 + 1);
      }
      else
      {
        v10 = v44;
        v11 = _mm_loadu_si128(&v45);
        v45 = 0;
        v44 = nullptr;
        ptr = v10;
        v53 = 0;
        v54 = nullptr;
        v55 = &v53;
        v56 = &v53;
        v52 = v11;
        v57 = 0;
        if ( v24 < v25 )
        {
          v38 = qvector_reserve(v43, v39, v40 + 1, 80);
          *(_QWORD *)(a1 + 56) = v38;
          v39 = v38;
          v40 = *(_QWORD *)(a1 + 64);
        }
        v12 = ptr;
        v13 = _mm_loadu_si128(&v52);
        ptr = nullptr;
        v14 = v39 + 80 * v40;
        *(__m128i *)(v14 + 8) = v13;
        *(_QWORD *)v14 = v12;
        v15 = v54;
        v52 = 0;
        if ( v54 )
        {
          v16 = nullptr;
          v17 = _mm_loadh_ps((const double *)&v55);
          *(_DWORD *)(v14 + 32) = v53;
          v18 = v56;
          *(__m128 *)(v14 + 40) = v17;
          *(_QWORD *)(v14 + 56) = v18;
          v15[1] = v14 + 32;
          v54 = nullptr;
          *(_QWORD *)(v14 + 64) = v57;
          v55 = &v53;
          v56 = &v53;
          *(_QWORD *)&v57 = 0;
        }
        else
        {
          *(_DWORD *)(v14 + 32) = 0;
          *(_QWORD *)(v14 + 40) = 0;
          v16 = v54;
          *(_QWORD *)(v14 + 48) = v14 + 32;
          *(_QWORD *)(v14 + 56) = v14 + 32;
          *(_QWORD *)(v14 + 64) = 0;
        }
        *(_QWORD *)(v14 + 72) = *((_QWORD *)&v57 + 1);
        sub_61C0F0(v16);
        if ( ptr )
        {
          v52.m128i_i64[0] = 0;
          qfree(ptr);
        }
        v19 = v47;
      }
      ++*(_QWORD *)(a1 + 64);
      sub_61C0F0(v19);
      if ( v44 )
      {
        v45.m128i_i64[0] = 0;
        qfree(v44);
      }
    }
  }
  v32 = *(_QWORD *)(a1 + 64);
  v33 = *(char ***)(a1 + 56);
  v34 = &v33[10 * v32];
  while ( v34 != v33 )
  {
    v35 = v33;
    v33 += 10;
    sub_61EFD0(v35);
  }
  return v59 - __readfsqword(0x28u);
}
