__int64 __fastcall sub_179B3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 16);
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)(v8 + 8);
  result = sub_B8E180(v8);
  if ( !(_BYTE)result )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 && (*(_WORD *)(a1 + 30) & 0x980) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return (((unsigned __int16)(*(_WORD *)(a2 + 30) & 0x3FFF) >> 11) ^ 1) & 1;
  return result;
}
