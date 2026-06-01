__int64 __fastcall sub_176000(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rbp
  __int64 **v5; // r12
  __int64 *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rdi
  _QWORD *i; // r12
  _QWORD *v11; // rdi

  v1 = (_QWORD *)a1[3];
  if ( v1[2] )
  {
    v3 = *(_QWORD *)(*v1 + 16LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))v3)(v3) )
    {
      v5 = (__int64 **)a1[3];
      v6 = *v5;
      v7 = **v5;
      *(_QWORD *)(*v5)[1] = v7;
      *(_QWORD *)(v7 + 8) = v6[1];
      qfree();
      v5[2] = (__int64 *)((char *)v5[2] - 1);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( TProgram::application )
      sub_175D30(TProgram::application + 136LL, (__int64)a1, 6, *(_DWORD *)(a1[4] + 80LL));
    return 0;
  }
  if ( !a1 )
    return 0;
  *a1 = &off_235A38;
  if ( v1 )
  {
    v8 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 != v1 )
    {
      do
      {
        v9 = v8[2];
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v1 );
      for ( i = (_QWORD *)*v1; i != v1; --v1[2] )
      {
        v11 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v11[1] = i;
        i[1] = v11[1];
        qfree();
      }
    }
    qfree();
  }
  *a1 = &off_236C80;
  qsem_free();
  operator delete(a1, 0x28u);
  return 0;
}

