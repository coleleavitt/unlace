__int64 (__fastcall **__fastcall sub_393940(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rbp
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi

  result = &off_1C4DFD0;
  v2 = (_QWORD *)a1[3];
  *a1 = &off_1C4DFD0;
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 16))-- == 1 )
    {
      sub_180C0E0(v2 + 13);
      v4 = v2[12];
      if ( v4 )
        sub_186B220((void *)(v4 - 8));
      v5 = v2[11];
      if ( v5 )
        sub_186B220((void *)(v5 - 8));
      v6 = (void *)v2[10];
      if ( v6 )
      {
        sub_64D370(v2[10]);
        sub_186B220(v6);
      }
      sub_18572D0(v2 + 3);
      sub_18572D0(v2 + 1);
      v7 = (_QWORD *)*v2;
      if ( *v2 )
      {
        v8 = (_QWORD *)v7[17];
        if ( v8 != v7 + 19 )
          operator delete(v8, v7[19] + 1LL);
        v9 = (_QWORD *)v7[13];
        if ( v9 != v7 + 15 )
          operator delete(v9, v7[15] + 1LL);
        sub_186B220(v7);
      }
      return (__int64 (__fastcall **)())sub_186B220(v2);
    }
  }
  return result;
}

