/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000DB50
// Address: 0x000000010000DB50

//----- (000000010000DB50) ----------------------------------------------------
__int128 *__fastcall sub_10000DB50(__int128 *a1, __int128 *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int128 *v11; // r12
  unsigned __int64 v12; // rdx
  __int128 *v13; // r12
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rcx
  __int128 v20; // xmm1
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v25; // [rsp+10h] [rbp-90h]
  __int128 v26; // [rsp+20h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-70h]
  __int128 v28; // [rsp+38h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-58h]
  __int128 v30; // [rsp+50h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-40h]
  __int16 v32; // [rsp+68h] [rbp-38h]

  v26 = *a1;
  v27 = *((_QWORD *)a1 + 2);
  v4 = *(__int128 *)((char *)a1 + 24);
  a1[1] = 0;
  v28 = v4;
  *((_QWORD *)a1 + 4) = 0;
  v29 = *((_QWORD *)a1 + 5);
  v5 = a1[3];
  *(__int128 *)((char *)a1 + 40) = 0;
  v30 = v5;
  *((_QWORD *)a1 + 7) = 0;
  v32 = *((_WORD *)a1 + 36);
  v31 = *((_QWORD *)a1 + 8);
  v6 = (unsigned __int64)(a1 + 5);
  v7 = *((_QWORD *)a1 + 10);
  if ( v7 > (unsigned __int64)v26 )
    goto LABEL_12;
  while ( 1 )
  {
    v9 = v6;
    if ( v7 >= (unsigned __int64)v26 && *(_QWORD *)(v6 + 8) >= *((_QWORD *)&v26 + 1) )
      break;
    v6 += 80LL;
    v7 = *(_QWORD *)(v9 + 80);
    v8 = v9;
    if ( v7 > (unsigned __int64)v26 )
      goto LABEL_7;
  }
  v8 = v6 - 80;
LABEL_7:
  if ( (__int128 *)v8 == a1 )
  {
LABEL_12:
    if ( v6 < (unsigned __int64)a2 )
    {
      do
        a2 -= 5;
      while ( (*(_QWORD *)a2 > (unsigned __int64)v26
            || *(_QWORD *)a2 >= (unsigned __int64)v26 && *((_QWORD *)a2 + 1) >= *((_QWORD *)&v26 + 1))
           && v6 < (unsigned __int64)a2 );
    }
  }
  else
  {
    do
    {
      do
        a2 -= 5;
      while ( *(_QWORD *)a2 > (unsigned __int64)v26 );
    }
    while ( *(_QWORD *)a2 >= (unsigned __int64)v26 && *((_QWORD *)a2 + 1) >= *((_QWORD *)&v26 + 1) );
  }
  v10 = v6;
  if ( v6 < (unsigned __int64)a2 )
  {
    v10 = v6;
    v11 = a2;
    do
    {
      sub_10000E260((__int128 *)v10, v11);
      do
      {
        v12 = *(_QWORD *)(v10 + 80);
        v10 += 80LL;
      }
      while ( v12 <= (unsigned __int64)v26
           && (v12 < (unsigned __int64)v26 || *(_QWORD *)(v10 + 8) < *((_QWORD *)&v26 + 1)) );
      do
      {
        do
          v11 -= 5;
        while ( *(_QWORD *)v11 > (unsigned __int64)v26 );
      }
      while ( *(_QWORD *)v11 >= (unsigned __int64)v26 && *((_QWORD *)v11 + 1) >= *((_QWORD *)&v26 + 1) );
    }
    while ( v10 < (unsigned __int64)v11 );
  }
  v13 = (__int128 *)(v10 - 80);
  if ( (__int128 *)(v10 - 80) != a1 )
  {
    *a1 = *v13;
    v14 = *(_QWORD *)(v10 - 64);
    *(_QWORD *)(v10 - 64) = 0;
    v15 = *(_OWORD *)(v10 - 56);
    v16 = 0;
    *(_OWORD *)(v10 - 56) = 0;
    v17 = *((void **)a1 + 2);
    if ( v17 )
    {
      *((_QWORD *)a1 + 3) = 0;
      v18 = v14;
      qfree(v17);
      v14 = v18;
      v13 = (__int128 *)(v10 - 80);
      v16 = 0;
    }
    *((_QWORD *)a1 + 2) = v14;
    *(__int128 *)((char *)a1 + 24) = v15;
    v19 = *(_QWORD *)(v10 - 40);
    *(_QWORD *)(v10 - 40) = 0;
    v20 = *(_OWORD *)(v10 - 32);
    *(_OWORD *)(v10 - 32) = v16;
    v21 = *((void **)a1 + 5);
    if ( v21 )
    {
      *((_QWORD *)a1 + 6) = 0;
      v25 = v19;
      qfree(v21);
      v19 = v25;
    }
    *((_QWORD *)a1 + 5) = v19;
    a1[3] = v20;
    *((_WORD *)a1 + 36) = *(_WORD *)(v10 - 8);
    *((_QWORD *)a1 + 8) = *(_QWORD *)(v10 - 16);
  }
  *v13 = v26;
  v22 = *(void **)(v10 - 64);
  if ( v22 )
  {
    *(_QWORD *)(v10 - 56) = 0;
    qfree(v22);
  }
  *(_QWORD *)(v10 - 64) = v27;
  *(_OWORD *)(v10 - 56) = v28;
  v23 = *(void **)(v10 - 40);
  if ( v23 )
  {
    *(_QWORD *)(v10 - 32) = 0;
    qfree(v23);
  }
  *(_QWORD *)(v10 - 40) = v29;
  *(_OWORD *)(v10 - 32) = v30;
  *(_WORD *)(v10 - 8) = v32;
  *(_QWORD *)(v10 - 16) = v31;
  return v13;
}
// 10000DE39: conditional instruction was optimized away because %var_58.8==0
// 10000DE47: conditional instruction was optimized away because %var_70.8==0
