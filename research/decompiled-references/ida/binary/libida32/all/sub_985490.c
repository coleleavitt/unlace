__int64 __fastcall sub_985490(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned int *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int8 *v6; // rdi
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  char *v10; // rcx
  char *v11; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  result = 0;
  if ( (v1 & 7) == 0 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
    {
      v4 = *(unsigned int **)(v3 + 16);
      v5 = *v4;
      v6 = (unsigned __int8 *)(v4 + 4);
      v7 = (unsigned int *)((char *)v4 + v5 + 16);
      if ( v7 == v4 + 4 )
        return 0;
      LOBYTE(v8) = *((_BYTE *)v4 + 16);
      v9 = (unsigned __int8 *)(v4 + 4);
LABEL_5:
      if ( (v8 & 0xDF) != 0x43 )
      {
LABEL_15:
        v10 = (char *)(v9 + 1);
        if ( v9 + 1 == (unsigned __int8 *)v7 )
          return 0;
        goto LABEL_14;
      }
      while ( 1 )
      {
        if ( (_BYTE)v8 == 99 && v6 != v9 && (byte_23ED5E0[2 * *(v9 - 1)] & 0x60) != 0 )
          goto LABEL_15;
        v10 = (char *)(v9 + 1);
        if ( v9 + 1 == (unsigned __int8 *)v7 )
          return 0;
        v11 = (char *)(v10 - (char *)v6);
        if ( v10 - (char *)v6 > v5 )
          goto LABEL_14;
        if ( v5 - (unsigned __int64)v11 <= 4 )
        {
          if ( v5 - (unsigned __int64)v11 <= 2 || *(_WORD *)v10 != 28783 )
            goto LABEL_14;
        }
        else
        {
          if ( *(_DWORD *)v10 == 1952540018 && v9[5] == 101 )
          {
            v9 += 6;
            goto LABEL_19;
          }
          if ( *(_WORD *)v10 != 28783 )
            goto LABEL_14;
        }
        if ( v9[3] == 121 )
        {
          v9 += 4;
LABEL_19:
          if ( v9 == (unsigned __int8 *)v7 )
            return 1;
          v8 = *v9;
          if ( (byte_23ED5E0[2 * v8] & 0x40) == 0 )
            return 1;
          goto LABEL_5;
        }
LABEL_14:
        LOBYTE(v8) = v9[1];
        v9 = (unsigned __int8 *)v10;
        if ( (v8 & 0xDF) != 0x43 )
          goto LABEL_15;
      }
    }
  }
  return result;
}

