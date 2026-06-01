__int64 __fastcall sub_1EA7860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v7; // ebp
  __int64 result; // rax

  v7 = a5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4,
             v7);
  return result;
}
