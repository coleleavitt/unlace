__int64 __fastcall sub_2B20F0(
        int a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  int v8; // r15d
  int v9; // r13d
  __int64 result; // rax

  v8 = (int)a4;
  v9 = a3;
  result = sub_2BB440(
             a1,
             *(_QWORD *)(*(_QWORD *)(a3 + 408) + 8LL),
             16,
             *(_QWORD *)(*(_QWORD *)(a3 + 408) + 8LL),
             *a4,
             a5,
             a2);
  if ( !(_DWORD)result )
    return sub_2B91C0(a1, a2, v9, v8, a5, a6, a7, a8);
  return result;
}
