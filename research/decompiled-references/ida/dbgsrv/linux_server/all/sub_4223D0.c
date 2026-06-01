/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4223D0
// Address: 0x00000000004223D0

//----- (00000000004223D0) ----------------------------------------------------
__int64 __fastcall sub_4223D0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // r13d
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  double v13; // xmm4_8
  double v14; // xmm5_8
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  ptr = nullptr;
  v24 = 0;
  v11 = (a1[24] == 0) + ((__int64)(a1[24] - a1[20]) >> 3) - 1;
  v12 = 0x8E38E38E38E38E39LL * (((__int64)(a1[21] - a1[22]) >> 3) + ((__int64)(a1[19] - a1[17]) >> 3)) + 8 * v11 - v11;
  if ( (unsigned int)sub_4211A0((__int64)a1, (__int64 *)&ptr, 0, 0.0, a3, a4, a5, a6, a7, a8, a9) == 1 )
    sub_420860((__int64)a1, &ptr, 0.0, a3, a4, a5, v13, v14, a8, a9);
  v15 = (char *)ptr;
  v16 = (a1[24] == 0) + ((__int64)(a1[24] - a1[20]) >> 3) - 1;
  LOBYTE(v9) = 0x8E38E38E38E38E39LL * (((__int64)(a1[21] - a1[22]) >> 3) + ((__int64)(a1[19] - a1[17]) >> 3))
             + 8 * v16
             - v16 != (int)v12;
  if ( ptr )
  {
    v17 = v24;
    if ( (_QWORD)v24 )
    {
      v18 = 0;
      do
      {
        v19 = &v15[80 * v18];
        v20 = *((void **)v19 + 5);
        if ( v20 )
        {
          *((_QWORD *)v19 + 6) = 0;
          j__free(v20);
        }
        v21 = *((void **)v19 + 2);
        if ( v21 )
        {
          *((_QWORD *)v19 + 3) = 0;
          j__free(v21);
        }
        ++v18;
        v15 = (char *)ptr;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v24 = 0;
    j__free(v15);
  }
  return v9;
}
// 42256E: variable 'v13' is possibly undefined
// 42256E: variable 'v14' is possibly undefined
// 422558: variable 'v9' is possibly undefined
