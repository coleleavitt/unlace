__int64 __fastcall sub_967EF0(__int64 **a1, __int64 *a2, _BYTE *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ecx
  char v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r10

  v5 = *(_QWORD *)a3;
  v6 = *a2;
  v7 = 0;
  if ( *(_QWORD *)(v6 + 16) != *(_QWORD *)(*(_QWORD *)a3 + 16LL) )
    return 0;
  v9 = a3[44] & 8;
  if ( (*((_BYTE *)a2 + 44) & 8) != 0 )
  {
    if ( !v9 )
    {
      LOBYTE(v7) = *(_DWORD *)(v5 + 24) == 0;
      return v7;
    }
    return 1;
  }
  v10 = *(unsigned int *)(v6 + 24);
  if ( !v9 )
  {
    if ( *(_DWORD *)(v5 + 24) != (_DWORD)v10 )
      return 0;
    if ( (_DWORD)v10 )
    {
      v11 = 8 * v10 + 112;
      v12 = 112;
      while ( 1 )
      {
        v13 = *(_QWORD *)(a2[(unsigned __int64)v12 / 8] + 8);
        v14 = *(_QWORD *)(*(_QWORD *)&a3[v12] + 8LL);
        if ( v14 != v13 )
        {
          v15 = **a1;
          v16 = *a1[1];
          if ( v13 == v15 )
          {
            if ( v14 != v16 )
              return 0;
          }
          else if ( v13 != v16 || v14 != v15 )
          {
            return 0;
          }
        }
        v12 += 8;
        if ( v11 == v12 )
          return 1;
      }
    }
    return 1;
  }
  LOBYTE(v7) = (_DWORD)v10 == 0;
  return v7;
}

