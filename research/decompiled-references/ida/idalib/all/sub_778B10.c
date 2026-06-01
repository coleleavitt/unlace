__int64 __fastcall sub_778B10(__int64 a1, __int64 a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v6; // rax
  char v7; // dl
  unsigned __int64 *v8; // r9
  char v9; // bp
  void *v10; // r15
  __m128i v11; // xmm1
  void *v12; // rax
  __m128i v13; // kr00_16
  void *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // ebp
  unsigned __int64 v18; // rbp
  size_t v19; // r12
  char *v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // rbp
  _BYTE *v25; // rsi
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  size_t v29; // r14
  _BYTE *v30; // rsi
  unsigned __int64 v31; // [rsp+17h] [rbp-81h] BYREF
  char v32; // [rsp+1Fh] [rbp-79h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i v34; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __m128i v36; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v34 = 0;
  ptr = nullptr;
  v6 = sub_7787B0(a1, a3);
  v31 = v6;
  v32 = v7;
  if ( v6 == -1 )
  {
    v16 = 1;
    if ( !a2 )
      return v16;
    v12 = nullptr;
    v13 = 0u;
    goto LABEL_7;
  }
  v9 = v7;
  if ( v7 )
    sub_776CB0((__int64)&dest, a1, v6, 0);
  else
    sub_776CB0((__int64)&dest, a1, *v8, 1);
  v10 = dest;
  dest = nullptr;
  v11 = _mm_loadu_si128(&v36);
  v36 = 0;
  ptr = v10;
  v34 = v11;
  if ( !v9 )
  {
    v36 = 0;
    dest = nullptr;
    v16 = sub_778A20(a1, (__int64 *)&dest, (__int64)&v31, a4);
    if ( !(_BYTE)v16 )
    {
      if ( dest )
      {
        v36.m128i_i64[0] = 0;
        qfree(dest);
      }
      v14 = ptr;
      goto LABEL_8;
    }
    v18 = v36.m128i_i64[0];
    if ( (a4 & 1) == 0 )
    {
LABEL_28:
      if ( !v18 )
        goto LABEL_29;
      goto LABEL_39;
    }
    if ( v36.m128i_i64[0] <= 1uLL )
      goto LABEL_29;
    v19 = v36.m128i_i64[0] - 1;
    v20 = (char *)dest + v36.m128i_i64[0] - 1;
    v21 = dest;
    if ( dest >= v20 )
      goto LABEL_40;
    while ( *v21 == 32 )
    {
      if ( ++v21 == v20 )
      {
        *(_BYTE *)dest = *v21;
        v26 = dest;
        goto LABEL_36;
      }
    }
    if ( dest >= v21 )
      goto LABEL_40;
    v22 = v20 - v21;
    v23 = v22 + 1;
    v24 = v22;
    memmove(dest, v21, v22 + 1);
    v25 = dest;
    v26 = dest;
    if ( v24 )
    {
      v27 = v36.m128i_i64[0];
      if ( v36.m128i_i64[0] < v23 )
      {
        if ( v36.m128i_i64[1] < v23 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v23, 1);
          v25 = dest;
          v27 = v36.m128i_i64[0];
        }
        memset(&v25[v27], 0, v23 - v27);
        v36.m128i_i64[0] = v23;
        v25 = dest;
      }
      else if ( v23 != v36.m128i_i64[0] )
      {
        v36.m128i_i64[0] = v23;
      }
      v25[v24] = 0;
      v18 = v36.m128i_i64[0];
      goto LABEL_28;
    }
LABEL_36:
    if ( v26 )
    {
      v36.m128i_i64[0] = 0;
      qfree(v26);
      dest = nullptr;
      v36.m128i_i64[1] = 0;
    }
    v18 = v36.m128i_i64[0];
    if ( v36.m128i_i64[0] )
    {
LABEL_39:
      v19 = v18 - 1;
      if ( v18 != 1 )
      {
LABEL_40:
        v28 = v34.m128i_i64[0];
        v29 = v19;
        if ( v34.m128i_i64[0] )
        {
          v28 = v34.m128i_i64[0] - 1;
          v29 = v34.m128i_i64[0] - 1 + v19;
          v18 = v34.m128i_i64[0] + v19;
        }
        v30 = ptr;
        if ( v34.m128i_i64[1] < v18 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
          v30 = ptr;
        }
        v34.m128i_i64[0] = v18;
        v30[v29] = 0;
        memcpy((char *)ptr + v28, dest, v19);
      }
LABEL_29:
      if ( dest )
      {
        v36.m128i_i64[0] = 0;
        qfree(dest);
      }
    }
  }
  v12 = ptr;
  if ( a2 )
  {
    v13 = v34;
LABEL_7:
    v14 = *(void **)a2;
    v15 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v12;
    v16 = 1;
    *(__m128i *)(a2 + 8) = v13;
    ptr = v14;
    v34.m128i_i64[1] = v15;
    goto LABEL_8;
  }
  v14 = ptr;
  v16 = 1;
LABEL_8:
  if ( v14 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v14);
  }
  return v16;
}
