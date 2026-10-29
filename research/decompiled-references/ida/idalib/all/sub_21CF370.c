_QWORD *__fastcall sub_21CF370(_QWORD *a1, __int64 a2, char *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v18; // esi
  __int64 v19; // rcx
  int v20; // edi
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // r10
  __int64 v24; // r9
  char *v25; // rax
  char *v26; // r11
  char *v27; // rsi
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdi
  int v30; // esi
  int v31; // r9d
  __int64 v32; // rsi
  __int64 v33; // r10
  unsigned __int64 v35; // [rsp+10h] [rbp-1A8h]
  char *v36; // [rsp+10h] [rbp-1A8h]
  __int64 v39; // [rsp+30h] [rbp-188h]
  __int64 v40; // [rsp+30h] [rbp-188h]
  char *v41; // [rsp+38h] [rbp-180h]
  char *v42; // [rsp+38h] [rbp-180h]
  _QWORD *v43; // [rsp+48h] [rbp-170h] BYREF
  __int64 v44; // [rsp+50h] [rbp-168h] BYREF
  _QWORD *v45; // [rsp+58h] [rbp-160h] BYREF
  void *ptr; // [rsp+60h] [rbp-158h] BYREF
  __m128i si128; // [rsp+68h] [rbp-150h] BYREF
  _QWORD v48[40]; // [rsp+78h] [rbp-140h] BYREF

  ptr = nullptr;
  si128.m128i_i64[0] = 0;
  si128.m128i_i64[1] = (__int64)a3;
  v48[0] = a4;
  while ( 1 )
  {
    LOBYTE(v45) = 59;
    v9 = sub_2246AB0(&si128.m128i_u64[1], &v45, 1, 0);
    if ( v9 == -1 )
    {
      v13 = (char *)si128.m128i_i64[1];
      v10 = v48[0];
      v12 = 0;
      v14 = 0;
    }
    else
    {
      v10 = v48[0];
      v11 = v9 + 1;
      if ( v9 + 1 > v48[0] )
      {
        v11 = v48[0];
        v12 = 0;
      }
      else
      {
        v12 = v48[0] - v11;
      }
      v13 = (char *)si128.m128i_i64[1];
      v14 = si128.m128i_i64[1] + v11;
      if ( v9 <= v48[0] )
        v10 = v9;
    }
    ptr = v13;
    si128.m128i_i64[0] = v10;
    si128.m128i_i64[1] = v14;
    v48[0] = v12;
    if ( v10 > 1 && *(_WORD *)v13 == 23135 )
      break;
    if ( !v12 )
    {
      v10 = a4;
      v13 = a3;
      break;
    }
  }
  v35 = v10;
  v15 = sub_21E6EA0(a2 + 16, v13, v10);
  v16 = v35;
  if ( !v15 )
    goto LABEL_10;
  v18 = *(_DWORD *)(a2 + 40);
  v19 = *(_QWORD *)(a2 + 24);
  if ( !v18 )
    goto LABEL_10;
  v20 = v18 - 1;
  v21 = (v18 - 1) & (((0xBF58476D1CE4E5B9LL * v15) >> 31) ^ (484763065 * v15));
  v22 = (__int64 *)(v19 + 24LL * v21);
  v23 = *v22;
  if ( v15 != *v22 )
  {
    v30 = 1;
    if ( v23 == -1 )
      goto LABEL_10;
    while ( 1 )
    {
      v31 = v30 + 1;
      v32 = v20 & (v21 + v30);
      v21 = v32;
      v22 = (__int64 *)(v19 + 24 * v32);
      v33 = *v22;
      if ( v15 == *v22 )
        break;
      v30 = v31;
      if ( v33 == -1 )
        goto LABEL_10;
    }
  }
  v24 = v22[2];
  if ( !v24 )
  {
LABEL_10:
    (*(void (__fastcall **)(_QWORD *, _QWORD, char *, unsigned __int64, __int64))(**(_QWORD **)(a2 + 48) + 24LL))(
      a1,
      *(_QWORD *)(a2 + 48),
      a3,
      a4,
      a5);
    return a1;
  }
  v25 = &v13[v35];
  v26 = (char *)v22[1];
  v36 = &v13[v35];
  if ( a3 == v13 && v25 == &a3[a4] )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, char *, __int64, __int64))(**(_QWORD **)(a2 + 48) + 24LL))(
      a1,
      *(_QWORD *)(a2 + 48),
      v26,
      v24,
      a5);
    return a1;
  }
  v27 = (char *)v48;
  v28 = a4 - v16 + v24;
  ptr = v48;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v28 > 0x100 )
  {
    v42 = v26;
    v40 = v24;
    sub_2236E10(&ptr, v48, v28, 1);
    v26 = v42;
    v27 = (char *)ptr + si128.m128i_i64[0];
    v24 = v40;
  }
  v41 = v26;
  v39 = v24;
  sub_13C13C0((__int64 *)&ptr, v27, a3, v13);
  sub_13C13C0((__int64 *)&ptr, (char *)ptr + si128.m128i_i64[0], v41, &v41[v39]);
  sub_13C13C0((__int64 *)&ptr, (char *)ptr + si128.m128i_i64[0], v36, &a3[a4]);
  (*(void (__fastcall **)(_QWORD **, _QWORD, void *, __int64, __int64))(**(_QWORD **)(a2 + 48) + 24LL))(
    &v43,
    *(_QWORD *)(a2 + 48),
    ptr,
    si128.m128i_i64[0],
    a5);
  if ( v43 )
  {
    v45 = v43;
    v43 = nullptr;
    sub_21CF1D0(&v44, &v45);
    if ( v45 )
      (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
    v29 = v43;
    if ( v44 )
    {
      *a1 = v44;
      if ( v29 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 8LL))(v29);
      goto LABEL_28;
    }
    if ( v43 )
      (*(void (**)(void))(*v43 + 8LL))();
    if ( ptr != v48 )
      free(ptr);
    goto LABEL_10;
  }
  *a1 = 0;
LABEL_28:
  if ( ptr != v48 )
    free(ptr);
  return a1;
}
