double __fastcall til_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  double result; // xmm0_8
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  *a1 = til_chooser_t___vtable;
  v3 = a1[23];
  a1[23] = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (__int64 *)a1[24];
  if ( v4 )
  {
    v5 = v4[3];
    if ( v5 )
    {
      v4[4] = 0;
      result = qfree(v5, a2);
    }
    v7 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      result = qfree(v7, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v4, 0x40u);
  }
  v8 = a1[23];
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = a1 + 22;
  v10 = a1 + 10;
  *(v10 - 10) = &stru_86F6A0;
  do
  {
    v11 = *(v9 - 3);
    v9 -= 3;
    if ( v11 )
    {
      v9[1] = 0;
      result = qfree(v11, a2);
    }
  }
  while ( v10 != v9 );
  return result;
}
