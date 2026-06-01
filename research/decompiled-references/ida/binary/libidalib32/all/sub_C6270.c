__int64 __fastcall sub_C6270(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // ebp
  int v6; // eax
  int v8; // eax
  size_t v9; // r12
  void *v10; // r13
  __m128i v11; // xmm0
  void *v12; // rax
  void *v13; // rsi
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  int v15; // [rsp+10h] [rbp-58h] BYREF
  void *src; // [rsp+18h] [rbp-50h]
  size_t n[3]; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = *(int *)(a1 + 44);
  v18 = __readfsqword(0x28u);
  if ( (v3 & 0x80000000) != 0LL || (int)v3 >= *(_DWORD *)(dbg + 64LL) || v3 >= a3[1] )
  {
    v15 = -2;
    v5 = 0;
    src = (void *)-1LL;
    *(_OWORD *)n = 0;
    goto LABEL_4;
  }
  sub_C5F90((__int64)&v15, a1, *a3 + 32 * v3);
  v8 = v15;
  if ( v15 < -1 )
  {
    v5 = 1;
LABEL_4:
    if ( *(int *)a2 >= -1 && *(_QWORD *)(a2 + 8) )
    {
      *(_QWORD *)(a2 + 16) = 0;
      qfree();
    }
    *(_QWORD *)(a2 + 8) = src;
LABEL_8:
    v6 = v15;
    *(_DWORD *)a2 = v15;
    if ( v6 < -1 )
      return v5;
    goto LABEL_9;
  }
  v9 = n[0];
  if ( *(int *)a2 >= -1 )
  {
    v10 = nullptr;
    if ( n[0] )
    {
      v10 = (void *)qalloc_or_throw();
      memcpy(v10, src, v9);
    }
    v11 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    if ( *(_QWORD *)(a2 + 8) )
    {
      *(_QWORD *)(a2 + 16) = 0;
      v14 = v11;
      qfree();
      v11 = _mm_load_si128(&v14);
    }
    *(_QWORD *)(a2 + 8) = v10;
    *(__m128i *)(a2 + 16) = v11;
    goto LABEL_20;
  }
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v9 )
  {
    v12 = (void *)qalloc_or_throw();
    *(_QWORD *)(a2 + 8) = v12;
    v13 = src;
    *(_QWORD *)(a2 + 24) = v9;
    memcpy(v12, v13, v9);
    *(_QWORD *)(a2 + 16) = v9;
LABEL_20:
    v5 = 1;
    goto LABEL_8;
  }
  *(_DWORD *)a2 = v8;
  v5 = 1;
LABEL_9:
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v5;
}

