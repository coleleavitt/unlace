/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4651D0
// Address: 0x00000000004651D0

//----- (00000000004651D0) ----------------------------------------------------
__int64 __fastcall sub_4651D0(
        void **a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v12; // eax
  unsigned __int64 v14; // rbp
  const void *v15; // r13
  void *v16; // rdi
  void *v17; // rax

  if ( *(_BYTE *)(a2 + 29) )
  {
    if ( a1 && (void **)a2 != a1 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      if ( v14 > 1 )
      {
        v15 = *(const void **)a2;
        v16 = *a1;
        if ( (unsigned __int64)a1[2] < v14 )
        {
          v17 = sub_481540((__int64)a1, v16, v14, 1u);
          *a1 = v17;
          v16 = v17;
        }
        a1[1] = (void *)v14;
        memmove(v16, v15, v14 - 1);
        *((char *)*a1 + v14 - 1) = 0;
      }
      else
      {
        a1[1] = nullptr;
      }
    }
    return 0;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v12 - 10) > 1 && v12 != 18 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(30222);
      BUG();
    }
    return sub_464E60((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
