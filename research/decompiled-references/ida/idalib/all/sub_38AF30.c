__int64 __fastcall sub_38AF30(_QWORD **a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  void **p_ptr; // rcx
  int v11; // r14d
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 result; // rax
  int v17; // eax
  _BOOL8 v18; // rdx
  const char *v19; // rdi
  char v20; // dl
  __int64 v21; // r10
  size_t v22; // rbx
  _QWORD *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  void *v28; // rbx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rax
  void *v32; // rdi
  __m128i v33; // xmm0
  __int64 v34; // rax
  const char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // [rsp+10h] [rbp-78h]
  _QWORD *v39; // [rsp+10h] [rbp-78h]
  __m128i src; // [rsp+18h] [rbp-70h] BYREF
  __int64 v41; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v43; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v6 = 0;
  v7 = a1[29];
  v8 = a1[30];
  v44 = __readfsqword(0x28u);
  p_ptr = &ptr;
  v11 = (int)v7;
  if ( (int)v7 <= 1 )
    goto LABEL_15;
  while ( 1 )
  {
    v12 = v8[1];
    if ( *(_BYTE *)v12 != 45 )
      break;
    v13 = *(unsigned __int8 *)(v12 + 1);
    if ( (char)v13 > 111 )
    {
      LODWORD(p_ptr) = v13 - 112;
      if ( (unsigned __int8)(v13 - 112) > 0xAu )
        goto LABEL_59;
      if ( ((1LL << (char)p_ptr) & 0x415) != 0 )
      {
LABEL_12:
        --v11;
        ++v8;
        if ( v11 == 1 )
          break;
      }
      else
      {
        if ( (_BYTE)v13 != 118 )
        {
          if ( (_BYTE)v13 != 120 )
            goto LABEL_59;
          *((_DWORD *)a1 + 65) = 0;
LABEL_11:
          v6 = v12;
          goto LABEL_12;
        }
        --v11;
        *((_BYTE *)a1 + 276) = 1;
        ++v8;
        if ( v11 == 1 )
          break;
      }
    }
    else
    {
      if ( (char)v13 <= 64 )
        goto LABEL_59;
      switch ( (char)v13 )
      {
        case 'A':
        case 'B':
        case 'C':
        case 'L':
        case 'M':
        case 'O':
        case 'c':
        case 'd':
          goto LABEL_12;
        case 'D':
          v21 = (__int64)*a1;
          ptr = nullptr;
          src.m128i_i64[0] = v12 + 2;
          src.m128i_i64[1] = v21;
          v41 = v21 + 104;
          v43 = 0;
          v22 = strlen((const char *)(v12 + 2));
          ptr = (void *)qvector_reserve(&ptr, 0, v22 + 1, 1);
          v43.m128i_i64[0] = v22 + 1;
          memmove(ptr, (const void *)src.m128i_i64[0], v22);
          v23 = (_QWORD *)src.m128i_i64[1];
          *((_BYTE *)ptr + v22) = 0;
          v24 = v23[14];
          v25 = v23[13];
          v26 = v23[15];
          v27 = v24 + 1;
          if ( (unsigned __int64)&ptr < v25 || (p_ptr = (void **)(v25 + 24 * v26), &ptr >= p_ptr) )
          {
            if ( v26 < v27 )
            {
              v38 = v23;
              v36 = qvector_reserve(v41, v25, v24 + 1, 24);
              v23 = v38;
              v25 = v36;
              v38[13] = v36;
              v24 = v38[14];
            }
            --v11;
            ++v8;
            v33 = _mm_loadu_si128(&v43);
            v34 = v25 + 24 * v24;
            *(_QWORD *)v34 = ptr;
            *(__m128i *)(v34 + 8) = v33;
            ++v23[14];
            if ( v11 == 1 )
              goto LABEL_13;
          }
          else
          {
            v28 = ptr;
            v29 = _mm_loadl_epi64(&v43);
            ptr = nullptr;
            v30 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
            v43 = 0;
            if ( v26 < v27 )
            {
              v39 = v23;
              src.m128i_i64[1] = v30.m128i_i64[0];
              src.m128i_i64[0] = v29.m128i_i64[0];
              v37 = qvector_reserve(v41, v25, v24 + 1, 24);
              v23 = v39;
              v25 = v37;
              v30 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
              v29 = _mm_loadl_epi64(&src);
              v39[13] = v37;
              v24 = v39[14];
            }
            v31 = v25 + 24 * v24;
            *(_QWORD *)v31 = v28;
            *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v29, v30);
            v32 = ptr;
            ++v23[14];
            if ( !v32 )
              goto LABEL_12;
            --v11;
            ++v8;
            v43.m128i_i64[0] = 0;
            qfree(v32);
            if ( v11 == 1 )
              goto LABEL_13;
          }
          continue;
        case 'P':
          v20 = *(_BYTE *)(v12 + 2);
          if ( v20 == 43 )
          {
            --v11;
            *((_BYTE *)a1 + 266) = 2;
            ++v8;
            if ( v11 == 1 )
              goto LABEL_13;
          }
          else if ( v20 == 45 )
          {
            --v11;
            *((_BYTE *)a1 + 266) = 0;
            ++v8;
            if ( v11 == 1 )
              goto LABEL_13;
          }
          else
          {
            if ( v20 )
LABEL_59:
              sub_387C60(1424, (unsigned int)(char)v13);
            --v11;
            *((_BYTE *)a1 + 266) = 1;
            ++v8;
            if ( v11 == 1 )
              goto LABEL_13;
          }
          break;
        case 'R':
          v6 = v8[1];
          *((_BYTE *)a1[1] + 221) = 1;
          goto LABEL_12;
        case 'S':
          if ( (unsigned __int64)a1[11] <= 1 )
            goto LABEL_29;
          v35 = (const char *)qbasename(v12 + 2);
          if ( !strncasecmp(v35, "testida.idc", 0xBu) )
          {
            v19 = (const char *)a1[10];
          }
          else
          {
            v12 = v8[1];
LABEL_29:
            v19 = (const char *)(v12 + 2);
          }
          sub_38AB20(v19);
          --v11;
          ++v8;
          if ( v11 == 1 )
            goto LABEL_13;
          continue;
        case 'a':
          v18 = *(_BYTE *)(v12 + 2) == 45;
          --v11;
          ++v8;
          *((_DWORD *)a1 + 64) = v18;
          setinf_flag(2, 1, v18);
          if ( v11 == 1 )
            goto LABEL_13;
          continue;
        case 'b':
          v6 = v8[1];
          qsscanf(v12 + 2, (unsigned int)"%a", (unsigned int)&ptr, (_DWORD)p_ptr, a5, a6);
          setinf(12, ptr);
          goto LABEL_12;
        case 'f':
          v6 = v8[1];
          v17 = getinf(3);
          setinf(3, v17 & 0xFFFFFFFE);
          goto LABEL_12;
        case 'i':
          v6 = v8[1];
          qsscanf(v12 + 2, (unsigned int)"%a", (unsigned int)&ptr, (_DWORD)p_ptr, a5, a6);
          setinf(15, ptr);
          goto LABEL_12;
        case 'o':
          goto LABEL_11;
        default:
          goto LABEL_59;
      }
    }
  }
LABEL_13:
  if ( *((_BYTE *)a1 + 267) != 1 && v6 )
    sub_387C60(1428, v6);
LABEL_15:
  if ( getinf(12) == -1 )
    setinf(12, 4096);
  sub_387EC0(*a1, 0);
  v14 = a1[1][17];
  if ( v14 )
  {
    v15 = add_encoding(v14);
    set_default_encoding_idx(1, v15);
  }
  result = 1;
  if ( a1[9] )
  {
    result = sub_5FFFD0(0);
    if ( (_BYTE)result )
      callui();
    *((_WORD *)a1 + 132) |= 0x800u;
  }
  return result;
}
