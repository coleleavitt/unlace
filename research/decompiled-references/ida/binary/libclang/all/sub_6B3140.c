char __fastcall sub_6B3140(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  __int64 v4; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  if ( v2 == 13 )
  {
    LOBYTE(v3) = (((*(_WORD *)(v1 + 18) >> 3) + 77) & 0x1FFu) <= 0x13;
  }
  else if ( v2 == 46 )
  {
    v4 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    LOBYTE(v3) = *(_BYTE *)(v4 + 74) & 1;
    if ( (_BYTE)v3 || *(_QWORD *)(v4 + 128) > 7u )
      return (unsigned int)~*(unsigned __int8 *)(sub_B14A40(v1) + 76) >> 7;
  }
  else
  {
    LOBYTE(v3) = v2 == 10;
  }
  return v3;
}

