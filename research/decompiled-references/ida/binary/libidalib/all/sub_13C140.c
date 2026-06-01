__int64 __fastcall sub_13C140(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int8 *v7; // rbx
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r9d
  unsigned __int8 *v11; // rsi
  __int64 v12; // kr00_8
  unsigned __int8 v13; // cl
  char v14; // dl
  char v15; // dl
  unsigned __int8 v16; // bl
  int v17; // r8d

  v4 = sub_163BA0(a1, a2);
  if ( *(_QWORD *)(v4 + 8) <= 1u )
    return 0;
  v7 = *(unsigned __int8 **)v4;
  v8 = sub_15F0C0(a1, a2);
  v9 = v8;
  if ( (int)v8 < 0 )
  {
    return 0;
  }
  else
  {
    v10 = 0;
    v5 = 0;
    do
    {
      v11 = v7 + 1;
      v12 = v8;
      v8 = *v7;
      switch ( *v7 )
      {
        case 0u:
          v16 = getinf();
          LOBYTE(v17) = v9 >= (int)(get_last_pfxlen() + v16);
          return (unsigned int)(2 * v17);
        case 1u:
          v13 = v7[1];
          v8 = 0;
          if ( v13 != 40 )
          {
            do
            {
              v15 = a3[(int)v8];
              if ( !v15 )
                goto LABEL_10;
              v8 = (unsigned int)(v8 + 1);
            }
            while ( v13 != v15 );
            v5 = v7[1];
            v7 += 2;
            continue;
          }
          v8 = (__int64)&unk_1D706E;
          if ( a3 == (_BYTE *)&unk_1D706E )
            v5 = v7[1];
          v7 += 18;
          while ( *v11 )
          {
            if ( ++v11 == v7 )
              goto LABEL_12;
          }
          goto LABEL_11;
        case 2u:
          v13 = v7[1];
          v8 = 0;
          break;
        case 3u:
          if ( v7[1] )
            v7 += 2;
          else
            ++v7;
          goto LABEL_16;
        case 4u:
          goto LABEL_11;
        default:
          v8 = v12;
          ++v7;
LABEL_16:
          ++v10;
          continue;
      }
      while ( 1 )
      {
        v14 = a3[(int)v8];
        if ( !v14 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( v13 == v14 )
        {
          v5 = 0;
          goto LABEL_24;
        }
      }
LABEL_10:
      if ( !v13 )
      {
LABEL_11:
        v7 = v11;
        continue;
      }
LABEL_24:
      v7 += 2;
LABEL_12:
      ;
    }
    while ( v9 >= v10 );
  }
  return v5;
}

