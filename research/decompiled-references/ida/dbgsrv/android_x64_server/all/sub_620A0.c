/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_620A0
// Address: 0x00000000000620A0

//----- (00000000000620A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_620A0(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  char *v5; // rax
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // r14
  char *v12; // r12
  __int64 v14; // [rsp+10h] [rbp-58h]
  char v15[8]; // [rsp+18h] [rbp-50h] BYREF
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+40h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 > a2 || (unsigned __int64)&v5[56 * v6] <= a2 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v6 < v10 + 1 )
    {
      v5 = (char *)qvector_reserve(a1, *(char **)a1, v10 + 1, 0x38u);
      *(_QWORD *)a1 = v5;
      v10 = *(_QWORD *)(a1 + 8);
    }
    v11 = &v5[56 * v10];
    *(_QWORD *)v11 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v11 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *((_QWORD *)v11 + 2) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    v11[24] = 2;
    *((_OWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 6) = 0;
    copy_idcv(v11 + 24, (char *)(a2 + 24), 0.0, a4);
  }
  else
  {
    v7 = *(_OWORD *)a2;
    *(_QWORD *)a2 = 0;
    v14 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)(a2 + 8) = 0;
    v15[0] = 2;
    v16 = 0;
    v17 = 0;
    copy_idcv(v15, (char *)(a2 + 24), 0.0, a4);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v8 + 1) )
    {
      v9 = *(char **)a1;
    }
    else
    {
      v9 = (char *)qvector_reserve(a1, *(char **)a1, v8 + 1, 0x38u);
      *(_QWORD *)a1 = v9;
      v8 = *(_QWORD *)(a1 + 8);
    }
    v12 = &v9[56 * v8];
    *(_OWORD *)v12 = v7;
    *((_QWORD *)v12 + 2) = v14;
    v12[24] = 2;
    *((_OWORD *)v12 + 2) = 0;
    *((_QWORD *)v12 + 6) = 0;
    copy_idcv(v12 + 24, v15, 0.0, a4);
    free_idcv(v15, 0.0, a4);
  }
  ++*(_QWORD *)(a1 + 8);
  return __readfsqword(0x28u);
}
// 62252: conditional instruction was optimized away because %ptr.8==0
