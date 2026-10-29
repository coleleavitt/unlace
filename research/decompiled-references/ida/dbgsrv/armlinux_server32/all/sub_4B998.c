/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B998
// Address: 0x0004B998

//----- (0004B998) --------------------------------------------------------
int __fastcall sub_4B998(int a1, int a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v5; // r3
  int v6; // r5
  int result; // r0
  bool v8; // zf
  int v9; // r6
  unsigned int v10; // r9
  int v11; // r10
  void *v12; // r1

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 0;
  if ( v2 < 0x400 )
    *(_DWORD *)a2 = sub_78018(a2, *(void **)a2, 0x400u, 1u);
  v5 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) - 1);
  for ( *(_DWORD *)(a1 + 4) = v5; ; *(_DWORD *)(a1 + 4) = v5 )
  {
    v6 = *v5;
    result = v6;
    if ( (v6 & 0x80) != 0 || (result = isalnum(v6)) == 0 )
    {
      v8 = v6 == 36;
      if ( v6 != 36 )
        v8 = v6 == 95;
      if ( !v8 )
        break;
    }
    v9 = *(_DWORD *)(a2 + 4);
    v10 = 2;
    v11 = 0;
    if ( v9 )
    {
      v11 = v9 - 1;
      v10 = v9 + 1;
    }
    else
    {
      v9 = 1;
    }
    v12 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) < v10 )
    {
      v12 = sub_78018(a2, v12, v10, 1u);
      *(_DWORD *)a2 = v12;
    }
    *(_DWORD *)(a2 + 4) = v10;
    *((_BYTE *)v12 + v11) = v6;
    *(_BYTE *)(*(_DWORD *)a2 + v9) = 0;
    v5 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 1);
  }
  return result;
}
