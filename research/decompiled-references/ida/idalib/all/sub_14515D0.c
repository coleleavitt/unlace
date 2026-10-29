void __fastcall sub_14515D0(__int64 a1, const __m128i *a2)
{
  char v3; // al
  int v4; // edi
  __int64 v5; // rax
  __m128i *v6; // rbx
  int v7; // ebp
  __m128i *v8; // rbx
  const __m128i *v9; // rbx
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  __int16 v12; // dx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i *v15; // rax
  signed __int64 v16; // rbx
  _WORD *v17; // rdx
  void *v18; // r11
  unsigned int v19; // ebx
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  char *v22; // rax
  char *v23; // r10
  char *v24; // rdx
  __int64 v25; // rbx
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rdi
  __m128i *v29; // rax
  __m128i *v30; // roff
  __m128i *v31; // rax
  _DWORD *v32; // roff
  signed __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  signed __int64 v36; // rbx
  __int64 v37; // [rsp+8h] [rbp-410h]
  _BYTE v38[80]; // [rsp+10h] [rbp-408h] BYREF
  __int64 v39; // [rsp+60h] [rbp-3B8h]
  char v40; // [rsp+68h] [rbp-3B0h]
  void *ptr; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-3A0h]
  __m128i v43; // [rsp+80h] [rbp-398h] BYREF
  __int64 v44; // [rsp+90h] [rbp-388h]
  __m128i *v45; // [rsp+C8h] [rbp-350h]
  void *src; // [rsp+D0h] [rbp-348h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-340h]
  _BYTE v48[824]; // [rsp+E0h] [rbp-338h] BYREF

  v3 = *(_BYTE *)(a1 + 547);
  v39 = a1;
  v4 = a2->m128i_i32[0];
  v40 = v3;
  ptr = &v43;
  v42 = 0x300000000LL;
  v45 = (__m128i *)a2;
  LODWORD(v37) = v4;
  if ( v3 )
  {
    v5 = a2[1].m128i_i64[0];
    LODWORD(v42) = 1;
    v43 = _mm_loadu_si128(a2);
    v44 = v5;
  }
  sub_14634E0(a1, a2);
  if ( a2[1].m128i_i16[0] != 22 )
  {
    sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v4, 1022);
    sub_AEA040((__int64)&src);
    goto LABEL_5;
  }
  v6 = v45;
  src = v48;
  v47 = 0x2000000000LL;
  if ( v40 )
  {
    v34 = (unsigned int)v42 + 1LL;
    v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
    if ( v34 > HIDWORD(v42) )
    {
      if ( ptr > v45 || v35 <= v45 )
      {
        sub_2237220(&ptr, &v43, v34, 24);
        v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
      }
      else
      {
        v36 = (char *)v45 - (_BYTE *)ptr;
        sub_2237220(&ptr, &v43, v34, 24);
        v6 = (__m128i *)((char *)ptr + v36);
        v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
      }
    }
    *v35 = _mm_loadu_si128(v6);
    v35[1].m128i_i64[0] = v6[1].m128i_i64[0];
    v6 = v45;
    LODWORD(v42) = v42 + 1;
  }
  sub_14634E0(v39, v6);
  if ( a2[1].m128i_i16[0] == 1 )
  {
LABEL_29:
    sub_FC70B0((__int64)v38, *(_QWORD *)(a1 + 48), v4, 1199);
    sub_AEA040((__int64)v38);
    goto LABEL_30;
  }
  v7 = 0;
  while ( 1 )
  {
    v9 = a2;
    v10 = (unsigned int)v47 + 1LL;
    v11 = (__m128i *)((char *)src + 24 * (unsigned int)v47);
    if ( v10 > HIDWORD(v47) )
    {
      if ( src > a2 || v11 <= a2 )
      {
        v9 = a2;
        sub_2237220(&src, v48, v10, 24);
        v11 = (__m128i *)((char *)src + 24 * (unsigned int)v47);
      }
      else
      {
        v16 = (char *)a2 - (_BYTE *)src;
        sub_2237220(&src, v48, v10, 24);
        v9 = (const __m128i *)((char *)src + v16);
        v11 = (__m128i *)((char *)src + 24 * (unsigned int)v47);
      }
    }
    *v11 = _mm_loadu_si128(v9);
    v11[1].m128i_i64[0] = v9[1].m128i_i64[0];
    v12 = a2[1].m128i_i16[0];
    v13 = (unsigned int)(v47 + 1);
    LODWORD(v47) = v47 + 1;
    if ( v12 != 22 )
      break;
    ++v7;
    v8 = v45;
    if ( v40 )
    {
LABEL_17:
      v14 = (unsigned int)v42 + 1LL;
      v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
      if ( v14 > HIDWORD(v42) )
      {
        if ( ptr > v8 || v15 <= v8 )
        {
          sub_2237220(&ptr, &v43, v14, 24);
          v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
        }
        else
        {
          v33 = (char *)v8 - (_BYTE *)ptr;
          sub_2237220(&ptr, &v43, v14, 24);
          v8 = (__m128i *)((char *)ptr + v33);
          v15 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
        }
      }
      *v15 = _mm_loadu_si128(v8);
      v15[1].m128i_i64[0] = v8[1].m128i_i64[0];
      v8 = v45;
      LODWORD(v42) = v42 + 1;
    }
LABEL_13:
    sub_14634E0(v39, v8);
    if ( a2[1].m128i_i16[0] == 1 )
      goto LABEL_29;
  }
  if ( v12 != 23 )
  {
LABEL_12:
    v8 = v45;
    if ( v40 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( v7 )
  {
    --v7;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 547) )
  {
    v20 = (unsigned int)v42;
    v21 = 24LL * (unsigned int)v42;
    v22 = (char *)operator new[](v21);
    v23 = v22;
    v24 = &v22[v21];
    if ( v20 )
    {
      do
      {
        *(_DWORD *)v22 = 0;
        v22 += 24;
        *((_DWORD *)v22 - 5) = 0;
        *((_QWORD *)v22 - 2) = 0;
        *((_WORD *)v22 - 4) = 0;
        *((_WORD *)v22 - 3) = 0;
      }
      while ( v22 != v24 );
    }
    v25 = (unsigned int)v42;
    v26 = v42;
    v27 = 24LL * (unsigned int)v42;
    if ( (char *)ptr + 24 != (char *)ptr + v27 )
      v23 = (char *)memmove(v23, (char *)ptr + 24, v27 - 24);
    v28 = v39;
    v29 = (__m128i *)&v23[24 * v25 - 24];
    v30 = v45;
    *v29 = _mm_loadu_si128(v45);
    v29[1].m128i_i32[0] = v30[1].m128i_i32[0];
    sub_14368B0(v28, v23, v26, 1u, 1u, 1u);
    v31 = v45;
    v32 = ptr;
    *v45 = _mm_loadu_si128((const __m128i *)ptr);
    v31[1].m128i_i32[0] = v32[4];
  }
  else
  {
    v17 = src;
    *((_WORD *)src + 9) |= 2u;
    v17[12 * v13 - 4] = 2;
    v18 = (void *)operator new[](24 * v13);
    v19 = v47;
    if ( 24LL * (unsigned int)v47 )
      v18 = memmove(v18, src, 24LL * (unsigned int)v47);
    sub_14368B0(a1, (char *)v18, v19, 1u, 1u, 0);
    sub_1450BC0(a1, (v37 << 32) | 2);
    sub_14634E0(a1, a2);
  }
LABEL_30:
  if ( src != v48 )
    free(src);
LABEL_5:
  if ( ptr != &v43 )
    free(ptr);
}
