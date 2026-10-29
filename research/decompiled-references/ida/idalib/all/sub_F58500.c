char __fastcall sub_F58500(_QWORD *a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rax

  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 107LL) & 4) == 0 )
  {
    result = *(_BYTE *)(*(_QWORD *)(a2 + 2320) + 107LL) & 4;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 107LL) & 0x10) != 0 )
    {
      v3 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
      v4 = 0;
      if ( (v3 & 8) != 0 )
        v4 = *(__int64 *)((char *)&qword_18 + (v3 & 0xFFFFFFFFFFFFFFF0LL));
      return ((v4 >> 6) & 7) != 3;
    }
  }
  return result;
}
