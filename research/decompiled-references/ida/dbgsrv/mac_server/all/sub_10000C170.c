/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C170
// Address: 0x000000010000C170

//----- (000000010000C170) ----------------------------------------------------
__int64 __fastcall sub_10000C170(char **a1, __int128 *a2)
{
  __int128 v2; // xmm0
  size_t v3; // r15
  size_t v4; // r15
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+0h] [rbp-80h]
  __int128 v10; // [rsp+10h] [rbp-70h]
  size_t v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+28h] [rbp-58h]
  size_t v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int16 v15; // [rsp+48h] [rbp-38h]

  v9 = *a2;
  v2 = 0;
  v10 = 0;
  v11 = 0;
  v3 = *((_QWORD *)a2 + 3);
  if ( v3 )
  {
    *(_QWORD *)&v10 = qalloc_or_throw(*((_QWORD *)a2 + 3));
    v11 = v3;
    memcpy((void *)v10, *((const void **)a2 + 2), v3);
    v2 = 0;
    *((_QWORD *)&v10 + 1) = v3;
  }
  v12 = v2;
  v13 = 0;
  v4 = *((_QWORD *)a2 + 6);
  if ( v4 )
  {
    *(_QWORD *)&v12 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    v13 = v4;
    memcpy((void *)v12, *((const void **)a2 + 5), v4);
    *((_QWORD *)&v12 + 1) = v4;
  }
  v15 = *((_WORD *)a2 + 36);
  v14 = *((_QWORD *)a2 + 8);
  v5 = *a1;
  v6 = a1[1];
  if ( a1[2] < v6 + 1 )
  {
    v5 = (char *)qvector_reserve((__int64)a1, v5, (unsigned __int64)(v6 + 1), 0x50u);
    *a1 = v5;
    v6 = a1[1];
  }
  v7 = 80LL * (_QWORD)v6;
  *(_OWORD *)&v5[v7] = v9;
  *(_OWORD *)&v5[v7 + 16] = v10;
  *(_QWORD *)&v5[v7 + 32] = v11;
  *(_OWORD *)&v5[v7 + 40] = v12;
  *(_QWORD *)&v5[v7 + 56] = v13;
  *(_WORD *)&v5[v7 + 72] = v15;
  *(_QWORD *)&v5[v7 + 64] = v14;
  ++a1[1];
  return __stack_chk_guard;
}
// 10000C309: conditional instruction was optimized away because %var_70.8==0
