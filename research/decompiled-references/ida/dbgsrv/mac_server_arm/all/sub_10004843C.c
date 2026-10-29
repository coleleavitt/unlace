/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004843C
// Address: 0x000000010004843C

//----- (000000010004843C) ----------------------------------------------------
__int64 __fastcall sub_10004843C(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  size_t v5; // x20

  v5 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v5 == (unsigned int)qlread(a1, a3, v5) )
  {
    if ( qword_10009D878 )
    {
      if ( *(_BYTE *)(qword_10009D878 + 184) == 1 )
        sub_100000AA0();
    }
    return 0;
  }
  else
  {
    if ( qword_10009D878 && *(_BYTE *)(qword_10009D878 + 184) == 1 )
      sub_100000AA0();
    *a4 = 10;
    return 1;
  }
}
// 10009D878: using guessed type __int64 qword_10009D878;
