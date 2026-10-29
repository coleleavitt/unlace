__int64 __fastcall sub_6D7D30(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // rax
  char *v8; // r8
  size_t v9; // r13
  void *v10; // rax
  void *v11; // rsi
  __m128i v12; // xmm0
  unsigned int *v13; // r15
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // r15
  void *v17; // r8
  size_t v18; // r9
  size_t v19; // r10
  __int64 v20; // rsi
  void *v21; // rdx
  char *v23; // rdi
  void *v24; // rdi
  void *v25; // rbp
  __m128i v26; // xmm0
  __m128i si128; // xmm0
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30[2]; // [rsp+0h] [rbp-E8h] BYREF
  void *v31; // [rsp+10h] [rbp-D8h]
  void *src; // [rsp+18h] [rbp-D0h]
  size_t v33; // [rsp+20h] [rbp-C8h]
  size_t v34; // [rsp+28h] [rbp-C0h]
  int v35[4]; // [rsp+30h] [rbp-B8h] BYREF
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v37[24]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  char **v40; // [rsp+70h] [rbp-78h]
  char *s[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v42[11]; // [rsp+90h] [rbp-58h] BYREF

  v6 = *(void **)(a3 + 40);
  v30[0] = a2;
  v42[3] = __readfsqword(0x28u);
  ptr = v6;
  sub_B86A00(s, &ptr);
  v8 = s[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v8
    || (src = v8,
        v9 = strlen(v8),
        v31 = (void *)(v9 + 1),
        v10 = (void *)qvector_reserve(a1, 0, v9 + 1, 1),
        v11 = src,
        *(_QWORD *)a1 = v10,
        *(_QWORD *)(a1 + 8) = v9 + 1,
        memmove(v10, v11, v9),
        *(_BYTE *)(*(_QWORD *)a1 + v9) = 0,
        v8 = s[0],
        (_QWORD *)s[0] != v42) )
  {
    operator delete(v8, v42[0] + 1LL);
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 60 <= 1 && a3 )
  {
    v12 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v30[0] + 48) + 17464LL));
    v40 = s;
    s[0] = (char *)v42;
    *(__m128i *)v35 = v12;
    s[1] = nullptr;
    v35[0] = _mm_cvtsi128_si32(v12) & 0xFDBF8FFF | 0x2001000;
    v39 = 0x100000000LL;
    LOBYTE(v42[0]) = 0;
    memset(v37, 0, sizeof(v37));
    ptr = &off_2BEBE68;
    v38 = 0;
    sub_227B8B0(&ptr, 0, 0, 0);
    v13 = *(unsigned int **)(a3 + 168);
    v14 = sub_BBF290(a3);
    sub_F712D0(&ptr, v13 + 2, *v13, v35, *(_QWORD *)(v14 + 56));
    if ( s[0] )
    {
      v31 = s[0];
      v15 = strlen(s[0]);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v31;
      v18 = v15;
      v19 = v15;
      if ( v16 )
      {
        --v16;
        v19 = v15 + v16;
      }
      v20 = *(_QWORD *)a1;
      v21 = (void *)(v19 + 1);
      if ( *(_QWORD *)(a1 + 16) < v19 + 1 )
      {
        v34 = v15;
        v33 = v19;
        src = v31;
        v31 = (void *)(v19 + 1);
        v29 = qvector_reserve(a1, v20, v21, 1);
        v18 = v34;
        v19 = v33;
        v17 = src;
        v21 = v31;
        *(_QWORD *)a1 = v29;
        v20 = v29;
      }
      *(_QWORD *)(a1 + 8) = v21;
      *(_BYTE *)(v20 + v19) = 0;
      memmove((void *)(v16 + *(_QWORD *)a1), v17, v18);
    }
    ptr = &off_2BEBE68;
    sub_227B7A0(&ptr);
    if ( (_QWORD *)s[0] != v42 )
      operator delete(s[0], v42[0] + 1LL);
  }
  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    if ( !a4 )
      return a1;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 58 <= 4 )
  {
    sub_6D7B10((__int64)&ptr, v30[0], a3);
    v24 = *(void **)a1;
    v25 = ptr;
    ptr = nullptr;
    v26 = _mm_loadu_si128((const __m128i *)v37);
    *(_OWORD *)v37 = 0;
    if ( v24 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(__m128i *)v30 = v26;
      qfree(v24);
      si128 = _mm_load_si128((const __m128i *)v30);
      v28 = ptr;
      *(_QWORD *)a1 = v25;
      *(__m128i *)(a1 + 8) = si128;
      if ( v28 )
      {
        *(_QWORD *)v37 = 0;
        qfree(v28);
      }
    }
    else
    {
      *(_QWORD *)a1 = v25;
      *(__m128i *)(a1 + 8) = v26;
    }
  }
  if ( a4 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v23 = (char *)haystack;
LABEL_18:
      if ( !(unsigned __int8)is_valid_typename(
                               v23,
                               v30[0],
                               v30[1],
                               (int)v31,
                               (int)src,
                               v33,
                               v34,
                               v35[0],
                               v35[2],
                               (__int64)ptr) )
        validate_name((_QWORD *)a1, 8, 1);
      return a1;
    }
LABEL_17:
    v23 = *(char **)a1;
    goto LABEL_18;
  }
  return a1;
}
