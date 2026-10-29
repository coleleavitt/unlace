__int64 __fastcall sub_B28F20(__int64 a1, __int64 a2, void *a3, __int64 a4, unsigned __int8 *a5, _BYTE *a6)
{
  __int64 i; // rcx
  unsigned int v7; // eax
  const __m128i *v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  const __m128i *v14; // rdx
  __m128i v15; // xmm0
  char ***v16; // rbp
  __int64 v17; // rbx
  void *v18; // rcx
  __int64 v19; // rbx
  char **v21; // rdi
  void *v22; // r14
  char *v23; // rax
  char *v24; // rcx
  char *v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-88h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v29; // [rsp+18h] [rbp-70h]
  _BYTE v30[104]; // [rsp+20h] [rbp-68h] BYREF

  for ( i = *(unsigned int *)(a1 + 52); (_DWORD)i == 1; i = *(unsigned int *)(a1 + 52) )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 80);
      if ( !v7 )
        break;
      v8 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v7 - 24);
      i = v8->m128i_u32[1];
      v9 = _mm_loadu_si128(v8);
      a3 = (void *)v8[1].m128i_i64[0];
      *(_DWORD *)(a1 + 80) = v7 - 1;
      *(__m128i *)(a1 + 48) = v9;
      *(_QWORD *)(a1 + 64) = a3;
      if ( (_DWORD)i != 1 )
        goto LABEL_4;
    }
    a2 = a1 + 48;
    sub_B1F6B0(*(_QWORD *)a1, a1 + 48, (__int64)a3, i, a5, a6, v26);
  }
LABEL_4:
  v29 = 0x800000000LL;
  ptr = v30;
  while ( (_DWORD)i )
  {
    while ( 1 )
    {
      if ( ((1LL << i) & 0x2083C) != 0 )
      {
        v10 = sub_B27310(a1, a2, (__int64)a3, i, a5, a6);
      }
      else if ( ((1LL << i) & 0x200) != 0 )
      {
        v10 = sub_B1FAF0(a1, a2, (__int64)a3, i, a5, a6);
      }
      else
      {
        v10 = sub_B26ED0(a1);
      }
      v11 = (unsigned int)v29;
      a2 = HIDWORD(v29);
      v12 = (unsigned int)v29 + 1LL;
      if ( v12 > HIDWORD(v29) )
      {
        a2 = (__int64)v30;
        v27 = v10;
        sub_22134E0(&ptr, v30, v12, 8);
        v11 = (unsigned int)v29;
        v10 = v27;
      }
      a3 = ptr;
      *((_QWORD *)ptr + v11) = v10;
      i = *(unsigned int *)(a1 + 52);
      LODWORD(v29) = v29 + 1;
      if ( (_DWORD)i == 1 )
        break;
LABEL_13:
      if ( !(_DWORD)i )
        goto LABEL_14;
    }
    do
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(a1 + 80);
        if ( !v13 )
          break;
        v14 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v13 - 24);
        i = v14->m128i_u32[1];
        v15 = _mm_loadu_si128(v14);
        a3 = (void *)v14[1].m128i_i64[0];
        *(_DWORD *)(a1 + 80) = v13 - 1;
        *(__m128i *)(a1 + 48) = v15;
        *(_QWORD *)(a1 + 64) = a3;
        if ( (_DWORD)i != 1 )
          goto LABEL_13;
      }
      a2 = a1 + 48;
      sub_B1F6B0(*(_QWORD *)a1, a1 + 48, (__int64)a3, i, a5, a6, v26);
      i = *(unsigned int *)(a1 + 52);
    }
    while ( (_DWORD)i == 1 );
  }
LABEL_14:
  v16 = *(char ****)(a1 + 8);
  v17 = (unsigned int)v29;
  v18 = nullptr;
  if ( (_DWORD)v29 )
  {
    v21 = *v16;
    v22 = ptr;
    v23 = **v16;
    v21[10] += 8 * (unsigned int)v29;
    v24 = (char *)((unsigned __int64)(v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v25 = &v24[8 * v17];
    if ( v21[1] >= v25 && v23 )
      *v21 = v25;
    else
      v24 = (char *)sub_962430((__int64)v21, 8 * v17, 8 * v17, 3, (__int64)a5, (__int64)a6);
    v18 = memmove(v24, v22, 8 * v17);
  }
  v19 = sub_B37350(v16, v18, v17);
  if ( ptr != v30 )
    free(ptr);
  return v19;
}

