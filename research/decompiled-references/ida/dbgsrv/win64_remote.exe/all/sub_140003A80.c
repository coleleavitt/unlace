/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003A80
// Address: 0x0000000140003A80

//----- (0000000140003A80) ----------------------------------------------------
__int64 __fastcall sub_140003A80(__int64 a1, int a2, unsigned int a3, _DWORD *a4)
{
  if ( a2 && a3 >= 0x1C && a4[3] == 2 )
  {
    *(_QWORD *)(a1 + 56) = (unsigned int)a4[6];
    *(_QWORD *)(a1 + 64) = (unsigned int)a4[5];
  }
  return 0;
}
