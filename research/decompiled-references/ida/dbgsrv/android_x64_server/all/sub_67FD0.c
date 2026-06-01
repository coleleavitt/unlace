/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67FD0
// Address: 0x0000000000067FD0

//----- (0000000000067FD0) ----------------------------------------------------
void __fastcall sub_67FD0(__int64 a1, double a2, __m128 a3)
{
  char *v4; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  __int64 i; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  sub_614E0(a1);
  *(_QWORD *)(a1 + 184) = 0;
  v4 = *(char **)(a1 + 424);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( v5 )
    {
      v6 = 1;
      for ( i = 0; ; i += 32 )
      {
        free_idcv(&v4[i], a2, a3);
        if ( v6 >= v5 )
          break;
        v4 = *(char **)(a1 + 424);
        ++v6;
      }
      v4 = *(char **)(a1 + 424);
    }
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 440) = 0;
  }
  v8 = *(void **)(a1 + 392);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v9 = *(void **)(a1 + 368);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  v10 = *(void **)(a1 + 344);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  v11 = *(void **)(a1 + 320);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 328) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 336) = 0;
  }
  v12 = *(void **)(a1 + 296);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v13 = *(void **)(a1 + 272);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v14 = *(void **)(a1 + 248);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v15 = *(void **)(a1 + 224);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  sub_38490((char **)(a1 + 160));
  sub_38490((char **)(a1 + 136));
  sub_38490((char **)(a1 + 112));
  v16 = *(void **)(a1 + 40);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
}
