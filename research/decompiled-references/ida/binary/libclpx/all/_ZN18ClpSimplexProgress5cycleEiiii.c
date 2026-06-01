__int64 __fastcall ClpSimplexProgress::cycle(ClpSimplexProgress *this, int a2, int a3, char a4, char a5)
{
  int v10; // ecx
  unsigned int v11; // r12d
  int v13; // edx
  int v14; // r10d
  char v15; // r9
  char v16; // r8
  int v17; // esi
  __int64 v18; // rax
  int v19; // edi
  int v20; // [rsp+Ch] [rbp-3Ch]

  v10 = *((_DWORD *)this + 45);
  if ( a2 == v10
    || a2 == *((_DWORD *)this + 46)
    || *((_DWORD *)this + 47) == a2
    || a2 == *((_DWORD *)this + 48)
    || a2 == *((_DWORD *)this + 49)
    || *((_DWORD *)this + 50) == a2
    || a2 == *((_DWORD *)this + 51)
    || a2 == *((_DWORD *)this + 52)
    || a2 == *((_DWORD *)this + 53)
    || *((_DWORD *)this + 54) == a2
    || *((_DWORD *)this + 55) == a2 )
  {
    v13 = *((_DWORD *)this + 32);
    v14 = *((_DWORD *)this + 33);
    v15 = *((_BYTE *)this + 225);
    if ( v13 < 0 )
    {
      v11 = -1;
    }
    else
    {
      v16 = *((_BYTE *)this + 224);
      v17 = *((_DWORD *)this + 44);
      v18 = 1;
      v19 = 0;
      while ( 1 )
      {
        v11 = v18;
        if ( v13 == *((_DWORD *)this + v18 + 32)
          && *((_DWORD *)this + v18 + 44) == v17
          && *((_BYTE *)this + v18 + 224) == v16 )
        {
          ++v19;
          if ( v14 == *((_DWORD *)this + v18 + 33)
            && v10 == *((_DWORD *)this + v18 + 45)
            && v15 == *((_BYTE *)this + v18 + 225)
            && *((_DWORD *)this + v18 + 34) == *((_DWORD *)this + 34)
            && *((_DWORD *)this + v18 + 46) == *((_DWORD *)this + 46)
            && *((_BYTE *)this + v18 + 226) == *((_BYTE *)this + 226)
            && *((_DWORD *)this + v18 + 35) == *((_DWORD *)this + 35)
            && *((_DWORD *)this + v18 + 47) == *((_DWORD *)this + 47)
            && *((_BYTE *)this + v18 + 227) == *((_BYTE *)this + 227)
            && *((_DWORD *)this + v18 + 36) == *((_DWORD *)this + 36)
            && *((_DWORD *)this + v18 + 48) == *((_DWORD *)this + 48)
            && *((_BYTE *)this + v18 + 228) == *((_BYTE *)this + 228) )
          {
            v20 = 12 - v18;
            if ( (_DWORD)v18 == 7
              || *((_DWORD *)this + v18 + 37) == *((_DWORD *)this + 37)
              && *((_DWORD *)this + v18 + 49) == *((_DWORD *)this + 49)
              && *((_BYTE *)this + v18 + 229) == *((_BYTE *)this + 229)
              && (v20 == 6
               || *((_DWORD *)this + v18 + 38) == *((_DWORD *)this + 38)
               && *((_DWORD *)this + v18 + 50) == *((_DWORD *)this + 50)
               && *((_BYTE *)this + v18 + 230) == *((_BYTE *)this + 230)
               && (v20 == 7
                || *((_DWORD *)this + v18 + 39) == *((_DWORD *)this + 39)
                && *((_DWORD *)this + v18 + 51) == *((_DWORD *)this + 51)
                && *((_BYTE *)this + v18 + 231) == *((_BYTE *)this + 231)
                && (v20 == 8
                 || *((_DWORD *)this + v18 + 40) == *((_DWORD *)this + 40)
                 && *((_DWORD *)this + v18 + 52) == *((_DWORD *)this + 52)
                 && *((_BYTE *)this + v18 + 232) == *((_BYTE *)this + 232)
                 && (v20 == 9
                  || *((_DWORD *)this + v18 + 41) == *((_DWORD *)this + 41)
                  && *((_DWORD *)this + v18 + 53) == *((_DWORD *)this + 53)
                  && *((_BYTE *)this + v18 + 233) == *((_BYTE *)this + 233)
                  && (v20 == 10
                   || *((_DWORD *)this + v18 + 42) == *((_DWORD *)this + 42)
                   && *((_DWORD *)this + v18 + 54) == *((_DWORD *)this + 54)
                   && *((_BYTE *)this + v18 + 234) == *((_BYTE *)this + 234)))))) )
            {
              break;
            }
          }
        }
        if ( ++v18 == 8 )
        {
          v11 = 100;
          if ( v19 <= 1 )
            v11 = 0;
          break;
        }
      }
    }
  }
  else
  {
    v11 = 0;
  }
  memmove((char *)this + 128, (char *)this + 132, 0x2Cu);
  memmove((char *)this + 176, (char *)this + 180, 0x2Cu);
  memmove((char *)this + 224, (char *)this + 225, 0xBu);
  *((_DWORD *)this + 43) = a2;
  *((_DWORD *)this + 55) = a3;
  *((_BYTE *)this + 235) = 1 - a4 + 4 * (1 - a5);
  return v11;
}

