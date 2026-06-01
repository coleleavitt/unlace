void __fastcall sub_55F110(_QWORD *a1)
{
  _DWORD *v2; // rbp
  __int64 v4; // rdi

  v2 = (_DWORD *)a1[5];
  *a1 = &off_1C675D8;
  if ( v2 )
  {
    if ( v2[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[2];
  *a1 = qword_1C67518;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x30u);
}

