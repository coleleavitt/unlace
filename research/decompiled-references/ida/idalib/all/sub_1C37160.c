__int64 __fastcall sub_1C37160(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r8

  result = *a2;
  if ( !*a2 )
    return 0;
  v4 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  v6 = *(_QWORD *)(*v4 + 8LL);
  if ( *(_BYTE *)(*v4 + 16LL) == 16 && v6 == (v5 & 0xFFFFFFFFFFFFFFF0LL) )
    goto LABEL_15;
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 == 13 )
  {
    if ( ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) != 0x1F1 && (*(_BYTE *)(v5 + 17) & 4) != 0 )
      goto LABEL_6;
LABEL_15:
    *a2 = 0;
    *((_BYTE *)a2 + 8) = 0;
    return 0;
  }
  if ( (*(_BYTE *)(v5 + 17) & 4) != 0 )
    goto LABEL_6;
  if ( v8 != 48 )
    goto LABEL_15;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    && *(_QWORD *)(v4[1] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48)
                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                              & 0xFFFFFFFFFFFFFFF0LL) )
  {
    *((_BYTE *)a2 + 8) = 1;
    return 0;
  }
LABEL_6:
  if ( *((_BYTE *)a2 + 8) != 2 )
    return 0;
  return result;
}
