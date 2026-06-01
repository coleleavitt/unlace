void __fastcall sub_12D8F30(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  __int64 v6; // r15
  size_t v7; // rbp
  const char *v8; // r14
  const char *v9; // rsi
  int v10; // r8d
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // rdx
  void *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  size_t v21; // r15
  int v22; // r13d
  char *v23; // rdi
  const char *v24; // [rsp-10h] [rbp-128h]
  __int128 v25; // [rsp+0h] [rbp-118h]
  int src; // [rsp+10h] [rbp-108h]
  void *srca; // [rsp+10h] [rbp-108h]
  const char *srcb; // [rsp+10h] [rbp-108h]
  unsigned int v29; // [rsp+18h] [rbp-100h]
  unsigned int v30; // [rsp+1Ch] [rbp-FCh]
  __int64 v32; // [rsp+28h] [rbp-F0h]
  __int64 v33; // [rsp+30h] [rbp-E8h]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-D0h]
  _BYTE v36[192]; // [rsp+58h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a1 + 64) == 0;
  ptr = v36;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v3 )
    return;
  v4 = *(_QWORD *)(a1 + 48);
  v6 = a1;
  v7 = *(_QWORD *)(v4 + 48);
  v8 = *(const char **)(v4 + 40);
  DWORD1(v25) = *(_DWORD *)(v4 + 32);
  v9 = (const char *)*(unsigned int *)(v4 + 36);
  DWORD2(v25) = *(_DWORD *)(v4 + 36);
  if ( v7 > 0x80 )
  {
    sub_2236E10(&ptr, v36, v7, 1);
    v23 = (char *)ptr + si128.m128i_i64[0];
LABEL_23:
    v9 = v8;
    memcpy(v23, v8, v7);
    v7 += si128.m128i_i64[0];
    goto LABEL_5;
  }
  if ( v7 )
  {
    v23 = v36;
    goto LABEL_23;
  }
LABEL_5:
  v10 = *(_DWORD *)(v4 + 56);
  si128.m128i_i64[0] = v7;
  src = v10;
  v29 = v10 + DWORD2(v25);
  v11 = std::_Rb_tree_increment(v4, v9);
  v12 = src;
  v13 = v11;
  v30 = a3;
  v32 = v6 + 32;
  if ( v11 != v6 + 32 )
  {
    v14 = v7;
    v33 = v6;
    v15 = src;
    do
    {
      v19 = *(_DWORD *)(v13 + 32);
      v20 = *(_DWORD *)(v13 + 36);
      v21 = *(_QWORD *)(v13 + 48);
      srcb = *(const char **)(v13 + 40);
      v22 = *(_DWORD *)(v13 + 56);
      if ( __PAIR64__(v20, v19) == __PAIR64__(v29, DWORD1(v25)) )
      {
        if ( v21 + v14 > si128.m128i_i64[1] )
        {
          v9 = v36;
          sub_2236E10(&ptr, v36, v21 + v14, 1);
          v14 = si128.m128i_i64[0];
        }
        if ( v21 )
        {
          v9 = srcb;
          memcpy((char *)ptr + v14, srcb, v21);
          v14 = si128.m128i_i64[0];
        }
        v17 = (void *)(v21 + v14);
        v15 += v22;
        si128.m128i_i64[0] = (__int64)v17;
      }
      else
      {
        sub_12D8AA0(a2, (const char *)ptr, v14, v25 >> 32, v15, *(__int64 **)v33, *(_QWORD *)(v33 + 8), v30);
        v16 = 0;
        si128.m128i_i64[0] = 0;
        v9 = v24;
        if ( v21 > si128.m128i_i64[1] )
        {
          v9 = v36;
          sub_2236E10(&ptr, v36, v21, 1);
          v16 = si128.m128i_i64[0];
        }
        if ( v21 )
        {
          v9 = srcb;
          memcpy((char *)ptr + v16, srcb, v21);
          v16 = si128.m128i_i64[0];
        }
        v17 = (void *)(v21 + v16);
        DWORD2(v25) = v20;
        v15 = v22;
        si128.m128i_i64[0] = (__int64)v17;
        v29 = v22 + v20;
        DWORD1(v25) = v19;
      }
      srca = v17;
      v18 = std::_Rb_tree_increment(v13, v9);
      v14 = (__int64)srca;
      v13 = v18;
    }
    while ( v32 != v18 );
    v6 = v33;
    v12 = v15;
    v7 = (size_t)srca;
  }
  sub_12D8AA0(a2, (const char *)ptr, v7, v25 >> 32, v12, *(__int64 **)v6, *(_QWORD *)(v6 + 8), v30);
  if ( ptr != v36 )
    free(ptr);
}
