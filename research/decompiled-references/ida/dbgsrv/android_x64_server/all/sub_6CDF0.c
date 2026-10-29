/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CDF0
// Address: 0x000000000006CDF0

//----- (000000000006CDF0) ----------------------------------------------------
void __fastcall sub_6CDF0(__int64 a1, double a2, __m128 a3)
{
  void *v4; // rdi
  char *v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 i; // rbx
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 j; // rbx

  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v5 = *(char **)(a1 + 88);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    if ( v6 )
    {
      v7 = 1;
      for ( i = 8; ; i += 32 )
      {
        v9 = *(void **)&v5[i];
        if ( v9 )
        {
          *(_QWORD *)&v5[i + 8] = 0;
          qfree(v9);
          *(_QWORD *)&v5[i] = 0;
          *(_QWORD *)&v5[i + 16] = 0;
        }
        if ( v7 >= v6 )
          break;
        v5 = *(char **)(a1 + 88);
        ++v7;
      }
      v5 = *(char **)(a1 + 88);
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v10 = *(void **)(a1 + 112);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v11 = *(char **)(a1 + 64);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
    {
      v13 = 1;
      for ( j = 0; ; j += 32 )
      {
        free_idcv(&v11[j], a2, a3);
        if ( v13 >= v12 )
          break;
        v11 = *(char **)(a1 + 64);
        ++v13;
      }
      v11 = *(char **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
}
