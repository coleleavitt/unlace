bool __fastcall sub_F44340(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rax
  __int64 v5; // rax

  for ( i = *(_QWORD *)(a1 + 8); ; i = *(_QWORD *)(v2 + 32) )
  {
    v2 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v3 = *(_BYTE *)(v2 + 16);
    if ( (unsigned __int8)(v3 - 2) > 4u )
      break;
  }
  if ( v3 != 34 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 35 > 1 )
    v4 = sub_F3F130(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  return *(_BYTE *)(v5 + 16) == 13 && ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 490;
}

