__int64 __fastcall sub_5C1C50(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  char *v6; // rdi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 i; // r15
  char *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  unsigned __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r13
  unsigned int v17; // r15d
  __int64 v18; // rax
  __m128i v19; // xmm0
  _QWORD **v20; // rbx
  void *v21; // rdi
  __int64 v24; // [rsp+10h] [rbp-98h] BYREF
  __int128 v25; // [rsp+18h] [rbp-90h]
  int v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  int v28; // [rsp+38h] [rbp-70h] BYREF
  void *v29; // [rsp+40h] [rbp-68h]
  int *v30; // [rsp+48h] [rbp-60h]
  int *v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v6 = *(char **)(a2 + 64);
  v33 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 56) |= 8u;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 40) = -1;
  *(_DWORD *)(a2 + 88) = 0;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a2 + 72);
    if ( v8 )
    {
      v9 = 0;
      for ( i = 0; i != v8; ++i )
      {
        v11 = &v6[v9];
        v12 = *(void **)&v6[v9 + 32];
        if ( v12 )
        {
          *((_QWORD *)v11 + 5) = 0;
          qfree(v12);
        }
        v13 = *((void **)v11 + 1);
        if ( v13 )
        {
          *((_QWORD *)v11 + 2) = 0;
          qfree(v13);
        }
        v6 = *(char **)(a2 + 64);
        v9 += 56;
      }
    }
    *(_QWORD *)(a2 + 72) = 0;
    qfree(v6);
    *(_QWORD *)(a2 + 64) = 0;
    *(_QWORD *)(a2 + 80) = 0;
  }
  v14 = a3[1];
  v15 = 0;
  v16 = 0;
  v30 = &v28;
  v17 = 1;
  v28 = 0;
  v29 = nullptr;
  v31 = &v28;
  v32 = 0;
  if ( v14 )
  {
    do
    {
      v25 = 0xFFFFFFFF;
      v18 = *a3;
      v26 = -1;
      v24 = 0;
      v19 = _mm_loadl_epi64((const __m128i *)(v18 + 8 * v16));
      v26 = *(_DWORD *)(v18 + 8 * v16);
      *(_QWORD *)((char *)&v25 + 4) = v19.m128i_i64[0];
      if ( _mm_cvtsi128_si32(v19) >= (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 229)) )
        break;
      v16 = ++v15;
      v17 = sub_5C1280(a1, a2, (__int64)&v24, &v27, v15 == v14, a6);
      if ( v24 )
        lock_func_range(v24, 0);
      v14 = a3[1];
      if ( v15 >= v14 )
        goto LABEL_13;
    }
    while ( (_BYTE)v17 );
    v17 = 0;
LABEL_13:
    v20 = (_QWORD **)v29;
    if ( v29 )
    {
      do
      {
        sub_5BCCE0(v20[3]);
        v21 = v20;
        v20 = (_QWORD **)v20[2];
        operator delete(v21, 0x28u);
      }
      while ( v20 );
    }
  }
  return v17;
}

