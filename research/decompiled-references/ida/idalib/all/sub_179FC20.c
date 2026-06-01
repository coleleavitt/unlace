char __fastcall sub_179FC20(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  unsigned __int16 v3; // bx
  char result; // al
  __int16 v5; // bx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  if ( v2 != 13 )
    return (v2 == 41) | sub_E3A850(a1);
  v3 = *(_WORD *)(v1 + 18);
  result = 1;
  v5 = (v3 >> 3) & 0x1FF;
  if ( ((v5 + 20) & 0x1FFu) > 1 )
  {
    result = sub_E3A850(a1);
    if ( !result )
    {
      result = 1;
      if ( ((v5 + 18) & 0x1FFu) > 2 )
        return ((v5 + 476) & 0x1FFu) <= 0xB;
    }
  }
  return result;
}
