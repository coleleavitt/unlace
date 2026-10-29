bool __fastcall sub_A5E7F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  bool result; // al

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 35;
  if ( (unsigned int)v6 > 1 )
    v5 = sub_F63050(v5, a2, v6, a4, a5);
  result = !(*(_BYTE *)(v5 + 19) >> 2)
        && (v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v7 + 16) == 13)
        && ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 489;
  return result;
}
