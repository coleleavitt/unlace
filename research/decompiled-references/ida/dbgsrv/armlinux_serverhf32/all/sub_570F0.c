/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_570F0
// Address: 0x000570F0

//----- (000570F0) --------------------------------------------------------
int __fastcall sub_570F0(int (__fastcall ***a1)(_DWORD, int))
{
  int v2; // r0
  int v3; // r4
  int (__fastcall *v4)(_DWORD, int); // r5
  int v5; // r0
  int v6; // r5

  (*(void (__fastcall **)(int))(*(_DWORD *)dword_D3AF4 + 8))(dword_D3AF4);
  v2 = dword_D3AF4;
  v3 = *(_DWORD *)(dword_D3AF4 + 16);
  if ( v3 == dword_D3AF4 + 8 )
  {
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = **a1;
      v5 = sub_59810(*(_DWORD *)(v3 + 16));
      v6 = v4(a1, v5);
      if ( v6 )
        break;
      v3 = sub_81290(v3);
      v2 = dword_D3AF4;
      if ( v3 == dword_D3AF4 + 8 )
        goto LABEL_6;
    }
    v2 = dword_D3AF4;
  }
LABEL_6:
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v6;
}
// D3AF4: using guessed type int dword_D3AF4;
