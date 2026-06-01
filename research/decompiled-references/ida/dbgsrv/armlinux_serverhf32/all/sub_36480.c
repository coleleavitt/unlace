/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36480
// Address: 0x00036480

//----- (00036480) --------------------------------------------------------
int __fastcall sub_36480(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r6
  unsigned int v4; // r6
  int v5; // r12
  int v6; // r4
  int v7; // r8
  unsigned int v8; // r7
  unsigned __int8 *v9; // r9
  int (__fastcall *v11)(unsigned __int8 *, unsigned __int8 *, int); // r5

  v2 = a1[3];
  if ( v2 )
    --v2;
  v3 = a1[9];
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = a1[14];
    v6 = v4 == 0;
    *(_DWORD *)(a2 + 8) = -1;
    if ( v2 < v4 )
      v6 = 1;
    if ( !v6 )
    {
      v7 = a1[2];
      v8 = 1 - v4 + v2;
      v9 = (unsigned __int8 *)a1[8];
      if ( v8 )
      {
        v11 = memicmp;
        if ( !v5 )
          v11 = (int (__fastcall *)(unsigned __int8 *, unsigned __int8 *, int))&memcmp;
        while ( v11((unsigned __int8 *)(v7 + v6), v9, v4) )
        {
          if ( v8 == ++v6 )
            return 0;
        }
        *(_DWORD *)(a2 + 8) = v6;
      }
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
