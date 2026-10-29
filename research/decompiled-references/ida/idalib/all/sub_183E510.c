unsigned __int64 __fastcall sub_183E510(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v3 = a2;
  result = sub_B8E970(a3 + 64);
  if ( result )
  {
    v5 = result;
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 > 3 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v5 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
      if ( ((*(_QWORD *)(v6 + 80) & 0x40000LL) != 0
         || ((*(_QWORD *)(v6 + 80) >> 16) & 8) != 0
         || (unsigned int)sub_B984E0(v6))
        && (*(_BYTE *)(v5 + 82) & 8) == 0 )
      {
        v8 = (_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v8 + 16LL) != 26 )
          sub_F63050(*v8, a2, *v8, v7);
        a2 = v3;
        sub_18B0530(a1, v3);
      }
      while ( 1 )
      {
        result = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v5 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
