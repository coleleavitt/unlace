__int64 __fastcall sub_1EAB530(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 21 > 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 40LL))(*(_QWORD *)(a1 + 152));
  v3 = sub_B8E970(a2 + 48);
  v4 = v3;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x12 )
    {
LABEL_8:
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 40LL))(v2, v4);
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v4 = v7;
        if ( !v7 )
          break;
        if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x12 )
          goto LABEL_8;
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v4 = v5;
        if ( !v5 )
          break;
        if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x12 )
          goto LABEL_8;
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, a2);
}
