unsigned __int64 __fastcall sub_1783EC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 result; // rax

  result = sub_EF24C0(*(_QWORD **)(a1 + 248), (__int64)&a7, a3, a4, a5, a6);
  if ( !result )
    return 1;
  return result;
}
