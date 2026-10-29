/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68BE0
// Address: 0x0000000000068BE0

//----- (0000000000068BE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_68BE0(__int64 a1, unsigned __int64 a2, char *a3, double a4, __m128 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  _BYTE *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v16; // rbp
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  char *v19; // rax
  char v20[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+20h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > a2 )
  {
    v6 = 32 * a2;
    v7 = a2;
    do
    {
      free_idcv((char *)(v6 + *(_QWORD *)a1), a4, a5);
      ++v7;
      v6 += 32LL;
    }
    while ( v7 < v5 );
LABEL_4:
    *(_QWORD *)(a1 + 8) = a2;
    return __readfsqword(0x28u);
  }
  if ( v5 >= a2 )
    return __readfsqword(0x28u);
  v9 = *(_BYTE **)a1;
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &v9[32 * v10] <= a3 )
  {
    if ( v10 < a2 )
    {
      v9 = qvector_reserve(a1, *(char **)a1, a2, 0x20u);
      *(_QWORD *)a1 = v9;
      v5 = *(_QWORD *)(a1 + 8);
    }
    if ( v5 < a2 )
    {
      v16 = 32 * v5;
      v9[v16] = 2;
      *(_OWORD *)&v9[v16 + 8] = 0;
      *(_QWORD *)&v9[v16 + 24] = 0;
      copy_idcv(&v9[32 * v5], a3, 0.0, a5);
      if ( v5 + 1 != a2 )
      {
        v17 = v16 + 32;
        v18 = a2 - 1 - v5;
        do
        {
          v19 = *(char **)a1;
          v19[v17] = 2;
          *(_OWORD *)&v19[v17 + 8] = 0;
          *(_QWORD *)&v19[v17 + 24] = 0;
          copy_idcv(&v19[v17], a3, 0.0, a5);
          v17 += 32;
          --v18;
        }
        while ( v18 );
      }
    }
    goto LABEL_4;
  }
  v20[0] = 2;
  v21 = 0;
  v22 = 0;
  copy_idcv(v20, a3, 0.0, a5);
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x20u);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 < a2 )
  {
    v12 = a2 - v11;
    v13 = 32 * v11;
    do
    {
      v14 = *(char **)a1;
      v14[v13] = 2;
      *(_OWORD *)&v14[v13 + 8] = 0;
      *(_QWORD *)&v14[v13 + 24] = 0;
      copy_idcv(&v14[v13], v20, 0.0, a5);
      v13 += 32;
      --v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  free_idcv(v20, 0.0, a5);
  return __readfsqword(0x28u);
}
