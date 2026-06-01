__int64 __fastcall sub_EEE340(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rcx
  unsigned __int16 v10; // ax
  int v11; // edx
  unsigned int i; // r15d
  __int64 v14; // rax
  size_t v15; // rbx
  _BYTE *v16; // rdx
  size_t v17; // r14
  unsigned __int64 v18; // rcx
  __m128i *v19; // rbx
  __int64 v20; // rax
  bool v21; // cc
  __int64 v22; // r13
  __m128i *v23; // r15
  int v24; // [rsp+0h] [rbp-F8h]
  __int64 v25; // [rsp+8h] [rbp-F0h]
  char v26; // [rsp+Fh] [rbp-E9h]
  __int64 v27; // [rsp+10h] [rbp-E8h]
  void *src; // [rsp+20h] [rbp-D8h] BYREF
  size_t v29; // [rsp+28h] [rbp-D0h]
  __m128i v30; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B0h]
  unsigned int v33; // [rsp+54h] [rbp-A4h]
  unsigned int v34; // [rsp+80h] [rbp-78h] BYREF
  __int64 *v35; // [rsp+88h] [rbp-70h]
  unsigned int v36; // [rsp+90h] [rbp-68h]
  char v37; // [rsp+94h] [rbp-64h]

  v7 = a1 + 16;
  if ( (*(_WORD *)a2 & 0x1FF) == 9 )
  {
    v8 = *(unsigned int *)(a2 + 4);
    v9 = (_BYTE *)(a2 + 4 * v8 + 20);
    if ( a2 + 4 * v8 == -20 )
    {
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
    }
    else
    {
      v10 = *(_WORD *)(a2 + 2);
      v11 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)a1 = v7;
      sub_EE9590((_QWORD *)a1, v9, (__int64)&v9[v11 * ((v10 >> 6) & 7)]);
    }
    return a1;
  }
  sub_BF7B00((__int64)&v31, a2, a3, a4, a5, a6, v24, v25, v7);
  v30.m128i_i8[0] = 0;
  src = &v30;
  v29 = 0;
  if ( v33 > 0xFuLL )
  {
    v22 = 30;
    if ( v33 >= 0x1EuLL )
      v22 = v33;
    v23 = (__m128i *)src;
    v19 = (__m128i *)operator new(v22 + 1);
    v19->m128i_i8[0] = *(_BYTE *)src;
    if ( v23 != &v30 )
      operator delete(v23);
    src = v19;
    v30.m128i_i64[0] = v22;
    if ( !v33 )
    {
LABEL_20:
      v20 = v30.m128i_i64[0];
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 16) = v20;
      goto LABEL_21;
    }
  }
  else if ( !v33 )
  {
    *(_QWORD *)a1 = v27;
    goto LABEL_36;
  }
  for ( i = 0; i < v33; ++i )
  {
    while ( 1 )
    {
      sub_A53C40((__int64)&v34, (int *)(v32 + 56LL * i));
      if ( v37 )
      {
        LOBYTE(v14) = (_BYTE)v35;
        if ( v36 > 0x40 )
          v14 = *v35;
      }
      else if ( v36 > 0x40 )
      {
        LOBYTE(v14) = *(_BYTE *)v35;
      }
      else
      {
        LOBYTE(v14) = 0;
        if ( v36 )
          v14 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
      }
      v15 = v29;
      v16 = src;
      v17 = v29 + 1;
      if ( src == &v30 )
        v18 = 15;
      else
        v18 = v30.m128i_i64[0];
      if ( v17 > v18 )
      {
        v26 = v14;
        sub_998B30((__int64)&src, v29, 0, nullptr, 1u);
        v16 = src;
        LOBYTE(v14) = v26;
      }
      v16[v15] = v14;
      v29 = v17;
      *((_BYTE *)src + v15 + 1) = 0;
      if ( v34 > 1 )
        break;
      if ( ++i >= v33 )
        goto LABEL_19;
    }
    sub_A4F8E0((int *)&v34);
  }
LABEL_19:
  v19 = (__m128i *)src;
  *(_QWORD *)a1 = v27;
  if ( v19 != &v30 )
    goto LABEL_20;
LABEL_36:
  *(__m128i *)(a1 + 16) = _mm_load_si128(&v30);
LABEL_21:
  v21 = v31 <= 1;
  *(_QWORD *)(a1 + 8) = v29;
  if ( !v21 )
    sub_A4F8E0((int *)&v31);
  return a1;
}
