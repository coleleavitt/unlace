unsigned __int64 __fastcall sub_6BAAB0(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v4; // rbx
  const char *v5; // rsi
  __int64 v6; // rdx
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm1
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rcx
  void *v17; // rdx
  unsigned int v19; // eax
  const char *v20; // rbx
  size_t v21; // rax
  size_t v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r12
  char *v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 v31; // rcx
  __m128i v32; // xmm0
  __int64 v33; // rcx
  void *v34; // rdi
  void *v35; // rdi
  __int64 v37; // rax
  void *v38; // rdi
  size_t v39; // r15
  __int64 v40; // [rsp+0h] [rbp-100h]
  __int64 v41; // [rsp+8h] [rbp-F8h]
  __int64 v42; // [rsp+10h] [rbp-F0h] BYREF
  void *v43; // [rsp+18h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+20h] [rbp-E0h] BYREF
  char *s[4]; // [rsp+38h] [rbp-C8h] BYREF
  void *ptr; // [rsp+58h] [rbp-A8h]
  __m128i v47; // [rsp+60h] [rbp-A0h] BYREF
  void *dest; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  void *v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-40h]

  v4 = a2;
  v42 = a3;
  v54 = __readfsqword(0x28u);
  v44 = 0;
  v43 = nullptr;
  sub_F34CF0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, 0);
  sub_F546C0(&v52, &v42);
  v5 = "Unsupported type '%s' of class %s";
  sub_3573A0((char **)&v43);
  if ( v52 != &v53 )
  {
    v5 = (const char *)(v53 + 1);
    operator delete(v52, v53 + 1);
  }
  if ( v4 )
  {
    ptr = nullptr;
    dest = nullptr;
    v50 = -1;
    v51 = 4;
    v47 = 0;
    v49 = 0;
    goto LABEL_5;
  }
  v37 = sub_F3F480(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL), v5);
  ptr = nullptr;
  v4 = (_BYTE *)v37;
  dest = nullptr;
  v50 = -1;
  v51 = 4;
  v47 = 0;
  v49 = 0;
  if ( v37 )
  {
LABEL_5:
    if ( (v4[28] & 0x7Fu) - 34 <= 0x11 )
    {
      v19 = sub_B4F2B0(v4, v5);
      if ( !v19 )
        goto LABEL_7;
      sub_FFEBC0(s, *(_QWORD *)(a1[6] + 2312LL), v19, 1);
      v20 = s[0];
      if ( !s[0] )
        goto LABEL_7;
    }
    else
    {
      v6 = *((unsigned int *)v4 + 6);
      if ( !(_DWORD)v6 || (sub_FFEBC0(s, *(_QWORD *)(a1[6] + 2312LL), v6, 1), (v20 = s[0]) == nullptr) )
      {
LABEL_7:
        v4 = ptr;
        v7 = _mm_loadu_si128(&v47);
        goto LABEL_8;
      }
    }
    v50 = *(__int64 *)((char *)&s[1] + 4);
    v21 = strlen(v20);
    v22 = v21;
    if ( v21 )
    {
      v38 = dest;
      v39 = v21 + 1;
      if ( *((_QWORD *)&v49 + 1) < v21 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v39, 1);
        v38 = dest;
      }
      *(_QWORD *)&v49 = v39;
      memmove(v38, v20, v22);
      *((_BYTE *)dest + v22) = 0;
    }
    else
    {
      *(_QWORD *)&v49 = 0;
    }
    goto LABEL_7;
  }
  v7 = 0;
LABEL_8:
  v8 = v43;
  v9 = _mm_loadu_si128(&v44);
  v43 = v4;
  v10 = a1[76];
  v44 = v7;
  ptr = v8;
  v11 = a1[75];
  v47 = v9;
  if ( v10 < v11 + 1 )
  {
    v23 = qvector_reserve(a1 + 74, 0, v11 + 1, 64);
    v24 = a1[76];
    v25 = a1[75];
    a1[76] = v10;
    v40 = v23;
    v26 = (char *)a1[74];
    v41 = v24;
    v27 = v25 - 1;
    if ( v27 >= 0 )
    {
      v28 = v23;
      do
      {
        v29 = *(_QWORD *)v26;
        v30 = _mm_loadu_si128((const __m128i *)(v26 + 8));
        *(_QWORD *)v26 = 0;
        *(_OWORD *)(v26 + 8) = 0;
        *(_QWORD *)v28 = v29;
        *(__m128i *)(v28 + 8) = v30;
        v31 = *((_QWORD *)v26 + 3);
        v32 = _mm_loadu_si128((const __m128i *)v26 + 2);
        *((_QWORD *)v26 + 3) = 0;
        *(_QWORD *)(v28 + 24) = v31;
        *(__m128i *)(v28 + 32) = v32;
        v33 = *((_QWORD *)v26 + 6);
        *((_QWORD *)v26 + 5) = 0;
        *(_QWORD *)(v28 + 48) = v33;
        *(_QWORD *)(v28 + 56) = *((_QWORD *)v26 + 7);
        v34 = *((void **)v26 + 3);
        if ( v34 )
        {
          *((_QWORD *)v26 + 4) = 0;
          qfree(v34);
        }
        v35 = *(void **)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          qfree(v35);
        }
        v26 += 64;
        v28 += 64;
      }
      while ( v27-- != 0 );
      v26 = (char *)a1[74];
    }
    qfree(v26);
    a1[74] = v40;
    a1[76] = v41;
    v11 = a1[75];
  }
  else
  {
    v40 = a1[74];
  }
  v12 = (v11 << 6) + v40;
  *(_QWORD *)v12 = 0;
  v13 = v12;
  *(_OWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_OWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 48) = -1;
  *(_QWORD *)(v12 + 56) = 4;
  ++a1[75];
  v14 = *(void **)v12;
  v15 = _mm_loadu_si128((const __m128i *)(v12 + 8));
  v16 = *(_QWORD *)(v12 + 40);
  *(_QWORD *)v12 = ptr;
  ptr = v14;
  *(__m128i *)(v12 + 8) = v47;
  v17 = *(void **)(v12 + 24);
  v47 = v15;
  *(_QWORD *)(v13 + 24) = dest;
  dest = v17;
  *(_OWORD *)(v13 + 32) = v49;
  *((_QWORD *)&v49 + 1) = v16;
  LODWORD(v16) = *(_DWORD *)(v13 + 48);
  *(_DWORD *)(v13 + 48) = v50;
  LODWORD(v50) = v16;
  LODWORD(v16) = *(_DWORD *)(v13 + 52);
  *(_DWORD *)(v13 + 52) = HIDWORD(v50);
  HIDWORD(v50) = v16;
  LODWORD(v16) = *(_DWORD *)(v13 + 56);
  *(_DWORD *)(v13 + 56) = v51;
  LODWORD(v51) = v16;
  LODWORD(v16) = *(_DWORD *)(v13 + 60);
  *(_DWORD *)(v13 + 60) = HIDWORD(v51);
  HIDWORD(v51) = v16;
  if ( v17 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v17);
    v14 = ptr;
  }
  if ( v14 )
  {
    v47.m128i_i64[0] = 0;
    qfree(v14);
  }
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v43);
  }
  return v54 - __readfsqword(0x28u);
}

