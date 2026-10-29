/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446260
// Address: 0x0000000000446260

//----- (0000000000446260) ----------------------------------------------------
__int64 __fastcall sub_446260(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r12
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return sub_479EB0(0x5FCu);
  ptr = nullptr;
  v16 = 0;
  if ( a2 )
  {
    v11 = strlen(a2);
    v12 = v11 + 1;
    v13 = v11;
    ptr = sub_481540((__int64)&ptr, nullptr, v11 + 1, 1u);
    *(_QWORD *)&v16 = v12;
    memmove(ptr, a2, v13);
    *((_BYTE *)ptr + v13) = 0;
  }
  v14 = 0;
  if ( !sub_446160(*(_QWORD *)(a1 + 8), (__int64)&ptr, 0.0, a4, a5, a6, a7, a8, a9, a10) )
  {
    sub_479F30(0, a2);
    v14 = sub_479EB0(0x602u);
  }
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    j__free(ptr);
  }
  return v14;
}
// 44631E: variable 'a7' is possibly undefined
// 44631E: variable 'a8' is possibly undefined
