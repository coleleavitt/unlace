/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90DD0
// Address: 0x00090DD0

//----- (00090DD0) --------------------------------------------------------
int __fastcall sub_90DD0(char **a1, unsigned int a2)
{
  char *v4; // r1
  int result; // r0
  char *v6; // r1
  _DWORD *v7; // t1
  _DWORD *v8; // t1
  int v9; // t1
  int v10; // t1
  int v11; // r1
  char *v12; // [sp+0h] [bp-18h] BYREF

  if ( a2 == 255 )
    return 0;
  v4 = *a1;
  v12 = *a1;
  switch ( a2 & 0xF )
  {
    case 0u:
    case 3u:
    case 0xBu:
      v7 = *(_DWORD **)v4;
      v6 = v4 + 4;
      result = (int)v7;
      goto LABEL_10;
    case 1u:
      result = sub_90E78(&v12);
      goto LABEL_11;
    case 2u:
      v9 = *(unsigned __int16 *)v4;
      v6 = v4 + 2;
      result = v9;
      goto LABEL_10;
    case 4u:
    case 0xCu:
      v8 = *(_DWORD **)v4;
      v6 = v4 + 8;
      result = (int)v8;
      goto LABEL_10;
    case 9u:
      result = sub_90F0C(&v12);
      goto LABEL_11;
    case 0xAu:
      v10 = *(__int16 *)v4;
      v6 = v4 + 2;
      result = v10;
LABEL_10:
      v12 = v6;
LABEL_11:
      v11 = (a2 >> 4) & 7;
      if ( !v11 )
        goto LABEL_15;
      if ( v11 != 1 )
LABEL_20:
        abort();
      if ( result )
      {
        result += (int)*a1;
LABEL_15:
        if ( (char)a2 <= -1 )
        {
          if ( result )
            result = *(_DWORD *)result;
        }
      }
      else
      {
        result = 0;
      }
      *a1 = v12;
      break;
    default:
      goto LABEL_20;
  }
  return result;
}
