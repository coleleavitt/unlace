/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050F60
// Address: 0x0000000100050F60

//----- (0000000100050F60) ----------------------------------------------------
__int64 __fastcall sub_100050F60(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  signed __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = *(unsigned int *)(a2 + 8);
  v6 = qlread(a1, a3, v5);
  if ( (_DWORD)v5 == v6 )
  {
    result = 0;
    if ( qword_1000AD1A8 )
    {
      if ( *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
      {
        sub_100000AE0((int)"Section loaded (%d bytes).\n", (unsigned int)v5, v7, qword_1000AD1A8);
        return 0;
      }
    }
  }
  else
  {
    if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
      sub_100000AE0((int)"Couldn't read %d bytes of data (read %d).\n", (unsigned int)v5, v6, qword_1000AD1A8);
    *a4 = 10;
    return 1;
  }
  return result;
}
// 100050FA1: variable 'v7' is possibly undefined
// 1000AD1A8: using guessed type __int64 qword_1000AD1A8;
