/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77660
// Address: 0x0000000000077660

//----- (0000000000077660) ----------------------------------------------------
unsigned __int64 __fastcall sub_77660(__int64 a1, double a2, __m128 a3)
{
  char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  char v8[8]; // [rsp+8h] [rbp-30h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  v8[0] = 2;
  *(_OWORD *)ptr = 0;
  v10 = 0;
  copy_idcv(v8, v4, 0.0, a3);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_QWORD *)(a1 + 32) = v6;
    free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v6), 0.0, a3);
  }
  if ( v8[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v8, 0.0, a3);
  }
  else if ( v8[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v10 = 0;
  }
  return __readfsqword(0x28u);
}
