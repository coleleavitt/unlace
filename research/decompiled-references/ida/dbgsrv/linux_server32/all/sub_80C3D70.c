/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3D70
// Address: 0x080C3D70

//----- (080C3D70) --------------------------------------------------------
int __cdecl sub_80C3D70(unsigned __int8 **a1)
{
  unsigned int v1; // eax
  int v2; // edx
  unsigned __int8 *v3; // edi
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 *v7; // ebp
  int v8; // eax
  unsigned __int8 v9; // dl
  signed __int8 v10; // [esp+0h] [ebp-2Eh]
  signed __int8 v11; // [esp+0h] [ebp-2Eh]
  unsigned __int8 v12; // [esp+1h] [ebp-2Dh]
  int v13; // [esp+6h] [ebp-28h] BYREF
  char v14; // [esp+Ah] [ebp-24h] BYREF
  _BYTE v15[3]; // [esp+Bh] [ebp-23h]
  unsigned int v16; // [esp+Eh] [ebp-20h]

  v16 = __readgsdword(0x14u);
  v1 = sub_80C7170(a1);
  v2 = 0;
  if ( v1 == -1 )
    goto LABEL_10;
  v2 = 92;
  if ( v1 > 0xFF )
    goto LABEL_10;
  v2 = v1;
  if ( (unsigned __int8)(v1 - 48) <= 7u )
  {
    v3 = *a1;
    v14 = v1;
    v4 = *v3;
    if ( (unsigned __int8)(*v3 - 48) <= 7u )
    {
      ++v3;
      v15[0] = v4;
      v5 = *v3;
      if ( (unsigned __int8)(*v3 - 48) <= 7u )
        goto LABEL_7;
    }
    else
    {
      v15[0] = 0;
      v5 = *v3;
      if ( (unsigned __int8)(*v3 - 48) <= 7u )
      {
LABEL_7:
        ++v3;
        goto LABEL_8;
      }
    }
    v5 = 0;
LABEL_8:
    *(_WORD *)&v15[1] = v5;
    sub_80D3B90((int)&v14, "%o", (int)&v13);
LABEL_9:
    *a1 = v3;
    v2 = (unsigned __int8)v13;
    goto LABEL_10;
  }
  switch ( (char)v1 )
  {
    case 'a':
      v2 = 7;
      break;
    case 'b':
      v2 = 8;
      break;
    case 'f':
      v2 = 12;
      break;
    case 'n':
      v2 = 10;
      break;
    case 'r':
      v2 = 13;
      break;
    case 't':
      v2 = 9;
      break;
    case 'v':
      v2 = 11;
      break;
    case 'x':
      v7 = *a1;
      v10 = **a1;
      if ( (unsigned int)v10 <= 0x7F )
      {
        v12 = v1;
        v8 = isxdigit(v10);
        v2 = v12;
        if ( v8 )
        {
          v3 = v7 + 1;
          v14 = v10;
          v11 = v7[1];
          if ( (unsigned int)v11 <= 0x7F && isxdigit(v11) )
          {
            v9 = v11;
            v3 = v7 + 2;
          }
          else
          {
            v9 = 0;
          }
          *(_WORD *)v15 = v9;
          sub_80D3B90((int)&v14, "%x", (int)&v13);
          goto LABEL_9;
        }
      }
      break;
    default:
      break;
  }
LABEL_10:
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
