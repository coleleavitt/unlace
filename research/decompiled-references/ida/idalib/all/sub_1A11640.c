void __fastcall sub_1A11640(_BYTE *a1, __int64 a2, unsigned int *a3, _DWORD *a4, double a5)
{
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax

  v9 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v10 = sub_C0B210(a2, v9, *a3, a4);
  if ( a4 )
  {
    v11 = v10;
    if ( v10 )
    {
      v12 = sub_EEC8C0((unsigned __int64)a4, (__int64)v9, a5);
      sub_1A11410(a1, v11, v12, 0, 1u, a5);
    }
  }
  ++*a3;
}
