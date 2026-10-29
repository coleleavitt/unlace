/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C770
// Address: 0x000000000007C770

//----- (000000000007C770) ----------------------------------------------------
char __fastcall sub_7C770(_QWORD *a1, char *a2, double a3, __m128 a4)
{
  char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  char v9[8]; // [rsp+8h] [rbp-30h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned int)move_idcv(a2, (char *)(32LL * a1[1] + *a1 - 32), a3, a4) )
    return 0;
  v6 = (char *)(*a1 + 32LL * a1[1] - 32);
  v9[0] = 2;
  *(_OWORD *)ptr = 0;
  v11 = 0;
  copy_idcv(v9, v6, 0.0, a4);
  v7 = a1[1];
  if ( v7 )
  {
    v8 = v7 - 1;
    a1[1] = v8;
    free_idcv((char *)(*a1 + 32 * v8), 0.0, a4);
  }
  if ( v9[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v9, 0.0, a4);
  }
  else if ( v9[0] == 7 )
  {
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v11 = 0;
    }
  }
  return 1;
}
