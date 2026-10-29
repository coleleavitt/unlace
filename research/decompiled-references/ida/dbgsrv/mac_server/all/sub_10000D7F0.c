/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D7F0
// Address: 0x000000010000D7F0

//----- (000000010000D7F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10000D7F0(__int128 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  unsigned __int64 v6; // rcx
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rdx
  __int128 *v9; // r15
  __int64 v10; // r12
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  void *v13; // rdi
  __int64 v14; // r12
  __int128 v15; // xmm1
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int128 v20; // [rsp+10h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-70h]
  __int128 v22; // [rsp+28h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-40h]
  __int16 v26; // [rsp+58h] [rbp-38h]

  v2 = a2;
  v20 = *a1;
  v21 = *((_QWORD *)a1 + 2);
  v4 = *(__int128 *)((char *)a1 + 24);
  a1[1] = 0;
  v22 = v4;
  *((_QWORD *)a1 + 4) = 0;
  v23 = *((_QWORD *)a1 + 5);
  v5 = a1[3];
  *(__int128 *)((char *)a1 + 40) = 0;
  v24 = v5;
  *((_QWORD *)a1 + 7) = 0;
  v26 = *((_WORD *)a1 + 36);
  v25 = *((_QWORD *)a1 + 8);
  v6 = *(_QWORD *)(a2 - 80);
  if ( (unsigned __int64)v20 > v6 || (unsigned __int64)v20 >= v6 && *((_QWORD *)&v20 + 1) >= *(_QWORD *)(a2 - 72) )
  {
    for ( i = (unsigned __int64)(a1 + 5); i < a2; i += 80LL )
    {
      if ( (unsigned __int64)v20 <= *(_QWORD *)i
        && ((unsigned __int64)v20 < *(_QWORD *)i || *((_QWORD *)&v20 + 1) < *(_QWORD *)(i + 8)) )
      {
        break;
      }
    }
  }
  else
  {
    for ( i = (unsigned __int64)(a1 + 5);
          (unsigned __int64)v20 > *(_QWORD *)i
       || (unsigned __int64)v20 >= *(_QWORD *)i && *((_QWORD *)&v20 + 1) >= *(_QWORD *)(i + 8);
          i += 80LL )
    {
      ;
    }
  }
  if ( i < a2 )
    v2 = a2 - 80;
  if ( (unsigned __int64)v20 <= v6 && i < a2 )
  {
    v2 = a2 - 80;
    do
    {
      if ( (unsigned __int64)v20 >= v6 && *((_QWORD *)&v20 + 1) >= *(_QWORD *)(v2 + 8) )
        break;
      v6 = *(_QWORD *)(v2 - 80);
      v2 -= 80LL;
    }
    while ( (unsigned __int64)v20 <= v6 );
  }
  while ( i < v2 )
  {
    sub_10000E260((__int128 *)i, (__int128 *)v2);
    do
    {
      do
        i += 80LL;
      while ( (unsigned __int64)v20 > *(_QWORD *)i );
    }
    while ( (unsigned __int64)v20 >= *(_QWORD *)i && *((_QWORD *)&v20 + 1) >= *(_QWORD *)(i + 8) );
    do
    {
      v8 = *(_QWORD *)(v2 - 80);
      v2 -= 80LL;
    }
    while ( (unsigned __int64)v20 <= v8 && ((unsigned __int64)v20 < v8 || *((_QWORD *)&v20 + 1) < *(_QWORD *)(v2 + 8)) );
  }
  v9 = (__int128 *)(i - 80);
  if ( (__int128 *)(i - 80) != a1 )
  {
    *a1 = *v9;
    v10 = *(_QWORD *)(i - 64);
    *(_QWORD *)(i - 64) = 0;
    v11 = *(_OWORD *)(i - 56);
    v12 = 0;
    *(_OWORD *)(i - 56) = 0;
    v13 = *((void **)a1 + 2);
    if ( v13 )
    {
      *((_QWORD *)a1 + 3) = 0;
      qfree(v13);
      v12 = 0;
    }
    *((_QWORD *)a1 + 2) = v10;
    *(__int128 *)((char *)a1 + 24) = v11;
    v14 = *(_QWORD *)(i - 40);
    *(_QWORD *)(i - 40) = 0;
    v15 = *(_OWORD *)(i - 32);
    *(_OWORD *)(i - 32) = v12;
    v16 = *((void **)a1 + 5);
    if ( v16 )
    {
      *((_QWORD *)a1 + 6) = 0;
      qfree(v16);
    }
    *((_QWORD *)a1 + 5) = v14;
    a1[3] = v15;
    *((_WORD *)a1 + 36) = *(_WORD *)(i - 8);
    *((_QWORD *)a1 + 8) = *(_QWORD *)(i - 16);
  }
  *v9 = v20;
  v17 = *(void **)(i - 64);
  if ( v17 )
  {
    *(_QWORD *)(i - 56) = 0;
    qfree(v17);
  }
  *(_QWORD *)(i - 64) = v21;
  *(_OWORD *)(i - 56) = v22;
  v18 = *(void **)(i - 40);
  if ( v18 )
  {
    *(_QWORD *)(i - 32) = 0;
    qfree(v18);
  }
  *(_QWORD *)(i - 40) = v23;
  *(_OWORD *)(i - 32) = v24;
  *(_WORD *)(i - 8) = v26;
  *(_QWORD *)(i - 16) = v25;
  return i;
}
// 10000DADD: conditional instruction was optimized away because %var_58.8==0
// 10000DAEB: conditional instruction was optimized away because %var_70.8==0
