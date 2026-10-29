/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100037950
// Address: 0x0000000100037950

//----- (0000000100037950) ----------------------------------------------------
void __fastcall sub_100037950(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // r15d
  unsigned __int64 i; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  int v8; // esi
  int v9; // eax
  __int64 v10; // r15
  __int64 v12; // r14
  void *v13; // rdi
  void *v14; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = 1;
    for ( i = 0; i < v2; i = v3++ )
    {
      v5 = *(_QWORD *)(a1 + 24);
      v6 = 56 * i;
      v7 = v5 + v6;
      v8 = *(unsigned __int8 *)(v5 + v6 + 24);
      if ( v8 == 5 )
      {
        sub_1000380B0(*(unsigned __int8 ***)(v7 + 32), (unsigned __int8 *)(v5 + v6 + 24));
      }
      else if ( v8 != 6 || qword_1000AC0E0 > (unsigned __int64)-*(_DWORD *)(v7 + 32) )
      {
        continue;
      }
      *(_BYTE *)(v7 + 24) = 2;
      *(_QWORD *)(v7 + 32) = 0;
      v2 = *(_QWORD *)(a1 + 32);
    }
  }
  if ( qword_1000AC100[1] )
    ((void (*)(void))qword_1000AC100[1])();
  v9 = *(_DWORD *)(a1 + 8) - 1;
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)v9 + 1LL;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10 - 8);
      if ( v12 )
      {
        v13 = *(void **)(v12 + 32);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 48) = 0;
        }
        sub_100043B30(v12, *(_QWORD **)(v12 + 8));
        operator delete((void *)v12);
      }
    }
    while ( v10-- > 1 );
  }
  v14 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v14);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC108: using guessed type __int64 (*)(void);
