/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_579D4
// Address: 0x000579D4

//----- (000579D4) --------------------------------------------------------
int __fastcall sub_579D4(int a1, __int64 a2, int a3)
{
  if ( a2 )
  {
    if ( a2 - 1 >= (unsigned __int64)*(unsigned int *)(a1 + 56) )
    {
      return -1;
    }
    else
    {
      HIDWORD(a2) = *(_DWORD *)(a1 + 52) + 104 * (a2 - 1);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)HIDWORD(a2);
      *(_DWORD *)(a3 + 40) = *(_DWORD *)(HIDWORD(a2) + 8);
      *(_DWORD *)(a3 + 44) = 0;
      if ( *(_DWORD *)(HIDWORD(a2) + 16) )
        LODWORD(a2) = *(_DWORD *)(HIDWORD(a2) + 12);
      else
        LODWORD(a2) = &dword_8DA5C;
      *(_DWORD *)a3 = a2;
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(HIDWORD(a2) + 24);
      *(_DWORD *)(a3 + 52) = 0;
      *(_DWORD *)(a3 + 72) = *(_DWORD *)(HIDWORD(a2) + 28);
      *(_DWORD *)(a3 + 76) = 0;
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(HIDWORD(a2) + 40);
      *(_QWORD *)(a3 + 56) = *(_QWORD *)(HIDWORD(a2) + 48);
      return 0;
    }
  }
  else
  {
    memset((void *)(a3 + 4), 0, 0x4Cu);
    *(_DWORD *)a3 = &byte_8DEAC;
    return 0;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
