/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AEC8
// Address: 0x000000000049AEC8

//----- (000000000049AEC8) ----------------------------------------------------
const char *__fastcall sub_49AEC8(const char *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // x19
  __int64 v4; // x22
  const char *v5; // x23
  unsigned __int8 *v6; // x25
  int v7; // w26
  const char *v8; // x27
  unsigned __int64 v10; // x28
  const char *v11; // x20
  int v12; // w0
  char *v14; // x0
  int v15; // w3
  unsigned __int8 *v16; // x0
  char *v17; // x1
  int v18; // t1
  int v19; // w0
  int v20; // w0
  int v21; // w0
  char *i; // x6
  char v23; // w5
  int v24; // w0
  unsigned __int8 *v25; // x1
  int v26; // t1
  __int64 v27; // [xsp+18h] [xbp-78h]
  const char *v28; // [xsp+40h] [xbp-50h]
  char *v29; // [xsp+60h] [xbp-30h]
  int v30; // [xsp+6Ch] [xbp-24h]
  unsigned __int8 v31; // [xsp+78h] [xbp-18h] BYREF

  v10 = a3;
  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
    goto LABEL_17;
  }
  v11 = a1;
  if ( strchr(a1, 37) )
  {
    v10 += (unsigned __int64)a2;
    v3 = a2;
    v6 = (unsigned __int8 *)(v10 - 1);
    v7 = 1717986919;
    v29 = (char *)&v31;
    while ( 1 )
    {
      v5 = v11 + 1;
      v12 = *(unsigned __int8 *)v11;
      if ( v10 <= (unsigned __int64)v3 )
        break;
      *v3++ = v12;
      if ( v10 <= (unsigned __int64)v3 )
      {
        v3 = (unsigned __int8 *)(v10 - 1);
        *(_BYTE *)(v10 - 1) = 0;
      }
      if ( !v12 )
        return (const char *)a2;
      if ( v12 == 37 )
      {
        v27 = v4;
        v4 = *((unsigned __int8 *)v11 + 1);
        if ( (_DWORD)v4 == 37 )
        {
          v11 += 2;
          if ( v10 <= (unsigned __int64)v3 )
          {
            if ( !under_debugger )
              goto LABEL_23;
            goto LABEL_17;
          }
          *v3++ = 37;
          if ( v10 <= (unsigned __int64)v3 )
          {
            v3 = v6;
            *(_BYTE *)(v10 - 1) = 0;
          }
          v4 = v27;
        }
        else
        {
          v28 = v8;
          v11 = "+-0123456789*#.";
          v8 = v5;
          while ( strchr("+-0123456789*#.", v4) )
          {
            ++v8;
            if ( v10 <= (unsigned __int64)v3 )
              goto LABEL_27;
            *v3++ = v4;
            if ( v10 <= (unsigned __int64)v3 )
            {
              v3 = v6;
              *(_BYTE *)(v10 - 1) = 0;
            }
            v4 = *(unsigned __int8 *)v8;
          }
          if ( (_DWORD)v4 != 97 )
          {
            v11 = v8 + 1;
            if ( v10 > (unsigned __int64)v3 )
              goto LABEL_29;
            goto LABEL_27;
          }
LABEL_37:
          if ( v5 == v8 )
            goto LABEL_45;
          v3 -= v8 - v5;
          v11 = "+-0*#.";
          while ( 1 )
          {
            v4 = *(unsigned __int8 *)v5;
            v30 = *(unsigned __int8 *)v5;
            v14 = strchr("+-0*#.", v30);
            v15 = v30;
            if ( !v14 )
              break;
            ++v5;
            if ( v10 <= (unsigned __int64)v3 )
              goto LABEL_27;
            *v3 = v4;
            v16 = v3 + 1;
            if ( v10 <= (unsigned __int64)(v3 + 1) )
            {
              v16 = v6;
              *(_BYTE *)(v10 - 1) = 0;
            }
            v3 = v16;
          }
          v19 = v4 & 0x80;
          if ( (v4 & 0x80) != 0 || (unsigned int)(v4 - 48) > 9 )
          {
            v11 = v5;
          }
          else
          {
            while ( 1 )
            {
              v11 = v5 + 1;
              v20 = v15 + 10 * v19;
              v15 = *((unsigned __int8 *)v5 + 1);
              v19 = v20 - 48;
              v4 = *((unsigned __int8 *)v5 + 1);
              if ( (v15 & 0x80) != 0 || (unsigned int)(v15 - 48) > 9 )
                break;
              ++v5;
            }
            if ( v19 )
            {
              v21 = 2 * v19;
              for ( i = v29; ; ++i )
              {
                v23 = v21 - 10 * (((int)((unsigned __int64)(v21 * (__int64)v7) >> 32) >> 2) - (v21 >> 31));
                v21 = ((int)((unsigned __int64)(v21 * (__int64)v7) >> 32) >> 2) - (v21 >> 31);
                *i = v23 + 48;
                if ( !v21 )
                  break;
              }
              i[1] = 0;
              sub_492FC8(v29, i + 1 - v29);
              if ( v10 <= (unsigned __int64)v3 )
              {
LABEL_79:
                if ( !under_debugger )
                  sub_492270(520);
LABEL_17:
                __break(0x3E8u);
                goto LABEL_18;
              }
              if ( v3 == v6 )
              {
LABEL_77:
                v3 = v6;
                *v6 = 0;
              }
              else
              {
                v24 = v31;
                *v3 = v31;
                if ( v24 )
                {
                  v25 = (unsigned __int8 *)(v29 + 1);
                  while ( ++v3 != v6 )
                  {
                    v26 = *v25++;
                    *v3 = v26;
                    if ( !v26 )
                      goto LABEL_78;
                  }
                  goto LABEL_77;
                }
              }
LABEL_78:
              v4 = *((unsigned __int8 *)v5 + 1);
            }
          }
          v5 = "+-0123456789*#.";
          while ( strchr("+-0123456789*#.", v4) )
          {
            ++v11;
            if ( v10 <= (unsigned __int64)v3 )
              goto LABEL_27;
            *v3++ = v4;
            if ( v10 <= (unsigned __int64)v3 )
            {
              v3 = v6;
              *(_BYTE *)(v10 - 1) = 0;
            }
            v4 = *(unsigned __int8 *)v11;
          }
LABEL_45:
          if ( v10 <= (unsigned __int64)v3 )
            goto LABEL_79;
          if ( v3 != v6 )
          {
            *v3 = 108;
            v17 = "l";
            while ( ++v3 != v6 )
            {
              v18 = (unsigned __int8)*v17++;
              *v3 = v18;
              if ( !v18 )
                goto LABEL_51;
            }
          }
          v3 = v6;
          *(_BYTE *)(v10 - 1) = 0;
LABEL_51:
          if ( v10 <= (unsigned __int64)v3 )
          {
LABEL_27:
            if ( !under_debugger )
              goto LABEL_23;
            __break(0x3E8u);
LABEL_29:
            *v3++ = v4;
            if ( v10 <= (unsigned __int64)v3 )
            {
              *(_BYTE *)(v10 - 1) = 0;
              v3 = v6;
            }
            v4 = v27;
            v8 = v28;
          }
          else
          {
            *v3++ = 88;
            if ( v10 <= (unsigned __int64)v3 )
            {
              v3 = v6;
              *(_BYTE *)(v10 - 1) = 0;
            }
            v11 = v8 + 1;
            v4 = v27;
            v8 = v28;
          }
        }
      }
      else
      {
LABEL_18:
        v11 = v5;
      }
    }
    v27 = v4;
    v28 = v8;
    if ( !under_debugger )
LABEL_23:
      sub_492270(518);
    __break(0x3E8u);
    goto LABEL_37;
  }
  return v11;
}
// 49B1BC: mask 0xFFFFFF80 is shortened because w22.4 <= 0xFF
// 49AF38: variable 'v3' is possibly undefined
// 49AF60: variable 'v4' is possibly undefined
// 49AF74: variable 'v8' is possibly undefined
// 49AFAC: variable 'v6' is possibly undefined
// 49AFDC: variable 'v5' is possibly undefined
// 49B250: variable 'v29' is possibly undefined
// 49B25C: variable 'v7' is possibly undefined
// 52451C: using guessed type char under_debugger;
