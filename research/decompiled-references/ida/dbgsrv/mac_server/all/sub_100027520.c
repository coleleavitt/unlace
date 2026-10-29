/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027520
// Address: 0x0000000100027520

//----- (0000000100027520) ----------------------------------------------------
__int64 __fastcall sub_100027520(unsigned __int64 *a1, unsigned __int64 a2)
{
  char *v3; // rax
  unsigned __int64 v4; // rcx
  __int128 v5; // xmm1
  char *v6; // rax
  unsigned __int64 v7; // rcx
  char *v8; // r15
  unsigned __int64 v9; // rdi
  char *v10; // r14
  __int64 v12; // [rsp+8h] [rbp-58h]
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+28h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-28h]

  v3 = (char *)*a1;
  v4 = a1[2];
  if ( *a1 <= a2 && *a1 + 56 * v4 > a2 )
  {
    v12 = *(_QWORD *)a2;
    v5 = *(_OWORD *)(a2 + 8);
    *(_OWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
    v13[0] = 2;
    v14 = 0;
    v15 = 0;
    copy_idcv(v13, (unsigned __int8 *)(a2 + 24));
    v6 = (char *)*a1;
    v7 = a1[1];
    if ( a1[2] < v7 + 1 )
    {
      v6 = (char *)qvector_reserve((__int64)a1, v6, v7 + 1, 0x38u);
      *a1 = (unsigned __int64)v6;
      v7 = a1[1];
    }
    v8 = &v6[56 * v7];
    *(_QWORD *)v8 = v12;
    *(_OWORD *)(v8 + 8) = v5;
    v8[24] = 2;
    *((_OWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 6) = 0;
    copy_idcv((unsigned __int8 *)v8 + 24, v13);
    free_idcv(v13);
  }
  else
  {
    v9 = a1[1];
    if ( v4 < v9 + 1 )
    {
      v3 = (char *)qvector_reserve((__int64)a1, v3, v9 + 1, 0x38u);
      *a1 = (unsigned __int64)v3;
      v9 = a1[1];
    }
    v10 = &v3[56 * v9];
    *(_QWORD *)v10 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v10 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *((_QWORD *)v10 + 2) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    v10[24] = 2;
    *((_OWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 6) = 0;
    copy_idcv((unsigned __int8 *)v10 + 24, (unsigned __int8 *)(a2 + 24));
  }
  ++a1[1];
  return __stack_chk_guard;
}
// 100027637: conditional instruction was optimized away because %var_58.8==0
