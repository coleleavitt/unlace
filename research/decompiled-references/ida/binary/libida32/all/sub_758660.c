__int64 __fastcall sub_758660(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  unsigned __int64 v6; // rax
  unsigned int *v7; // r9
  char v8; // edx^3
  unsigned __int64 v9; // rax
  char v10; // bl
  void *v11; // r15
  __m128i v12; // xmm1
  void *v13; // rax
  __m128i v14; // kr00_16
  void *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned __int64 v19; // rbx
  size_t v20; // r12
  char *v21; // rax
  _BYTE *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  _BYTE *v26; // rsi
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r13
  size_t v30; // r14
  _BYTE *v31; // rsi
  unsigned int v32; // [rsp+1Bh] [rbp-7Dh] BYREF
  char v33; // [rsp+1Fh] [rbp-79h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i v35; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __m128i v37; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  v6 = sub_758300(a1, a3);
  LOWORD(v32) = v6;
  BYTE2(v32) = BYTE2(v6);
  v8 = BYTE3(v6);
  v9 = HIDWORD(v6);
  v33 = v9;
  HIBYTE(v32) = v8;
  if ( v32 == -1 )
  {
    v17 = 1;
    if ( !a2 )
      return v17;
    v13 = nullptr;
    v14 = 0u;
    goto LABEL_7;
  }
  v10 = v9;
  if ( (_BYTE)v9 )
    sub_756780((__int64)&dest, a1, v32, 0);
  else
    sub_756780((__int64)&dest, a1, *v7, 1);
  v11 = dest;
  dest = nullptr;
  v12 = _mm_loadu_si128(&v37);
  v37 = 0;
  ptr = v11;
  v35 = v12;
  if ( !v10 )
  {
    v37 = 0;
    dest = nullptr;
    v17 = sub_758570(a1, (__int64 *)&dest, &v32, a4);
    if ( !(_BYTE)v17 )
    {
      if ( dest )
      {
        v37.m128i_i64[0] = 0;
        qfree(dest);
      }
      v15 = ptr;
      goto LABEL_8;
    }
    v19 = v37.m128i_i64[0];
    if ( (a4 & 1) == 0 )
    {
LABEL_28:
      if ( !v19 )
        goto LABEL_29;
      goto LABEL_39;
    }
    if ( v37.m128i_i64[0] <= 1uLL )
      goto LABEL_29;
    v20 = v37.m128i_i64[0] - 1;
    v21 = (char *)dest + v37.m128i_i64[0] - 1;
    v22 = dest;
    if ( dest >= v21 )
      goto LABEL_40;
    while ( *v22 == 32 )
    {
      if ( ++v22 == v21 )
      {
        *(_BYTE *)dest = *v22;
        v27 = dest;
        goto LABEL_36;
      }
    }
    if ( dest >= v22 )
      goto LABEL_40;
    v23 = v21 - v22;
    v24 = v23 + 1;
    v25 = v23;
    memmove(dest, v22, v23 + 1);
    v26 = dest;
    v27 = dest;
    if ( v25 )
    {
      v28 = v37.m128i_i64[0];
      if ( v37.m128i_i64[0] < v24 )
      {
        if ( v37.m128i_i64[1] < v24 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v24, 1);
          v26 = dest;
          v28 = v37.m128i_i64[0];
        }
        memset(&v26[v28], 0, v24 - v28);
        v37.m128i_i64[0] = v24;
        v26 = dest;
      }
      else if ( v24 != v37.m128i_i64[0] )
      {
        v37.m128i_i64[0] = v24;
      }
      v26[v25] = 0;
      v19 = v37.m128i_i64[0];
      goto LABEL_28;
    }
LABEL_36:
    if ( v27 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v27);
      dest = nullptr;
      v37.m128i_i64[1] = 0;
    }
    v19 = v37.m128i_i64[0];
    if ( v37.m128i_i64[0] )
    {
LABEL_39:
      v20 = v19 - 1;
      if ( v19 != 1 )
      {
LABEL_40:
        v29 = v35.m128i_i64[0];
        v30 = v20;
        if ( v35.m128i_i64[0] )
        {
          v29 = v35.m128i_i64[0] - 1;
          v30 = v35.m128i_i64[0] - 1 + v20;
          v19 = v35.m128i_i64[0] + v20;
        }
        v31 = ptr;
        if ( v35.m128i_i64[1] < v19 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
          v31 = ptr;
        }
        v35.m128i_i64[0] = v19;
        v31[v30] = 0;
        memcpy((char *)ptr + v29, dest, v20);
      }
LABEL_29:
      if ( dest )
      {
        v37.m128i_i64[0] = 0;
        qfree(dest);
      }
    }
  }
  v13 = ptr;
  if ( a2 )
  {
    v14 = v35;
LABEL_7:
    v15 = *(void **)a2;
    v16 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v13;
    v17 = 1;
    *(__m128i *)(a2 + 8) = v14;
    ptr = v15;
    v35.m128i_i64[1] = v16;
    goto LABEL_8;
  }
  v15 = ptr;
  v17 = 1;
LABEL_8:
  if ( v15 )
  {
    v35.m128i_i64[0] = 0;
    qfree(v15);
  }
  return v17;
}

