__int64 __fastcall sub_364C90(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  char *v5; // rax
  unsigned int v7; // edx
  __int64 v8; // rax

  v5 = (char *)(a1 & 0xF00000);
  if ( v5 == (_BYTE *)&loc_4FFFFF + 1 )
  {
    *(_DWORD *)(a5 + 4) = a2;
    if ( a4 == 3 )
    {
      *(_DWORD *)a5 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(a3 + 40);
      *(_DWORD *)(a5 + 12) = *(unsigned __int8 *)(a3 + 72);
      return 1;
    }
    else
    {
      *(_DWORD *)a5 = -1;
      v7 = 2;
      *(_DWORD *)(a5 + 8) = 0;
      if ( (a1 & 0x600) == 0x400 )
      {
        v7 = 1;
        v8 = a1 & 0xF0000000;
        if ( v8 != 0x10000000 )
        {
          v7 = 10;
          if ( (a1 & 0xF0000000) != 0 )
          {
            v7 = 9;
            if ( v8 != 805306368 )
              v7 = 2;
          }
        }
      }
      *(_DWORD *)(a5 + 12) = v7;
      LOBYTE(v7) = a4 == 0;
      return v7;
    }
  }
  else
  {
    LOBYTE(a3) = a4 == 0;
    if ( v5 == (char *)&loc_A00000 )
    {
      *(_DWORD *)a5 = 1;
      *(_DWORD *)(a5 + 4) = a2;
      *(_DWORD *)(a5 + 132) = 0;
      return (unsigned int)a3;
    }
    else if ( v5 == (_BYTE *)&loc_7FFFF8 + 8 )
    {
      *(_DWORD *)a5 = a2;
      *(_BYTE *)(a5 + 4) = 0;
      return (unsigned int)a3;
    }
    else
    {
      if ( (a1 & 0x600) == 0x400 && (a1 & 0xF0000000) == 0xD0000000LL )
      {
        *(_QWORD *)(a5 + 4) = -1;
        *(_QWORD *)(a5 + 10) = -1;
      }
      *(_DWORD *)a5 = a2;
      return (unsigned int)a3;
    }
  }
}

