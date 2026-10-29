/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423DD8
// Address: 0x0000000000423DD8

//----- (0000000000423DD8) ----------------------------------------------------
__int64 __fastcall sub_423DD8(unsigned __int64 *a1, __int64 *a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // x4
  unsigned int v5; // w5
  __int64 v6; // x6
  bool v7; // zf
  unsigned int v8; // w3

  v4 = *a2;
  v5 = 0;
  if ( (unsigned __int64)*a2 <= 0xFFFFFFFFFFFFFFFBLL )
  {
    v6 = v4 + 4;
    v5 = 0;
    if ( (unsigned __int64)(v4 + 4) <= *(_QWORD *)(a3 + 8) )
    {
      if ( a1 )
      {
        v7 = a4 == 0;
        LODWORD(a3) = *(_DWORD *)(*(_QWORD *)a3 + v4);
        v8 = bswap32(a3);
        if ( v7 )
          a3 = (unsigned int)a3;
        else
          a3 = v8;
        *a1 = a3;
        v6 = *a2 + 4;
      }
      v5 = 1;
      *a2 = v6;
    }
  }
  return v5;
}
