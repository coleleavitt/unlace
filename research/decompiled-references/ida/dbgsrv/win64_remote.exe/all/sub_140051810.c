/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051810
// Address: 0x0000000140051810

//----- (0000000140051810) ----------------------------------------------------
void *__fastcall sub_140051810(__int64 a1, unsigned __int64 *a2)
{
  int v4; // eax
  size_t v5; // rbp
  const void *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // r8
  void *result; // rax
  size_t v10; // rbp
  const void *v11; // rdx
  void *v12; // rcx
  unsigned __int64 v13; // r8

  v4 = sub_14005B690(a2, a2[1]);
  v5 = v4;
  if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
  {
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v4, 1u);
    memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v5 - *(_QWORD *)(a1 + 8));
    goto LABEL_7;
  }
  if ( v4 != *(_QWORD *)(a1 + 8) && (unsigned __int64)v4 < *(_QWORD *)(a1 + 8) )
LABEL_7:
    *(_QWORD *)(a1 + 8) = v5;
  v6 = (const void *)*a2;
  v7 = *(void **)a1;
  v8 = *a2 + v5;
  if ( v8 >= *a2 && v8 <= a2[1] )
  {
    *a2 = v8;
    memcpy(v7, v6, v5);
  }
  *(_QWORD *)(a1 + 24) = sub_14005B7B0(a2, a2[1]) - 1;
  result = (void *)sub_14005B690(a2, a2[1]);
  v10 = (int)result;
  if ( (unsigned __int64)(int)result > *(_QWORD *)(a1 + 40) )
  {
    if ( (unsigned __int64)(int)result > *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 32) = sub_14005ABE0(a1 + 32, *(void **)(a1 + 32), (int)result, 1u);
    result = memset((void *)(*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40)), 0, v10 - *(_QWORD *)(a1 + 40));
    goto LABEL_17;
  }
  if ( (int)result != *(_QWORD *)(a1 + 40) && (unsigned __int64)(int)result < *(_QWORD *)(a1 + 40) )
LABEL_17:
    *(_QWORD *)(a1 + 40) = v10;
  v11 = (const void *)*a2;
  v12 = *(void **)(a1 + 32);
  v13 = *a2 + v10;
  if ( v13 >= *a2 && v13 <= a2[1] )
  {
    *a2 = v13;
    return memcpy(v12, v11, v10);
  }
  return result;
}
