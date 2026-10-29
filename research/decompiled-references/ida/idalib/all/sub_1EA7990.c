__int64 __fastcall sub_1EA7990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  unsigned int v9; // r12d
  unsigned int v10; // ebp
  __int64 result; // rax

  v9 = a6;
  v10 = a5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8)
                                                                                                 + 88LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16)
                                                                                                 + 88LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4,
             v10,
             v9,
             a7);
  return result;
}
