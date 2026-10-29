/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AE38
// Address: 0x0006AE38

//----- (0006AE38) --------------------------------------------------------
unsigned int __fastcall sub_6AE38(unsigned int result, char *s, int a3, int a4)
{
  int v4; // r11
  int v6; // r5
  unsigned __int8 *v7; // r4
  int v8; // r2
  unsigned int v9; // r2
  unsigned __int8 *v10; // r3
  size_t v11; // r7
  int v12; // r6
  size_t v13; // r8
  void *v14; // r1
  int v15; // t1
  unsigned __int8 *v16; // [sp+8h] [bp-2Ch]
  unsigned __int8 *v17; // [sp+18h] [bp-1Ch] BYREF
  char v18; // [sp+1Ch] [bp-18h] BYREF
  char v19; // [sp+1Dh] [bp-17h]

  v4 = a3;
  v6 = result;
  v7 = (unsigned __int8 *)s;
  if ( a3 == -1 )
  {
    result = strlen(s);
    v4 = result;
  }
  v8 = v4;
  if ( v4 < a4 )
    v8 = a4;
  v9 = v8 + 16;
  if ( v9 > *(_DWORD *)(v6 + 8) )
  {
    result = (unsigned int)sub_77EB0(v6, *(void **)v6, v9, 1u);
    *(_DWORD *)v6 = result;
  }
  v17 = v7;
  v16 = v7;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      result = sub_70124(&v17);
      if ( result - 1 > 0xFFFFFFFD )
      {
        v10 = v17++;
        result = *v10;
      }
      switch ( result )
      {
        case 7u:
          v19 = 97;
          goto LABEL_12;
        case 8u:
          v19 = 98;
          goto LABEL_12;
        case 9u:
          v19 = 116;
          goto LABEL_12;
        case 0xAu:
          v19 = 110;
          goto LABEL_12;
        case 0xBu:
          v19 = 118;
          goto LABEL_12;
        case 0xCu:
          v19 = 102;
          goto LABEL_12;
        case 0xDu:
          v19 = 114;
          goto LABEL_12;
        case 0x22u:
          v19 = 34;
          goto LABEL_12;
        case 0x5Cu:
          v19 = 92;
LABEL_12:
          v11 = 2;
          v18 = 92;
          v7 = (unsigned __int8 *)&v18;
          goto LABEL_13;
        default:
          result = sub_6B260(result);
          if ( result )
          {
            v12 = *(_DWORD *)(v6 + 4);
            v11 = v17 - v7;
            if ( a4 <= 0 )
              goto LABEL_30;
          }
          else
          {
            v11 = 0;
            if ( v7 < v17 )
            {
              do
              {
                v15 = *v7++;
                result = sub_7EA4C(&v18 + v11, 16 - v11, "\\x%02X", v15);
                v11 += result;
              }
              while ( v17 > v7 );
              v7 = (unsigned __int8 *)&v18;
            }
            else
            {
              v7 = (unsigned __int8 *)&v18;
            }
LABEL_13:
            v12 = *(_DWORD *)(v6 + 4);
            if ( a4 <= 0 )
            {
LABEL_30:
              if ( v12 )
              {
                v13 = --v12 + v11;
                goto LABEL_16;
              }
              goto LABEL_33;
            }
          }
          if ( !v12 )
          {
            if ( v11 >= a4 )
              return result;
LABEL_33:
            v13 = v11;
            goto LABEL_16;
          }
          v13 = --v12 + v11;
          if ( v12 + v11 >= a4 )
            return result;
LABEL_16:
          v14 = *(void **)v6;
          if ( v13 + 1 > *(_DWORD *)(v6 + 8) )
          {
            v14 = sub_77EB0(v6, v14, v13 + 1, 1u);
            *(_DWORD *)v6 = v14;
          }
          *(_DWORD *)(v6 + 4) = v13 + 1;
          *((_BYTE *)v14 + v13) = 0;
          result = (unsigned int)memmove((void *)(*(_DWORD *)v6 + v12), v7, v11);
          v7 = v17;
          if ( v17 - v16 >= v4 )
            return result;
          break;
      }
    }
  }
  return result;
}
