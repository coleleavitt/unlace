_BYTE *__fastcall sub_EAEA10(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  void *v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // r12
  _WORD *v8; // rdx
  _BYTE *result; // rax

  v3 = *a1;
  v4 = *(void **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0xCu )
  {
    qmemcpy(v4, "firstprivate(", 13);
    *(_QWORD *)(v3 + 32) += 13LL;
  }
  else
  {
    sub_227BF10(v3, "firstprivate(", 13);
  }
  v5 = *(_QWORD **)(a2 + 24);
  v6 = *a1;
  v7 = &v5[*(_QWORD *)(a2 + 32)];
  if ( v5 != v7 )
  {
    sub_F07C00(*v5, v6, 0, a1[1], 0, 0, (__int64)"\n", 1);
    while ( v7 != ++v5 )
    {
      v8 = *(_WORD **)(v6 + 32);
      if ( *(_QWORD *)(v6 + 24) - (_QWORD)v8 > 1u )
      {
        *v8 = 8236;
        *(_QWORD *)(v6 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(v6, ", ", 2);
      }
      sub_F07C00(*v5, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    }
    v6 = *a1;
  }
  result = *(_BYTE **)(v6 + 32);
  if ( *(_BYTE **)(v6 + 24) == result )
    return (_BYTE *)sub_227BF10(v6, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v6 + 32);
  return result;
}
