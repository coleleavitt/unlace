/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEA40
// Address: 0x000BEA40

//----- (000BEA40) --------------------------------------------------------
int __fastcall sub_BEA40(char **a1, char a2)
{
  char *v2; // edi
  int result; // eax
  int v4; // ecx
  char v5; // dl
  unsigned int v6; // ecx
  int v7; // ebx
  char v8; // dl
  int v9; // eax
  char **v10; // ecx
  char *v12; // [esp+4h] [ebp-18h]

  if ( a2 == -1 )
    return 0;
  v2 = *a1;
  v12 = *a1;
  switch ( a2 & 0xF )
  {
    case 0:
    case 3:
    case 0xB:
      result = *(_DWORD *)v2;
      v2 += 4;
      goto LABEL_19;
    case 1:
      v4 = 0;
      result = 0;
      do
      {
        v5 = *v2;
        result |= (*v2++ & 0x7F) << v4;
        v4 += 7;
      }
      while ( v5 < 0 );
      goto LABEL_19;
    case 2:
      result = *(unsigned __int16 *)v2;
      goto LABEL_18;
    case 4:
    case 0xC:
      result = *(_DWORD *)v2;
      v2 += 8;
      goto LABEL_19;
    case 9:
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *v2;
        v7 |= (*v2++ & 0x7F) << v6;
        v6 += 7;
      }
      while ( v8 < 0 );
      v9 = -1 << v6;
      if ( (v8 & 0x40) == 0 )
        v9 = 0;
      if ( v6 >= 0x20 )
        v9 = 0;
      result = v7 | v9;
      goto LABEL_19;
    case 0xA:
      result = *(__int16 *)v2;
LABEL_18:
      v2 += 2;
LABEL_19:
      if ( (((unsigned __int8)a2 >> 4) & 7) != 0 )
      {
        if ( (((unsigned __int8)a2 >> 4) & 7) != 1 )
LABEL_29:
          abort();
        v10 = a1;
        if ( !result )
        {
          result = 0;
          goto LABEL_28;
        }
        result += (int)v12;
        if ( a2 >= 0 )
          goto LABEL_28;
      }
      else
      {
        v10 = a1;
        if ( a2 >= 0 )
          goto LABEL_28;
      }
      if ( result )
        result = *(_DWORD *)result;
LABEL_28:
      *v10 = v2;
      break;
    default:
      goto LABEL_29;
  }
  return result;
}
