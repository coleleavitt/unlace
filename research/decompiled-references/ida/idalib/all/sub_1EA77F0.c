__int64 __fastcall sub_1EA77F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  __int64 result; // rax

  v8 = a6;
  v9 = a5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 48LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4,
             v9,
             v8);
  return result;
}
