__int64 (__fastcall **__fastcall sub_393D20(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rbp
  _QWORD *v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  result = &off_1C4E0C0;
  *a1 = &off_1C4E0C0;
  v3 = a1[7];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[6];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = (_QWORD *)a1[3];
  if ( v5 )
  {
    if ( (*((_DWORD *)v5 + 16))-- == 1 )
    {
      sub_180C0E0(v5 + 13);
      v7 = v5[12];
      if ( v7 )
        sub_186B220((void *)(v7 - 8));
      v8 = v5[11];
      if ( v8 )
        sub_186B220((void *)(v8 - 8));
      v9 = (void *)v5[10];
      if ( v9 )
      {
        sub_64D370(v5[10]);
        sub_186B220(v9);
      }
      sub_18572D0(v5 + 3);
      sub_18572D0(v5 + 1);
      v10 = (_QWORD *)*v5;
      if ( *v5 )
      {
        v11 = (_QWORD *)v10[17];
        if ( v11 != v10 + 19 )
          operator delete(v11, v10[19] + 1LL);
        v12 = (_QWORD *)v10[13];
        if ( v12 != v10 + 15 )
          operator delete(v12, v10[15] + 1LL);
        sub_186B220(v10);
      }
      return (__int64 (__fastcall **)())sub_186B220(v5);
    }
  }
  return result;
}

