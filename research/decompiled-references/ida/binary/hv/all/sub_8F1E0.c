__int64 __fastcall sub_8F1E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  const char *v4; // rbp
  void *v5; // rax
  __int64 v6; // r13
  char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // r13
  int i; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  _BYTE *v14; // rsi
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  char v17; // r15
  _BYTE *v18; // rsi
  __int64 result; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  _BYTE *v22; // rsi
  void *v23; // rdi
  __int64 v24; // rax
  void *v25; // rdx
  __m128i v26; // xmm0
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i v28; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  if ( !v1 )
  {
    ptr = nullptr;
    v3 = 2;
    v4 = haystack;
    v28 = 0;
    goto LABEL_3;
  }
  v4 = *(const char **)a1;
  if ( !**(_BYTE **)a1 || (v7 = strpbrk(*(const char **)a1, " \t?*[]()<>;&$|^#"), v8 = v4, v7) )
  {
LABEL_8:
    ptr = nullptr;
    v28 = 0;
    v3 = v1 + 1;
    if ( !v3 )
    {
      v5 = ptr;
      v6 = 2;
      goto LABEL_10;
    }
LABEL_3:
    v5 = (void *)sub_96080(&ptr, 0, v3, 1);
    ptr = v5;
    if ( v28.m128i_i64[0] )
    {
      v3 = v28.m128i_i64[0] - 1;
      v6 = v28.m128i_i64[0] + 1;
      if ( v28.m128i_i64[1] >= (unsigned __int64)(v28.m128i_i64[0] + 1) )
      {
LABEL_11:
        v28.m128i_i64[0] = v6;
        v9 = 0x400000000000021LL;
        *((_BYTE *)v5 + v3) = 39;
        *((_BYTE *)ptr + v3 + 1) = 0;
        for ( i = *(unsigned __int8 *)v4; (_BYTE)i; i = *(unsigned __int8 *)v4 )
        {
          v11 = (unsigned int)(i - 34);
          if ( (unsigned __int8)v11 <= 0x3Au && _bittest64(&v9, v11) )
          {
            v12 = v28.m128i_i64[0];
            v13 = 2;
            if ( v28.m128i_i64[0] )
            {
              v13 = v28.m128i_i64[0] + 1;
              v12 = v28.m128i_i64[0] - 1;
            }
            v14 = ptr;
            if ( v28.m128i_i64[1] < v13 )
            {
              ptr = (void *)sub_96080(&ptr, ptr, v13, 1);
              v14 = ptr;
            }
            v28.m128i_i64[0] = v13;
            v14[v12] = 92;
            *((_BYTE *)ptr + v12 + 1) = 0;
          }
          v15 = v28.m128i_i64[0];
          ++v4;
          v16 = 2;
          v17 = *(v4 - 1);
          if ( v28.m128i_i64[0] )
          {
            v16 = v28.m128i_i64[0] + 1;
            v15 = v28.m128i_i64[0] - 1;
          }
          v18 = ptr;
          if ( v28.m128i_i64[1] < v16 )
          {
            ptr = (void *)sub_96080(&ptr, ptr, v16, 1);
            v18 = ptr;
          }
          v28.m128i_i64[0] = v16;
          v18[v15] = v17;
          *((_BYTE *)ptr + v15 + 1) = 0;
        }
        v20 = v28.m128i_i64[0];
        v21 = 2;
        if ( v28.m128i_i64[0] )
        {
          v21 = v28.m128i_i64[0] + 1;
          v20 = v28.m128i_i64[0] - 1;
        }
        v22 = ptr;
        if ( v28.m128i_i64[1] < v21 )
        {
          ptr = (void *)sub_96080(&ptr, ptr, v21, 1);
          v22 = ptr;
        }
        v28.m128i_i64[0] = v21;
        v22[v20] = 39;
        *((_BYTE *)ptr + v20 + 1) = 0;
        v24 = *(_QWORD *)(a1 + 16);
        v25 = ptr;
        v26 = _mm_loadu_si128(&v28);
        ptr = *(void **)a1;
        v23 = ptr;
        *(_QWORD *)a1 = v25;
        v28.m128i_i64[1] = v24;
        *(__m128i *)(a1 + 8) = v26;
        if ( v23 )
        {
          v28.m128i_i64[0] = 0;
          j__free(v23);
        }
        return 1;
      }
LABEL_5:
      v5 = (void *)sub_96080(&ptr, v5, v6, 1);
      ptr = v5;
      goto LABEL_11;
    }
    v3 = 0;
    v6 = 2;
LABEL_10:
    if ( v28.m128i_i64[1] >= 2uLL )
      goto LABEL_11;
    goto LABEL_5;
  }
  while ( 1 )
  {
    result = *(unsigned __int8 *)v8;
    if ( !(_BYTE)result )
      return result;
    ++v8;
    if ( (_BYTE)result == 34 || (_BYTE)result == 39 )
      goto LABEL_8;
  }
}

