__int64 __fastcall sub_AF9520(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  if ( (unsigned int)sub_AF6C10(a1, a2) != 1 )
    return (unsigned int)-1;
  v4 = 1;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 == 31 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = 0;
LABEL_14:
    if ( v7 )
    {
      while ( v8 < *(_DWORD *)(v7 - 4) )
      {
        v9 = *(_QWORD *)(v7 + 8LL * v8);
        if ( !*(_BYTE *)(v9 + 16) )
        {
          v10 = *(_DWORD *)(v9 + 20);
          v11 = *(_QWORD *)(a2 + 504);
          do
          {
            v12 = v10;
            v10 = *(_DWORD *)(v11 + 4LL * v10);
          }
          while ( v12 != v10 );
          v13 = *(_DWORD *)(v9 + 24);
          do
          {
            v14 = v13;
            v13 = *(_DWORD *)(v11 + 4LL * v13);
          }
          while ( v14 != v13 );
          if ( v12 == v13 )
          {
            if ( (unsigned int)sub_AF6980(a1, *(_QWORD *)(v7 + 8LL * v8)) != 1 )
              return (unsigned int)-1;
            v7 = *(_QWORD *)(a2 + 40);
            ++v8;
            goto LABEL_14;
          }
        }
        ++v8;
      }
    }
    return v4;
  }
  if ( v5 > 0x1F )
  {
    if ( v5 != 39 )
    {
      if ( v5 == 64 )
        return sub_AF86C0(a1, a2);
LABEL_10:
      sub_1872CE0("");
      sub_1873130(114, 514);
    }
    return v4;
  }
  if ( v5 == 7 )
    return sub_AF25D0(a1, a2);
  if ( v5 != 23 )
    goto LABEL_10;
  return sub_AF6E70(a1, a2);
}

