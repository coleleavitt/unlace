__int64 __fastcall sub_1391CE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi

  result = *(_QWORD *)(a1 + 8);
  v3 = (*(_QWORD *)(a1 + 16) - result) >> 3;
  if ( v3 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(result + 8 * v5++);
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 152LL))(v6, a2);
      if ( v5 == v3 )
        break;
      result = *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}
