unsigned __int64 __fastcall sub_3CE110(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // rdi
  __m128i *v13; // rsi
  __int64 v14; // rdx
  __m128i *v15; // r12
  unsigned __int64 v16; // rbx
  unsigned __int64 i; // r15
  __int64 v18; // rsi
  int v19; // r13d
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  const char *v23; // rdx
  unsigned __int64 v24; // [rsp+8h] [rbp-10C0h]
  _QWORD *v25; // [rsp+10h] [rbp-10B8h]
  FILE *stream; // [rsp+18h] [rbp-10B0h]
  __m128i v27; // [rsp+30h] [rbp-1098h] BYREF
  void *ptr; // [rsp+40h] [rbp-1088h] BYREF
  __int128 v29; // [rsp+48h] [rbp-1080h]
  _QWORD v30[2]; // [rsp+60h] [rbp-1068h] BYREF
  int v31; // [rsp+70h] [rbp-1058h]
  char v32[4104]; // [rsp+80h] [rbp-1048h] BYREF
  unsigned __int64 v33; // [rsp+1088h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v4 = *(void **)(a1 + 1160);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1160) = 0;
    *(_QWORD *)(a1 + 1176) = 0;
  }
  v5 = *(void **)(a1 + 1120);
  *(_QWORD *)(a1 + 1184) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1128) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1120) = 0;
    *(_QWORD *)(a1 + 1136) = 0;
  }
  v6 = *(_QWORD *)(a1 + 968);
  *(_QWORD *)(a1 + 1144) = 0;
  while ( v6 )
  {
    sub_3BBD60(*(_QWORD **)(v6 + 24));
    v5 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    a2 = 56;
    operator delete(v5, 0x38u);
  }
  *(_QWORD *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 976) = a1 + 960;
  *(_QWORD *)(a1 + 984) = a1 + 960;
  *(_QWORD *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1208) = -1;
  v7 = is_cvt64(v5, a2, a3);
  v8 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 1200) = v7;
  sub_592AF0(v8, v32, 4096, &off_23AD860);
  stream = (FILE *)fopenRB(v32);
  if ( stream )
  {
    v25 = (_QWORD *)(a1 + 952);
    v9 = qfsize(stream);
    v10 = v9;
    if ( v9 > 0 )
    {
      v29 = 0;
      ptr = nullptr;
      ptr = (void *)qvector_reserve(&ptr, 0, v9, 1);
      memset((char *)ptr + v29, 0, v10 - v29);
      *(_QWORD *)&v29 = v10;
      if ( v10 != qfread(stream, ptr) )
      {
        v23 = (const char *)qstrerror(0xFFFFFFFFLL);
        sub_378C70((__int64)"%s: %s", v32, v23);
      }
      v11 = (char *)ptr;
      v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v29));
      if ( *(_QWORD *)ptr != 0x5555A51D53414449LL )
        sub_378C70((__int64)"Wrong sparse file magic number");
      if ( (unsigned __int64)v29 > 7 )
        v11 = (char *)ptr + 8;
      v27.m128i_i64[0] = (__int64)&v11[v11 < (char *)ptr + (unsigned __int64)v29];
      sub_3B9F50((_QWORD *)(a1 + 1120), &v27);
      v12 = a1 + 1160;
      v13 = &v27;
      sub_3B9F50((_QWORD *)(a1 + 1160), &v27);
      v14 = 0x100000000LL;
      v24 = 0x100000000LL;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
        v24 = -1;
      v15 = *(__m128i **)(a1 + 976);
      v16 = 0;
      for ( i = 0;
            v27.m128i_i64[0] < (unsigned __int64)v27.m128i_i64[1];
            v15 = (__m128i *)sub_3CD760(v25, v15, (__int64)v30) )
      {
        if ( (unsigned __int8)is_cvt64(v12, v13, v14) )
        {
          v16 = (unsigned int)unpack_dd(&v27) + (unsigned int)v16;
          if ( (unsigned int)v16 == 0xFFFFFFFFLL )
            break;
        }
        else
        {
          v16 += unpack_dq(&v27);
          if ( v16 == -1 )
            break;
          if ( v16 >= v24 )
            sub_368890();
        }
        v18 = v27.m128i_i64[1];
        v19 = unpack_dd(&v27);
        if ( (unsigned __int8)is_cvt64(&v27, v18, v20) )
        {
          v21 = (unsigned int)unpack_dd(&v27);
          if ( v21 == 0xFFFFFFFF )
            v21 = -1;
        }
        else
        {
          v21 = unpack_dq(&v27);
        }
        if ( (v19 & 0x600) != 0x200 )
        {
          if ( v16 < i )
            sub_368890();
          i = v16 + v21;
          if ( v24 - v16 < v21 )
            sub_368890();
        }
        v12 = a1 + 952;
        v13 = v15;
        v30[0] = v16;
        v30[1] = v21;
        v31 = v19;
      }
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
    }
    qfclose(stream);
    sub_3BC8E0(a1, "sparse_flags", (unsigned __int64)v25, 0);
  }
  return v33 - __readfsqword(0x28u);
}
