bool __fastcall sub_C1BF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(_BYTE *)(a1 + 16) == 42
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
       && (a1 = sub_F63050(a1, a2, a3, a4)) != 0)
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1;
}
