__int64 __fastcall sub_658350(int a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, __int16); // rax
  __int64 result; // rax
  int v4; // ebp
  _QWORD *v5; // r12
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  char v12; // r8

  v2 = *(__int64 (__fastcall **)(__int64, __int64, __int16))(*(_QWORD *)a2 + 24LL);
  if ( v2 != sub_657BE0 )
    return v2(a2, 0xFFFFFFFFLL, a1);
  result = 0;
  if ( (a1 & 0x100) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 28);
    result = 1;
    if ( (v4 & 4) == 0 )
    {
      if ( (v4 & 1) == 0 )
        LOBYTE(a1) = toupper((unsigned __int8)a1);
      v5 = *(_QWORD **)(a2 + 8);
      v6 = v5[1];
      if ( !v6 )
        return 0;
      v7 = 0;
      v8 = **(_QWORD **)(a2 + 16);
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 8 * v9);
        if ( v10 == -1 )
          goto LABEL_16;
        v11 = (_QWORD *)(v7 + *v5);
        if ( v11[4] )
        {
          v12 = *(_BYTE *)(v11[3] + (int)v10);
          if ( (v4 & 0x20) != 0 )
            goto LABEL_15;
          if ( !v12 )
            return 1;
        }
        v12 = -1;
LABEL_15:
        if ( ((unsigned __int8)v12 & (unsigned __int8)(a1 ^ *(_BYTE *)(*v11 + v10))) == 0 )
          return 1;
LABEL_16:
        ++v9;
        v7 += 80;
        if ( v9 == v6 )
          return 0;
      }
    }
  }
  return result;
}

