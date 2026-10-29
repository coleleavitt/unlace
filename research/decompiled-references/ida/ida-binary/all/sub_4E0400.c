__int64 __fastcall sub_4E0400(__int64 a1, const char *a2, __int64 a3, double a4, double a5, double a6, double a7)
{
  char *v7; // rbp
  unsigned __int64 v8; // rbx
  void *v9; // r12
  __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int128 v13; // xmm0
  unsigned int v14; // ebx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r14
  char v19; // r12
  int v20; // r15d
  void *v21; // rax
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  void **v23; // [rsp+18h] [rbp-90h]
  char v24; // [rsp+2Fh] [rbp-79h] BYREF
  void *src[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v26[2]; // [rsp+40h] [rbp-68h] BYREF
  int v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v7 = (char *)a2;
  v22.m128i_i64[0] = a3;
  v28 = __readfsqword(0x28u);
  v27 = -1;
  *(_OWORD *)src = 0;
  memset(v26, 0, sizeof(v26));
  if ( !(unsigned __int8)sub_4DADD0(a1 + 1848)
    || (v16 = *(_QWORD *)(a1 + 1848), v17 = v16 + 80LL * *(_QWORD *)(a1 + 1856), v17 == v16) )
  {
LABEL_2:
    if ( (BYTE12(v26[1]) & 0x10) == 0 )
    {
      a2 = &v24;
      sub_4D9060((__int64 *)src, &v24);
    }
    v8 = (unsigned __int64)src[1];
    v9 = nullptr;
    if ( src[1] )
    {
      v21 = (void *)qalloc_or_throw(2 * (__int64)src[1]);
      a2 = (const char *)src[0];
      v9 = v21;
      memcpy(v21, src[0], 2 * v8);
    }
    v10 = *(_QWORD *)v7;
    v11 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( *(_QWORD *)v7 )
    {
      *((_QWORD *)v7 + 1) = 0;
      v22 = v11;
      qfree(v10, a2);
      v11 = _mm_load_si128(&v22);
    }
    v12 = *((_QWORD *)&v26[1] + 1);
    *(__m128i *)(v7 + 8) = v11;
    v13 = *(_OWORD *)((char *)v26 + 8);
    v14 = 1;
    *(_QWORD *)v7 = v9;
    *((_QWORD *)v7 + 5) = v12;
    LODWORD(v12) = v27;
    *(_OWORD *)(v7 + 24) = v13;
    *((_DWORD *)v7 + 12) = v12;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 1848);
    v19 = 0;
    v23 = src;
    while ( 1 )
    {
      v20 = *(_DWORD *)v18 & 0xC00;
      if ( v20 != 2048 && (*(_DWORD *)v18 & 0x40) == 0 && ((*(_DWORD *)v18 & 3u) - 1 > 1 || *(_QWORD *)(v18 + 72)) )
      {
        a2 = (const char *)v23;
        v19 |= v20 == 0;
        if ( (unsigned __int8)sub_4E0070(a1, (const char *)v23, (__int64 *)v22.m128i_i64[0], v18, 0.0, a5, a6, a7) )
          break;
      }
      v18 += 80;
      if ( v17 == v18 )
      {
        if ( !v19 )
          goto LABEL_2;
        v14 = 0;
        goto LABEL_9;
      }
    }
    if ( v20 != 1024 )
      goto LABEL_2;
    v14 = 0;
  }
LABEL_9:
  if ( src[0] )
  {
    src[1] = nullptr;
    qfree(src[0], a2);
  }
  return v14;
}
