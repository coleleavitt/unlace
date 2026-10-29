/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F690
// Address: 0x000000000008F690

//----- (000000000008F690) ----------------------------------------------------
__int64 __fastcall sub_8F690(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  signed __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // ebp

  v5 = *(unsigned int *)(a2 + 8);
  v6 = qlread(a1, a3, v5);
  if ( (_DWORD)v5 == v6 )
  {
    v7 = 0;
    if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
    {
      v7 = 0;
      sub_390A0((int)"Section loaded (%d bytes).\n", (unsigned int)v5);
    }
  }
  else
  {
    if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
      sub_390A0((int)"Couldn't read %d bytes of data (read %d).\n", (unsigned int)v5, v6);
    *a4 = 10;
    return 1;
  }
  return v7;
}
// 1559F8: using guessed type __int64 qword_1559F8;
