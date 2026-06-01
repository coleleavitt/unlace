unsigned __int64 __fastcall sub_3C89D0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  void *i; // r12
  int v16; // r13d
  unsigned int v17; // ecx
  const char *v19; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-10B0h]
  FILE *stream; // [rsp+18h] [rbp-10A0h]
  _DWORD v22[4]; // [rsp+30h] [rbp-1088h] BYREF
  __m128i v23; // [rsp+40h] [rbp-1078h] BYREF
  void *ptr; // [rsp+50h] [rbp-1068h] BYREF
  __int128 v25; // [rsp+58h] [rbp-1060h]
  char v26[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1078h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = *(void **)(a1 + 1152);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1160) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1152) = 0;
    *(_QWORD *)(a1 + 1168) = 0;
  }
  v3 = *(void **)(a1 + 1112);
  *(_QWORD *)(a1 + 1176) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1112) = 0;
    *(_QWORD *)(a1 + 1128) = 0;
  }
  v4 = *(_QWORD *)(a1 + 960);
  *(_QWORD *)(a1 + 1136) = 0;
  while ( v4 )
  {
    sub_3B68C0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 968) = a1 + 952;
  *(_QWORD *)(a1 + 976) = a1 + 952;
  *(_QWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 1196) = -1;
  *(_BYTE *)(a1 + 1192) = 0;
  sub_579240(v6, v26, 4096, &unk_2389820);
  stream = (FILE *)fopenRB(v26);
  if ( stream )
  {
    v20 = (_QWORD *)(a1 + 944);
    v7 = qfsize(stream);
    v8 = v7;
    if ( v7 > 0 )
    {
      v25 = 0;
      ptr = nullptr;
      ptr = (void *)qvector_reserve(&ptr, 0, v7, 1);
      memset((char *)ptr + v25, 0, v8 - v25);
      v9 = ptr;
      *(_QWORD *)&v25 = v8;
      if ( v8 != qfread(stream, ptr) )
      {
        v19 = (const char *)qstrerror(0xFFFFFFFFLL, v9, v10, v11);
        sub_375320((__int64)"%s: %s", v26, v19);
      }
      v12 = (char *)ptr;
      v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v25));
      if ( *(_QWORD *)ptr != 0x5555A51D53414449LL )
        sub_375320((__int64)"Wrong sparse file magic number");
      if ( (unsigned __int64)v25 > 7 )
        v12 = (char *)ptr + 8;
      v23.m128i_i64[0] = (__int64)&v12[v12 < (char *)ptr + (unsigned __int64)v25];
      sub_3B36B0(a1 + 1112);
      sub_3B36B0(a1 + 1152);
      v13 = 0;
      v14 = 0;
      for ( i = *(void **)(a1 + 968);
            v23.m128i_i64[0] < (unsigned __int64)v23.m128i_i64[1];
            i = sub_3C8070(v20, (__int64)i, (__int64)v22) )
      {
        v13 += unpack_dd(&v23);
        if ( v13 == -1 )
          break;
        v16 = unpack_dd(&v23);
        v17 = unpack_dd(&v23);
        if ( (v16 & 0x600) != 0x200 )
        {
          if ( v13 < v14 )
            sub_365330();
          if ( ~v13 < v17 )
            sub_365330();
          v14 = v13 + v17;
        }
        v22[0] = v13;
        v22[1] = v17;
        v22[2] = v16;
      }
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
    }
    qfclose(stream);
    sub_3B7D50(a1, "sparse_flags", (__int64)v20, 0);
  }
  return v27 - __readfsqword(0x28u);
}

