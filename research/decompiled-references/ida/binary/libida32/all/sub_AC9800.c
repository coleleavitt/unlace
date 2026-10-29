__int64 __fastcall sub_AC9800(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(unsigned __int8 *)(v4 + 16);
  if ( (unsigned int)(v5 - 25) > 1 )
  {
    v7 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4);
    v4 = v7;
    if ( *(_BYTE *)(v7 + 16) == 26 )
      goto LABEL_7;
  }
  else if ( (_BYTE)v5 == 26 )
  {
    return *(_BYTE *)(v4 + 18) >> 7;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    return 0;
  v7 = sub_F3F310(v4, a2, v5, a4);
LABEL_7:
  if ( v7 )
    return *(_BYTE *)(v4 + 18) >> 7;
  return 0;
}

