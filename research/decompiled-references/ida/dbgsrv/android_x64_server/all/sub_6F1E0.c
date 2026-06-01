/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1E0
// Address: 0x000000000006F1E0

//----- (000000000006F1E0) ----------------------------------------------------
void __fastcall sub_6F1E0(__int64 a1, double a2, __m128 a3)
{
  void *v4; // rdi
  char *v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 i; // rbx
  void *v9; // rdi
  void *v10; // rdi

  v4 = *(void **)(a1 + 112);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  sub_70130((char **)(a1 + 88));
  v5 = *(char **)(a1 + 64);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    if ( v6 )
    {
      v7 = 1;
      for ( i = 0; ; i += 32 )
      {
        free_idcv(&v5[i], a2, a3);
        if ( v7 >= v6 )
          break;
        v5 = *(char **)(a1 + 64);
        ++v7;
      }
      v5 = *(char **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v9 = *(void **)(a1 + 32);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v10 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v10);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
