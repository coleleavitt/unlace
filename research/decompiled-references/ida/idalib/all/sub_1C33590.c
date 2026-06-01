__int64 __fastcall sub_1C33590(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8

  result = *a1;
  if ( !*a1 )
    return 0;
  v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *v3;
  v5 = *(_QWORD *)(*v3 + 8LL);
  if ( *(_BYTE *)(*v3 + 16LL) == 16 && (v4 & 0xFFFFFFFFFFFFFFF0LL) == v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 13 )
  {
    if ( ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1F1 && (*(_BYTE *)(v4 + 17) & 4) != 0 )
      goto LABEL_6;
LABEL_15:
    *a1 = 0;
    *((_BYTE *)a1 + 8) = 0;
    return 0;
  }
  if ( (*(_BYTE *)(v4 + 17) & 4) != 0 )
    goto LABEL_6;
  if ( v7 != 48 )
    goto LABEL_15;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    && *(_QWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48)
                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                              & 0xFFFFFFFFFFFFFFF0LL) )
  {
    *((_BYTE *)a1 + 8) = 1;
    return 0;
  }
LABEL_6:
  if ( *((_BYTE *)a1 + 8) != 2 )
    return 0;
  return result;
}
