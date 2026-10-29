/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A54B
// Address: 0x0046A54B

//----- (0046A54B) --------------------------------------------------------
char __usercall sub_46A54B@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, __m128i a4@<xmm0>)
{
  char v4; // al
  _BYTE *v6; // eax
  int v7; // eax
  char *v8; // edx
  char v9; // al
  _BYTE *v10; // eax
  int v11; // [esp-4h] [ebp-4h]

  v4 = *(_BYTE *)(a1 + 49);
  if ( v4 == 70 )
  {
    if ( (*(_DWORD *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 28) = 7;
      return sub_46A7E7(a1, a3, a4);
    }
    return 1;
  }
  if ( v4 == 78 )
  {
    if ( (*(_DWORD *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 28) = 8;
LABEL_7:
      *sub_46B984() = 22;
      sub_467EF4(a2, a3);
      return 0;
    }
    return 1;
  }
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_7;
  if ( v4 > 106 )
  {
    if ( v4 != 108 )
    {
      switch ( v4 )
      {
        case 't':
          *(_DWORD *)(a1 + 44) = 7;
          break;
        case 'w':
          *(_DWORD *)(a1 + 44) = 12;
          break;
        case 'z':
          *(_DWORD *)(a1 + 44) = 6;
          break;
      }
      return 1;
    }
    v10 = *(_BYTE **)(a1 + 16);
    if ( *v10 == 108 )
    {
      *(_DWORD *)(a1 + 16) = v10 + 1;
      v11 = 4;
    }
    else
    {
      v11 = 3;
    }
    goto LABEL_44;
  }
  switch ( v4 )
  {
    case 'j':
      *(_DWORD *)(a1 + 44) = 5;
      return 1;
    case 'I':
      v8 = *(char **)(a1 + 16);
      v9 = *v8;
      if ( *v8 == 51 && v8[1] == 50 )
      {
        *(_DWORD *)(a1 + 44) = 10;
        *(_DWORD *)(a1 + 16) = v8 + 2;
      }
      else if ( v9 == 54 && v8[1] == 52 )
      {
        *(_DWORD *)(a1 + 44) = 11;
        *(_DWORD *)(a1 + 16) = v8 + 2;
      }
      else if ( v9 == 100 || v9 == 105 || v9 == 111 || v9 == 117 || v9 == 120 || v9 == 88 )
      {
        *(_DWORD *)(a1 + 44) = 9;
      }
      return 1;
    case 'L':
      *(_DWORD *)(a1 + 44) = 8;
      return 1;
    case 'T':
      *(_DWORD *)(a1 + 44) = 13;
      return 1;
    case 'h':
      v6 = *(_BYTE **)(a1 + 16);
      if ( *v6 == 104 )
      {
        *(_DWORD *)(a1 + 16) = v6 + 1;
        v7 = 1;
LABEL_45:
        *(_DWORD *)(a1 + 44) = v7;
        return 1;
      }
      v11 = 2;
LABEL_44:
      v7 = v11;
      goto LABEL_45;
  }
  return 1;
}
