/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100078EBC
// Address: 0x0000000100078EBC

//----- (0000000100078EBC) ----------------------------------------------------
char *__fastcall sub_100078EBC(char *a1, unsigned __int8 *a2, __int64 a3)
{
  char *v5; // x20
  unsigned __int8 *v6; // x21
  unsigned __int8 *v7; // x28
  unsigned __int8 *v8; // x24
  char *v9; // x27
  int v10; // w8
  int v11; // t1
  unsigned int v12; // w8
  bool v13; // zf
  unsigned __int8 *v14; // x20
  unsigned int v15; // w9
  unsigned int v16; // w8
  unsigned int v17; // t1
  __int64 v18; // x9
  unsigned int v20; // t1
  __int64 v21; // x9
  bool v22; // zf
  int v23; // w9
  int v24; // t1
  __int64 v25; // x1
  int v26; // w8
  unsigned int v27; // w10
  char *v28; // x8
  int v29; // w9
  unsigned int v30; // w9
  unsigned __int8 *v32; // x8
  unsigned int v33; // t1
  __int64 v34; // x10
  char v37[10]; // [xsp+Eh] [xbp-62h] BYREF

  if ( a3 < 0 )
    goto LABEL_87;
  v5 = a1;
  if ( strchr(a1, 37) )
  {
    v6 = &a2[a3];
    if ( v6 <= a2 )
      goto LABEL_82;
    v7 = v6 - 1;
    v8 = a2;
    v9 = v5;
    while ( 1 )
    {
      v11 = (unsigned __int8)*v9++;
      v10 = v11;
      *v8++ = v11;
      if ( v8 >= v6 )
      {
        *v7 = 0;
        v8 = v6 - 1;
      }
      if ( v10 == 37 )
      {
        v12 = (unsigned __int8)*v9;
        if ( v12 != 37 )
        {
          v13 = v12 > 0x3F || ((1LL << v12) & 0x3FF6C0800000001LL) == 0;
          v14 = (unsigned __int8 *)v9;
          if ( !v13 )
          {
            while ( v8 < v6 )
            {
              *v8++ = v12;
              if ( v8 >= v6 )
              {
                *v7 = 0;
                v8 = v6 - 1;
              }
              v17 = *++v14;
              v12 = v17;
              v18 = (1LL << v17) & 0x3FF6C0800000001LL;
              if ( v17 > 0x3F || v18 == 0 )
                goto LABEL_19;
            }
LABEL_82:
            if ( under_debugger != 1 )
              goto LABEL_84;
            while ( 1 )
            {
              __break(1u);
LABEL_84:
              interr(518);
LABEL_85:
              if ( under_debugger != 1 )
              {
                interr(520);
LABEL_87:
                if ( under_debugger != 1 )
                  interr(1225);
              }
            }
          }
LABEL_19:
          if ( v12 == 97 )
          {
            if ( v9 == (char *)v14 )
              goto LABEL_64;
            v8 += v9 - (char *)v14;
            v15 = (unsigned __int8)*v9;
            if ( v15 > 0x3F )
            {
              v16 = (unsigned __int8)*v9;
              if ( (v15 & 0x80) != 0 )
                goto LABEL_64;
            }
            else
            {
              v16 = (unsigned __int8)*v9;
              if ( ((1LL << v15) & 0x16C0800000001LL) != 0 )
              {
                while ( v8 < v6 )
                {
                  *v8++ = v15;
                  if ( v8 >= v6 )
                  {
                    *v7 = 0;
                    v8 = v6 - 1;
                  }
                  v20 = (unsigned __int8)*++v9;
                  v16 = v20;
                  v21 = (1LL << v20) & 0x16C0800000001LL;
                  v22 = v20 > 0x3F || v21 == 0;
                  LOBYTE(v15) = v16;
                  if ( v22 )
                    goto LABEL_23;
                }
                goto LABEL_82;
              }
LABEL_23:
              if ( (v16 & 0x80) != 0 )
              {
LABEL_64:
                if ( v8 >= v6 )
                  goto LABEL_85;
                if ( v8 != v7 )
                {
                  *v8 = 108;
                  if ( v8 + 1 == v7 )
                  {
                    ++v8;
                  }
                  else
                  {
                    v8[1] = 108;
                    v8 += 2;
                  }
                }
                *v8 = 0;
                if ( v8 >= v6 )
                  goto LABEL_82;
                *v8++ = 88;
                if ( v8 < v6 )
                  goto LABEL_42;
LABEL_41:
                *v7 = 0;
                v8 = v6 - 1;
LABEL_42:
                v9 = (char *)(v14 + 1);
                goto LABEL_7;
              }
            }
            v23 = 0;
            do
            {
              if ( (_DefaultRuneLocale.__runetype[v16] & 0x400) == 0 )
                break;
              v24 = *++v9;
              v23 = v16 + 10 * v23 - 48;
              v16 = (unsigned __int8)v24;
            }
            while ( (v24 & 0x80000000) == 0 );
            if ( v23 )
            {
              v25 = 0;
              v26 = 2 * v23;
              do
              {
                v37[v25] = (char)v26 % 10 + 48;
                v27 = v26 + 9;
                ++v25;
                v26 /= 10;
              }
              while ( v27 > 0x12 );
              v37[v25] = 0;
              memrev(v37, v25);
              if ( v8 >= v6 )
                goto LABEL_85;
              if ( v8 == v7 )
              {
LABEL_57:
                *v8 = 0;
              }
              else
              {
                v28 = v37;
                while ( 1 )
                {
                  v29 = (unsigned __int8)*v28;
                  *v8 = v29;
                  if ( !v29 )
                    break;
                  ++v28;
                  if ( ++v8 == v7 )
                    goto LABEL_57;
                }
              }
              v30 = (unsigned __int8)*v9;
            }
            else
            {
              v30 = v16;
            }
            if ( v30 <= 0x3F && ((1LL << v30) & 0x3FF6C0800000001LL) != 0 )
            {
              v32 = (unsigned __int8 *)(v9 + 1);
              while ( v8 < v6 )
              {
                *v8++ = v30;
                if ( v8 >= v6 )
                {
                  *v7 = 0;
                  v8 = v6 - 1;
                }
                v33 = *v32++;
                LOBYTE(v30) = v33;
                v34 = (1LL << v33) & 0x3FF6C0800000001LL;
                if ( v33 > 0x3F || v34 == 0 )
                  goto LABEL_64;
              }
              goto LABEL_82;
            }
            goto LABEL_64;
          }
          if ( v8 >= v6 )
            goto LABEL_82;
          *v8++ = v12;
          if ( v8 >= v6 )
            goto LABEL_41;
          goto LABEL_42;
        }
        if ( v8 >= v6 )
          goto LABEL_82;
        v9 = v5 + 2;
        *v8++ = 37;
        if ( v8 >= v6 )
        {
          *v7 = 0;
          v8 = v6 - 1;
        }
      }
      else if ( !v10 )
      {
        return (char *)a2;
      }
LABEL_7:
      v5 = v9;
      if ( v8 >= v6 )
        goto LABEL_82;
    }
  }
  return v5;
}
// 1000A590D: using guessed type char under_debugger;
