__int64 __fastcall sub_1745C0(_BYTE *a1)
{
  __int64 v1; // rbp
  __int64 v4; // rdi

  v1 = 0;
  if ( TProgram::application )
    v1 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(TProgram::application + 136LL) + 152LL))(
           TProgram::application + 136LL,
           a1 + 24,
           *((unsigned int *)a1 + 20));
  if ( !a1[84] || !a1 )
    return v1;
  v4 = *((_QWORD *)a1 + 6);
  *(_QWORD *)a1 = &off_234AB0;
  if ( v4 )
  {
    *((_QWORD *)a1 + 7) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree();
  }
  *(_QWORD *)a1 = &off_235C80;
  qsem_free();
  operator delete(a1, 0x58u);
  return v1;
}

