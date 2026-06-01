/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EE84C
// Address: 0x00000000000EE84C

//----- (00000000000EE84C) ----------------------------------------------------
__int64 __fastcall sub_EE84C(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // w25
  unsigned int v8; // w26
  char *v9; // x27
  __int64 v10; // x0
  int v11; // w1
  int v12; // w0
  __int64 v13; // x0
  int v14; // w1
  char *v15; // x0
  __int64 GR; // x0
  __int64 v17; // x1
  char *v18; // x27
  char *v19; // x0
  char *v20; // x0
  int v21; // w0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x0
  unsigned __int8 v31; // [xsp+68h] [xbp+68h]
  __int64 v32; // [xsp+68h] [xbp+68h]
  __int64 v33; // [xsp+70h] [xbp+70h] BYREF
  __int64 v34; // [xsp+78h] [xbp+78h] BYREF
  __int64 v35; // [xsp+80h] [xbp+80h] BYREF
  __int64 v36; // [xsp+88h] [xbp+88h] BYREF
  _QWORD v37[64]; // [xsp+90h] [xbp+90h]

  v37[0] = a4;
  v7 = 1;
  while ( (unsigned __int64)a1 < a2 )
  {
    v8 = (unsigned __int8)*a1;
    v9 = a1 + 1;
    if ( v8 > 0x20 )
    {
      if ( v8 <= 0x4F )
      {
        if ( v8 < 0x30 )
        {
          if ( v8 > 0x27 )
          {
            if ( v8 > 0x2E )
            {
              v9 = &a1[*(__int16 *)(a1 + 1) + 3];
              goto LABEL_121;
            }
            if ( v8 < 0x29 )
            {
              if ( !v7 )
                goto LABEL_118;
              --v7;
              v9 = a1 + 3;
              if ( v37[v7] )
                v9 = &a1[*(__int16 *)(a1 + 1) + 3];
              goto LABEL_121;
            }
          }
          else if ( v8 == 35 )
          {
            goto LABEL_78;
          }
LABEL_93:
          if ( v7 <= 1 )
            goto LABEL_118;
          v28 = v37[v7 - 2];
          v29 = v37[v7 - 1];
          switch ( *a1 )
          {
            case 26:
              v10 = v29 & v28;
              break;
            case 27:
              v10 = v28 / v29;
              break;
            case 28:
              v10 = v28 - v29;
              break;
            case 29:
              v10 = v28 % (unsigned __int64)v29;
              break;
            case 30:
              v10 = v29 * v28;
              break;
            case 33:
              v10 = v29 | v28;
              break;
            case 34:
              v10 = v29 + v28;
              break;
            case 36:
              v10 = v28 << v29;
              break;
            case 37:
              v10 = (unsigned __int64)v28 >> v29;
              break;
            case 38:
              v10 = v28 >> v29;
              break;
            case 39:
              v10 = v29 ^ v28;
              break;
            case 41:
              v10 = v28 == v29;
              break;
            case 42:
              v10 = v28 >= v29;
              break;
            case 43:
              v10 = v28 > v29;
              break;
            case 44:
              v10 = v28 <= v29;
              break;
            case 45:
              v10 = v28 < v29;
              break;
            case 46:
              v10 = v28 != v29;
              break;
          }
          v7 -= 2;
          goto LABEL_119;
        }
        v10 = v8 - 48;
        goto LABEL_119;
      }
      if ( v8 != 144 )
      {
        if ( v8 > 0x90 )
        {
          if ( v8 == 148 )
            goto LABEL_78;
          if ( v8 > 0x94 )
          {
            if ( v8 == 150 )
              goto LABEL_121;
            if ( v8 != 241 )
              goto LABEL_118;
            v18 = a1 + 2;
            v31 = a1[1];
            v19 = (char *)sub_EDEB8(v31, a3);
            v20 = sub_EDA48(v31, v19, v18, (unsigned __int64 *)&v36);
LABEL_60:
            v9 = v20;
            v10 = v36;
            goto LABEL_119;
          }
          if ( v8 != 146 )
            goto LABEL_118;
          v15 = sub_ED9E0(a1 + 1, &v33);
          v9 = sub_EDA08(v15, &v35);
          GR = Unwind_GetGR(a3, v33);
          v17 = v35;
        }
        else
        {
          if ( v8 <= 0x6F )
          {
            v13 = a3;
            v14 = v8 - 80;
LABEL_62:
            v10 = Unwind_GetGR(v13, v14);
            goto LABEL_119;
          }
          v9 = sub_EDA08(a1 + 1, &v35);
          GR = Unwind_GetGR(a3, v8 - 112);
          v17 = v35;
        }
        v10 = GR + v17;
        goto LABEL_119;
      }
      v9 = sub_ED9E0(a1 + 1, &v33);
      v14 = v33;
      v13 = a3;
      goto LABEL_62;
    }
    if ( v8 >= 0x1F )
      goto LABEL_78;
    if ( v8 == 16 )
    {
      v9 = sub_ED9E0(a1 + 1, &v34);
      v10 = v34;
      goto LABEL_119;
    }
    if ( v8 <= 0x10 )
    {
      if ( v8 == 10 )
      {
        v10 = *(unsigned __int16 *)(a1 + 1);
        goto LABEL_56;
      }
      if ( v8 <= 0xA )
      {
        if ( v8 != 6 )
        {
          if ( v8 > 6 )
          {
            v9 = a1 + 2;
            if ( v8 == 8 )
            {
              v10 = (unsigned __int8)a1[1];
            }
            else
            {
              if ( v8 != 9 )
                goto LABEL_118;
              v10 = a1[1];
            }
          }
          else
          {
            if ( v8 != 3 )
              goto LABEL_118;
            v10 = *(_QWORD *)(a1 + 1);
            v9 = a1 + 9;
          }
          goto LABEL_119;
        }
LABEL_78:
        if ( !v7 )
          goto LABEL_118;
        v27 = v37[--v7];
        if ( v8 == 31 )
        {
          v10 = -v27;
        }
        else if ( v8 > 0x1F )
        {
          if ( v8 == 35 )
          {
            v32 = v37[v7];
            v9 = sub_ED9E0(a1 + 1, &v34);
            v10 = v32 + v34;
          }
          else
          {
            if ( v8 == 148 )
            {
              v9 = a1 + 2;
              switch ( a1[1] )
              {
                case 1:
                  v10 = *(unsigned __int8 *)v27;
                  goto LABEL_119;
                case 2:
                  v10 = *(unsigned __int16 *)v27;
                  goto LABEL_119;
                case 4:
                  v10 = *(unsigned int *)v27;
                  goto LABEL_119;
                case 8:
                  goto LABEL_90;
                default:
                  goto LABEL_118;
              }
            }
            v10 = ~v27;
          }
        }
        else if ( v8 == 6 )
        {
LABEL_90:
          v10 = *(_QWORD *)v27;
        }
        else
        {
          v10 = (v27 ^ (v27 >> 63)) + ((unsigned __int64)v27 >> 63);
        }
        goto LABEL_119;
      }
      if ( v8 == 13 )
      {
        v10 = *(int *)(a1 + 1);
LABEL_58:
        v9 = a1 + 5;
      }
      else if ( v8 > 0xD )
      {
        v9 = a1 + 9;
        v10 = *(_QWORD *)(a1 + 1);
      }
      else
      {
        if ( v8 != 11 )
        {
          v10 = *(unsigned int *)(a1 + 1);
          goto LABEL_58;
        }
        v10 = *(__int16 *)(a1 + 1);
LABEL_56:
        v9 = a1 + 3;
      }
LABEL_119:
      if ( (unsigned int)v7 > 0x3F )
        goto LABEL_118;
      v37[v7++] = v10;
      goto LABEL_121;
    }
    if ( v8 == 21 )
    {
      v22 = (unsigned __int8)a1[1];
      v35 = v22;
      v9 = a1 + 2;
      v23 = v7 - 1;
      if ( v22 >= v23 )
        goto LABEL_118;
      v10 = v37[v23 - v22];
      goto LABEL_119;
    }
    if ( v8 <= 0x15 )
    {
      if ( v8 == 18 )
      {
        if ( !v7 )
          goto LABEL_118;
        v21 = v7 - 1;
      }
      else
      {
        if ( v8 < 0x12 )
        {
          v20 = sub_EDA08(a1 + 1, &v36);
          goto LABEL_60;
        }
        if ( v8 == 19 )
        {
          if ( !v7 )
            goto LABEL_118;
          --v7;
          goto LABEL_121;
        }
        if ( v7 <= 1 )
          goto LABEL_118;
        v21 = v7 - 2;
      }
      v10 = v37[v21];
      goto LABEL_119;
    }
    if ( v8 == 25 )
      goto LABEL_78;
    if ( v8 > 0x19 )
      goto LABEL_93;
    v11 = v7 - 1;
    v12 = v7 - 2;
    if ( v8 == 22 )
    {
      if ( v7 <= 1 )
        goto LABEL_118;
      v24 = v37[v11];
      v37[v11] = v37[v12];
      v37[v12] = v24;
    }
    else
    {
      if ( v8 != 23 || v7 <= 2 )
        goto LABEL_118;
      v25 = v37[v11];
      v26 = v37[v7 - 3];
      v37[v11] = v37[v12];
      v37[v12] = v26;
      v37[v7 - 3] = v25;
    }
LABEL_121:
    a1 = v9;
  }
  if ( !v7 )
LABEL_118:
    abort();
  return v37[v7 - 1];
}
// EE928: conditional instruction was optimized away because w26.4==C
// EE944: conditional instruction was optimized away because w26.4==F
// EE970: conditional instruction was optimized away because w26.4==14
// EEC08: conditional instruction was optimized away because w26.4==19
// EEC2C: conditional instruction was optimized away because w26.4==20
// EECD8: the default case was optimized away because w26.4 is in (1A..1E|21..22|24..27|29..2E)
