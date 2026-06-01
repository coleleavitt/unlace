__int64 __fastcall sub_1EA78C0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = a3;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             a3);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 64LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             v3);
  return result;
}
