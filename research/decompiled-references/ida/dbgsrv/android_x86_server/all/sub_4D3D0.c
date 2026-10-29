/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D3D0
// Address: 0x0004D3D0

//----- (0004D3D0) --------------------------------------------------------
int __cdecl sub_4D3D0(_DWORD *a1)
{
  char *v1; // ecx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  char *v7; // eax

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v2 = sub_53AE0(a1[15], v1);
  if ( v2 )
  {
    v3 = a1[25];
    v4 = *(_DWORD *)(v2 + 16);
    v5 = v4;
    while ( 1 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[15] + 36) + 4 * v5) + 12);
      if ( v5 == *(_DWORD *)(v3 + 16) )
        break;
      if ( !v5 )
      {
        *(_DWORD *)(v3 + 12) = v4;
        return 0;
      }
    }
    return set_qerrno(1537);
  }
  else
  {
    if ( a1[6] )
      v7 = (char *)a1[5];
    else
      v7 = byte_EF875;
    set_error_string(0, v7);
    return set_qerrno(1536);
  }
}
