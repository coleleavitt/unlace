__int64 __fastcall sub_6C70C0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __m128 si128,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int *v17; // rbp
  size_t v18; // r14
  void *v19; // rax
  void *v20; // rbp
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  double v25; // xmm4_8
  double v26; // xmm5_8
  _QWORD *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  _BYTE *v30; // rdi
  _BYTE *v31; // rbp
  _BYTE *v32; // rsi
  _DWORD *v33; // rdi
  char *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbp
  void *v38; // r9
  char *v39; // rdx
  void *v40; // rax
  __int64 v41; // rax
  void *src[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+10h] [rbp-68h]
  __int64 v44; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v46; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v15 = a3;
  v44 = a5;
  v47 = __readfsqword(0x28u);
  v43 = &a3[a4];
  if ( v43 == a3 )
    return sub_6BE5F0((_QWORD *)a1, a2, v44);
  while ( 1 )
  {
    v23 = *v15;
    v24 = sub_B508C0(*v15);
    if ( !(unsigned __int8)sub_6C6DE0(
                             (_QWORD *)a1,
                             (__int64)a2,
                             v24,
                             v23,
                             *(double *)si128.m128_u64,
                             a7,
                             a8,
                             a9,
                             v25,
                             v26,
                             a12,
                             a13) )
      return 0;
    v27 = (_QWORD *)(*a2 + 80 * a2[1] - 80);
    v28 = *(_QWORD *)(v23 + 40);
    if ( (v28 & 7) == 0
      && (v16 = v28 & 0xFFFFFFFFFFFFFFF8LL) != 0
      && (v17 = *(unsigned int **)(v16 + 16), v18 = *v17, src[0] = v17 + 4, v18) )
    {
      v46 = 0;
      ptr = nullptr;
      v19 = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
      v46.m128i_i64[0] = v18 + 1;
      ptr = v19;
      memmove(v19, src[0], v18);
      *((_BYTE *)ptr + v18) = 0;
      v20 = ptr;
      si128 = (__m128)_mm_loadu_si128(&v46);
    }
    else
    {
      si128 = 0;
      v20 = nullptr;
    }
    ptr = nullptr;
    a7 = 0;
    v46 = 0;
    v21 = (void *)v27[2];
    if ( v21 )
    {
      v27[3] = 0;
      *(__m128 *)src = si128;
      qfree(v21);
      si128 = (__m128)_mm_load_si128((const __m128i *)src);
      v22 = ptr;
      v27[2] = v20;
      *(__m128 *)(v27 + 3) = si128;
      if ( v22 )
      {
        v46.m128i_i64[0] = 0;
        qfree(v22);
      }
      if ( (*(_BYTE *)(a1 + 122) & 2) != 0 )
        goto LABEL_10;
    }
    else
    {
      v27[2] = v20;
      *(__m128 *)(v27 + 3) = si128;
      if ( (*(_BYTE *)(a1 + 122) & 2) != 0 )
        goto LABEL_10;
    }
    v29 = v27[3];
    if ( v29 <= 1 )
    {
LABEL_10:
      if ( !*(_BYTE *)(a1 + 584) || !v27[3] )
        goto LABEL_12;
      v30 = (_BYTE *)v27[2];
LABEL_24:
      src[0] = v30;
      if ( strcmp(v30, "th_s") )
        goto LABEL_12;
      v33 = src[0];
      if ( v27[4] <= 4u )
      {
        v36 = qvector_reserve(v27 + 2, src[0], 5, 1);
        v27[2] = v36;
        v33 = (_DWORD *)v36;
      }
      v27[3] = 5;
      ++v15;
      *v33 = 1936287860;
      *(_BYTE *)(v27[2] + 4LL) = 0;
      if ( v43 == v15 )
        return sub_6BE5F0((_QWORD *)a1, a2, v44);
    }
    else
    {
      v30 = (_BYTE *)v27[2];
      v31 = &v30[v29 - 1];
      v32 = v30;
      if ( v30 < v31 )
      {
        while ( *v32 == 95 )
        {
          if ( v31 == ++v32 )
          {
            *v30 = *v31;
            v35 = (char *)v27[2];
            goto LABEL_31;
          }
        }
        if ( v30 >= v32 )
          goto LABEL_23;
        v37 = v31 - v32;
        src[0] = (void *)(v37 + 1);
        memmove(v30, v32, v37 + 1);
        v35 = (char *)v27[2];
        v38 = src[0];
        v39 = v35;
        if ( v37 )
        {
          v40 = (void *)v27[3];
          if ( v40 < src[0] )
          {
            if ( (void *)v27[4] < src[0] )
            {
              v41 = qvector_reserve(v27 + 2, v27[2], src[0], 1);
              v38 = src[0];
              v27[2] = v41;
              v35 = (char *)v41;
              v40 = (void *)v27[3];
            }
            src[0] = v38;
            memset(&v35[(_QWORD)v40], 0, (_BYTE *)v38 - (_BYTE *)v40);
            v39 = (char *)v27[2];
            v27[3] = src[0];
          }
          else if ( src[0] != v40 )
          {
            v27[3] = src[0];
          }
          v39[v37] = 0;
          goto LABEL_10;
        }
LABEL_31:
        if ( v35 )
        {
          v27[3] = 0;
          qfree(v35);
          v27[2] = 0;
          v27[4] = 0;
        }
        goto LABEL_10;
      }
LABEL_23:
      if ( *(_BYTE *)(a1 + 584) )
        goto LABEL_24;
LABEL_12:
      if ( v43 == ++v15 )
        return sub_6BE5F0((_QWORD *)a1, a2, v44);
    }
  }
}

