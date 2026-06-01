/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A7A8
// Address: 0x000000010004A7A8

//----- (000000010004A7A8) ----------------------------------------------------
__int64 __fastcall sub_10004A7A8(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  size_t v5; // x20

  v5 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v5 == (unsigned int)qlread(a1, a3, v5) )
  {
    if ( qword_1000A5878 )
    {
      if ( *(_BYTE *)(qword_1000A5878 + 184) == 1 )
        sub_100000B44();
    }
    return 0;
  }
  else
  {
    if ( qword_1000A5878 && *(_BYTE *)(qword_1000A5878 + 184) == 1 )
      sub_100000B44();
    *a4 = 10;
    return 1;
  }
}
// 1000A5878: using guessed type __int64 qword_1000A5878;
