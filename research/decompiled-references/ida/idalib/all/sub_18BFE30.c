bool __fastcall sub_18BFE30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_BYTE *)(v1 + 16) == 58
        && (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v2 + 16) == 13)
        && ((*(_WORD *)(v2 + 18) >> 3) & 0x1FF) == 436;
  return result;
}
