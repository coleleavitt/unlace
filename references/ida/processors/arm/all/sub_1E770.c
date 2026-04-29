__int64 __fastcall sub_1E770(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int16 v5; // ax
  unsigned int v6; // r12d
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13[51]; // [rsp+0h] [rbp-198h] BYREF

  v13[45] = __readfsqword(0x28u);
  if ( a3[81] != 5 )
    return 0;
  qmemcpy((void *)a2, a3, 0x168u);
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 25 )
  {
    *(_QWORD *)(a2 + 88) = ~*(_QWORD *)(a2 + 88);
    v6 = 1;
  }
  else
  {
    if ( v5 != 23 )
      return 0;
    v6 = 0;
  }
  qmemcpy(v13, (const void *)a2, 0x168u);
  while ( (int)decode_insn() > 0
       && ((*(_BYTE *)(a2 + 32) ^ LOBYTE(v13[4])) & 0xF) == 0
       && BYTE1(v13[5]) == 1
       && *(_WORD *)(a2 + 46) == HIWORD(v13[5])
       && (get_flags_ex(v13[2], 4) & 0x1000) == 0
       && (unsigned int)sub_1DD90(a1, v13[2], 0) == -1 )
  {
    if ( BYTE1(v13[10]) == 1 )
    {
      if ( HIWORD(v13[10]) != *(_WORD *)(a2 + 46) || BYTE1(v13[15]) != 5 )
        break;
      v8 = &v13[15];
    }
    else
    {
      if ( BYTE1(v13[10]) != 5 || BYTE1(v13[15]) )
        break;
      v8 = &v13[10];
    }
    if ( *((_BYTE *)v8 + 33) )
    {
      if ( !under_debugger )
        interr(10358);
      BUG();
    }
    v9 = v8[1];
    v10 = v8[3];
    v11 = v9 << v10;
    if ( LOWORD(v13[3]) == 22 )
    {
      v12 = v11 | *(_QWORD *)(a2 + 88);
    }
    else if ( LOWORD(v13[3]) > 0x16u )
    {
      if ( LOWORD(v13[3]) == 269 )
      {
        v12 = (unsigned int)((_DWORD)v9 << 16) | (unsigned __int64)*(unsigned __int16 *)(a2 + 88);
      }
      else
      {
        if ( LOWORD(v13[3]) != 496 )
          break;
        v12 = v11 | *(_QWORD *)(a2 + 88) & ~(0xFFFFLL << v10);
      }
    }
    else
    {
      switch ( LOWORD(v13[3]) )
      {
        case 0xC:
          v12 = *(_QWORD *)(a2 + 88) - v11;
          break;
        case 0xE:
          v12 = v11 + *(_QWORD *)(a2 + 88);
          break;
        case 6:
          v12 = *(_QWORD *)(a2 + 88) << v11;
          break;
        default:
          goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 88) = v12;
    if ( a3[45] == 2 )
      *(_QWORD *)(a2 + 88) = (unsigned int)v12;
    v6 = 1;
    *(_WORD *)(a2 + 26) += WORD1(v13[3]);
  }
LABEL_11:
  if ( (_BYTE)v6 )
  {
    *(_DWORD *)(a2 + 28) &= 0xFFFF7DFF;
    *(_WORD *)(a2 + 24) = 80;
    return v6;
  }
  return 0;
}
