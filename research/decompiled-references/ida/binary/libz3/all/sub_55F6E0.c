_UNKNOWN **__fastcall sub_55F6E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  bool v5; // zf
  _DWORD *v6; // rbp
  void *v7; // rdi
  _UNKNOWN **result; // rax
  __int64 v9; // rdi

  *a1 = off_1C50F48;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[8];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (_DWORD *)a1[7];
  if ( v4 )
  {
    v5 = v4[8]-- == 1;
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      sub_186B220(v4);
    }
  }
  v6 = (_DWORD *)a1[6];
  if ( v6 )
  {
    v5 = v6[8]-- == 1;
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      sub_186B220(v6);
    }
  }
  v7 = (void *)a1[5];
  result = &off_1C675A8;
  *a1 = &off_1C675A8;
  if ( v7 )
    result = (_UNKNOWN **)sub_4D63E0(v7);
  v9 = a1[2];
  if ( v9 )
    return (_UNKNOWN **)sub_186B220((void *)(v9 - 8));
  return result;
}

