bool __fastcall sub_1A0A650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(unsigned __int8 *)(v4 + 16);
  if ( (unsigned __int8)(v5 - 2) <= 4u )
    return (_BYTE)v5 == 5;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    return 0;
  v7 = sub_F63050(v4, a2, (unsigned int)(v5 - 2), a4);
  return v7 && *(_BYTE *)(v7 + 16) == 5;
}
