_UNKNOWN **__fastcall sub_55F5A0(_QWORD *a1)
{
  _DWORD *v2; // rbp
  bool v3; // zf
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rdi
  _UNKNOWN **result; // rax
  __int64 v8; // rdi

  v2 = (_DWORD *)a1[8];
  *a1 = off_1C50F18;
  if ( v2 )
  {
    v3 = v2[8]-- == 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = a1[7];
    v3 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v5, v4);
  }
  v6 = (void *)a1[5];
  result = &off_1C675A8;
  *a1 = &off_1C675A8;
  if ( v6 )
    result = (_UNKNOWN **)sub_4D63E0(v6);
  v8 = a1[2];
  if ( v8 )
    return (_UNKNOWN **)sub_186B220((void *)(v8 - 8));
  return result;
}

