bool __fastcall sub_A3F230(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) == 13 && ((*(_WORD *)(v2 + 18) >> 3) & 0x1FF) == 0x1E8 )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL)
      & 0xF7) == 0x22 )
  {
    v3 = sub_BD9810(a2);
    if ( (unsigned int)sub_BDA9A0(v3, a1, 1) )
      return 1;
  }
  return (*(_WORD *)a2 & 0x1FF) == 58;
}

