__int64 __fastcall sub_4C49F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 128LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_QWORD *)(a3 + 8);
    if ( v8 == v9 )
    {
      if ( !a4 )
        return sub_4C4940(a1, a2, a3, a4);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 128LL))(v9, a2, a3, a4);
      if ( result )
        return result;
      if ( !a4 )
      {
LABEL_10:
        if ( result )
          return result;
        return sub_4C4940(a1, a2, a3, a4);
      }
      v8 = *(_QWORD *)(a2 + 8);
    }
    v10 = *(_QWORD *)(a4 + 8);
    if ( v10 == v8 || *(_QWORD *)(a3 + 8) == v10 )
      return sub_4C4940(a1, a2, a3, a4);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 128LL))(v10, a2, a3, a4);
    goto LABEL_10;
  }
  return result;
}

