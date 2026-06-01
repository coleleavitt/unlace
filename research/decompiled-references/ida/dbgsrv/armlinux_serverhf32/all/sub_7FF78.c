/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FF78
// Address: 0x0007FF78

//----- (0007FF78) --------------------------------------------------------
unsigned int __fastcall sub_7FF78(int a1, char *a2, char *a3, unsigned int *a4)
{
  char *v4; // r4
  unsigned int v5; // r5
  unsigned int result; // r0
  unsigned int v7; // r2
  unsigned int v8; // r7
  char v9; // r12
  char v10; // t1
  int v11; // r6
  int v12; // r7
  char v13; // t1
  int v14; // r6

  if ( a1 == 80 )
  {
    v7 = (unsigned int)(a3 + 3);
    *a4 = *(_DWORD *)(v7 & 0xFFFFFFFC);
    return (v7 & 0xFFFFFFFC) + 4;
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 3:
      case 0xB:
        v4 = a3 + 4;
        v5 = *(_DWORD *)a3;
        goto LABEL_4;
      case 1:
        v5 = 0;
        v4 = a3;
        v12 = 0;
        do
        {
          v13 = *v4++;
          v14 = (v13 & 0x7F) << v12;
          v12 += 7;
          v5 |= v14;
        }
        while ( v13 < 0 );
        goto LABEL_4;
      case 2:
        v4 = a3 + 2;
        v5 = *(unsigned __int16 *)a3;
        goto LABEL_4;
      case 4:
      case 0xC:
        v4 = a3 + 8;
        v5 = *(_DWORD *)a3;
        goto LABEL_4;
      case 9:
        v5 = 0;
        v4 = a3;
        v8 = 0;
        do
        {
          v10 = *v4++;
          v9 = v10;
          v11 = (v10 & 0x7F) << v8;
          v8 += 7;
          v5 |= v11;
        }
        while ( v10 < 0 );
        if ( v8 > 0x1F || (v9 & 0x40) == 0 )
          goto LABEL_4;
        v5 |= -1 << v8;
        goto LABEL_5;
      case 0xA:
        v4 = a3 + 2;
        v5 = *(__int16 *)a3;
LABEL_4:
        if ( v5 )
        {
LABEL_5:
          if ( (a1 & 0x70) == 0x10 )
            a2 = a3;
          v5 += (unsigned int)a2;
          if ( (a1 & 0x80) != 0 )
            v5 = *(_DWORD *)v5;
        }
        *a4 = v5;
        result = (unsigned int)v4;
        break;
      default:
        abort();
        return result;
    }
  }
  return result;
}
