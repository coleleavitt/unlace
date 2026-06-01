/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442CC0
// Address: 0x0000000000442CC0

//----- (0000000000442CC0) ----------------------------------------------------
void __fastcall sub_442CC0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // r12
  __int64 i; // rbx
  __int64 v15; // rax
  pthread_mutex_t *v16; // rbx
  __int64 v17; // rdx
  bool v18; // zf

  if ( *(_BYTE *)(a1 + 145) )
  {
    v16 = (pthread_mutex_t *)qword_4C8210;
    sub_482EC0((pthread_mutex_t *)qword_4C8210);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (*(_DWORD *)(v17 + 120))-- == 1;
    if ( v18 && off_4C56F8 )
      off_4C56F8();
    sub_482F10(v16);
  }
  v10 = *(void **)(a1 + 72);
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v10);
  }
  v11 = *(void **)(a1 + 48);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v11);
  }
  v12 = *(void **)(a1 + 24);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = i;
        sub_441540((__int64)v12 + 32 * v15, 0.0, a3, a4, a5, a6, a7, a8, a9);
        v12 = *(void **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v12);
  }
}
// 442D3E: variable 'a6' is possibly undefined
// 442D3E: variable 'a7' is possibly undefined
// 42BEE0: using guessed type __int64 __fastcall sub_42BEE0();
// 4C56F8: using guessed type __int64 (__fastcall *off_4C56F8)();
