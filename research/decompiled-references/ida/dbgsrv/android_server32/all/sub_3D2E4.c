/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D2E4
// Address: 0x0003D2E4

//----- (0003D2E4) --------------------------------------------------------
int __fastcall sub_3D2E4(_DWORD *a1)
{
  const char *v2; // r1
  unsigned __int16 v3; // r0
  int v4; // r1
  const char *v6; // r1
  int v7; // [sp+4h] [bp-8h] BYREF

  if ( a1[7] )
    v2 = (const char *)a1[6];
  else
    v2 = &byte_B3CBE;
  v3 = sub_3B468(a1, v2, &v7);
  if ( (unsigned int)(v7 - 1) >= 3 )
  {
    if ( a1[7] )
      v6 = (const char *)a1[6];
    else
      v6 = &byte_B3CBE;
    set_error_string(0, v6);
    return set_qerrno(55);
  }
  else
  {
    v4 = a1[51] + 16 * a1[52];
    *(_DWORD *)(v4 - 4) = v3;
    *(_DWORD *)(v4 - 8) = v7;
    *(_DWORD *)(v4 - 12) = a1[29];
    return 0;
  }
}
// B3CBE: using guessed type char byte_B3CBE;
