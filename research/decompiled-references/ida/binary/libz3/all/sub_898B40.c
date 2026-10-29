__int64 __fastcall sub_898B40(_QWORD *a1, unsigned int a2, signed int a3)
{
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rsi
  __int64 i; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r11
  unsigned int v14; // edx
  _DWORD *v15; // rdx

  v5 = a1[199];
  v6 = (unsigned int)*(char *)(v5 + 232LL * a2 + 3) >> 31;
  if ( (*(_BYTE *)(v5 + 232LL * a2 + 3) & 0x40) != 0 )
    v6 = 1;
  v7 = a1[187] + 24LL * a2;
  v8 = *(_DWORD *)(v7 + 16);
  v9 = *(_QWORD *)v7;
  *(_DWORD *)(v7 + 16) = v8 + 1;
  if ( v9 )
  {
    for ( i = 0; i != *(_DWORD *)(v9 - 4) && *(_DWORD *)(v9 + 8 * i) == -1; ++i )
      ;
    *(_DWORD *)(v7 + 16) = v8 + 2;
    v11 = *(_DWORD *)(v9 - 4);
    v12 = i;
    if ( v11 != (_DWORD)i )
    {
      v13 = a1[200];
      do
      {
        v14 = (unsigned int)*(char *)(v5 + 232LL * *(unsigned int *)(v13 + 4LL * *(unsigned int *)(v9 + 8LL * v12)) + 3) >> 31;
        if ( (*(_BYTE *)(v5 + 232LL * *(unsigned int *)(v13 + 4LL * *(unsigned int *)(v9 + 8LL * v12)) + 3) & 0x40) != 0 )
          v14 = 1;
        v6 += v14;
        if ( (int)v6 > a3 )
          break;
        if ( ++v12 < v11 )
        {
          v15 = (_DWORD *)(v9 + 8LL * v12);
          do
          {
            if ( *v15 != -1 )
              break;
            ++v12;
            v15 += 2;
          }
          while ( v12 < v11 );
        }
      }
      while ( v12 != v11 );
    }
  }
  *(_DWORD *)(v7 + 16) = v8;
  return v6;
}

