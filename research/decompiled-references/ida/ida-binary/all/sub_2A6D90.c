__int64 __fastcall sub_2A6D90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    *(_QWORD *)(a1 + 168) = 0;
  }
  return result;
}
