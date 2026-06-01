bool __fastcall sub_A5EB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  bool result; // al

  result = (*(_BYTE *)(a1 + 16) == 42
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
         && (a1 = sub_F63050(a1, a2, a3, a4, a5)) != 0)
        && (v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v5 + 16) == 13)
        && ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 491;
  return result;
}
