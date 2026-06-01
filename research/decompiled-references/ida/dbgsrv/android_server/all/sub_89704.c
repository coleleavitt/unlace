/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89704
// Address: 0x0000000000089704

//----- (0000000000089704) ----------------------------------------------------
__int64 __fastcall sub_89704(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  size_t v4; // x20
  int v6; // w2

  v4 = *(unsigned int *)(a2 + 8);
  v6 = qlread(a1, a3, v4);
  if ( (_DWORD)v4 == v6 )
  {
    if ( qword_166CB0 )
    {
      if ( *(_BYTE *)(qword_166CB0 + 184) )
        sub_39FA0((__int64)"Section loaded (%d bytes).\n", v4);
    }
    return 0;
  }
  else
  {
    if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
      sub_39FA0((__int64)"Couldn't read %d bytes of data (read %d).\n", v4, v6);
    *a4 = 10;
    return 1;
  }
}
// 166CB0: using guessed type __int64 qword_166CB0;
