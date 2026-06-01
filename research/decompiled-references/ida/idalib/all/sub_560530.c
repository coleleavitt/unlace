__int64 __fastcall sub_560530(__int64 *a1, __int64 *a2, __int64 a3, int a4, unsigned __int64 a5)
{
  unsigned int v7; // eax
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rdi

  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 48))(a1, a3, 1);
  if ( !v7 )
    return 0;
  v9 = v7;
  v10 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), a1);
  v11 = sub_55F9A0(v10, a1, v9, 1);
  if ( !v11 )
    return 0;
  *a2 = sub_559200(v11, a4, a5);
  return v9;
}
