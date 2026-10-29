__int64 __fastcall sub_87DEF0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v6; // eax
  char *v8; // r15
  int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // r8
  size_t v12; // r12
  char *v13; // rdi
  const void *v14; // rsi
  _WORD *v15; // rax
  const char *v16; // rdx
  const char *v17; // r13
  const char *v18; // rax
  const __m128i *v19; // rax
  const char *v20; // rdx
  const char *v21; // r13
  __m128i v22; // xmm0
  const char *v23; // rax
  char *v24; // r14
  __int64 v25; // rdi
  int v26; // eax
  char *v27; // rdi
  unsigned int v28; // eax
  void *v29; // r15
  size_t v30; // r13
  char *v31; // rdx
  const void *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  char *v36; // r15
  unsigned int v37; // eax
  __int64 v38; // r8
  size_t v39; // r14
  __int64 v40; // rsi
  char *v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-90h]
  char *v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  void *src[2]; // [rsp+10h] [rbp-88h] BYREF
  void *v47; // [rsp+20h] [rbp-78h] BYREF
  __int128 v48; // [rsp+28h] [rbp-70h]
  void *ptr[11]; // [rsp+40h] [rbp-58h] BYREF

  LODWORD(v2) = 0;
  v3 = *a2;
  v4 = a2[1];
  ptr[3] = (void *)__readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v6 = unpack_dd(src);
  if ( v6 > 3 )
    return (unsigned int)v2;
  v8 = (char *)src[1];
  v9 = v6;
  v47 = nullptr;
  v48 = 0;
  v10 = unpack_dd(src);
  if ( !v10 )
    goto LABEL_11;
  v11 = v48;
  v12 = v10;
  v13 = (char *)v47;
  v2 = v48 + v10;
  if ( *((_QWORD *)&v48 + 1) < v2 )
  {
    v43 = v48;
    v47 = (void *)qvector_reserve(&v47, v47, v2, 1);
    v11 = v43;
    v13 = (char *)v47;
  }
  v14 = src[0];
  *(_QWORD *)&v48 = v2;
  LOBYTE(v2) = (v8 < (char *)src[0] + v12) | __CFADD__(v12, src[0]);
  if ( !(_BYTE)v2 )
  {
    src[0] = (char *)src[0] + v12;
    if ( !memcpy(&v13[v11], v14, v12) )
    {
LABEL_8:
      v13 = (char *)v47;
      goto LABEL_9;
    }
LABEL_11:
    *(__m128i *)ptr = _mm_unpacklo_epi64(
                        (__m128i)(unsigned __int64)v47,
                        (__m128i)(unsigned __int64)((unsigned __int64)v47 + v48));
    if ( (int)unpack_dd(ptr) <= 3 )
    {
      *(_WORD *)(a1 + 26) = unpack_dd(ptr);
      *(_WORD *)(a1 + 28) = unpack_dd(ptr);
      *(_WORD *)(a1 + 30) = unpack_dd(ptr);
      *(_QWORD *)(a1 + 32) = unpack_dq(ptr, ptr[1]);
      *(_QWORD *)(a1 + 127) = unpack_dq(ptr, ptr[1]);
      *(_DWORD *)(a1 + 40) = unpack_dd(ptr);
      *(_DWORD *)(a1 + 44) = unpack_dd(ptr);
      *(_DWORD *)(a1 + 48) = unpack_dd(ptr);
      v15 = ptr[0];
      v16 = (const char *)ptr[1];
      v17 = (char *)ptr[0] + 6;
      if ( ptr[1] >= (char *)ptr[0] + 6 )
      {
        ptr[0] = (char *)ptr[0] + 6;
        *(_DWORD *)(a1 + 52) = *(_DWORD *)v15;
        *(_WORD *)(a1 + 56) = v15[2];
        v18 = v17;
        while ( v16 != v18 )
        {
          if ( !*v18++ )
          {
            ptr[0] = (void *)v18;
            if ( strlen(v17) <= 0x45 )
            {
              qstrncpy(a1 + 58, v17, 69);
              v19 = (const __m128i *)ptr[0];
              v20 = (const char *)ptr[1];
              v21 = (char *)ptr[0] + 16;
              if ( ptr[1] >= (char *)ptr[0] + 16 )
              {
                ptr[0] = (char *)ptr[0] + 16;
                v22 = _mm_loadu_si128(v19);
                v23 = v21;
                *(__m128i *)(a1 + 135) = v22;
                while ( v20 != v23 )
                {
                  if ( !*v23++ )
                  {
                    ptr[0] = (void *)v23;
                    if ( strlen(v21) > 0x40 )
                      goto LABEL_18;
                    qstrncpy(a1 + 151, v21, 64);
                    if ( v9 == 3 )
                    {
                      v36 = (char *)src[1];
                      v37 = unpack_dd(src);
                      if ( v37 )
                      {
                        v38 = *(_QWORD *)(a1 + 264);
                        v39 = v37;
                        v40 = *(_QWORD *)(a1 + 256);
                        v2 = v38 + v37;
                        if ( *(_QWORD *)(a1 + 272) < v2 )
                        {
                          v45 = *(_QWORD *)(a1 + 264);
                          v42 = qvector_reserve(a1 + 256, v40, v38 + v37, 1);
                          *(_QWORD *)(a1 + 256) = v42;
                          v38 = v45;
                          v40 = v42;
                        }
                        v41 = (char *)src[0];
                        *(_QWORD *)(a1 + 264) = v2;
                        LOBYTE(v2) = (v36 < &v41[v39]) | __CFADD__(v39, v41);
                        if ( (_BYTE)v2 )
                          goto LABEL_13;
                        src[0] = &v41[v39];
                        if ( !memcpy((void *)(v40 + v38), v41, v39) )
                          goto LABEL_8;
                      }
                    }
                    v24 = (char *)src[1];
                    v13 = (char *)v47;
                    LODWORD(v2) = 1;
                    if ( src[0] >= src[1] )
                      goto LABEL_9;
                    while ( 1 )
                    {
                      memset(ptr, 0, 24);
                      v28 = unpack_dd(src);
                      if ( v28 )
                      {
                        v29 = ptr[1];
                        v30 = v28;
                        v27 = (char *)ptr[0];
                        v31 = (char *)ptr[1] + v28;
                        if ( ptr[2] < v31 )
                        {
                          v44 = (char *)ptr[1] + v28;
                          ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v31, 1);
                          v31 = v44;
                          v27 = (char *)ptr[0];
                        }
                        v32 = src[0];
                        ptr[1] = v31;
                        if ( __CFADD__(v30, src[0]) || v24 < (char *)src[0] + v30 )
                          goto LABEL_45;
                        src[0] = (char *)src[0] + v30;
                        if ( !memcpy(&v27[(_QWORD)v29], v32, v30) )
                          break;
                      }
                      v33 = *(_QWORD *)(a1 + 8);
                      v34 = *(_QWORD *)a1;
                      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v33 + 1) )
                      {
                        v35 = qvector_reserve(a1, v34, v33 + 1, 112);
                        *(_QWORD *)a1 = v35;
                        v33 = *(_QWORD *)(a1 + 8);
                        v34 = v35;
                      }
                      v25 = v34 + 112 * v33;
                      *(_QWORD *)v25 = 112;
                      *(_QWORD *)(v25 + 8) = 0;
                      *(_QWORD *)(v25 + 32) = 0;
                      *(_QWORD *)(v25 + 56) = 0;
                      *(_QWORD *)(v25 + 80) = 0;
                      *(_QWORD *)(v25 + 88) = 0;
                      *(_OWORD *)(v25 + 16) = 0;
                      *(_OWORD *)(v25 + 40) = 0;
                      *(_OWORD *)(v25 + 64) = 0;
                      *(_OWORD *)(v25 + 96) = 0;
                      ++*(_QWORD *)(a1 + 8);
                      v26 = sub_87C8C0(v25, (unsigned __int64 *)ptr);
                      v27 = (char *)ptr[0];
                      LODWORD(v2) = v26;
                      if ( !(_BYTE)v26 )
                        goto LABEL_45;
                      if ( ptr[0] )
                      {
                        ptr[1] = nullptr;
                        qfree(ptr[0]);
                      }
                      v24 = (char *)src[1];
                      if ( src[0] >= src[1] )
                        goto LABEL_8;
                    }
                    v27 = (char *)ptr[0];
LABEL_45:
                    if ( v27 )
                    {
                      ptr[1] = nullptr;
                      qfree(v27);
                    }
                    goto LABEL_13;
                  }
                }
              }
            }
            break;
          }
        }
      }
LABEL_18:
      if ( (debug & 0x200) != 0 )
        sub_383DA0();
    }
    else if ( (debug & 0x200) != 0 )
    {
      sub_383DA0();
    }
LABEL_13:
    v13 = (char *)v47;
    LODWORD(v2) = 0;
    goto LABEL_9;
  }
  LODWORD(v2) = 0;
LABEL_9:
  if ( v13 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v13);
  }
  return (unsigned int)v2;
}

