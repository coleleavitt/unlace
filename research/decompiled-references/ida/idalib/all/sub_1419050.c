__int64 __fastcall sub_1419050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // ebp

  v10 = a5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 48LL))(
    *(_QWORD *)(a1 + 8),
    a2,
    a3,
    a4,
    a5);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16)
                                                                                               + 48LL))(
           *(_QWORD *)(a1 + 16),
           (unsigned int)a2,
           a3,
           a4,
           v10,
           a6,
           a7);
}
