void __fastcall sub_1AA1B70(_BYTE *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rax
  char *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  char *v10; // rsi
  char *v11; // r8
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi

  if ( a3 )
    return;
  v5 = a4;
  v6 = &a4[8 * a5];
  v7 = (8 * a5) >> 5;
  v8 = (8 * a5) >> 3;
  if ( v7 <= 0 )
  {
LABEL_15:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          return;
        goto LABEL_55;
      }
      v9 = *(_QWORD *)a4;
      if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
        goto LABEL_20;
      a4 += 8;
    }
    v9 = *(_QWORD *)a4;
    if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
      goto LABEL_20;
    a4 += 8;
LABEL_55:
    v9 = *(_QWORD *)a4;
    if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
      goto LABEL_20;
    return;
  }
  v9 = *(_QWORD *)a4;
  if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
    goto LABEL_20;
  v9 = *((_QWORD *)a4 + 1);
  if ( *(_BYTE *)(v9 + 8) == 44 )
  {
    a4 += 8;
    goto LABEL_20;
  }
  v9 = *((_QWORD *)a4 + 2);
  if ( *(_BYTE *)(v9 + 8) == 44 )
  {
    a4 += 16;
    goto LABEL_20;
  }
  v9 = *((_QWORD *)a4 + 3);
  v10 = &a4[32 * v7];
  a4 += 24;
  if ( *(_BYTE *)(v9 + 8) != 44 )
  {
    while ( 1 )
    {
      a4 = v5 + 32;
      if ( v10 == v5 + 32 )
        break;
      v9 = *((_QWORD *)v5 + 4);
      if ( *(_BYTE *)(v9 + 8) == 44 )
        goto LABEL_20;
      v9 = *((_QWORD *)v5 + 5);
      if ( *(_BYTE *)(v9 + 8) == 44 )
      {
        a4 = v5 + 40;
        goto LABEL_20;
      }
      v9 = *((_QWORD *)v5 + 6);
      if ( *(_BYTE *)(v9 + 8) == 44 )
      {
        a4 = v5 + 48;
        goto LABEL_20;
      }
      v9 = *((_QWORD *)v5 + 7);
      if ( *(_BYTE *)(v9 + 8) == 44 )
      {
        a4 = v5 + 56;
        goto LABEL_20;
      }
      v5 += 32;
    }
    v8 = (v6 - a4) >> 3;
    goto LABEL_15;
  }
LABEL_20:
  if ( v6 != a4 )
  {
    while ( 1 )
    {
      v11 = a4 + 8;
      v12 = v6 - (a4 + 8);
      v13 = v12 >> 5;
      v14 = v12 >> 3;
      v15 = v13;
      if ( v13 > 0 )
      {
        v16 = *((_QWORD *)a4 + 1);
        if ( *(_BYTE *)(v16 + 8) == 44 )
        {
          a4 += 8;
        }
        else
        {
          v16 = *((_QWORD *)a4 + 2);
          if ( *(_BYTE *)(v16 + 8) == 44 )
          {
            a4 += 16;
          }
          else
          {
            v16 = *((_QWORD *)a4 + 3);
            if ( *(_BYTE *)(v16 + 8) == 44 )
            {
              a4 += 24;
            }
            else
            {
              v16 = *((_QWORD *)a4 + 4);
              v17 = (__int64)&a4[32 * v15 + 8];
              a4 += 32;
              if ( *(_BYTE *)(v16 + 8) != 44 )
              {
                while ( 1 )
                {
                  a4 = v11 + 32;
                  if ( (char *)v17 == v11 + 32 )
                  {
                    v14 = (v6 - a4) >> 3;
                    goto LABEL_34;
                  }
                  v16 = *((_QWORD *)v11 + 4);
                  if ( *(_BYTE *)(v16 + 8) == 44 )
                    goto LABEL_39;
                  v16 = *((_QWORD *)v11 + 5);
                  if ( *(_BYTE *)(v16 + 8) == 44 )
                  {
                    a4 = v11 + 40;
                    goto LABEL_39;
                  }
                  v16 = *((_QWORD *)v11 + 6);
                  if ( *(_BYTE *)(v16 + 8) == 44 )
                  {
                    a4 = v11 + 48;
                    goto LABEL_39;
                  }
                  v16 = *((_QWORD *)v11 + 7);
                  if ( *(_BYTE *)(v16 + 8) == 44 )
                    break;
                  v11 += 32;
                }
                a4 = v11 + 56;
              }
            }
          }
        }
        goto LABEL_39;
      }
      a4 += 8;
LABEL_34:
      if ( v14 == 2 )
        goto LABEL_47;
      if ( v14 == 3 )
        break;
      if ( v14 != 1 )
        goto LABEL_37;
LABEL_49:
      v16 = *(_QWORD *)a4;
      if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) != 44 )
      {
LABEL_37:
        *(_QWORD *)(*(_QWORD *)a1 + 80LL) = v9;
        *(_BYTE *)(*(_QWORD *)a1 + 92LL) = 0;
        *(_DWORD *)(*(_QWORD *)a1 + 88LL) = *(_QWORD *)(v9 + 32) + 1;
        *(_BYTE *)(*(_QWORD *)a1 + 93LL) = a1[32];
        return;
      }
LABEL_39:
      if ( v6 == a4 )
        goto LABEL_37;
      if ( *(_QWORD *)(v9 + 32) < *(_QWORD *)(v16 + 32) )
        v9 = v16;
    }
    v16 = *(_QWORD *)a4;
    if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
      goto LABEL_39;
    a4 += 8;
LABEL_47:
    v16 = *(_QWORD *)a4;
    if ( *(_BYTE *)(*(_QWORD *)a4 + 8LL) == 44 )
      goto LABEL_39;
    a4 += 8;
    goto LABEL_49;
  }
}
