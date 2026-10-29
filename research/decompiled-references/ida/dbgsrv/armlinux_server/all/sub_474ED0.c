/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474ED0
// Address: 0x0000000000474ED0

//----- (0000000000474ED0) ----------------------------------------------------
__int64 __fastcall sub_474ED0(_DWORD *a1)
{
  unsigned int v1; // w1
  __int64 (*v4)(); // x2
  int v5; // w0
  unsigned int v6; // w1

  v1 = a1[217];
  if ( (v1 & 0x80000000) == 0 )
    return v1;
  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 624LL);
  if ( v4 == sub_4071D0 || (v5 = v4(), v5 < 0) )
  {
    a1[217] = 0;
    return 0;
  }
  else
  {
    if ( v5 > 16 )
      v6 = 16;
    else
      v6 = v5;
    a1[217] = v6;
    return v6;
  }
}
