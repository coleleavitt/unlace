_UNKNOWN **__fastcall sub_55F180(_QWORD *a1)
{
  _DWORD *v2; // rbp
  void *v4; // rdi
  _UNKNOWN **result; // rax
  __int64 v6; // rdi

  v2 = (_DWORD *)a1[8];
  *a1 = off_1C50EE8;
  if ( v2 )
  {
    if ( v2[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = (void *)a1[5];
  result = &off_1C675A8;
  *a1 = &off_1C675A8;
  if ( v4 )
    result = (_UNKNOWN **)sub_4D63E0(v4);
  v6 = a1[2];
  if ( v6 )
    return (_UNKNOWN **)sub_186B220((void *)(v6 - 8));
  return result;
}

