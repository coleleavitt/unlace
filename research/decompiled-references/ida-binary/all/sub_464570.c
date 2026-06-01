__int64 __fastcall sub_464570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  void *v6; // rax

  *(_QWORD *)a2 = 0;
  *(_OWORD *)(a2 + 8) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    v6 = (void *)qalloc_or_throw(8 * v4);
    *(_QWORD *)(a2 + 16) = v4;
    *(_QWORD *)a2 = v6;
    memcpy(v6, *(const void **)a3, 8 * v4);
    *(_QWORD *)(a2 + 8) = v4;
  }
  result = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
