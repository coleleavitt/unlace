__int64 __fastcall sub_ACD3D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rsi
  __int16 v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v4 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v4 )
    {
      if ( *v4 == (*(unsigned int *)(a1 + 336) | 0x100000000LL) )
      {
        if ( (v5 = *(_QWORD *)(a2 + 32), (v6 = *(_WORD *)(v5 + 4)) == 0) && (*(_BYTE *)(v5 + 30) & 1) != 0
          || (result = sub_ACD3D0(), (_BYTE)result) )
        {
          v7 = a2 + 32;
          v8 = 8LL * *(unsigned int *)(a2 + 24);
          v9 = a2 + 32 + v8;
          if ( v8 )
          {
            while ( 1 )
            {
              if ( v6 )
              {
                if ( v6 != 1 )
                  return 0;
              }
              else
              {
                result = *(_BYTE *)(*(_QWORD *)v7 + 30LL) & 1;
                if ( (*(_BYTE *)(*(_QWORD *)v7 + 30LL) & 1) == 0 )
                  return result;
              }
              v7 += 8;
              if ( v9 == v7 )
                return 1;
              v6 = *(_WORD *)(*(_QWORD *)v7 + 4LL);
            }
          }
          return 1;
        }
      }
    }
  }
  return result;
}

