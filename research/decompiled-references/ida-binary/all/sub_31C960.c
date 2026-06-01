__int64 __fastcall sub_31C960(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v20; // [rsp+0h] [rbp-18h]

  v8 = 1;
  v9 = sub_317FE0(1u, (__int64)"dif", 0x3CAu);
  if ( v9 )
  {
    v10 = v9;
    v8 = 0;
    v11 = sub_31C1D0(v9);
    v12 = v11;
    if ( v11 )
    {
      v8 = gen_file(5, v11, 0, -1, 0);
      if ( !v8 )
        sub_17CE30(1013);
      qfclose(v12);
      sub_169700(
        (int)"The difference file %s is created\n",
        v10,
        v13,
        v14,
        v15,
        v16,
        a1,
        a2,
        a3,
        a4,
        v17,
        v18,
        a7,
        a8,
        v20);
    }
  }
  return v8;
}
