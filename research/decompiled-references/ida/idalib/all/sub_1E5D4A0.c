char __fastcall sub_1E5D4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char result; // al

  result = sub_F61C90(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), 0, a3, a4, a5, a6);
  if ( result )
    return (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 48) > 1u;
  return result;
}
