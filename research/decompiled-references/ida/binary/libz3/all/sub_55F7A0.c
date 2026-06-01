_UNKNOWN **__fastcall sub_55F7A0(_QWORD *a1)
{
  _DWORD *v2; // rbp
  bool v3; // zf
  _DWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi
  _UNKNOWN **result; // rax
  __int64 v9; // rdi

  v2 = (_DWORD *)a1[9];
  *a1 = off_1C50E28;
  if ( v2 )
  {
    v3 = v2[8]-- == 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = (_DWORD *)a1[8];
  if ( v4 )
  {
    v3 = v4[8]-- == 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      sub_186B220(v4);
    }
  }
  v5 = a1[7];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[6];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
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

