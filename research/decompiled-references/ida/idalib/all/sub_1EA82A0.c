__int64 __fastcall sub_1EA82A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  *(_QWORD *)(a1 + 152) = a2;
  if ( a2 )
    result = sub_1F37FE0();
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a1);
  return result;
}
