__int64 __fastcall sub_236190(__int64 a1, const char *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  char *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  int v7; // eax
  int v9; // eax
  size_t v10; // r12
  void *v11; // r13
  __int64 v12; // rdi
  __m128i v13; // xmm0
  void *v14; // rax
  void *v15; // rax
  __m128i v16; // [rsp+0h] [rbp-68h] BYREF
  int v17; // [rsp+10h] [rbp-58h] BYREF
  void *src; // [rsp+18h] [rbp-50h]
  size_t n[3]; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v3 = *(int *)(a1 + 44);
  v20 = __readfsqword(0x28u);
  v4 = (char *)a2;
  if ( (v3 & 0x80000000) != 0LL || (int)v3 >= *(_DWORD *)(dbg + 64) || v3 >= a3[1] )
  {
    v17 = -2;
    v5 = 0;
    src = (void *)-1LL;
    *(_OWORD *)n = 0;
    goto LABEL_4;
  }
  a2 = (const char *)a1;
  sub_235EE0((__int64)&v17, a1, *a3 + 32 * v3);
  v9 = v17;
  if ( v17 < -1 )
  {
    v5 = 1;
LABEL_4:
    if ( *(int *)v4 >= -1 )
    {
      v6 = *((_QWORD *)v4 + 1);
      if ( v6 )
      {
        *((_QWORD *)v4 + 2) = 0;
        qfree(v6, a2);
      }
    }
    *((_QWORD *)v4 + 1) = src;
LABEL_8:
    v7 = v17;
    *(_DWORD *)v4 = v17;
    if ( v7 < -1 )
      return v5;
    goto LABEL_9;
  }
  v10 = n[0];
  if ( *(int *)v4 >= -1 )
  {
    v11 = nullptr;
    if ( n[0] )
    {
      v15 = (void *)qalloc_or_throw(n[0]);
      a2 = (const char *)src;
      v11 = v15;
      memcpy(v15, src, v10);
    }
    v12 = *((_QWORD *)v4 + 1);
    v13 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( v12 )
    {
      *((_QWORD *)v4 + 2) = 0;
      v16 = v13;
      qfree(v12, a2);
      v13 = _mm_load_si128(&v16);
    }
    *((_QWORD *)v4 + 1) = v11;
    *((__m128i *)v4 + 1) = v13;
    goto LABEL_20;
  }
  *((_QWORD *)v4 + 1) = 0;
  *((_OWORD *)v4 + 1) = 0;
  if ( v10 )
  {
    v14 = (void *)qalloc_or_throw(v10);
    *((_QWORD *)v4 + 1) = v14;
    a2 = (const char *)src;
    *((_QWORD *)v4 + 3) = v10;
    memcpy(v14, a2, v10);
    *((_QWORD *)v4 + 2) = v10;
LABEL_20:
    v5 = 1;
    goto LABEL_8;
  }
  *(_DWORD *)v4 = v9;
  v5 = 1;
LABEL_9:
  if ( src )
  {
    n[0] = 0;
    qfree(src, a2);
  }
  return v5;
}
