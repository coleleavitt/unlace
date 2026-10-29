/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D630
// Address: 0x000000000042D630

//----- (000000000042D630) ----------------------------------------------------
__int64 __fastcall sub_42D630(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rax
  bool v11; // zf
  void *v12; // rbp
  size_t v13; // rax
  size_t v14; // r12
  size_t v15; // r13
  void *v16; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v10 = s1;
  v11 = *(_QWORD *)(a1 + 16) == 0;
  v20 = __readfsqword(0x28u);
  ptr = nullptr;
  v19 = 0;
  if ( !v11 )
    v10 = *(const char **)(a1 + 8);
  sub_4357D0((__int64)v10, (__int64)&ptr, 3, 0.0, a4, a5, a6, a7, a8, a9, a10);
  v12 = ptr;
  if ( (_QWORD)v19 )
  {
    if ( !ptr )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      return 0;
    }
    v13 = strlen((const char *)ptr);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v14 = v13;
    *(_OWORD *)(a2 + 16) = 0;
    if ( !v13 )
      goto LABEL_9;
    v15 = v13 + 1;
    v16 = sub_481540(a2 + 8, nullptr, v13 + 1, 1u);
    *(_QWORD *)(a2 + 8) = v16;
    *(_QWORD *)(a2 + 16) = v15;
    memmove(v16, v12, v14);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v14) = 0;
    v12 = ptr;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  if ( v12 )
  {
LABEL_9:
    *(_QWORD *)&v19 = 0;
    j__free(v12);
  }
  return 0;
}
