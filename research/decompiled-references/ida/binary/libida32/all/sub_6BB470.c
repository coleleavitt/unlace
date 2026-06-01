unsigned __int64 __fastcall sub_6BB470(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v14; // eax
  char *v15; // rbx
  const char *v16; // rdi
  size_t v17; // rax
  size_t v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  char *v22; // r12
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rsi
  void *v30; // rdi
  void *v31; // rdi
  void *v33; // rdi
  size_t v34; // r12
  __int64 v35; // rax
  __int64 v38; // [rsp+18h] [rbp-60h]
  char *s[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v7 = a1[76];
  v40 = __readfsqword(0x28u);
  v8 = a1[75];
  if ( v7 < v8 + 1 )
  {
    v19 = qvector_reserve(a1 + 74, 0, v8 + 1, 64);
    v20 = a1[75];
    v9 = v19;
    v21 = a1[76];
    a1[76] = v7;
    v22 = (char *)a1[74];
    v38 = v21;
    v23 = v20 - 1;
    if ( v23 >= 0 )
    {
      v24 = v9;
      do
      {
        v25 = *(_QWORD *)v22;
        v26 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        *(_QWORD *)v22 = 0;
        *(_OWORD *)(v22 + 8) = 0;
        *(_QWORD *)v24 = v25;
        *(__m128i *)(v24 + 8) = v26;
        v27 = *((_QWORD *)v22 + 3);
        v28 = _mm_loadu_si128((const __m128i *)v22 + 2);
        *((_QWORD *)v22 + 3) = 0;
        *(_QWORD *)(v24 + 24) = v27;
        *(__m128i *)(v24 + 32) = v28;
        v29 = *((_QWORD *)v22 + 6);
        *((_QWORD *)v22 + 5) = 0;
        *(_QWORD *)(v24 + 48) = v29;
        *(_QWORD *)(v24 + 56) = *((_QWORD *)v22 + 7);
        v30 = *((void **)v22 + 3);
        if ( v30 )
        {
          *((_QWORD *)v22 + 4) = 0;
          qfree(v30);
        }
        v31 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v31);
        }
        v22 += 64;
        v24 += 64;
      }
      while ( v23-- != 0 );
      v22 = (char *)a1[74];
    }
    qfree(v22);
    a1[74] = v9;
    a1[76] = v38;
    v8 = a1[75];
  }
  else
  {
    v9 = a1[74];
  }
  v10 = (v8 << 6) + v9;
  v11 = 3;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 48) = -1;
  *(_QWORD *)(v10 + 56) = 4;
  *(_OWORD *)(v10 + 8) = 0;
  *(_OWORD *)(v10 + 32) = 0;
  ++a1[75];
  if ( !a5 )
    v11 = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(v10 + 56) = v11;
  sub_3572D0((char **)v10);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 0x11 )
    {
      v14 = sub_B4F2B0(a2, a3);
      v12 = v14;
      if ( !v14 )
        return v40 - __readfsqword(0x28u);
    }
    else
    {
      v12 = *(unsigned int *)(a2 + 24);
      if ( !(_DWORD)v12 )
        return v40 - __readfsqword(0x28u);
    }
    sub_FFEBC0(s, *(_QWORD *)(a1[6] + 2312LL), v12, 1);
    v15 = s[0];
    if ( s[0] )
    {
      v16 = s[0];
      *(char **)(v10 + 48) = *(char **)((char *)&s[1] + 4);
      v17 = strlen(v16);
      v18 = v17;
      if ( v17 )
      {
        v33 = *(void **)(v10 + 24);
        v34 = v17 + 1;
        if ( *(_QWORD *)(v10 + 40) < v17 + 1 )
        {
          v35 = qvector_reserve(v10 + 24, *(_QWORD *)(v10 + 24), v34, 1);
          *(_QWORD *)(v10 + 24) = v35;
          v33 = (void *)v35;
        }
        *(_QWORD *)(v10 + 32) = v34;
        memmove(v33, v15, v18);
        *(_BYTE *)(*(_QWORD *)(v10 + 24) + v18) = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 32) = 0;
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}

