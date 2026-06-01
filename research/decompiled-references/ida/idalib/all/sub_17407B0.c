_BYTE *__fastcall sub_17407B0(__int64 a1)
{
  _BYTE *result; // rax
  unsigned __int16 v2; // cx
  char v3; // dl
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r9
  int v7; // r8d
  bool v8; // dl
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8

  result = **(_BYTE ***)a1;
  if ( result )
  {
    v2 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( v2 == 22
      && ((v3 = **(_BYTE **)(a1 + 16)) != 0
       || (v4 = **(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL,
           v5 = *(_QWORD *)v4,
           (*(_BYTE *)(*(_QWORD *)v4 + 17LL) & 4) != 0)
       && (***(_WORD ***)(a1 + 32) & 0x1FF) == 0x18
       && ((v9 = *(_QWORD *)(a1 + 40), v3 = 1, v10 = *(unsigned int *)(v9 + 40), !(_DWORD)v10)
        || (v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10 - 8)) == 0
        || (*(_BYTE *)(v11 + 8) & 7) != 2)
       || (v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL),
           v3 = 1,
           v7 = *(unsigned __int8 *)(v6 + 16),
           (unsigned int)(v7 - 25) <= 1)
       || (_BYTE)v7 == 13 && ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) == 0x1F2) )
    {
      *result = v3;
    }
    else
    {
      v8 = (int)sub_FFF790(v2, 1, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) + 1LL) & 0x10) != 0) > 5;
      result = **(_BYTE ***)a1;
      *result = v8;
    }
  }
  return result;
}
