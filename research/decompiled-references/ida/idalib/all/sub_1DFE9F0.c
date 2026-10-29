__int64 __fastcall sub_1DFE9F0(_QWORD *a1, _QWORD *a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax

  v2 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( (char *)v2 == (char *)sub_6EE8F0 )
    v3 = a1[9];
  else
    v3 = v2();
  do
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
    if ( v5 == sub_6EE8F0 )
    {
      v4 = (_QWORD *)a2[9];
      if ( (_QWORD *)v3 == v4 )
        return 1;
    }
    else
    {
      v4 = (_QWORD *)v5((__int64)a2);
      if ( (_QWORD *)v3 == v4 )
        return 1;
    }
    a2 = (_QWORD *)(*(_QWORD *)sub_BC3640(v4) & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( a2 );
  return 0;
}
