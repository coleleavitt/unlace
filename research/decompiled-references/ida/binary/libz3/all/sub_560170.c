_UNKNOWN **__fastcall sub_560170(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  void *v3; // rdi
  __int64 v4; // rdi

  result = &off_1C675A8;
  *a1 = &off_1C675A8;
  v3 = (void *)a1[5];
  if ( v3 )
    result = (_UNKNOWN **)sub_4D63E0(v3);
  v4 = a1[2];
  if ( v4 )
    return (_UNKNOWN **)sub_186B220((void *)(v4 - 8));
  return result;
}

