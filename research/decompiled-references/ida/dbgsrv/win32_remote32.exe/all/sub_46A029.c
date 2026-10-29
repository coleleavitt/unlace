/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A029
// Address: 0x0046A029

//----- (0046A029) --------------------------------------------------------
int __usercall sub_46A029@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, __m128i a4@<xmm0>)
{
  int v6; // eax
  char v7; // al
  char v8; // al

  if ( !sub_46B187((int *)(a1 + 1096), a2, a3) )
    return -1;
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_3:
    *sub_46B984() = 22;
    sub_467EF4(0, a3);
    return -1;
  }
LABEL_20:
  while ( ++*(_DWORD *)(a1 + 1104) != 2 )
  {
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    while ( 1 )
    {
      v8 = **(_BYTE **)(a1 + 16);
      *(_BYTE *)(a1 + 49) = v8;
      if ( !v8 )
        break;
      ++*(_DWORD *)(a1 + 16);
      if ( *(int *)(a1 + 24) < 0 )
        goto LABEL_20;
      v6 = sub_469EE1(*(_BYTE *)(a1 + 49), *(_DWORD *)(a1 + 28));
      *(_DWORD *)(a1 + 28) = v6;
      if ( v6 == 8 )
        goto LABEL_3;
      switch ( v6 )
      {
        case 0:
          v7 = sub_46A3B2(a1, 0, a3);
          break;
        case 1:
          *(_DWORD *)(a1 + 40) = -1;
          *(_DWORD *)(a1 + 36) = 0;
          *(_BYTE *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 44) = 0;
          *(_BYTE *)(a1 + 60) = 0;
          continue;
        case 2:
          v7 = sub_46A375(a1);
          break;
        case 3:
          v7 = sub_46AC4B(a1);
          break;
        case 4:
          *(_DWORD *)(a1 + 40) = 0;
          continue;
        case 5:
          v7 = sub_46A525(a1);
          break;
        case 6:
          v7 = sub_46A54B(a1, 0, a3, a4);
          break;
        case 7:
          v7 = sub_46A7E7(a1, a3, a4);
          break;
        default:
          return -1;
      }
      if ( !v7 )
        return -1;
    }
    ++*(_DWORD *)(a1 + 16);
  }
  return *(_DWORD *)(a1 + 24);
}
