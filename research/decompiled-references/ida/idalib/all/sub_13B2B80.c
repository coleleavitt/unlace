void __fastcall sub_13B2B80(__int64 a1, int a2, __int64 a3)
{
  char *v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rsi
  char *v9; // rsi
  unsigned __int64 v10; // rax
  char *v11; // rsi
  char *v12; // rsi
  unsigned __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  unsigned __int64 v16; // rax
  char *v17; // rsi
  _DWORD *v18; // rdx
  char **v19; // rdi
  int v20; // [rsp+Ch] [rbp-CCh] BYREF
  __m128i v21; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-A0h]
  _BYTE v25[144]; // [rsp+48h] [rbp-90h] BYREF

  v20 = a2;
  sub_FC5CB0((_DWORD *)a1, a2);
  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
  sub_FCA320(a3, &ptr);
  switch ( a2 )
  {
    case 0:
    case 4:
    case 5:
      v15 = *(char **)(a1 + 120);
      v16 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3);
      v21.m128i_i64[0] = v16;
      if ( v15 == *(char **)(a1 + 128) )
      {
        sub_13B26F0(a1 + 112, v15, &v20, &v21);
      }
      else
      {
        *(_DWORD *)v15 = a2;
        v17 = v15 + 16;
        *((_QWORD *)v17 - 1) = v16;
        *(_QWORD *)(a1 + 120) = v17;
      }
      v21.m128i_i64[0] = (__int64)&v22;
      sub_13B2320(&v21, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 == *(_QWORD *)(a1 + 32) )
      {
        v18 = (_DWORD *)(a3 + 8);
        v19 = (char **)(a1 + 16);
        goto LABEL_34;
      }
      *(_DWORD *)v8 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)(v8 + 8) = v8 + 24;
      if ( (__m128i *)v21.m128i_i64[0] == &v22 )
      {
        *(__m128i *)(v8 + 24) = _mm_load_si128(&v22);
      }
      else
      {
        *(_QWORD *)(v8 + 8) = v21.m128i_i64[0];
        *(_QWORD *)(v8 + 24) = v22.m128i_i64[0];
      }
      *(_QWORD *)(v8 + 16) = v21.m128i_i64[1];
      *(_QWORD *)(a1 + 24) += 40LL;
      break;
    case 1:
      v12 = *(char **)(a1 + 120);
      v13 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3);
      v21.m128i_i64[0] = v13;
      if ( v12 == *(char **)(a1 + 128) )
      {
        sub_13B26F0(a1 + 112, v12, &v20, &v21);
      }
      else
      {
        *(_DWORD *)v12 = 1;
        v14 = v12 + 16;
        *((_QWORD *)v14 - 1) = v13;
        *(_QWORD *)(a1 + 120) = v14;
      }
      v21.m128i_i64[0] = (__int64)&v22;
      sub_13B2320(&v21, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v8 = *(_QWORD *)(a1 + 96);
      if ( v8 == *(_QWORD *)(a1 + 104) )
      {
        v18 = (_DWORD *)(a3 + 8);
        v19 = (char **)(a1 + 88);
        goto LABEL_34;
      }
      *(_DWORD *)v8 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)(v8 + 8) = v8 + 24;
      if ( (__m128i *)v21.m128i_i64[0] == &v22 )
      {
        *(__m128i *)(v8 + 24) = _mm_load_si128(&v22);
      }
      else
      {
        *(_QWORD *)(v8 + 8) = v21.m128i_i64[0];
        *(_QWORD *)(v8 + 24) = v22.m128i_i64[0];
      }
      *(_QWORD *)(v8 + 16) = v21.m128i_i64[1];
      *(_QWORD *)(a1 + 96) += 40LL;
      break;
    case 2:
      v9 = *(char **)(a1 + 120);
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 3);
      v21.m128i_i64[0] = v10;
      if ( v9 == *(char **)(a1 + 128) )
      {
        sub_13B26F0(a1 + 112, v9, &v20, &v21);
      }
      else
      {
        *(_DWORD *)v9 = 2;
        v11 = v9 + 16;
        *((_QWORD *)v11 - 1) = v10;
        *(_QWORD *)(a1 + 120) = v11;
      }
      v21.m128i_i64[0] = (__int64)&v22;
      sub_13B2320(&v21, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v8 = *(_QWORD *)(a1 + 72);
      if ( v8 == *(_QWORD *)(a1 + 80) )
      {
        v18 = (_DWORD *)(a3 + 8);
        v19 = (char **)(a1 + 64);
        goto LABEL_34;
      }
      *(_DWORD *)v8 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)(v8 + 8) = v8 + 24;
      if ( (__m128i *)v21.m128i_i64[0] == &v22 )
      {
        *(__m128i *)(v8 + 24) = _mm_load_si128(&v22);
      }
      else
      {
        *(_QWORD *)(v8 + 8) = v21.m128i_i64[0];
        *(_QWORD *)(v8 + 24) = v22.m128i_i64[0];
      }
      *(_QWORD *)(v8 + 16) = v21.m128i_i64[1];
      *(_QWORD *)(a1 + 72) += 40LL;
      break;
    case 3:
      v5 = *(char **)(a1 + 120);
      v6 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40)) >> 3);
      v21.m128i_i64[0] = v6;
      if ( v5 == *(char **)(a1 + 128) )
      {
        sub_13B26F0(a1 + 112, v5, &v20, &v21);
      }
      else
      {
        *(_DWORD *)v5 = 3;
        v7 = v5 + 16;
        *((_QWORD *)v7 - 1) = v6;
        *(_QWORD *)(a1 + 120) = v7;
      }
      v21.m128i_i64[0] = (__int64)&v22;
      sub_13B2320(&v21, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 == *(_QWORD *)(a1 + 56) )
      {
        v18 = (_DWORD *)(a3 + 8);
        v19 = (char **)(a1 + 40);
LABEL_34:
        sub_13B2880(v19, v8, v18, &v21);
        if ( (__m128i *)v21.m128i_i64[0] != &v22 )
          operator delete((void *)v21.m128i_i64[0]);
      }
      else
      {
        *(_DWORD *)v8 = *(_DWORD *)(a3 + 8);
        *(_QWORD *)(v8 + 8) = v8 + 24;
        if ( (__m128i *)v21.m128i_i64[0] == &v22 )
        {
          *(__m128i *)(v8 + 24) = _mm_load_si128(&v22);
        }
        else
        {
          *(_QWORD *)(v8 + 8) = v21.m128i_i64[0];
          *(_QWORD *)(v8 + 24) = v22.m128i_i64[0];
        }
        *(_QWORD *)(v8 + 16) = v21.m128i_i64[1];
        *(_QWORD *)(a1 + 48) += 40LL;
      }
      break;
  }
  if ( ptr != v25 )
    free(ptr);
}
