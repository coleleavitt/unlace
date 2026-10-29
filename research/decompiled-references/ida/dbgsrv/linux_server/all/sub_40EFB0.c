/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EFB0
// Address: 0x000000000040EFB0

//----- (000000000040EFB0) ----------------------------------------------------
__int64 __fastcall sub_40EFB0(void **a1, __int64 a2)
{
  char *v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  void *v6; // rsi
  __m128i si128; // xmm0
  char *v8; // rbp
  unsigned __int64 v9; // rbp
  size_t v10; // r14
  char *v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  void *v14; // rsi
  void *v16; // rax
  void *v17; // rax
  void *v18; // r13
  unsigned __int64 v19; // r15
  void *v20; // rsi
  void *v21; // rax

  v3 = (char *)a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 27;
    v4 = 26;
    if ( (unsigned __int64)a1[2] >= 0x1B )
      goto LABEL_3;
LABEL_9:
    v16 = sub_481540((__int64)a1, v6, v5, 1u);
    *a1 = v16;
    v6 = v16;
    goto LABEL_3;
  }
  v4 = (__int64)(v3 + 25);
  v5 = (unsigned __int64)(v3 + 26);
  v6 = *a1;
  --v3;
  if ( (unsigned __int64)a1[2] < v5 )
    goto LABEL_9;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F2F0);
  a1[1] = (void *)v5;
  *((_BYTE *)v6 + v4) = 0;
  v8 = &v3[(_QWORD)*a1];
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 10) = _mm_load_si128((const __m128i *)&xmmword_48F300);
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v9 != 1 )
    {
      v18 = a1[1];
      v19 = v9 - 1;
      if ( v18 )
      {
        v18 = (char *)v18 - 1;
        v19 = (unsigned __int64)v18 + v10;
        v9 += (unsigned __int64)v18;
      }
      v20 = *a1;
      if ( (unsigned __int64)a1[2] < v9 )
      {
        v21 = sub_481540((__int64)a1, v20, v9, 1u);
        *a1 = v21;
        v20 = v21;
      }
      a1[1] = (void *)v9;
      *((_BYTE *)v20 + v19) = 0;
      memcpy((char *)*a1 + (_QWORD)v18, *(const void **)a2, v10);
    }
  }
  v11 = (char *)a1[1];
  if ( !v11 )
  {
    v14 = *a1;
    v13 = 3;
    v12 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_7;
LABEL_11:
    v17 = sub_481540((__int64)a1, v14, v13, 1u);
    *a1 = v17;
    v14 = v17;
    goto LABEL_7;
  }
  v12 = (__int64)(v11 + 1);
  v13 = (unsigned __int64)(v11 + 2);
  v14 = *a1;
  --v11;
  if ( (unsigned __int64)a1[2] < v13 )
    goto LABEL_11;
LABEL_7:
  a1[1] = (void *)v13;
  *((_BYTE *)v14 + v12) = 0;
  *(_WORD *)&v11[(_QWORD)*a1] = 2606;
  return 2606;
}
// 48F2F0: using guessed type __int128 xmmword_48F2F0;
// 48F300: using guessed type __int128 xmmword_48F300;
