void **__fastcall sub_1259B10(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void **result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 == *(_QWORD **)(a1 + 16) )
    return sub_10BCB90((void ***)a1, *(const __m128i **)(a1 + 8), a2);
  *v2 = v2 + 2;
  result = (void **)sub_124E3C0(v2, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 8) += 32LL;
  return result;
}
