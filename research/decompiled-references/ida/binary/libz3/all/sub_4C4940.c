__int64 __fastcall sub_4C4940(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // dl
  __int64 v11; // rdi

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 120LL))(*(_QWORD *)(a2 + 8));
  if ( v6 )
    return v6;
  v8 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a2 + 8) == v8 )
  {
    v9 = 0;
    v10 = 1;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 120LL))(v8, a2, a3, a4);
    v10 = v9 == 0;
  }
  if ( !a4 || !v10 )
    return v9;
  v11 = *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)(a2 + 8) == v11 || *(_QWORD *)(a3 + 8) == v11 )
    return v6;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 120LL))(v11, a2, a3, a4);
}

