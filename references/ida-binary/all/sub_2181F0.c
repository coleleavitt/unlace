unsigned __int64 __fastcall sub_2181F0(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  int i; // r14d
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128i *v18; // rsi
  bool v19; // cc
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v32; // [rsp+0h] [rbp-78h]
  unsigned __int64 v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+0h] [rbp-78h]
  __int64 v35; // [rsp+0h] [rbp-78h]
  void *src; // [rsp+8h] [rbp-70h]
  void *srca; // [rsp+8h] [rbp-70h]
  void *srcb; // [rsp+8h] [rbp-70h]
  void *v40; // [rsp+18h] [rbp-60h]
  char *v41; // [rsp+28h] [rbp-50h] BYREF
  char v42; // [rsp+33h] [rbp-45h] BYREF
  _BYTE v43[4]; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a4 > 0 )
  {
    for ( i = 0; a4 != i; ++i )
    {
      if ( !a2[1] )
        a2[1] = qlsize(*a2);
      if ( qlseek(*a2, 0, 1) >= a2[1] )
        return v44 - __readfsqword(0x28u);
      v19 = *(_BYTE *)a1 <= 7u;
      v20 = *a2;
      LOBYTE(v41) = 0;
      if ( v19 )
      {
        qlread(v20, &v41, 1);
        v21 = 1;
        v42 = (char)v41;
        if ( (char)v41 < 0 )
        {
          if ( (~(_BYTE)v41 & 0xC0) != 0 )
          {
            v24 = 2;
            v25 = 1;
          }
          else
          {
            v24 = 4;
            v25 = 3;
            if ( (~(_BYTE)v41 & 0xE0) == 0 )
            {
              v24 = 5;
              v25 = 4;
            }
          }
          v34 = v24;
          qlread(*a2, v43, v25);
          v21 = v34;
        }
        v41 = &v42;
        v33 = (unsigned int)unpack_dd(&v41, &v43[v21 - 1]);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v33 )
          goto LABEL_6;
      }
      else
      {
        qlread(v20, &v41, 1);
        v8 = 1;
        v42 = (char)v41;
        if ( (char)v41 < 0 )
        {
          if ( (~(_BYTE)v41 & 0xC0) != 0 )
          {
            v28 = 2;
            v29 = 1;
          }
          else
          {
            v28 = 4;
            v29 = 3;
            if ( (~(_BYTE)v41 & 0xE0) == 0 )
            {
              v28 = 5;
              v29 = 4;
            }
          }
          v35 = v28;
          qlread(*a2, v43, v29);
          v8 = v35;
        }
        v41 = &v42;
        v9 = unpack_dd(&v41, &v43[v8 - 1]);
        v10 = *a2;
        v32 = v9;
        LOBYTE(v41) = 0;
        qlread(v10, &v41, 1);
        v11 = 1;
        v42 = (char)v41;
        if ( (char)v41 < 0 )
        {
          if ( (~(_BYTE)v41 & 0xC0) != 0 )
          {
            v26 = 2;
            v27 = 1;
          }
          else
          {
            v26 = 4;
            v27 = 3;
            if ( (~(_BYTE)v41 & 0xE0) == 0 )
            {
              v26 = 5;
              v27 = 4;
            }
          }
          srcb = (void *)v26;
          qlread(*a2, v43, v27);
          v11 = (__int64)srcb;
        }
        v41 = &v42;
        v33 = v32 | (unsigned __int64)(unpack_dd(&v41, &v43[v11 - 1]) << 32);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v33 )
          goto LABEL_6;
      }
      v33 = -1;
LABEL_6:
      v12 = *a2;
      LOBYTE(v41) = 0;
      qlread(v12, &v41, 1);
      v13 = 1;
      v42 = (char)v41;
      if ( (char)v41 < 0 )
      {
        if ( (~(_BYTE)v41 & 0xC0) != 0 )
        {
          v22 = 2;
          v23 = 1;
        }
        else
        {
          v22 = 4;
          v23 = 3;
          if ( (~(_BYTE)v41 & 0xE0) == 0 )
          {
            v22 = 5;
            v23 = 4;
          }
        }
        srca = (void *)v22;
        qlread(*a2, v43, v23);
        v13 = (__int64)srca;
      }
      v41 = &v42;
      v14 = (unsigned int)unpack_dd(&v41, &v43[v13 - 1]);
      if ( v14 - 1 <= 0x3FF )
      {
        v15 = qalloc(v14);
        if ( v15 )
        {
          src = (void *)v15;
          if ( v14 == qlread(*a2, v15, v14) )
          {
            v40 = (void *)qalloc_or_throw(v14);
            memcpy(v40, src, v14);
            v16 = a3[1];
            v17 = *a3;
            if ( a3[2] < (unsigned __int64)(v16 + 1) )
            {
              v30 = qvector_reserve(a3, v17, v16 + 1, 32);
              *a3 = v30;
              v17 = v30;
              v16 = a3[1];
            }
            v18 = (__m128i *)(32 * v16 + v17);
            v18[1] = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
            v18->m128i_i64[0] = v33;
            v18->m128i_i64[1] = (__int64)v40;
            ++a3[1];
            qfree(src, v18->m128i_i8);
          }
        }
      }
    }
  }
  return v44 - __readfsqword(0x28u);
}
