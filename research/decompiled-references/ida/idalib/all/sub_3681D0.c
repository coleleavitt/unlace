__int64 __fastcall sub_3681D0(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char *v5; // rax
  unsigned int v7; // edx
  __int64 v8; // rax

  v5 = (char *)(a1 & 0xF00000);
  if ( v5 == (_BYTE *)&loc_4FFFFB + 5 )
  {
    *(_QWORD *)(a5 + 8) = a2;
    if ( a4 == 3 )
    {
      *(_QWORD *)a5 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(a5 + 24) = *(unsigned __int8 *)(a3 + 72);
      return 1;
    }
    else
    {
      *(_QWORD *)a5 = -1;
      v7 = 2;
      *(_QWORD *)(a5 + 16) = 0;
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
      *(_DWORD *)(a5 + 24) = v7;
      LOBYTE(v7) = a4 == 0;
      return v7;
    }
  }
  else
  {
    LOBYTE(a3) = a4 == 0;
    if ( v5 == (_BYTE *)&loc_9FFFFB + 5 )
    {
      *(_DWORD *)a5 = 1;
      *(_QWORD *)(a5 + 8) = a2;
      *(_QWORD *)(a5 + 264) = 0;
      return (unsigned int)a3;
    }
    if ( v5 != (char *)&loc_800000 )
    {
      if ( (a1 & 0x600) != 0x400 || (a1 & 0xF0000000) != 0xD0000000LL )
      {
        *(_QWORD *)a5 = a2;
        return (unsigned int)a3;
      }
      *(_QWORD *)(a5 + 4) = -1;
      *(_DWORD *)a5 = a2;
      *(_QWORD *)(a5 + 10) = -1;
      return (unsigned int)a3;
    }
    *(_QWORD *)a5 = a2;
    *(_BYTE *)(a5 + 8) = 0;
    return (unsigned int)a3;
  }
}
