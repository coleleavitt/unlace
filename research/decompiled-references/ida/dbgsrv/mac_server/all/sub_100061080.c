/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061080
// Address: 0x0000000100061080

//----- (0000000100061080) ----------------------------------------------------
__int64 __fastcall sub_100061080(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // r14
  __int64 v13; // r15
  __int64 i; // r12
  void *v15; // rdi
  void *v16; // rdi

  *(_QWORD *)(a1 + 488) = 0;
  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    v3 = 16;
    do
    {
      v4 = *(_QWORD *)(a1 + 376);
      v5 = *(void **)(v4 + v3 + 24);
      if ( v5 )
      {
        *(_QWORD *)(v4 + v3 + 32) = 0;
        qfree(v5);
        *(_QWORD *)(v4 + v3 + 24) = 0;
        *(_QWORD *)(v4 + v3 + 40) = 0;
      }
      v6 = *(void **)(v4 + v3);
      if ( v6 )
      {
        *(_QWORD *)(v4 + v3 + 8) = 0;
        qfree(v6);
        *(_QWORD *)(v4 + v3) = 0;
        *(_QWORD *)(v4 + v3 + 16) = 0;
      }
      v3 += 80;
      --v2;
    }
    while ( v2 );
  }
  *(_QWORD *)(a1 + 384) = 0;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    v8 = 8;
    do
    {
      v9 = *(_QWORD *)(a1 + 48);
      v10 = *(void **)(v9 + v8 + 24);
      if ( v10 )
      {
        *(_QWORD *)(v9 + v8 + 32) = 0;
        qfree(v10);
        *(_QWORD *)(v9 + v8 + 24) = 0;
        *(_QWORD *)(v9 + v8 + 40) = 0;
      }
      v11 = *(void **)(v9 + v8);
      if ( v11 )
      {
        *(_QWORD *)(v9 + v8 + 8) = 0;
        qfree(v11);
        *(_QWORD *)(v9 + v8) = 0;
        *(_QWORD *)(v9 + v8 + 16) = 0;
      }
      v8 += 56;
      --v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v12 = *(char **)(a1 + 96);
    v13 = 8LL * *(_QWORD *)(a1 + 104);
    if ( v13 )
    {
      for ( i = 0; i != v13; i += 8 )
        qfree(*(void **)&v12[i]);
      v12 = *(char **)(a1 + 96);
    }
    if ( v12 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v12);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
    v15 = *(void **)(a1 + 72);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v15);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
  }
  v16 = *(void **)(a1 + 352);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_10000A090(a1 + 328, *(_QWORD **)(a1 + 336));
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 336) = 0;
  sub_10000A010(a1 + 504, *(_QWORD **)(a1 + 512));
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_OWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 600LL))(a1);
}
