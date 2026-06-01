__int64 __fastcall sub_141C790(int ***a1, __int64 a2)
{
  int **v2; // rbx
  int **v3; // rbp
  int **v4; // rbx
  const __m128i *v6; // rbx
  int v7; // r14d
  int v8; // eax
  int v9; // esi
  bool v10; // cl
  __int64 v11; // r8
  unsigned __int16 v12; // bp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i *v16; // rax
  int **v17; // rbp
  int **v18; // rbx
  int **v19; // rbp
  int *v20; // rax
  int **v21; // rbp
  unsigned int v22; // ebx
  __int32 v24; // edx
  char *v25; // rsi
  _DWORD *v26; // rsi
  int **v27; // r12
  int v28; // r13d
  __int64 v29; // rsi
  __int8 *v30; // rbx
  int *v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-B8h]
  void *v34[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v35; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v36[17]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *a1;
  *(_OWORD *)v34 = 0;
  v35 = nullptr;
  if ( *((_WORD *)*v2 + 8) != 22 )
  {
    sub_FC70B0((__int64)v36, *((_QWORD *)v2[1] + 6), **v2, 14);
    sub_AE9DF0(v36, 22, 4u);
    sub_AEA040((__int64)v36);
    v31 = *v2;
    if ( *((_WORD *)*v2 + 8) != 2 )
    {
      v32 = (__int64)v2[1];
      v22 = 0;
      sub_141A820(v32, (unsigned int *)v31);
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v3 = a1[2];
  v4 = a1[1];
  do
    sub_14634E0(v3, v4);
  while ( *((_WORD *)v4 + 8) == 4 );
  v6 = (const __m128i *)a1[1];
  v7 = 0;
  v8 = v6[1].m128i_u16[0];
  if ( (_WORD)v8 == 2 )
  {
LABEL_18:
    v19 = *a1;
    v20 = **a1;
    if ( *((_WORD *)v20 + 8) == 23 )
    {
      v21 = a1[2];
      do
        sub_14634E0(v21, v6);
      while ( v6[1].m128i_i16[0] == 4 );
      v22 = 1;
      goto LABEL_22;
    }
    sub_FC70B0((__int64)v36, *((_QWORD *)v19[1] + 6), *v20, 14);
    sub_AE9DF0(v36, 23, 4u);
    sub_AEA040((__int64)v36);
    if ( *((_WORD *)*v19 + 8) != 2 )
    {
      v22 = 0;
      sub_141A820((__int64)v19[1], (unsigned int *)*v19);
      goto LABEL_22;
    }
LABEL_30:
    v22 = 0;
    goto LABEL_22;
  }
  while ( 2 )
  {
    v9 = v7;
    v10 = (_WORD)v8 != 23;
    if ( !(((_WORD)v8 != 23) | (unsigned __int8)v7) )
      goto LABEL_18;
    switch ( v8 )
    {
      case 20:
      case 24:
        goto LABEL_26;
      case 21:
      case 25:
        goto LABEL_8;
      case 22:
        LOBYTE(v9) = ((_WORD)v8 != 23) | v7;
        v7 = v9;
LABEL_26:
        v24 = v6->m128i_i32[0];
        v25 = (char *)v34[1];
        LOWORD(v36[0]) = v8;
        HIDWORD(v36[0]) = v24;
        if ( v34[1] == v35 )
        {
          sub_141C610((__int64)v34, (char *)v34[1], (__int64)v36);
          v6 = (const __m128i *)a1[1];
        }
        else
        {
          *(_WORD *)v34[1] = v8;
          v26 = v25 + 8;
          *(v26 - 1) = v24;
          v34[1] = v26;
        }
        goto LABEL_14;
      case 23:
        v7 = 0;
LABEL_8:
        v11 = 23;
        v12 = *((_WORD *)v34[1] - 4);
        if ( v12 == 22 )
          goto LABEL_11;
        if ( v12 != 24 )
        {
          v11 = 21;
          v10 = (_WORD)v8 != 21;
          if ( v34[0] == v34[1] )
            goto LABEL_29;
          goto LABEL_12;
        }
        v11 = 25;
        v10 = (_WORD)v8 != 25;
LABEL_11:
        if ( v34[0] != v34[1] )
        {
LABEL_12:
          if ( v10 )
            goto LABEL_29;
          v34[1] = (char *)v34[1] - 8;
LABEL_14:
          v13 = *(unsigned int *)(a2 + 8);
          v14 = *(_QWORD *)a2;
          v15 = v13 + 1;
          v16 = (__m128i *)(*(_QWORD *)a2 + 24 * v13);
          if ( v15 > *(unsigned int *)(a2 + 12) )
          {
            v29 = a2 + 16;
            if ( v14 > (unsigned __int64)v6 || v16 <= v6 )
            {
              sub_2237220(a2, v29, v15, 24);
              v16 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            }
            else
            {
              v30 = &v6->m128i_i8[-v14];
              sub_2237220(a2, v29, v15, 24);
              v6 = (const __m128i *)&v30[*(_QWORD *)a2];
              v16 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            }
          }
          *v16 = _mm_loadu_si128(v6);
          v16[1].m128i_i64[0] = v6[1].m128i_i64[0];
          v17 = a1[2];
          ++*(_DWORD *)(a2 + 8);
          v18 = a1[1];
          do
            sub_14634E0(v17, v18);
          while ( *((_WORD *)v18 + 8) == 4 );
          v6 = (const __m128i *)a1[1];
          v8 = v6[1].m128i_u16[0];
          if ( (_WORD)v8 == 2 )
            goto LABEL_18;
          continue;
        }
LABEL_29:
        v27 = a1[4];
        v28 = *((_DWORD *)v34[1] - 1);
        v33 = v11;
        sub_FC70B0((__int64)v36, *((_QWORD *)v27[1] + 6), **v27, 14);
        sub_AE9DF0(v36, v33, 4u);
        sub_AEA040((__int64)v36);
        sub_FC70B0((__int64)v36, *((_QWORD *)v27[1] + 6), v28, 109);
        sub_AE9DF0(v36, v12, 4u);
        sub_AEA040((__int64)v36);
        if ( *((_WORD *)*v27 + 8) == 2 )
          goto LABEL_30;
        v22 = 0;
        sub_141A820((__int64)v27[1], (unsigned int *)*v27);
LABEL_22:
        if ( v34[0] )
          operator delete(v34[0]);
        return v22;
      default:
        goto LABEL_14;
    }
  }
}
