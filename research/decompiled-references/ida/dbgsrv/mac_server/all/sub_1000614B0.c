/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000614B0
// Address: 0x00000001000614B0

//----- (00000001000614B0) ----------------------------------------------------
__int64 __fastcall sub_1000614B0(char **a1, __int64 *a2)
{
  __int128 v2; // xmm0
  size_t v3; // r15
  size_t v4; // r15
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-60h]
  __int128 v10; // [rsp+8h] [rbp-58h]
  size_t v11; // [rsp+18h] [rbp-48h]
  __int128 v12; // [rsp+20h] [rbp-40h]
  size_t v13; // [rsp+30h] [rbp-30h]

  v9 = *a2;
  v2 = 0;
  v10 = 0;
  v11 = 0;
  v3 = a2[2];
  if ( v3 )
  {
    *(_QWORD *)&v10 = qalloc_or_throw(a2[2]);
    v11 = v3;
    memcpy((void *)v10, (const void *)a2[1], v3);
    v2 = 0;
    *((_QWORD *)&v10 + 1) = v3;
  }
  v12 = v2;
  v13 = 0;
  v4 = a2[5];
  if ( v4 )
  {
    *(_QWORD *)&v12 = qalloc_or_throw(a2[5]);
    v13 = v4;
    memcpy((void *)v12, (const void *)a2[4], v4);
    *((_QWORD *)&v12 + 1) = v4;
  }
  v5 = *a1;
  v6 = a1[1];
  if ( a1[2] < v6 + 1 )
  {
    v5 = (char *)qvector_reserve((__int64)a1, v5, (unsigned __int64)(v6 + 1), 0x38u);
    *a1 = v5;
    v6 = a1[1];
  }
  v7 = 56LL * (_QWORD)v6;
  *(_QWORD *)&v5[v7] = v9;
  *(_OWORD *)&v5[v7 + 8] = v10;
  *(_QWORD *)&v5[v7 + 24] = v11;
  *(_OWORD *)&v5[v7 + 32] = v12;
  *(_QWORD *)&v5[v7 + 48] = v13;
  ++a1[1];
  return __stack_chk_guard;
}
// 10006161F: conditional instruction was optimized away because %var_58.8==0
