/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457E90
// Address: 0x0000000000457E90

//----- (0000000000457E90) ----------------------------------------------------
void __fastcall sub_457E90(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void **v11; // rbx
  unsigned __int64 v12; // rbp
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-58h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 i; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 72);
  v2 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 40); (unsigned __int64)v2 < v1; ++v2 )
  {
    v5 = *v2;
    v6 = *v2 + 504;
    do
    {
      v7 = v5;
      v5 += 72;
      sub_478720(v7);
    }
    while ( v6 != v5 );
  }
  if ( i == v1 )
  {
    if ( v4 != v15 )
    {
      do
      {
        v14 = v4;
        v4 += 72;
        sub_478720(v14);
      }
      while ( v15 != v4 );
      v10 = *(void **)a1;
      if ( !*(_QWORD *)a1 )
        return;
      goto LABEL_12;
    }
  }
  else
  {
    if ( v4 == v16 )
      goto LABEL_10;
    do
    {
      v8 = v4;
      v4 += 72;
      sub_478720(v8);
    }
    while ( v16 != v4 );
    while ( v15 != v3 )
    {
      v9 = v3;
      v3 += 72;
      sub_478720(v9);
LABEL_10:
      ;
    }
  }
  v10 = *(void **)a1;
  if ( !*(_QWORD *)a1 )
    return;
LABEL_12:
  v11 = *(void ***)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 72) + 8LL;
  if ( (unsigned __int64)v11 < v12 )
  {
    do
    {
      v13 = *v11++;
      operator delete(v13, 0x1F8u);
    }
    while ( (unsigned __int64)v11 < v12 );
    v10 = *(void **)a1;
  }
  operator delete(v10, 8LL * *(_QWORD *)(a1 + 8));
}
