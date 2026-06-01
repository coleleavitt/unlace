/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A330
// Address: 0x000000010000A330

//----- (000000010000A330) ----------------------------------------------------
void __fastcall sub_10000A330(__int64 a1)
{
  void **v2; // r15
  void **v3; // r12
  unsigned __int64 v4; // rcx
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  void **v8; // r15
  void **v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rdi

  v2 = *(void ***)(a1 + 8);
  v3 = *(void ***)(a1 + 16);
  if ( v3 == v2 )
  {
    v10 = (_QWORD *)(a1 + 40);
    v9 = *(void ***)(a1 + 8);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 32) / 0x38uLL;
    v5 = (__int64)v2[v4] + 72 * (*(_QWORD *)(a1 + 32) % 0x38uLL);
    v6 = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 32);
    v7 = (unsigned __int64)v2[v6 / 0x38] + 72 * (v6 % 0x38);
    if ( v5 != v7 )
    {
      v8 = &v2[v4];
      do
      {
        free_debug_event(v5);
        v5 += 72;
        if ( v5 - (_QWORD)*v8 == 4032 )
        {
          v5 = (__int64)v8[1];
          ++v8;
        }
      }
      while ( v5 != v7 );
      v2 = *(void ***)(a1 + 8);
      v3 = *(void ***)(a1 + 16);
    }
    v9 = v3;
    v10 = (_QWORD *)(a1 + 40);
  }
  *v10 = 0;
  v11 = v9 - v2;
  if ( v11 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v3 = *(void ***)(a1 + 16);
      v2 = (void **)(*(_QWORD *)(a1 + 8) + 8LL);
      *(_QWORD *)(a1 + 8) = v2;
      v11 = v3 - v2;
    }
    while ( v11 > 2 );
  }
  if ( v11 == 1 )
  {
    v12 = 28;
    goto LABEL_16;
  }
  if ( v11 == 2 )
  {
    v12 = 56;
LABEL_16:
    *(_QWORD *)(a1 + 32) = v12;
  }
  if ( v2 != v3 )
  {
    do
      operator delete(*v2++);
    while ( v2 != v3 );
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 != v13 )
    {
      do
        v14 -= 8;
      while ( v14 != v13 );
      *(_QWORD *)(a1 + 16) = v14;
    }
  }
  v15 = *(void **)a1;
  if ( *(_QWORD *)a1 )
    operator delete(v15);
}
