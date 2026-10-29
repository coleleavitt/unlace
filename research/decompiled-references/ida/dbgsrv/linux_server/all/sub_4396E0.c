/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4396E0
// Address: 0x00000000004396E0

//----- (00000000004396E0) ----------------------------------------------------
__int64 __fastcall sub_4396E0(
        __int64 *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rbp
  __int64 v14; // rbx
  void *v15; // rdi
  char *v16; // rdx
  __int64 v17; // r13
  __int64 i; // r12
  char *v19; // rax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // r13
  __int64 j; // r12
  __int64 v25; // rax
  __int64 v27; // rax
  size_t v28; // rax
  size_t v29; // rbp
  __int64 v30; // rdx
  void *v31; // rsi
  void *v32; // rax
  size_t v33; // r14
  void *v34; // rax

  v10 = sub_439670(a1, a2);
  if ( v10 == -1 )
  {
    v27 = operator new(0x90u);
    *(_QWORD *)v27 = 0;
    v14 = v27;
    *(_QWORD *)(v27 + 32) = 0;
    *(_QWORD *)(v27 + 64) = 0;
    *(_QWORD *)(v27 + 88) = 0;
    *(_QWORD *)(v27 + 112) = 0;
    *(_OWORD *)(v27 + 8) = 0;
    *(_OWORD *)(v27 + 40) = 0;
    *(_OWORD *)(v27 + 72) = 0;
    *(_OWORD *)(v27 + 96) = 0;
    *(_OWORD *)(v27 + 120) = 0;
    if ( a2 )
    {
      v28 = strlen(a2);
      v29 = v28;
      if ( v28 )
      {
        v33 = v28 + 1;
        v34 = sub_481540(v14, nullptr, v28 + 1, 1u);
        *(_QWORD *)(v14 + 8) = v33;
        *(_QWORD *)v14 = v34;
        memmove(v34, a2, v29);
        *(_BYTE *)(*(_QWORD *)v14 + v29) = 0;
      }
    }
    v30 = a1[1];
    v31 = (void *)*a1;
    v13 = v30;
    if ( a1[2] < (unsigned __int64)(v30 + 1) )
    {
      v32 = sub_481540((__int64)a1, v31, v30 + 1, 8u);
      v30 = a1[1];
      *a1 = (__int64)v32;
      v31 = v32;
    }
    *((_QWORD *)v31 + v30) = v14;
    ++a1[1];
  }
  else
  {
    v13 = v10;
    v14 = *(_QWORD *)(*a1 + 8 * v10);
    if ( *(_DWORD *)(v14 + 136) )
      return -1;
    v15 = *(void **)(v14 + 32);
    if ( v15 )
    {
      *(_QWORD *)(v14 + 40) = 0;
      j__free(v15);
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 48) = 0;
    }
    v16 = *(char **)(v14 + 88);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v14 + 96);
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v19 = &v16[32 * i];
          v20 = *((void **)v19 + 1);
          if ( v20 )
          {
            *((_QWORD *)v19 + 2) = 0;
            j__free(v20);
            v16 = *(char **)(v14 + 88);
          }
        }
      }
      *(_QWORD *)(v14 + 96) = 0;
      j__free(v16);
      *(_QWORD *)(v14 + 88) = 0;
      *(_QWORD *)(v14 + 104) = 0;
    }
    v21 = *(void **)(v14 + 112);
    if ( v21 )
    {
      *(_QWORD *)(v14 + 120) = 0;
      j__free(v21);
      *(_QWORD *)(v14 + 112) = 0;
      *(_QWORD *)(v14 + 128) = 0;
    }
    v22 = *(void **)(v14 + 64);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v14 + 72);
      if ( v23 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v25 = j;
          sub_441540((__int64)v22 + 32 * v25, a3, a4, a5, a6, v11, v12, a9, a10);
          v22 = *(void **)(v14 + 64);
        }
      }
      *(_QWORD *)(v14 + 72) = 0;
      j__free(v22);
      *(_QWORD *)(v14 + 64) = 0;
      *(_QWORD *)(v14 + 80) = 0;
    }
    *(_DWORD *)(v14 + 24) = 0;
  }
  *(_DWORD *)(v14 + 136) = -1;
  *(_DWORD *)(v14 + 24) = 0;
  return v13;
}
// 4397FE: variable 'v11' is possibly undefined
// 4397FE: variable 'v12' is possibly undefined
