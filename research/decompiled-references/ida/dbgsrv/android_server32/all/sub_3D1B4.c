/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D1B4
// Address: 0x0003D1B4

//----- (0003D1B4) --------------------------------------------------------
int __fastcall sub_3D1B4(_DWORD *a1)
{
  int v2; // r0
  const char *v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r4
  const char *v10; // r1

  v2 = a1[16];
  if ( a1[7] )
    v3 = (const char *)a1[6];
  else
    v3 = &byte_B3CBE;
  v4 = sub_41100(v2, v3);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    v6 = *(_DWORD *)(a1[16] + 40);
    v7 = a1[26];
    v8 = v5;
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4 * v8) + 12);
      if ( v8 == *(_DWORD *)(v7 + 16) )
        break;
      if ( !v8 )
      {
        *(_DWORD *)(v7 + 12) = v5;
        return 0;
      }
    }
    return set_qerrno(1537);
  }
  else
  {
    if ( a1[7] )
      v10 = (const char *)a1[6];
    else
      v10 = &byte_B3CBE;
    set_error_string(0, v10);
    return set_qerrno(1536);
  }
}
// B3CBE: using guessed type char byte_B3CBE;
