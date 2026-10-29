__int64 __fastcall sub_1EA76E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3);
  return result;
}
