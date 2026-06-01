bool __fastcall sub_F67340(__int64 a1)
{
  __int64 v1; // rax
  bool result; // al

  result = (*(_BYTE *)(a1 + 16) == 42
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
         && (a1 = sub_F62E70(a1)) != 0)
        && (v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v1 + 16) == 13)
        && ((*(_WORD *)(v1 + 18) >> 3) & 0x1FF) == 435;
  return result;
}
