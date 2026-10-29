/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_688B0
// Address: 0x00000000000688B0

//----- (00000000000688B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_688B0(__int64 a1, char *a2, double a3, __m128 a4)
{
  __int64 v5; // rcx
  char *v6; // rax
  char *v7; // rdi
  char v9[8]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v9[0] = 2;
  v10 = 0;
  v11 = 0;
  copy_idcv(v9, a2, 0.0, a4);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(char **)a1;
  }
  else
  {
    v6 = (char *)qvector_reserve(a1, *(char **)a1, v5 + 1, 0x20u);
    *(_QWORD *)a1 = v6;
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = &v6[32 * v5];
  *v7 = 2;
  *(_OWORD *)(v7 + 8) = 0;
  *((_QWORD *)v7 + 3) = 0;
  copy_idcv(v7, v9, 0.0, a4);
  ++*(_QWORD *)(a1 + 8);
  free_idcv(v9, 0.0, a4);
  return __readfsqword(0x28u);
}
