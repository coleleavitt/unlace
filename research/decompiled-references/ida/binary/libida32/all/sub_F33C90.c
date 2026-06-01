bool __fastcall sub_F33C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool result; // al
  __int64 v4; // rax

  result = (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 89LL) & 1) == 0
        && (v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v2 + 16) == 58)
        && (v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v4 + 16) == 13)
        && ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) == 436;
  return result;
}

