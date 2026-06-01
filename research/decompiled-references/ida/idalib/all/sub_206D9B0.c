__int64 __fastcall sub_206D9B0(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 v2; // rdx
  _BYTE *v3; // rdx
  char v4; // cl
  unsigned __int8 v5; // si
  _BYTE *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int8 v10; // cl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 - 16);
  if ( (v1 & 2) != 0 )
    v2 = *(_QWORD *)(a1 - 32);
  else
    v2 = a1 - 8LL * ((v1 >> 2) & 0xF) - 16;
  v3 = *(_BYTE **)(v2 + 24);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 <= 0x25u && ((1LL << v4) & 0x340000F000LL) != 0 )
      {
        v5 = *(v3 - 16);
        v6 = (v5 & 2) != 0 ? *((_BYTE **)v3 - 4) : &v3[-16 - 8LL * ((v5 >> 2) & 0xF)];
        v7 = *((_QWORD *)v6 + 3);
        if ( v7 )
        {
          if ( *(_BYTE *)v7 == 1 )
          {
            v8 = *(_QWORD *)(v7 + 128);
            if ( v8 )
            {
              if ( *(_BYTE *)v8 == 5 )
              {
                v9 = *(_DWORD *)(v8 + 32) <= 0x40u ? *(_QWORD *)(v8 + 24) : **(_QWORD **)(v8 + 24);
                if ( v9 )
                  break;
              }
            }
          }
        }
      }
      if ( v4 != 13 )
        return result;
      v10 = *(v3 - 16);
      if ( (v10 & 2) != 0 )
      {
        v3 = *(_BYTE **)(*((_QWORD *)v3 - 4) + 40LL);
        if ( !v3 )
          return result;
      }
      else
      {
        v3 = *(_BYTE **)&v3[-16 - 8LL * ((v10 >> 2) & 0xF) + 40];
        if ( !v3 )
          return result;
      }
    }
    return v9;
  }
  return result;
}
