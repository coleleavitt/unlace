__int64 __fastcall sub_5AD0(__int64 a1, const char *a2, const char *a3, const char *a4)
{
  size_t v7; // r13
  const char *v8; // rbx
  char *v9; // rax
  int v10; // r9d
  unsigned __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  char *v17; // rbx
  size_t v18; // rax
  __int64 v19; // r14
  size_t v20; // r13
  size_t v21; // rax
  __int64 v22; // rbx
  size_t v23; // r13
  void *v24; // rax
  void *v25; // rdi
  void *v26; // rbx
  __m128i v27; // xmm0
  void *v28; // rdi
  void *v29; // rbx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  void *v32; // rdi
  __int64 v33; // rcx
  __m128i v34; // [rsp+0h] [rbp-498h] BYREF
  unsigned int v35; // [rsp+10h] [rbp-488h] BYREF
  unsigned int v36; // [rsp+14h] [rbp-484h] BYREF
  int v37; // [rsp+18h] [rbp-480h] BYREF
  int v38; // [rsp+1Ch] [rbp-47Ch] BYREF
  unsigned __int64 v39; // [rsp+20h] [rbp-478h]
  int v40; // [rsp+28h] [rbp-470h]
  void *v41; // [rsp+30h] [rbp-468h] BYREF
  __m128i v42; // [rsp+38h] [rbp-460h] BYREF
  void *ptr; // [rsp+48h] [rbp-450h] BYREF
  __m128i v44; // [rsp+50h] [rbp-448h] BYREF
  char s[1032]; // [rsp+60h] [rbp-438h] BYREF
  unsigned __int64 v46; // [rsp+468h] [rbp-30h]

  v46 = __readfsqword(0x28u);
  v7 = strlen(a3);
  if ( !strncmp(a2, a3, v7) )
  {
    v8 = &a2[v7];
    v9 = strstr(&a2[v7], a4);
    if ( !v9 )
      v9 = (char *)&v8[strlen(v8)];
    v11 = v9 - v8;
    v12 = s;
    if ( v11 > 0x3FF )
      v11 = 1023;
    if ( (unsigned int)v11 >= 8 )
    {
      v13 = 0;
      v33 = (unsigned int)v11 >> 3;
      qmemcpy(s, v8, 8 * v33);
      v12 = &s[8 * v33];
      v8 += 8 * v33;
      if ( (v11 & 4) == 0 )
      {
LABEL_8:
        if ( (v11 & 2) == 0 )
          goto LABEL_9;
        goto LABEL_26;
      }
    }
    else
    {
      v13 = 0;
      if ( (v11 & 4) == 0 )
        goto LABEL_8;
    }
    *(_DWORD *)v12 = *(_DWORD *)v8;
    v13 = 4;
    if ( (v11 & 2) == 0 )
    {
LABEL_9:
      if ( (v11 & 1) == 0 )
        goto LABEL_10;
      goto LABEL_25;
    }
LABEL_26:
    *(_WORD *)&v12[v13] = *(_WORD *)&v8[v13];
    v13 += 2;
    if ( (v11 & 1) == 0 )
    {
LABEL_10:
      s[v11] = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      if ( (unsigned int)sub_12880(
                           (unsigned int)s,
                           (unsigned int)"%d.%d%n",
                           (unsigned int)&v35,
                           (unsigned int)&v36,
                           (unsigned int)&v38,
                           v10,
                           v34.m128i_i8[0]) != 2 )
        return 1;
      v17 = &s[v38];
      if ( *v17 == 46 && (unsigned __int8)(v17[1] - 48) <= 9u )
      {
        if ( (unsigned int)sub_12880(
                             (unsigned int)s + v38,
                             (unsigned int)".%d%n",
                             (unsigned int)&v37,
                             (unsigned int)&v38,
                             v14,
                             v15,
                             v34.m128i_i8[0]) != 1 )
          return 1;
        v17 += v38;
      }
      v41 = nullptr;
      v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v36)).m128i_u64[0];
      v40 = v37;
      v42 = 0;
      if ( v17 )
      {
        v18 = strlen(v17);
        v19 = v18 + 1;
        v20 = v18;
        v41 = (void *)sub_11430(&v41, 0, v18 + 1, 1);
        v42.m128i_i64[0] = v19;
        memmove(v41, v17, v20);
        *((_BYTE *)v41 + v20) = 0;
      }
      ptr = nullptr;
      v44 = 0;
      v21 = strlen(s);
      v22 = v21 + 1;
      v23 = v21;
      v24 = (void *)sub_11430(&ptr, 0, v21 + 1, 1);
      v44.m128i_i64[0] = v22;
      ptr = v24;
      memmove(v24, s, v23);
      *((_BYTE *)ptr + v23) = 0;
      v25 = *(void **)(a1 + 16);
      v26 = v41;
      v41 = nullptr;
      *(_QWORD *)a1 = v39;
      v27 = _mm_loadu_si128(&v42);
      v42 = 0;
      *(_DWORD *)(a1 + 8) = v40;
      if ( v25 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v34 = v27;
        j__free(v25);
        v27 = _mm_load_si128(&v34);
      }
      v28 = *(void **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = v26;
      *(__m128i *)(a1 + 24) = v27;
      v29 = ptr;
      v30 = _mm_load_si128(&v44);
      ptr = nullptr;
      v44 = 0;
      if ( v28 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v34 = v30;
        j__free(v28);
        v31 = _mm_load_si128(&v34);
        v32 = ptr;
        *(_QWORD *)(a1 + 40) = v29;
        *(__m128i *)(a1 + 48) = v31;
        if ( v32 )
        {
          v44.m128i_i64[0] = 0;
          j__free(v32);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 40) = v29;
        *(__m128i *)(a1 + 48) = v30;
      }
      if ( v41 )
      {
        v42.m128i_i64[0] = 0;
        j__free(v41);
      }
      return 1;
    }
LABEL_25:
    v12[v13] = v8[v13];
    goto LABEL_10;
  }
  return 0;
}

