__int64 __fastcall sub_5DD890(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  char *v10; // rdi
  __int64 v12; // r13
  __int64 i; // r15
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // r13d
  __int64 v19; // rbx
  unsigned int v20; // r15d
  const __m128i *v21; // rbx
  __m128 v22; // xmm0
  _QWORD **v23; // rbx
  void *v24; // rdi
  int v26[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v27[2]; // [rsp+8h] [rbp-A0h]
  int v28[4]; // [rsp+10h] [rbp-98h]
  int v29[2]; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+30h] [rbp-78h] BYREF
  int v31; // [rsp+38h] [rbp-70h] BYREF
  void *v32; // [rsp+40h] [rbp-68h]
  int v33[2]; // [rsp+48h] [rbp-60h]
  int v34[2]; // [rsp+50h] [rbp-58h]
  int v35[2]; // [rsp+58h] [rbp-50h]
  void *ptr; // [rsp+68h] [rbp-40h]

  v10 = *(char **)(a2 + 72);
  ptr = (void *)__readfsqword(0x28u);
  *(_DWORD *)(a2 + 64) |= 8u;
  *(_QWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 40) = -1;
  if ( v10 )
  {
    v12 = *(_QWORD *)(a2 + 80);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = &v10[64 * i];
        v15 = *((void **)v14 + 5);
        if ( v15 )
        {
          *((_QWORD *)v14 + 6) = 0;
          qfree(v15);
        }
        v16 = *((void **)v14 + 2);
        if ( v16 )
        {
          *((_QWORD *)v14 + 3) = 0;
          qfree(v16);
        }
        v10 = *(char **)(a2 + 72);
      }
    }
    *(_QWORD *)(a2 + 80) = 0;
    qfree(v10);
    *(_QWORD *)(a2 + 72) = 0;
    *(_QWORD *)(a2 + 88) = 0;
  }
  v17 = a3[1];
  v18 = 0;
  v19 = 0;
  v31 = 0;
  v20 = 1;
  v32 = nullptr;
  *(_QWORD *)v33 = &v31;
  *(_QWORD *)v34 = &v31;
  *(_QWORD *)v35 = 0;
  if ( v17 )
  {
    do
    {
      v21 = (const __m128i *)(*a3 + 16 * v19);
      *(_QWORD *)v27 = 0xFFFFFFFFLL;
      *(_QWORD *)v29 = -1;
      *(_OWORD *)v28 = 0;
      *(_QWORD *)v26 = 0;
      v22 = (__m128)_mm_loadu_si128(v21);
      a6 = _mm_movehl_ps(a6, v22);
      *(__m128 *)v28 = v22;
      *(_QWORD *)v29 = v22.m128_u64[0];
      if ( v22.m128_u64[0] >= a6.m128_u64[0] )
        break;
      v19 = ++v18;
      v20 = sub_5DCEC0(a1, a2, (__int64)v26, &v30, v18 == v17, a9);
      if ( *(_QWORD *)v26 )
        lock_func_range(*(_QWORD *)v26, 0);
      v17 = a3[1];
      if ( v18 >= v17 )
        goto LABEL_13;
    }
    while ( (_BYTE)v20 );
    v20 = 0;
LABEL_13:
    v23 = (_QWORD **)v32;
    if ( v32 )
    {
      do
      {
        sub_5D8770(v23[3]);
        v24 = v23;
        v23 = (_QWORD **)v23[2];
        operator delete(v24, 0x30u);
      }
      while ( v23 );
    }
  }
  return v20;
}
