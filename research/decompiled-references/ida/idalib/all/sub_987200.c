bool __fastcall sub_987200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  bool result; // al
  __int64 v10; // rdx
  __int64 v11; // rdx

  v5 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  result = (*(_BYTE *)(*v5 + 16) == 11
         || (v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v11 + 16) == 11)
         && (v6 = sub_F63050(*v5, a2, v11, a4, a5)) != 0)
        && ((v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v7 + 16) == 26)
         || (v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v10 + 16) == 26)
         && (v7 = sub_F63050(v7, a2, v10, a4, a5)) != 0)
        && (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v8 + 16) == 13)
        && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B3
        && *(_WORD *)(v7 + 22) == 0;
  return result;
}
