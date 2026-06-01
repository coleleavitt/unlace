/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463460
// Address: 0x0000000000463460

//----- (0000000000463460) ----------------------------------------------------
__int64 __fastcall sub_463460(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  unsigned int v5; // w19
  unsigned int v6; // w0
  unsigned int v7; // w20

  v5 = *(_DWORD *)(a2 + 8);
  v6 = sub_48C160(a1, a3, v5);
  if ( v5 == v6 )
  {
    v7 = 0;
    if ( qword_522368 && *(_BYTE *)(qword_522368 + 184) )
      sub_40A690((int)"Section loaded (%d bytes).\n", v5);
  }
  else
  {
    if ( qword_522368 && *(_BYTE *)(qword_522368 + 184) )
      sub_40A690((int)"Couldn't read %d bytes of data (read %d).\n", v5, v6);
    v7 = 1;
    *a4 = 10;
  }
  return v7;
}
// 522368: using guessed type __int64 qword_522368;
