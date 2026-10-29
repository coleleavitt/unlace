__int64 __fastcall sub_657BE0(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax
  int v4; // ebp
  _QWORD *v5; // r12
  __int64 v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r8
  char v11; // r9

  result = 0;
  if ( (a3 & 0x100) != 0 )
  {
    result = 1;
    v4 = *(_DWORD *)(a1 + 28);
    if ( (v4 & 4) == 0 )
    {
      if ( (v4 & 1) == 0 )
        LOBYTE(a3) = toupper((unsigned __int8)a3);
      v5 = *(_QWORD **)(a1 + 8);
      v6 = v5[1];
      if ( !v6 )
        return 0;
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * v8);
        if ( v9 == -1 )
          goto LABEL_16;
        v10 = (_QWORD *)(v7 + *v5);
        if ( v10[4] )
        {
          v11 = *(_BYTE *)(v10[3] + (int)v9);
          if ( (v4 & 0x20) != 0 )
            goto LABEL_15;
          if ( !v11 )
            return 1;
        }
        v11 = -1;
LABEL_15:
        if ( ((unsigned __int8)v11 & (unsigned __int8)(a3 ^ *(_BYTE *)(*v10 + v9))) == 0 )
          return 1;
LABEL_16:
        ++v8;
        v7 += 80;
        if ( v6 == v8 )
          return 0;
      }
    }
  }
  return result;
}

