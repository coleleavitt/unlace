__int64 __fastcall sub_6B7750(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // rax
  char *v8; // r8
  size_t v9; // r13
  void *v10; // rax
  void *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __m128i v15; // xmm0
  unsigned int *v16; // r15
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // r15
  void *v20; // r8
  size_t v21; // r9
  size_t v22; // r10
  __int64 v23; // rsi
  void *v24; // rdx
  char *v26; // rdi
  void *v27; // rdi
  void *v28; // rbp
  __m128i v29; // xmm0
  __m128i si128; // xmm0
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33[2]; // [rsp+0h] [rbp-E8h] BYREF
  void *v34; // [rsp+10h] [rbp-D8h]
  void *src; // [rsp+18h] [rbp-D0h]
  size_t v36; // [rsp+20h] [rbp-C8h]
  size_t v37; // [rsp+28h] [rbp-C0h]
  int v38[4]; // [rsp+30h] [rbp-B8h] BYREF
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v40[24]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+68h] [rbp-80h]
  char **v43; // [rsp+70h] [rbp-78h]
  char *s[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v45[11]; // [rsp+90h] [rbp-58h] BYREF

  v6 = *(void **)(a3 + 40);
  v33[0] = a2;
  v45[3] = __readfsqword(0x28u);
  ptr = v6;
  sub_B62CC0(s, &ptr);
  v8 = s[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v8
    || (src = v8,
        v9 = strlen(v8),
        v34 = (void *)(v9 + 1),
        v10 = (void *)qvector_reserve(a1, 0, v9 + 1, 1),
        v11 = src,
        *(_QWORD *)a1 = v10,
        *(_QWORD *)(a1 + 8) = v9 + 1,
        memmove(v10, v11, v9),
        *(_BYTE *)(*(_QWORD *)a1 + v9) = 0,
        v8 = s[0],
        (_QWORD *)s[0] != v45) )
  {
    v11 = (void *)(v45[0] + 1LL);
    operator delete(v8, v45[0] + 1LL);
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 60 <= 1 && a3 )
  {
    v15 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v33[0] + 48) + 17464LL));
    v43 = s;
    s[0] = (char *)v45;
    *(__m128i *)v38 = v15;
    s[1] = nullptr;
    v38[0] = _mm_cvtsi128_si32(v15) & 0xFDBF8FFF | 0x2001000;
    v42 = 0x100000000LL;
    LOBYTE(v45[0]) = 0;
    memset(v40, 0, sizeof(v40));
    ptr = &off_2BC1EC8;
    v41 = 0;
    sub_2257B70(&ptr, 0, 0, 0);
    v16 = *(unsigned int **)(a3 + 168);
    v17 = sub_B9B550(a3);
    v11 = v16 + 2;
    sub_F4D590(&ptr, v16 + 2, *v16, v38, *(_QWORD *)(v17 + 56));
    if ( s[0] )
    {
      v34 = s[0];
      v18 = strlen(s[0]);
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v34;
      v21 = v18;
      v22 = v18;
      if ( v19 )
      {
        --v19;
        v22 = v18 + v19;
      }
      v23 = *(_QWORD *)a1;
      v24 = (void *)(v22 + 1);
      if ( *(_QWORD *)(a1 + 16) < v22 + 1 )
      {
        v37 = v18;
        v36 = v22;
        src = v34;
        v34 = (void *)(v22 + 1);
        v32 = qvector_reserve(a1, v23, v24, 1);
        v21 = v37;
        v22 = v36;
        v20 = src;
        v24 = v34;
        *(_QWORD *)a1 = v32;
        v23 = v32;
      }
      *(_QWORD *)(a1 + 8) = v24;
      *(_BYTE *)(v23 + v22) = 0;
      v11 = v20;
      memmove((void *)(v19 + *(_QWORD *)a1), v20, v21);
    }
    ptr = &off_2BC1EC8;
    sub_2257A60(&ptr);
    if ( (_QWORD *)s[0] != v45 )
    {
      v11 = (void *)(v45[0] + 1LL);
      operator delete(s[0], v45[0] + 1LL);
    }
  }
  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    if ( !a4 )
      return a1;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 58 <= 4 )
  {
    v11 = (void *)v33[0];
    sub_6B7530((__int64)&ptr, v33[0], a3);
    v27 = *(void **)a1;
    v28 = ptr;
    ptr = nullptr;
    v29 = _mm_loadu_si128((const __m128i *)v40);
    *(_OWORD *)v40 = 0;
    if ( v27 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(__m128i *)v33 = v29;
      qfree(v27);
      si128 = _mm_load_si128((const __m128i *)v33);
      v31 = ptr;
      *(_QWORD *)a1 = v28;
      *(__m128i *)(a1 + 8) = si128;
      if ( v31 )
      {
        *(_QWORD *)v40 = 0;
        qfree(v31);
      }
    }
    else
    {
      *(_QWORD *)a1 = v28;
      *(__m128i *)(a1 + 8) = v29;
    }
  }
  if ( a4 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v26 = (char *)haystack;
LABEL_18:
      if ( !(unsigned __int8)is_valid_typename(
                               v26,
                               (__int64)v11,
                               v12,
                               v13,
                               (__int64)v8,
                               v14,
                               v33[0],
                               v33[1],
                               (int)v34,
                               (int)src,
                               v36,
                               v37,
                               v38[0],
                               v38[2],
                               (__int64)ptr) )
        validate_name(a1, 8, 1);
      return a1;
    }
LABEL_17:
    v26 = *(char **)a1;
    goto LABEL_18;
  }
  return a1;
}

