__int64 __fastcall sub_1C2FC00(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ebp
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 v9; // r11
  unsigned int i; // eax
  __int64 v11; // rsi
  unsigned int v12; // eax

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = result - 1;
    v5 = 1;
    v6 = *a1;
    v7 = 0;
    v8 = *a2;
    v9 = *((_BYTE *)a2 + 8);
    for ( i = (result - 1) & (*a2 ^ ((unsigned __int64)*a2 >> 9)); ; i = v4 & v12 )
    {
      v11 = v6 + 24LL * i;
      if ( ((v9 ^ *(_BYTE *)(v11 + 8)) & 1) == 0 && v8 == *(_QWORD *)v11 )
      {
        *a3 = v11;
        return 1;
      }
      if ( (*(_BYTE *)(v11 + 8) & 1) == 0 && !*(_QWORD *)v11 )
        break;
      if ( (*(_BYTE *)(v11 + 8) & 1) == 0 && *(_QWORD *)v11 == -1 && !v7 )
        v7 = v6 + 24LL * i;
      v12 = v5 + i;
      ++v5;
    }
    if ( !v7 )
      v7 = v6 + 24LL * i;
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
