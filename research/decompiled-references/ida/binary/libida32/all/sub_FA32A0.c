__int64 __fastcall sub_FA32A0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rdi

  result = 0;
  v5 = *(_QWORD *)(a1 + 56);
  if ( a3 )
    result = a2;
  *(_QWORD *)(a1 + 56) = result;
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 48) = a2;
  return result;
}

