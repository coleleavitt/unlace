/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4419D0
// Address: 0x00000000004419D0

//----- (00000000004419D0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_4419D0(
        unsigned __int8 *a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int8 *v10; // rbp
  __int64 v12; // r12
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int8 **v17; // rcx
  unsigned __int8 **v18; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v10 = a1;
  if ( !a1 )
  {
    sub_479EB0(0x61Bu);
    return v10;
  }
  if ( *a1 == 10 )
  {
    ptr = nullptr;
    v20 = 0;
    v12 = sub_438630();
    v13 = a1;
    while ( 1 )
    {
      v14 = (unsigned __int8 *)sub_43D6B0((__int64)(v13 + 8), v12);
      v13 = v14;
      if ( !v14 )
        break;
      if ( *v14 != 10 || (a2 & 1) != 0 )
      {
        if ( (a2 & 2) == 0 )
        {
          v10 = v14;
LABEL_15:
          if ( ptr )
          {
            *(_QWORD *)&v20 = 0;
            j__free(ptr);
          }
          return v10;
        }
        *a1 = 2;
        if ( !(unsigned int)sub_4418C0(a1, v14, 0.0, a4, a5, a6, v15, v16, a9, a10) )
          goto LABEL_15;
LABEL_14:
        v10 = nullptr;
        goto LABEL_15;
      }
      v17 = (unsigned __int8 **)((char *)ptr + 8 * v20);
      if ( ptr != v17 )
      {
        v18 = (unsigned __int8 **)ptr;
        while ( v13 != *v18 )
        {
          if ( v17 == ++v18 )
            goto LABEL_17;
        }
        if ( v18 != v17 )
          break;
      }
LABEL_17:
      if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v20 + 1) )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v20 + 1, 8u);
        v17 = (unsigned __int8 **)((char *)ptr + 8 * v20);
      }
      *v17 = v13;
      *(_QWORD *)&v20 = v20 + 1;
    }
    sub_479EB0(0x61Bu);
    goto LABEL_14;
  }
  return v10;
}
// 441B21: variable 'v15' is possibly undefined
// 441B21: variable 'v16' is possibly undefined
