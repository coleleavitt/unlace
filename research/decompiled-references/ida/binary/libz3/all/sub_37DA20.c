_QWORD *__fastcall sub_37DA20(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *result; // rax
  void *v4; // rdi

  v2 = **(_QWORD **)(a1 + 16);
  result = (_QWORD *)sub_186B270(8u);
  v4 = *(void **)(a1 + 16);
  *result = v2;
  *(_QWORD *)(a1 + 16) = result;
  if ( v4 )
    return (_QWORD *)sub_186B220(v4);
  return result;
}

