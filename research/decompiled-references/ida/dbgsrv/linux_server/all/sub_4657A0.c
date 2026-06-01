/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4657A0
// Address: 0x00000000004657A0

//----- (00000000004657A0) ----------------------------------------------------
__int64 __fastcall sub_4657A0(
        __int64 a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v14; // rbx
  const void *v15; // r14
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v18; // rax
  size_t v19; // rax
  size_t v20; // r14
  void *v21; // rdi
  size_t v22; // r15
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  LODWORD(v14) = sub_465670(a1, (__int64)a2, a3);
  if ( !(_BYTE)v14 )
  {
    ptr = nullptr;
    v25 = 0;
    if ( !a4
      || (v14 = *(const char **)(a4 + 8), (unsigned __int64)v14 < 2)
      || (v15 = *(const void **)a4,
          ptr = sub_481540((__int64)&ptr, nullptr, *(_QWORD *)(a4 + 8), 1u),
          *(_QWORD *)&v25 = v14,
          memmove(ptr, v15, (size_t)(v14 - 1)),
          v14[(_QWORD)ptr - 1] = 0,
          (unsigned __int64)v25 <= 1) )
    {
      v18 = sub_45A750();
      v14 = v18;
      if ( v18 && (v19 = strlen(v18), (v20 = v19) != 0) )
      {
        v21 = ptr;
        v22 = v19 + 1;
        if ( *((_QWORD *)&v25 + 1) < v19 + 1 )
        {
          ptr = sub_481540((__int64)&ptr, ptr, v19 + 1, 1u);
          v21 = ptr;
        }
        *(_QWORD *)&v25 = v22;
        memmove(v21, v14, v20);
        *((_BYTE *)ptr + v20) = 0;
      }
      else
      {
        *(_QWORD *)&v25 = 0;
      }
    }
    LOBYTE(v14) = (unsigned int)sub_4651D0(a2, a3, (__int64)&ptr, 0.0, a6, a7, a8, v16, v17, a11, a12) == 0;
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
  }
  return (unsigned int)v14;
}
// 4658A5: variable 'v16' is possibly undefined
// 4658A5: variable 'v17' is possibly undefined
