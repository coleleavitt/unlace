/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D930
// Address: 0x000000000045D930

//----- (000000000045D930) ----------------------------------------------------
unsigned __int64 __fastcall sub_45D930(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  char *v7; // r13
  char *v8; // rdx
  void *v9; // rdi
  __int64 v10; // rdx
  __m128 v11; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  const char *v15; // rbp
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r15
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  ptr = nullptr;
  v5 = sub_481540((__int64)&ptr, nullptr, 9u, 1u);
  v6 = *a2;
  ptr = v5;
  *(_QWORD *)&v20 = 9;
  *v5 = v6;
  v7 = (char *)ptr;
  v8 = &byte_4C8075;
  *((_BYTE *)ptr + 8) = 0;
  if ( (_QWORD)v20 )
    v8 = v7;
  if ( *v8 == 47 )
  {
    v13 = strtol(v7 + 1, nullptr, 10);
    v7 = (char *)ptr;
    if ( v13 > 0 )
    {
      v14 = a3[1];
      if ( v14 )
      {
        if ( v13 < (unsigned __int64)(v14 - 1) )
        {
          v15 = (const char *)(*a3 + v13);
          v16 = strlen(v15);
          v17 = v16;
          if ( v16 )
          {
            v18 = v16 + 1;
            if ( *((_QWORD *)&v20 + 1) < v16 + 1 )
            {
              ptr = sub_481540((__int64)&ptr, v7, v16 + 1, 1u);
              v7 = (char *)ptr;
            }
            *(_QWORD *)&v20 = v18;
            memmove(v7, v15, v17);
            *((_BYTE *)ptr + v17) = 0;
            v7 = (char *)ptr;
          }
        }
      }
    }
  }
  v9 = *(void **)a1;
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v7;
  v11 = _mm_loadh_ps((const double *)&v20 + 1);
  ptr = v9;
  *((_QWORD *)&v20 + 1) = v10;
  *(__m128 *)(a1 + 8) = v11;
  if ( v9 )
  {
    *(_QWORD *)&v20 = 0;
    j__free(v9);
  }
  return v21 - __readfsqword(0x28u);
}
// 4C8075: using guessed type char byte_4C8075;
