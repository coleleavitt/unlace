void __fastcall sub_225F3B0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r12
  void *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx

  v2 = a1[19];
  *a1 = &off_2BEB998;
  if ( v2 )
  {
    v3 = (__int64)(a1 + 17);
    while ( 1 )
    {
      sub_225F260(v3, *(_QWORD **)(v2 + 24));
      v4 = *(_QWORD *)(v2 + 64);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v6 = *(void **)(v2 + 32);
      if ( v6 == (void *)(v2 + 48) )
      {
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      else
      {
        operator delete(v6);
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  v7 = (_QWORD *)a1[6];
  if ( v7 != a1 + 8 )
    operator delete(v7);
  v8 = (_QWORD *)a1[2];
  v9 = a1 + 4;
  *(v9 - 4) = &unk_2C76008;
  if ( v8 != v9 )
    operator delete(v8);
}
