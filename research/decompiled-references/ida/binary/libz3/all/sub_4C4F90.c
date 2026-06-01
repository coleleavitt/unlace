__int64 __fastcall sub_4C4F90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rdi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 184LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    v11 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) != v11 )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v11 + 184LL))(
               v11,
               a2,
               a3,
               a4,
               a5,
               a6);
  }
  return result;
}

