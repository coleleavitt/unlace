__int64 __fastcall sub_330EE0(__int64 a1, unsigned __int8 a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned __int8 *v11; // rbx
  __int64 v12; // rax
  int v13; // r12d
  int v14; // r9d
  unsigned __int8 *v15; // rsi
  __int64 v16; // kr00_8
  unsigned __int8 v17; // cl
  char v18; // dl
  char v19; // dl
  unsigned __int8 v20; // bl
  int v21; // r8d

  v6 = sub_1F36A0(a1, a2, (__int64)a3, a4, a5);
  if ( *(_QWORD *)(v6 + 8) <= 1u )
    return 0;
  v11 = *(unsigned __int8 **)v6;
  v12 = sub_1EBFA0(a1, a2, v7, v8, a5);
  v13 = v12;
  if ( (int)v12 < 0 )
  {
    return 0;
  }
  else
  {
    v14 = 0;
    v9 = 0;
    do
    {
      v15 = v11 + 1;
      v16 = v12;
      v12 = *v11;
      switch ( *v11 )
      {
        case 0u:
          v20 = getinf(41);
          LOBYTE(v21) = v13 >= (int)(get_last_pfxlen(41, v15) + v20);
          return (unsigned int)(2 * v21);
        case 1u:
          v17 = v11[1];
          v12 = 0;
          if ( v17 != 40 )
          {
            do
            {
              v19 = a3[(int)v12];
              if ( !v19 )
                goto LABEL_10;
              v12 = (unsigned int)(v12 + 1);
            }
            while ( v17 != v19 );
            v9 = v11[1];
            v11 += 2;
            continue;
          }
          v12 = (__int64)&unk_5E7EB9;
          if ( a3 == (_BYTE *)&unk_5E7EB9 )
            v9 = v11[1];
          v11 += 18;
          while ( *v15 )
          {
            if ( ++v15 == v11 )
              goto LABEL_12;
          }
          goto LABEL_11;
        case 2u:
          v17 = v11[1];
          v12 = 0;
          break;
        case 3u:
          if ( v11[1] )
            v11 += 2;
          else
            ++v11;
          goto LABEL_16;
        case 4u:
          goto LABEL_11;
        default:
          v12 = v16;
          ++v11;
LABEL_16:
          ++v14;
          continue;
      }
      while ( 1 )
      {
        v18 = a3[(int)v12];
        if ( !v18 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( v17 == v18 )
        {
          v9 = 0;
          goto LABEL_24;
        }
      }
LABEL_10:
      if ( !v17 )
      {
LABEL_11:
        v11 = v15;
        continue;
      }
LABEL_24:
      v11 += 2;
LABEL_12:
      ;
    }
    while ( v13 >= v14 );
  }
  return v9;
}
