/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CAA0
// Address: 0x000000000042CAA0

//----- (000000000042CAA0) ----------------------------------------------------
__int64 __fastcall sub_42CAA0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rdx
  bool v11; // zf
  char *v13; // rbp
  unsigned __int64 v14; // r12
  size_t v15; // r15
  __int64 v16; // r14
  size_t v17; // r8
  size_t v18; // rax
  size_t v19; // r12
  size_t v20; // r13
  void *v21; // rax
  size_t v22; // [rsp+0h] [rbp-80h]
  void *src; // [rsp+8h] [rbp-78h] BYREF
  __int128 v24; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-40h]

  v10 = s1;
  v11 = *(_QWORD *)(a1 + 16) == 0;
  v27 = __readfsqword(0x28u);
  v24 = 0;
  src = nullptr;
  if ( !v11 )
    v10 = *(const char **)(a1 + 8);
  if ( !(unsigned __int8)sub_436F80((__m128i *)a2, -1, v10, (__m128 **)&src, 0.0, a4, a5, a6, a7, a8, a9, a10) )
  {
    v26 = 0;
    ptr = nullptr;
    ptr = sub_481540((__int64)&ptr, nullptr, 0xEu, 1u);
    *(_QWORD *)&v26 = 14;
    strcpy((char *)ptr, "IDC_FAILURE: ");
    v13 = (char *)ptr;
    v14 = v24;
    if ( (_QWORD)v24 )
    {
      v15 = v24 - 1;
      if ( (_QWORD)v24 != 1 )
      {
        v16 = v26;
        v17 = v24 - 1;
        if ( (_QWORD)v26 )
        {
          v16 = v26 - 1;
          v17 = v15 + v26 - 1;
          v14 = v24 + v26 - 1;
        }
        if ( *((_QWORD *)&v26 + 1) < v14 )
        {
          v22 = v17;
          ptr = sub_481540((__int64)&ptr, ptr, v14, 1u);
          v17 = v22;
          v13 = (char *)ptr;
        }
        *(_QWORD *)&v26 = v14;
        v13[v17] = 0;
        memcpy((char *)ptr + v16, src, v15);
        v13 = (char *)ptr;
      }
    }
    if ( (_QWORD)v26 )
    {
      if ( !v13 )
      {
        *(_BYTE *)a2 = 7;
        *(_QWORD *)(a2 + 8) = 0;
        *(_OWORD *)(a2 + 16) = 0;
        goto LABEL_4;
      }
      v18 = strlen(v13);
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      v19 = v18;
      *(_OWORD *)(a2 + 16) = 0;
      if ( !v18 )
      {
LABEL_19:
        *(_QWORD *)&v26 = 0;
        j__free(v13);
        goto LABEL_4;
      }
      v20 = v18 + 1;
      v21 = sub_481540(a2 + 8, nullptr, v18 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v21;
      *(_QWORD *)(a2 + 16) = v20;
      memmove(v21, v13, v19);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v19) = 0;
      v13 = (char *)ptr;
    }
    else
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
    }
    if ( !v13 )
      goto LABEL_4;
    goto LABEL_19;
  }
LABEL_4:
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    j__free(src);
  }
  return 0;
}
