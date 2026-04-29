__int64 __fastcall sub_90C0(__int64 a1, __int64 a2)
{
  int next_byte; // ebx
  char v3; // cl
  char v4; // al
  int v5; // eax
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // al
  char v8; // al
  unsigned __int8 v10; // al
  __int16 v11; // ax
  __int64 v12; // rcx
  __int16 v13; // ax
  __int16 v14; // dx

  next_byte = (unsigned __int8)insn_get_next_byte();
  v3 = getinf_flag();
  v4 = (unsigned __int8)next_byte >> 4;
  if ( !v3 )
    v4 = next_byte & 0xF;
  v5 = dword_134A0[v4 & 0xF];
  if ( v5 == 2 )
  {
    v10 = insn_get_next_byte();
    v8 = sub_8FA0(a2, *(_QWORD *)(a1 + 32), word_1AB20, next_byte | (v10 << 8), *(_DWORD *)(a1 + 596));
  }
  else
  {
    if ( v5 != 3 )
      return 0;
    v6 = insn_get_next_byte();
    v7 = insn_get_next_byte();
    v8 = sub_8FA0(a2, *(_QWORD *)(a1 + 32), word_18040, next_byte | (v7 << 16) | (v6 << 8), *(_DWORD *)(a1 + 596));
  }
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 601) )
    {
      v11 = *(_WORD *)(a2 + 24);
      if ( v11 == 79 )
      {
        v13 = *(_WORD *)(a2 + 86);
        v14 = *(_WORD *)(a2 + 126);
        if ( *(_WORD *)(a2 + 46) == v13 )
        {
          if ( v13 == v14 )
          {
            *(_BYTE *)(a2 + 41) = 0;
            *(_WORD *)(a2 + 24) = 78;
            *(_BYTE *)(a2 + 81) = 0;
            *(_BYTE *)(a2 + 121) = 0;
          }
        }
        else if ( v13 == v14 )
        {
          *(_BYTE *)(a2 + 121) = 0;
          *(_WORD *)(a2 + 24) = 66;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v11 == 173 )
      {
        if ( *(_QWORD *)(a2 + 128) )
          return *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 116;
      }
      else
      {
        if ( v11 != 46 || *(_QWORD *)(a2 + 128) )
          return *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 115;
      }
      v12 = *(_QWORD *)(a2 + 168);
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 1;
      *(_BYTE *)(a2 + 161) = 0;
      *(_QWORD *)(a2 + 128) = (unsigned int)((1 << v12) - 1);
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  return 0;
}
