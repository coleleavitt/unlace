__int64 __fastcall sub_7D2860(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rbp
  char v6; // dl
  char v7; // al
  int v8; // eax

  v2 = 0;
  v3 = (__int64 *)(a1 + 24);
  v4 = a1 + 24 + (unsigned int)(8 * *(_DWORD *)(a1 + 20));
  if ( v4 != a1 + 24 )
  {
    do
    {
      v5 = *v3;
      v6 = sub_798420(*v3, a2);
      v7 = *(_BYTE *)(v5 + 28) & 0x7F;
      if ( v6 )
      {
        if ( v7 == 65 )
        {
          if ( (*(_BYTE *)(v5 + 60) & 8) == 0 )
            return v2;
          v8 = *(_DWORD *)(v5 + 64);
        }
        else
        {
          if ( v7 == 45 )
          {
            if ( !*(_BYTE *)(v5 + 81) )
              return v2;
          }
          else if ( v7 != 66 || (*(_BYTE *)(v5 + 80) & 4) == 0 )
          {
            return v2;
          }
          v8 = *(_DWORD *)(v5 + 84);
        }
        v2 += v8;
      }
      else
      {
        if ( *(_QWORD *)(v5 + 72) > 7u )
          return v2;
        ++v2;
      }
      ++v3;
    }
    while ( (__int64 *)v4 != v3 );
  }
  return v2;
}

