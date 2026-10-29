__int64 __fastcall sub_137D2F0(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  size_t v8; // r15
  size_t *v9; // rax
  __m128i v10; // xmm2
  void *v11; // rdi
  _BOOL8 v13; // r8
  bool v14; // zf
  unsigned int v15; // eax
  void *v16; // rdx
  int v17; // ecx
  size_t v18; // r13
  size_t v19; // rdi
  void *v20; // r14
  size_t v21; // rdi
  size_t v22; // r13
  void *v23; // r14
  size_t v24; // rdi
  __m128i si128; // xmm0
  void *v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  char *v30; // rdi
  bool src; // [rsp+8h] [rbp-F0h]
  size_t *srca; // [rsp+8h] [rbp-F0h]
  void *v33; // [rsp+10h] [rbp-E8h]
  unsigned int v34; // [rsp+18h] [rbp-E0h]
  void *v35; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-D0h]
  bool v37; // [rsp+2Ch] [rbp-CCh]
  int v38; // [rsp+30h] [rbp-C8h]
  void *v39; // [rsp+40h] [rbp-B8h] BYREF
  size_t v40[2]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v41[40]; // [rsp+58h] [rbp-A0h] BYREF
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-70h]
  _BYTE v44[96]; // [rsp+98h] [rbp-60h] BYREF

  if ( (*(_DWORD *)(a2 + 16) & 0x20000000) == 0 )
    goto LABEL_2;
  LODWORD(v39) = *(_DWORD *)(a2 + 16);
  sub_21EEEF0(&ptr, &v39);
  if ( !(unsigned int)sub_21EE7D0(a2, &ptr) )
  {
    if ( LODWORD(n[0]) > 0x40 && ptr )
      operator delete[](ptr);
    v14 = *(_BYTE *)(a2 + 12) == 0;
    v41[0] = 40;
    v39 = v41;
    v15 = *(_DWORD *)(a2 + 8);
    *(__m128i *)v40 = _mm_load_si128(xmmword_23AA120);
    LODWORD(n[0]) = v15;
    if ( !v14 )
    {
      if ( v15 > 0x40 )
      {
        sub_2205510(&ptr);
        v15 = n[0];
        if ( LODWORD(n[0]) > 0x40 )
        {
          sub_220ABD0(&ptr, 1);
          v16 = ptr;
LABEL_26:
          v15 = n[0];
          v33 = v16;
          v34 = n[0];
          goto LABEL_27;
        }
      }
      else
      {
        ptr = *(void **)a2;
      }
      v16 = nullptr;
      if ( v15 != 1 )
        v16 = (void *)((unsigned __int64)ptr >> 1);
      goto LABEL_26;
    }
    if ( v15 > 0x40 )
    {
      sub_2205510(&ptr);
      v15 = n[0];
      if ( LODWORD(n[0]) > 0x40 )
      {
        sub_2206EF0(&ptr, 1);
        v16 = ptr;
        v15 = n[0];
        v33 = ptr;
        v34 = n[0];
        goto LABEL_27;
      }
      v26 = ptr;
    }
    else
    {
      v26 = *(void **)a2;
    }
    v16 = nullptr;
    if ( v15 )
    {
      v27 = (__int64)((_QWORD)v26 << (64 - (unsigned __int8)v15)) >> (64 - (unsigned __int8)v15);
      if ( v15 == 1 )
      {
        v28 = v27 >> 63;
        v29 = 1;
      }
      else
      {
        v28 = v27 >> 1;
        v29 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v15;
      }
      v16 = (void *)(v29 & v28);
    }
    v34 = v15;
    v33 = v16;
LABEL_27:
    v17 = *(_DWORD *)(a2 + 16);
    LODWORD(n[0]) = v15;
    LOBYTE(v13) = (v17 & 0x20000000) == 0;
    if ( v15 > 0x40 )
    {
      src = (v17 & 0x20000000) == 0;
      sub_2205510(&ptr);
      v13 = src;
      v37 = src;
      v36 = n[0];
      v35 = ptr;
      v38 = *(_DWORD *)(a2 + 16);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
    }
    else
    {
      v36 = v15;
      v35 = v16;
      v37 = (v17 & 0x20000000) == 0;
      v38 = v17;
    }
    sub_137D2F0(&ptr, &v35, a3, a4, v13);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    v18 = n[0];
    v19 = v40[0];
    v20 = ptr;
    if ( n[0] + v40[0] > v40[1] )
    {
      sub_2236E10(&v39, v41, n[0] + v40[0], 1);
      v19 = v40[0];
    }
    if ( v18 )
    {
      memcpy((char *)v39 + v19, v20, v18);
      v19 = v40[0];
    }
    v21 = v18 + v19;
    v22 = n[0];
    v23 = ptr;
    v40[0] = v21;
    if ( n[0] + v21 > v40[1] )
    {
      sub_2236E10(&v39, v41, n[0] + v21, 1);
      v21 = v40[0];
    }
    if ( v22 )
    {
      memcpy((char *)v39 + v21, v23, v22);
      v21 = v40[0];
    }
    v24 = v22 + v21;
    v40[0] = v24;
    if ( v24 + 1 > v40[1] )
    {
      sub_2236E10(&v39, v41, v24 + 1, 1);
      v24 = v40[0];
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *((_BYTE *)v39 + v24) = 41;
    v14 = v40[0]++ == -1;
    *(_QWORD *)a1 = a1 + 24;
    *(__m128i *)(a1 + 8) = si128;
    if ( !v14 )
      sub_9C3C90((char **)a1, (char **)&v39);
    if ( ptr != v44 )
      free(ptr);
    v11 = v39;
    if ( v39 != v41 )
      goto LABEL_15;
    return a1;
  }
  if ( LODWORD(n[0]) > 0x40 && ptr )
    operator delete[](ptr);
LABEL_2:
  ptr = v44;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  sub_21F17D0(a2, &ptr);
  v39 = &v40[1];
  sub_13777B0(&v39, ptr, (__int64)ptr + n[0]);
  if ( ptr != v44 )
    free(ptr);
  v8 = v40[0];
  v9 = (size_t *)v39;
  ptr = v44;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( v40[0] > 0x20 )
  {
    srca = (size_t *)v39;
    sub_2236E10(&ptr, v44, v40[0], 1);
    v9 = srca;
    v30 = (char *)ptr + n[0];
  }
  else
  {
    if ( !v40[0] )
      goto LABEL_6;
    v30 = v44;
  }
  memcpy(v30, v9, v8);
  v9 = (size_t *)v39;
  v8 += n[0];
LABEL_6:
  n[0] = v8;
  if ( v9 != &v40[1] )
  {
    operator delete(v9);
    v8 = n[0];
  }
  if ( a4 + v8 > n[1] )
  {
    sub_2236E10(&ptr, v44, a4 + v8, 1);
    v8 = n[0];
  }
  if ( a4 )
  {
    memcpy((char *)ptr + v8, a3, a4);
    v8 = n[0];
  }
  v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  n[0] = v8 + a4;
  *(_QWORD *)a1 = a1 + 24;
  *(__m128i *)(a1 + 8) = v10;
  if ( v8 + a4 )
    sub_9C3C90((char **)a1, (char **)&ptr);
  v11 = ptr;
  if ( ptr != v44 )
LABEL_15:
    free(v11);
  return a1;
}
