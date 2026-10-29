/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E880
// Address: 0x000000000045E880

//----- (000000000045E880) ----------------------------------------------------
void __fastcall sub_45E880(__int64 a1)
{
  __int64 v2; // x27
  __int64 v3; // x28
  unsigned __int64 v4; // x24
  __int64 *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x26
  __int64 v9; // x19
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  void *v14; // x0
  void **v15; // x19
  unsigned __int64 v16; // x20
  void *v17; // t1
  __int64 v18; // x0

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (__int64 *)(v3 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v4 > v3 + 8 )
  {
    do
    {
      v9 = *v5;
      v10 = *v5 + 504;
      do
      {
        v11 = v9;
        v9 += 72;
        sub_482ED0(v11);
      }
      while ( v10 != v9 );
      ++v5;
    }
    while ( v4 > (unsigned __int64)v5 );
  }
  if ( v4 == v3 )
  {
    while ( v8 != v6 )
    {
      v18 = v6;
      v6 += 72;
      sub_482ED0(v18);
    }
    v14 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      return;
    goto LABEL_12;
  }
  if ( v6 == v2 )
    goto LABEL_10;
  do
  {
    v12 = v6;
    v6 += 72;
    sub_482ED0(v12);
  }
  while ( v2 != v6 );
  while ( v8 != v7 )
  {
    v13 = v7;
    v7 += 72;
    sub_482ED0(v13);
LABEL_10:
    ;
  }
  v14 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
LABEL_12:
    v15 = *(void ***)(a1 + 40);
    v16 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( (unsigned __int64)v15 < v16 )
    {
      do
      {
        v17 = *v15++;
        j__free_0(v17);
      }
      while ( v16 > (unsigned __int64)v15 );
      v14 = *(void **)a1;
    }
    j__free_0(v14);
  }
}
