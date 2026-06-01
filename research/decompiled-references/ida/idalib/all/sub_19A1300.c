bool __fastcall sub_19A1300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  bool result; // al
  __int64 v7; // rdx

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  result = (*(_BYTE *)(*v4 + 16) == 42
         || (v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v7 + 16) == 42)
         && (v5 = sub_F63050(*v4, v4, v7, a4)) != 0)
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1;
  return result;
}
