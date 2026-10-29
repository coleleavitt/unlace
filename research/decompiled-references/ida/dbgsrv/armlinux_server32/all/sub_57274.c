/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57274
// Address: 0x00057274

//----- (00057274) --------------------------------------------------------
int __fastcall sub_57274(int (__fastcall ***a1)(_DWORD, int))
{
  int v2; // r0
  int v3; // r4
  int (__fastcall *v4)(_DWORD, int); // r5
  int v5; // r0
  int v6; // r5

  (*(void (__fastcall **)(int))(*(_DWORD *)dword_D4B14 + 8))(dword_D4B14);
  v2 = dword_D4B14;
  v3 = *(_DWORD *)(dword_D4B14 + 16);
  if ( v3 == dword_D4B14 + 8 )
  {
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = **a1;
      v5 = sub_59994(*(_DWORD *)(v3 + 16));
      v6 = v4(a1, v5);
      if ( v6 )
        break;
      v3 = sub_81440(v3);
      v2 = dword_D4B14;
      if ( v3 == dword_D4B14 + 8 )
        goto LABEL_6;
    }
    v2 = dword_D4B14;
  }
LABEL_6:
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v6;
}
// D4B14: using guessed type int dword_D4B14;
