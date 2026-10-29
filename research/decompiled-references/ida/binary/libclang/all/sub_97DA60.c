_BOOL8 __fastcall sub_97DA60(__int64 a1)
{
  __int64 v1; // rdi
  _BOOL4 v2; // ebx
  _BYTE *v3; // rdi
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( !v1 )
    return v2;
  v2 = ((v1 >> 2) & 1) == 0;
  if ( ((v1 >> 2) & 1) != 0 )
    return v2;
  v3 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v3 && (v3[28] & 0x7Fu) - 33 <= 3 )
  {
    v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 32LL))(v3);
    if ( (*(_BYTE *)(v4 + 82) & 0xC) == 0 )
      LOBYTE(v2) = (unsigned int)sub_7A5910(v4) != 0;
    return v2;
  }
  return 0;
}

