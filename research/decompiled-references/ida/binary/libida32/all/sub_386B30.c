__int64 __fastcall sub_386B30(__int64 a1, int a2, int a3, unsigned __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  int v9; // r15d
  _BYTE *v10; // rbx
  int v11; // r14d
  char v12; // al
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 result; // rax
  _QWORD *v16; // r14
  size_t v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  void *v22; // rbx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  unsigned __int64 v25; // rax
  void *v26; // rdi
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  int v29; // eax
  _BOOL8 v30; // rdx
  const char *v31; // rdi
  const char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-88h]
  _BYTE *v36; // [rsp+8h] [rbp-80h]
  __m128i v37; // [rsp+10h] [rbp-78h] BYREF
  void *src; // [rsp+20h] [rbp-68h]
  _QWORD *v39; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v41; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 192);
  v42 = __readfsqword(0x28u);
  v36 = nullptr;
  v9 = v6;
  if ( (int)v6 <= 1 )
    goto LABEL_14;
  do
  {
    v10 = *(_BYTE **)(v7 + 8);
    if ( *v10 != 45 )
      break;
    v11 = (unsigned __int8)v10[1];
    if ( (char)v11 <= 111 )
    {
      if ( (char)v11 > 64 )
      {
        switch ( (char)v11 )
        {
          case 'A':
          case 'B':
          case 'C':
          case 'L':
          case 'M':
          case 'O':
          case 'c':
          case 'd':
            goto LABEL_11;
          case 'D':
            v16 = *(_QWORD **)a1;
            ptr = nullptr;
            src = v10 + 2;
            v41 = 0;
            v39 = v16 + 13;
            v17 = strlen(v10 + 2);
            v37.m128i_i64[1] = v17 + 1;
            v37.m128i_i64[0] = (__int64)&ptr;
            ptr = (void *)qvector_reserve(&ptr, 0, v17 + 1, 1);
            v41.m128i_i64[0] = v37.m128i_i64[1];
            memmove(ptr, src, v17);
            *((_BYTE *)ptr + v17) = 0;
            v18 = v16[14];
            v19 = v16[13];
            v20 = v16[15];
            v21 = v18 + 1;
            if ( v37.m128i_i64[0] < v19 || (a4 = v19 + 24 * v20, v37.m128i_i64[0] >= a4) )
            {
              if ( v20 < v21 )
              {
                v33 = qvector_reserve(v39, v19, v18 + 1, 24);
                v16[13] = v33;
                v19 = v33;
                v18 = v16[14];
              }
              v27 = _mm_loadu_si128(&v41);
              v28 = v19 + 24 * v18;
              *(_QWORD *)v28 = ptr;
              *(__m128i *)(v28 + 8) = v27;
              ++v16[14];
            }
            else
            {
              v22 = ptr;
              v23 = _mm_loadl_epi64(&v41);
              ptr = nullptr;
              v24 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
              v41 = 0;
              if ( v20 < v21 )
              {
                v37.m128i_i64[1] = v24.m128i_i64[0];
                v37.m128i_i64[0] = v23.m128i_i64[0];
                v34 = qvector_reserve(v39, v19, v18 + 1, 24);
                v16[13] = v34;
                v19 = v34;
                v24 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
                v18 = v16[14];
                v23 = _mm_loadl_epi64(&v37);
              }
              v25 = v19 + 24 * v18;
              *(_QWORD *)v25 = v22;
              *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v23, v24);
              v26 = ptr;
              ++v16[14];
              if ( v26 )
              {
                v41.m128i_i64[0] = 0;
                qfree(v26);
              }
            }
            goto LABEL_11;
          case 'P':
            v12 = v10[2];
            if ( v12 == 43 )
            {
              *(_BYTE *)(a1 + 218) = 2;
            }
            else if ( v12 == 45 )
            {
              *(_BYTE *)(a1 + 218) = 0;
            }
            else
            {
              if ( v12 )
                goto LABEL_9;
              *(_BYTE *)(a1 + 218) = 1;
            }
            break;
          case 'R':
            v36 = *(_BYTE **)(v7 + 8);
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 213LL) = 1;
            goto LABEL_11;
          case 'S':
            if ( *(_QWORD *)(a1 + 88) <= 1u )
              goto LABEL_43;
            v32 = (const char *)qbasename(v10 + 2);
            if ( !strncasecmp(v32, "testida.idc", 0xBu) )
            {
              v31 = *(const char **)(a1 + 80);
            }
            else
            {
              v10 = *(_BYTE **)(v7 + 8);
LABEL_43:
              v31 = v10 + 2;
            }
            sub_386720(v31);
            goto LABEL_11;
          case 'a':
            v30 = v10[2] == 45;
            *(_DWORD *)(a1 + 208) = v30;
            setinf_flag(2, 1, v30);
            goto LABEL_11;
          case 'b':
            qsscanf((_DWORD)v10 + 2, (int)"%a", (int)&ptr, a4, a5, a6, v35);
            setinf(12, (unsigned int)ptr);
            v36 = v10;
            goto LABEL_11;
          case 'f':
            v29 = getinf(3);
            setinf(3, v29 & 0xFFFFFFFE);
            v36 = v10;
            goto LABEL_11;
          case 'i':
            qsscanf((_DWORD)v10 + 2, (int)"%a", (int)&ptr, a4, a5, a6, v35);
            setinf(15, (unsigned int)ptr);
            v36 = v10;
            goto LABEL_11;
          case 'o':
            goto LABEL_27;
          default:
            goto LABEL_9;
        }
        goto LABEL_11;
      }
LABEL_9:
      if ( *(_QWORD *)(a1 + 72) || strcmp(*(const char **)(v7 + 8), "--upg32") )
        sub_383F40(1424, (unsigned int)(char)v11);
      goto LABEL_11;
    }
    LODWORD(a4) = v11 - 112;
    if ( (unsigned __int8)(v11 - 112) > 0xAu )
      goto LABEL_9;
    if ( ((1LL << a4) & 0x415) == 0 )
    {
      if ( (_BYTE)v11 != 118 )
      {
        if ( (_BYTE)v11 == 120 )
        {
          *(_DWORD *)(a1 + 212) = 0;
LABEL_27:
          v36 = v10;
          goto LABEL_11;
        }
        goto LABEL_9;
      }
      *(_BYTE *)(a1 + 228) = 1;
    }
LABEL_11:
    --v9;
    v7 += 8;
  }
  while ( v9 != 1 );
  if ( *(_BYTE *)(a1 + 219) != 1 && v36 )
    sub_383F40(1428, v36);
LABEL_14:
  if ( (unsigned int)getinf(12) == -1 )
    setinf(12, 4096);
  sub_3841A0(*(_QWORD **)a1, 0);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
  if ( v13 )
  {
    v14 = add_encoding(v13);
    set_default_encoding_idx(1, v14);
  }
  result = 1;
  if ( *(_QWORD *)(a1 + 72) )
  {
    result = sub_5E4110(0);
    if ( (_BYTE)result )
      callui();
    *(_WORD *)(a1 + 216) |= 0x800u;
  }
  return result;
}

