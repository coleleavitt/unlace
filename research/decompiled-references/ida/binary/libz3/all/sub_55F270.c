_UNKNOWN **__fastcall sub_55F270(_QWORD *a1)
{
  _DWORD *v2; // rbp
  __int64 v4; // rdi
  void *v5; // rdi
  _UNKNOWN **result; // rax
  __int64 v7; // rdi

  v2 = (_DWORD *)a1[7];
  *a1 = off_1C50EB8;
  if ( v2 )
  {
    if ( v2[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[6];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[5];
  result = &off_1C675A8;
  *a1 = &off_1C675A8;
  if ( v5 )
    result = (_UNKNOWN **)sub_4D63E0(v5);
  v7 = a1[2];
  if ( v7 )
    return (_UNKNOWN **)sub_186B220((void *)(v7 - 8));
  return result;
}

